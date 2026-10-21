// Browser glue for the Emscripten build, included with --pre-js.
//
// Scores, key settings and saved games go to /save, an IndexedDB-backed
// directory. It is loaded before main() runs and flushed after every write
// (save_file in src/kdata.c calls Module.syncSaves).

Module.preRun = Module.preRun || [];
Module.preRun.push(function () {
  FS.mkdir('/save');
  FS.mount(IDBFS, {}, '/save');
  addRunDependency('keen-saves');
  FS.syncfs(true, function (err) {
    if (err) console.warn('Loading saved games failed:', err);
    removeRunDependency('keen-saves');
  });
});

(function () {
  var busy = false, again = false;
  Module.syncSaves = function () {
    if (busy) {
      again = true;
      return;
    }
    busy = true;
    FS.syncfs(false, function (err) {
      busy = false;
      if (err) console.warn('Saving to IndexedDB failed:', err);
      if (again) {
        again = false;
        Module.syncSaves();
      }
    });
  };
})();
