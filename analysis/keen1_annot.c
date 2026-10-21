/* ===== 0x10000 entry  callers=[] strings=['of the Vorticons consists\n', 'of the Vorticons consists\n', '   of three unique and\n', '   of three unique and\n', '   of three unique and\n', '  * The special "cheat mode" password\n'] */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* WARNING: This function may have set the stack pointer */

void entry(void)

{
  char *pcVar1;
  code *pcVar2;
  char *pcVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  int iVar8;
  undefined2 *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  byte *pbVar16;
  char *pcVar17;
  undefined1 *puVar18;
  char *pcVar19;
  undefined2 unaff_ES;
  undefined2 uVar20;
  undefined4 uVar21;
  
  puVar9 = (undefined2 *)&g_0080;
                    /* WARNING: Read-only address (ram,0x00010235) is written */
  uRam00010235 = 0x2315;
  pcVar2 = (code *)swi(0x21);
  uVar21 = (*pcVar2)();
  uVar20 = g_002c;
  iVar8 = g_0002;
  iVar4 = (int)((ulong)uVar21 >> 0x10);
  *(undefined2 *)&g_0090 = (int)uVar21;
  *(undefined2 *)&g_008e = unaff_ES;
  *(undefined2 *)&g_008a = uVar20;
  *(int *)&g_00a6 = iVar8;
  *(undefined2 *)((int)puVar9 + -2) = 0x28;
  FUN_1000_0165();
  pcVar3 = (char *)*(undefined4 *)&g_0088;
  uVar20 = (undefined2)((ulong)pcVar3 >> 0x10);
  pcVar17 = (char *)pcVar3;
  uVar6 = 0x7fff;
  pcVar19 = pcVar17;
LAB_1000_0034:
  do {
    if (uVar6 != 0) {
      uVar6 = uVar6 - 1;
      pcVar1 = pcVar19;
      pcVar19 = pcVar19 + 1;
      if ((char)pcVar3 != *pcVar1) goto LAB_1000_0034;
    }
    if (uVar6 == 0) goto LAB_1000_0099;
    pcVar17 = pcVar17 + 1;
    if (*pcVar19 == (char)pcVar3) {
      *(int *)&g_0088 = -(uVar6 | 0x8000);
      *(uint *)&g_008c = (int)pcVar17 * 2 + 8U & 0xfff8;
      uVar15 = iVar8 - iVar4;
      uVar6 = *(uint *)((char *)0x537a);
      if (uVar6 < 0x200) {
        uVar6 = 0x200;
        ((char *)0x537a)[0] = '\0';
        ((char *)0x537a)[1] = '\x02';
      }
      if ((uVar6 < 0x58c4) &&
         (!CARRY2(uVar6 + 0xa73c,*(uint *)((char *)0x5372))))
      {
        bVar5 = 4;
        uVar6 = (uVar6 + 0xa73c + *(uint *)((char *)0x5372) >>
                4) + 1;
        if (uVar6 <= uVar15) {
          if (((*(int *)((char *)0x537a) == 0) ||
              (*(int *)((char *)0x5372) == 0)) &&
             (uVar6 = 0x1000, uVar15 < 0x1001)) {
            uVar6 = uVar15;
          }
          iVar8 = uVar6 + iVar4;
          *(int *)&g_009e = iVar8;
          *(int *)&g_00a2 = iVar8;
          iVar8 = iVar8 - *(int *)&g_008e;
          piVar10 = (int *)((int)puVar9 + -2);
          *(uint *)((int)puVar9 + -2) = uVar6;
          pcVar2 = (code *)swi(0x21);
          (*pcVar2)();
          puVar18 = (undefined1 *)(*piVar10 << (bVar5 & 0x1f));
          pcVar19 = (char *)0x546c;
          for (pcVar17 = (char *)0x52d0; pcVar17 != (char *)0x0;
              pcVar17 = pcVar17 + -1) {
            pcVar3 = pcVar19;
            pcVar19 = pcVar19 + 1;
            *pcVar3 = '\0';
          }
          pcVar2 = (code *)swi(0x1a);
          (*pcVar2)();
          *(undefined2 *)&g_0094 = extraout_DX_00;
          *(undefined2 *)&g_0096 = pcVar17;
          *(undefined2 *)(puVar18 + -2) = 0xeb;
          FUN_1000_01d5();
          *(undefined2 *)(puVar18 + -2) = uRam00000086;
          *(undefined2 *)(puVar18 + -4) = uRam00000084;
          *(undefined2 *)(puVar18 + -6) = uRam00000082;
          *(undefined2 *)(puVar18 + -8) = 0xff;
          uVar20 = FUN_1000_1312();
                    /* WARNING: Read-only address (ram,0x000101e7) is written */
          uRam000101e7 = 0x72;
                    /* WARNING: Read-only address (ram,0x000101d6) is written */
          uRam000101d6 = 0;
          *(undefined2 *)(puVar18 + -8) = uVar20;
          *(undefined2 *)(puVar18 + -10) = 0x10f;
          FUN_1000_c666();
          *(undefined2 *)(puVar18 + -10) = 0x11d;
          FUN_1000_01d5();
          pcVar2 = pcRam000051fe;
          puVar11 = puVar18 + -10;
          *(undefined2 *)(puVar18 + -10) = 0x126;
          (*pcVar2)();
          pcVar2 = pcRam00005200;
          puVar12 = puVar11 + -2;
          *(undefined2 *)(puVar11 + -2) = 0x12a;
          (*pcVar2)();
          pcVar2 = pcRam00005202;
          puVar13 = puVar12 + -2;
          *(undefined2 *)(puVar12 + -2) = 0x12e;
          (*pcVar2)();
          *(undefined2 *)(puVar13 + -2) = 0x136;
          FUN_1000_01a8();
          iVar4 = 0;
          pbVar16 = (byte *)0x0;
          iVar7 = 0x2d;
          do {
            iVar4 = CONCAT11((char)((uint)iVar4 >> 8) + CARRY1((byte)iVar4,*pbVar16),
                             (byte)iVar4 + *pbVar16);
            pbVar16 = pbVar16 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          if (iVar4 != 0xca5) {
            *(undefined2 *)(puVar13 + -2) = 0x153;
            FUN_1000_0218();
          }
          pcVar2 = (code *)swi(0x21);
          puVar18 = puVar13;
          (*pcVar2)();
          *(undefined2 *)(puVar18 + -2) = 0x22e;
          FUN_1000_0218();
          *(undefined2 *)(puVar18 + -2) = 3;
          puVar14 = puVar18 + -4;
          *(undefined2 *)(puVar18 + -4) = 0x235;
          iVar4 = FUN_1000_012e();
          pbVar16[iVar8] = pbVar16[iVar8] + (char)iVar4;
          *(int *)(pbVar16 + iVar8) = *(int *)(pbVar16 + iVar8) + iVar4;
          *(undefined1 **)(puVar14 + -2) = puVar13;
          uRam00006d08 = 0;
          uRam00006cfc = 0;
          uRam00006cee = 0;
          uRam00006cf6 = 0x5e7c;
          uRam00006cfe = 0x6a38;
          uRam000079b2 = 0x6a92;
          pcRam00005be4 = (char *)0x548e;
          do {
            uRam00005942 = iRam00004f62 - iRam0000546c;
          } while (uRam00005942 < 6);
          if (0xf < uRam00005942) {
            uRam00005942 = 0xf;
          }
          iRam0000546c = iRam00004f62;
          uRam0000546e = uRam00004f64;
          return;
        }
      }
LAB_1000_0099:
      FUN_1000_0220();
      return;
    }
  } while( true );
}


/* ===== 0x1010f FUN_1000_010f  callers=['FUN_1000_c666'] strings=[] */

void FUN_1000_010f(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int in_BX;
  byte *pbVar4;
  
  FUN_1000_01d5();
  (*pcRam000051fe)();
  (*pcRam00005200)();
  (*pcRam00005202)();
  FUN_1000_01a8();
  iVar2 = 0;
  pbVar4 = (byte *)0x0;
  iVar3 = 0x2d;
  do {
    iVar2 = CONCAT11((char)((uint)iVar2 >> 8) + CARRY1((byte)iVar2,*pbVar4),(byte)iVar2 + *pbVar4);
    pbVar4 = pbVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (iVar2 != 0xca5) {
    FUN_1000_0218();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_0218();
  iVar2 = FUN_1000_012e();
  pbVar4[in_BX] = pbVar4[in_BX] + (char)iVar2;
  *(int *)(pbVar4 + in_BX) = *(int *)(pbVar4 + in_BX) + iVar2;
  uRam00006d08 = 0;
  uRam00006cfc = 0;
  uRam00006cee = 0;
  uRam00006cf6 = 0x5e7c;
  uRam00006cfe = 0x6a38;
  uRam000079b2 = 0x6a92;
  pcRam00005be4 = (char *)0x548e;
  do {
    uRam00005942 = iRam00004f62 - iRam0000546c;
  } while (uRam00005942 < 6);
  if (0xf < uRam00005942) {
    uRam00005942 = 0xf;
  }
  iRam0000546c = iRam00004f62;
  uRam0000546e = uRam00004f64;
  return;
}


/* ===== 0x1012e FUN_1000_012e  callers=['FUN_1000_0220'] strings=[] */

void FUN_1000_012e(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int in_BX;
  byte *pbVar4;
  
  FUN_1000_01a8();
  iVar2 = 0;
  pbVar4 = (byte *)0x0;
  iVar3 = 0x2d;
  do {
    iVar2 = CONCAT11((char)((uint)iVar2 >> 8) + CARRY1((byte)iVar2,*pbVar4),(byte)iVar2 + *pbVar4);
    pbVar4 = pbVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (iVar2 != 0xca5) {
    FUN_1000_0218();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  FUN_1000_0218();
  iVar2 = FUN_1000_012e();
  pbVar4[in_BX] = pbVar4[in_BX] + (char)iVar2;
  *(int *)(pbVar4 + in_BX) = *(int *)(pbVar4 + in_BX) + iVar2;
  uRam00006d08 = 0;
  uRam00006cfc = 0;
  uRam00006cee = 0;
  uRam00006cf6 = 0x5e7c;
  uRam00006cfe = 0x6a38;
  uRam000079b2 = 0x6a92;
  pcRam00005be4 = (char *)0x548e;
  do {
    uRam00005942 = iRam00004f62 - iRam0000546c;
  } while (uRam00005942 < 6);
  if (0xf < uRam00005942) {
    uRam00005942 = 0xf;
  }
  iRam0000546c = iRam00004f62;
  uRam0000546e = uRam00004f64;
  return;
}


/* ===== 0x10165 FUN_1000_0165  callers=['entry'] strings=[] */

void __cdecl16near FUN_1000_0165(void)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  g_0072._0_2_ = in_BX;
  g_0072._2_2_ = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  g_0076 = in_BX;
  g_0078 = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  g_007a = in_BX;
  g_007c = unaff_ES;
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  g_007e = in_BX;
  g_0080 = unaff_ES;
  (*pcVar1)();
  return;
}


/* ===== 0x101a8 FUN_1000_01a8  callers=['FUN_1000_012e'] strings=[] */

void __cdecl16near FUN_1000_01a8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


/* ===== 0x101d5 FUN_1000_01d5  callers=['entry', 'FUN_1000_010f'] strings=[] */

void __cdecl16near FUN_1000_01d5(void)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  char *unaff_SI;
  char *unaff_DI;
  
  while( true ) {
    bVar2 = 0xff;
    pcVar3 = unaff_DI;
    for (pcVar4 = unaff_SI; pcVar4 != unaff_DI; pcVar4 = pcVar4 + 6) {
      if ((*pcVar4 != -1) && ((byte)pcVar4[1] <= bVar2)) {
        bVar2 = pcVar4[1];
        pcVar3 = pcVar4;
      }
    }
    if (pcVar3 == unaff_DI) break;
    cVar1 = *pcVar3;
    *pcVar3 = -1;
    if (cVar1 == '\0') {
      (**(code **)(pcVar3 + 2))();
    }
    else {
      (**(code **)(pcVar3 + 2))(0x1000);
    }
  }
  return;
}


/* ===== 0x10218 FUN_1000_0218  callers=['FUN_1000_012e', 'FUN_1000_0220'] strings=[] */

void __cdecl16near FUN_1000_0218(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


/* ===== 0x10220 FUN_1000_0220  callers=['entry'] strings=[] */

void FUN_1000_0220(void)

{
  int iVar1;
  int in_BX;
  int unaff_SI;
  
  FUN_1000_0218();
  iVar1 = FUN_1000_012e(3);
  *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) + (char)iVar1;
  *(int *)(in_BX + unaff_SI) = *(int *)(in_BX + unaff_SI) + iVar1;
  uRam00006d08 = 0;
  uRam00006cfc = 0;
  uRam00006cee = 0;
  uRam00006cf6 = 0x5e7c;
  uRam00006cfe = 0x6a38;
  uRam000079b2 = 0x6a92;
  pcRam00005be4 = (char *)0x548e;
  do {
    uRam00005942 = iRam00004f62 - iRam0000546c;
  } while (uRam00005942 < 6);
  if (0xf < uRam00005942) {
    uRam00005942 = 0xf;
  }
  iRam0000546c = iRam00004f62;
  uRam0000546e = uRam00004f64;
  return;
}


/* ===== 0x10239 FUN_1000_0239  callers=['FUN_1000_0983', 'FUN_1000_365b', 'FUN_1000_4c32', 'FUN_1000_7dfb', 'FUN_1000_839a', 'FUN_1000_8b1e', 'FUN_1000_8ce4', 'FUN_1000_91f5', 'FUN_1000_993a', 'FUN_1000_99db', 'FUN_1000_9a81', 'FUN_1000_9c59'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', '  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n'] */

void __cdecl16near FUN_1000_0239(void)

{
  g_6d08 = 0;
  g_6cfc = 0;
  g_6cee = 0;
  g_6cf6 = 0x5e7c;
  g_6cfe = 0x6a38;
  g_79b2 = 0x6a92;
  g_5be4 = (char *)0x548e;
  do {
    g_5942 =
         g_4f62 -
         g_546c;
  } while (g_5942 < 6);
  if (0xf < g_5942) {
    g_5942 = 0xf;
  }
  g_546c = g_4f62;
  g_546e = g_4f64;
  return;
}


/* ===== 0x10289 FUN_1000_0289  callers=['FUN_1000_0983', 'FUN_1000_0dec', 'FUN_1000_0e76', 'FUN_1000_365b', 'FUN_1000_4c32', 'FUN_1000_7cb2', 'FUN_1000_7dfb', 'FUN_1000_839a', 'FUN_1000_8b1e', 'FUN_1000_8ce4', 'FUN_1000_91f5', 'FUN_1000_98b8'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_0289(void)

{
  int *piVar1;
  
  FUN_1000_b8d8();
  piVar1 = (int *)((char *)0x548e);
  if (g_5480 == 0) {
    for (; piVar1 < g_5be4; piVar1 = piVar1 + 1) {
      ((int*)&g_5be6)[*piVar1] = 0xffff;
    }
  }
  else {
    for (; piVar1 < g_5be4; piVar1 = piVar1 + 1) {
      ((int*)&g_5944)[*piVar1] = 0xffff;
    }
  }
  return;
}


/* ===== 0x102c5 FUN_1000_02c5  callers=['FUN_1000_365b', 'FUN_1000_4c32', 'FUN_1000_839a', 'FUN_1000_8b1e', 'FUN_1000_a4f3', 'FUN_1000_ac1c', 'FUN_1000_afa4'] strings=['  * The latest version of each game\n'] */

undefined2 __cdecl16near
FUN_1000_02c5(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar4 = FUN_1000_e1a3(param_1,param_2,0x100,0);
  iVar9 = g_6d02;
  uVar5 = FUN_1000_e1a3(g_6d00,g_6d02,0x100,0,uVar4);
  uVar8 = iVar9 - (uVar5 & 0xfff0);
  uVar4 = FUN_1000_e1a3(param_3,param_4,0x100,0);
  uVar12 = 0;
  uVar11 = 0x100;
  iVar9 = g_6d06;
  uVar5 = FUN_1000_e1a3(g_6d04,g_6d06,0x100,0,uVar4);
  iVar9 = iVar9 - (uVar5 & 0xfff0);
  if (((((int)uVar8 < -0x20) || (iVar9 < -0x20)) || (0x150 < (int)uVar8)) || (199 < iVar9)) {
    uVar4 = 0;
  }
  else {
    FUN_1000_e251(0x2315);
    uVar10 = g_7d46;
    FUN_1000_e33b();
    FUN_1000_e39b(uVar10,uVar11,uVar12,uVar4);
    iVar6 = (int)(uVar8 + 0x20) / 8;
    iVar7 = iVar6 + -4;
    local_4 = iVar7 / 2;
    if (local_4 < 0) {
      local_4 = 0;
    }
    else if (0x15 < local_4) {
      return 0;
    }
    local_6 = (iVar7 + g_7cfc + -1) / 2;
    if (local_6 < 0x16) {
      if (local_6 < 0) {
        return 0;
      }
    }
    else {
      local_6 = 0x15;
    }
    local_8 = iVar9 / 0x10;
    if (local_8 < 0) {
      local_8 = 0;
    }
    else if (0xe < local_8) {
      return 0;
    }
    local_a = (iVar9 + g_7cfe + -1) / 0x10;
    if (local_a < 0xe) {
      if (local_a < 0) {
        return 0;
      }
    }
    else {
      local_a = 0xd;
    }
    for (; piVar3 = g_6cf6, iVar7 = local_4, local_8 <= local_a; local_8 = local_8 + 1) {
      for (; piVar3 = g_79b2, iVar7 <= local_6; iVar7 = iVar7 + 1) {
        iVar1 = *(int *)((int)g_6a76 +
                        (iVar7 + g_5484 +
                        (local_8 + g_5940) * g_6a36) * 2);
        iVar2 = *(int *)(iVar1 * 2 + 0x56e);
        if (iVar2 < 0) {
          *g_79b2 = iVar7 * 2 + 4;
          piVar3[1] = local_8 * 0x10 + 0x20;
          piVar3[2] = iVar1;
          if (iVar2 == -2) {
            piVar3[2] = piVar3[2] | 0x8000;
            *g_5be4 = local_8 * 0x15 + iVar7;
            g_5be4 = g_5be4 + 1;
          }
          g_6d08 = g_6d08 + 1;
          g_79b2 = g_79b2 + 3;
        }
        else {
          *g_5be4 = local_8 * 0x15 + iVar7;
          g_5be4 = g_5be4 + 1;
        }
      }
    }
    *g_6cf6 = iVar6;
    piVar3[1] = iVar9 + 0x20;
    piVar3[2] = param_5 * 4 + (uVar8 & 7) / 2;
    g_6cee = g_6cee + 1;
    g_6cf6 = g_6cf6 + 3;
    uVar4 = 1;
  }
  return uVar4;
}


/* ===== 0x10501 FUN_1000_0501  callers=['FUN_1000_27a8', 'FUN_1000_4178'] strings=[] */

undefined2 __cdecl16near
FUN_1000_0501(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             int param_5)

{
  int *piVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  uVar2 = FUN_1000_e1a3(param_1,param_2,0x100,0);
  iVar5 = g_6d02;
  uVar3 = FUN_1000_e1a3(g_6d00,g_6d02,0x100,0,uVar2);
  iVar5 = iVar5 - (uVar3 & 0xfff0);
  uVar2 = FUN_1000_e1a3(param_3,param_4,0x100,0);
  iVar6 = g_6d06;
  uVar3 = FUN_1000_e1a3(g_6d04,g_6d06,0x100,0,uVar2);
  iVar6 = iVar6 - (uVar3 & 0xfff0);
  if ((iVar5 < -0x20) || (iVar6 < -0x20)) {
    uVar2 = 0;
  }
  else {
    iVar5 = (iVar5 + 0x20) / 8;
    iVar4 = iVar5 + -4;
    local_4 = iVar4 / 2;
    if (local_4 < 0) {
      local_4 = 0;
    }
    else if (0x15 < local_4) {
      return 0;
    }
    local_6 = (iVar4 + g_7cfc + -1) / 2;
    if (local_6 < 0x15) {
      if (local_6 < 0) {
        return 0;
      }
    }
    else {
      local_6 = 0x14;
    }
    local_8 = iVar6 / 0x10;
    if (local_8 < 0) {
      local_8 = 0;
    }
    else if (0xd < local_8) {
      return 0;
    }
    local_a = (iVar6 + g_7cfe + -1) / 0x10;
    if (local_a < 0xe) {
      if (local_a < 0) {
        return 0;
      }
    }
    else {
      local_a = 0xd;
    }
    for (; piVar1 = g_79b2, iVar4 = local_4, local_8 <= local_a; local_8 = local_8 + 1) {
      for (; iVar4 <= local_6; iVar4 = iVar4 + 1) {
        *g_5be4 = local_8 * 0x15 + iVar4;
        g_5be4 = g_5be4 + 1;
      }
    }
    *g_79b2 = iVar5;
    piVar1[1] = iVar6 + 0x20;
    piVar1[2] = param_5;
    g_6d08 = g_6d08 + 1;
    g_79b2 = g_79b2 + 3;
    uVar2 = 1;
  }
  return uVar2;
}


/* ===== 0x1066b FUN_1000_066b  callers=['FUN_1000_1656', 'FUN_1000_7dfb', 'FUN_1000_839a', 'FUN_1000_8b1e', 'FUN_1000_8ce4', 'FUN_1000_91f5', 'FUN_1000_98ea'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_066b(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  undefined1 local_c [4];
  int local_8;
  int local_6;
  undefined2 local_4;
  
  g_7cfa = param_1;
  if (param_1 < 10) {
    FUN_1000_d43c(param_1,local_c,10);
    uVar1 = 0x1d60/*"LEVEL0"*/;
  }
  else {
    FUN_1000_d43c(param_1,local_c,10);
    uVar1 = 0x1d67/*"LEVEL"*/;
  }
  FUN_1000_d834(&local_18,uVar1);
  FUN_1000_d7cc(&local_18,local_c);
  FUN_1000_d7cc(&local_18,0x1d6d);
  FUN_1000_d7cc(&local_18,g_24ca);
  uVar1 = FUN_1000_d550(&local_18,0x8000);
  local_8 = FUN_1000_d20e(uVar1);
  FUN_1000_c63a(uVar1);
  local_6 = (int)g_6cf8 + (-1 - local_8);
  local_4 = g_6cfa;
  FUN_1000_5eb2(&local_18,local_6,g_6cfa);
  FUN_1000_7a78(local_6,local_4,g_6cf8,g_6cfa);
  iVar5 = 0;
  while( true ) {
    uVar1 = (undefined2)((ulong)_g_6cf8 >> 0x10);
    piVar4 = (int *)_g_6cf8;
    if (piVar4[2] <= iVar5) break;
    *(int *)((undefined4 *)&g_6a76 + iVar5) = (int)piVar4 + piVar4[7] * iVar5 + 0x20;
    *(undefined2 *)((int)(undefined4 *)&g_6a76 + iVar5 * 4 + 2) = uVar1;
    iVar5 = iVar5 + 1;
  }
  g_6a36 = *_g_6cf8;
  g_6a86 = piVar4[1];
  g_6a34 = g_6a36 * 2;
  g_5482 = g_6a34 + -0x2a;
  gb_5478 = '\0';
  gb_5479 = ' ';
  gb_547a = '\0';
  gb_547b = '\0';
  gb_547c = '\0';
  gb_547d = ' ';
  gb_547e = '\0';
  gb_547f = '\0';
  iVar5 = *_g_6cf8 + -0x16 >> 0xf;
  g_79b6 = FUN_1000_e251();
  iVar3 = *_g_6cf8 + -2 >> 0xf;
  g_79b8 = iVar5;
  g_5470 = FUN_1000_e251();
  iVar5 = ((int *)_g_6cf8)[1] >> 0xf;
  g_5472 = iVar3;
  g_5474 = FUN_1000_e251();
  iVar3 = ((int *)_g_6cf8)[1] + -0xf >> 0xf;
  local_18 = 0x7ec;
  g_5476 = iVar5;
  uVar2 = FUN_1000_e251();
  g_79ba = uVar2 + 0x800;
  g_79bc = iVar3 + (uint)(0xf7ff < uVar2);
  iVar5 = *_g_6cf8 + -3 >> 0xf;
  uStack_16 = 0x809;
  g_5bda = FUN_1000_e251();
  iVar3 = ((int *)_g_6cf8)[1] >> 0xf;
  uStack_14 = 0x81e;
  g_5bdc = iVar5;
  g_5bde = FUN_1000_e251();
  g_5be0 = iVar3;
  return;
}


/* ===== 0x1082b FUN_1000_082b  callers=['FUN_1000_0c51'] strings=[] */

void __cdecl16near FUN_1000_082b(void)

{
  undefined2 uVar1;
  
  FUN_1000_5e1f();
  if (g_7cfa == 0x5a) {
    FUN_1000_62b8(0xc,1);
    FUN_1000_64c9(0x1d6f/*"Quit (Y/N)?"*/);
    uVar1 = FUN_1000_6462();
    g_a1d8 = FUN_1000_cdc5(uVar1);
    if (g_a1d8 == 'Y') {
      FUN_1000_129d(0x1d7b);
    }
  }
  else {
    FUN_1000_62b8(0x14,2);
    FUN_1000_64c9(0x1d7c/*"Quit to (D)os or\n"*/);
    FUN_1000_64c9(0x1d8e/*"(T)itle:"*/);
    uVar1 = FUN_1000_6462();
    g_a1d8 = FUN_1000_cdc5(uVar1);
    if (g_a1d8 == 'D') {
      FUN_1000_129d(0x1d97);
    }
    if (g_a1d8 == 'T') {
      g_6cec = 1;
    }
  }
  return;
}


/* ===== 0x108b2 FUN_1000_08b2  callers=['FUN_1000_0c51'] strings=[] */

undefined2 __cdecl16near FUN_1000_08b2(void)

{
  byte bVar1;
  undefined2 uVar2;
  
  bVar1 = FUN_1000_d316(0x201);
  if ((bVar1 & 0x10) == 0) {
    uVar2 = 1;
  }
  else if ((bVar1 & 0x20) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


/* ===== 0x108dd FUN_1000_08dd  callers=[] strings=[] */

/* WARNING: Removing unreachable block (ram,0x00010976) */

void __cdecl16near
FUN_1000_08dd(undefined2 param_1,undefined1 *param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_SS;
  long lVar4;
  undefined2 local_16 [8];
  undefined4 local_6;
  
  local_6 = (undefined1 *)CONCAT22(param_3,param_2);
  iVar3 = 1;
  while( true ) {
    lVar4 = FUN_1000_e1a3(param_4,param_5,0x10,0);
    if (lVar4 < iVar3) break;
    for (iVar2 = 0; iVar2 < 0x10; iVar2 = iVar2 + 1) {
      *(undefined1 *)((int)local_16 + iVar2) = *local_6;
      local_16[0] = 0x910;
      FUN_1000_e2b3();
    }
    local_16[0] = 0;
    lVar4 = FUN_1000_e1a3(param_4,param_5,0x10);
    if (lVar4 == iVar3) {
      uVar1 = FUN_1000_e1b2(param_4,param_5,0x10,0);
    }
    else {
      uVar1 = 0x10;
    }
    FUN_1000_cdf1(param_1,local_16,uVar1);
    iVar3 = iVar3 + 1;
  }
  return;
}


/* ===== 0x10983 FUN_1000_0983  callers=['FUN_1000_839a', 'FUN_1000_98ea'] strings=[] */

void __cdecl16near FUN_1000_0983(undefined2 param_1)

{
  int iVar1;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined1 extraout_AH_02;
  undefined1 extraout_AH_03;
  undefined1 extraout_AH_04;
  undefined1 extraout_AH_05;
  undefined1 extraout_AH_06;
  int iVar2;
  int iVar3;
  int local_8;
  
  iVar1 = g_6cfa;
  iVar2 = g_6cf8 + -0x8000;
  FUN_1000_5eb2(param_1,iVar2,g_6cfa);
  FUN_1000_c5a2(iVar2,iVar1,g_6cf8,g_6cfa);
  iVar3 = 0;
  iVar2 = 4;
  g_6d04 = 0;
  g_6d06 = 0;
  g_6d00 = 0;
  g_6d02 = 0;
  FUN_1000_0239();
  FUN_1000_0289();
  FUN_1000_d6c9(0x3ce,5);
  for (local_8 = 0; local_8 < 200; local_8 = local_8 + 1) {
    FUN_1000_d6d5(0x3c4,2);
    FUN_1000_d6d5(0x3c5,CONCAT11(extraout_AH,1));
    FUN_1000_d503(iVar1,iVar3,g_34f0,iVar2,0x28);
    FUN_1000_d6d5(0x3c4,CONCAT11(extraout_AH_00,2));
    FUN_1000_d6d5(0x3c5,CONCAT11(extraout_AH_01,2));
    FUN_1000_d503(iVar1 + 0x200,iVar3,g_34f0,iVar2,0x28);
    FUN_1000_d6d5(0x3c4,CONCAT11(extraout_AH_02,2));
    FUN_1000_d6d5(0x3c5,CONCAT11(extraout_AH_03,4));
    FUN_1000_d503(iVar1 + 0x400,iVar3,g_34f0,iVar2,0x28);
    FUN_1000_d6d5(0x3c4,CONCAT11(extraout_AH_04,2));
    FUN_1000_d6d5(0x3c5,CONCAT11(extraout_AH_05,8));
    FUN_1000_d503(iVar1 + 0x600,iVar3,g_34f0,iVar2,0x28);
    iVar3 = iVar3 + 0x28;
    iVar2 = iVar2 + 0x30;
  }
  FUN_1000_d6d5(0x3c4,2);
  FUN_1000_d6d5(0x3c5,CONCAT11(extraout_AH_06,0xf));
  FUN_1000_b8be();
  return;
}


/* ===== 0x10af2 FUN_1000_0af2  callers=['FUN_1000_0c51'] strings=[] */

void __cdecl16near FUN_1000_0af2(void)

{
  undefined1 extraout_AH;
  byte extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined1 extraout_AH_02;
  undefined1 extraout_AH_03;
  int iVar1;
  
  FUN_1000_d6c9(0x3ce,5);
  FUN_1000_d6d5(0x3ce,CONCAT11(extraout_AH,4));
  FUN_1000_d6d5(0x3cf,(uint)extraout_AH_00 << 8);
  for (iVar1 = 0; iVar1 < 200; iVar1 = iVar1 + 1) {
    FUN_1000_d503(g_34f0,iVar1 * 0x30 + 4,g_6cfa,iVar1 * 0x28,0x28);
  }
  FUN_1000_d6d5(0x3ce,4);
  FUN_1000_d6d5(0x3cf,CONCAT11(extraout_AH_01,1));
  for (iVar1 = 0; iVar1 < 200; iVar1 = iVar1 + 1) {
    FUN_1000_d503(g_34f0,iVar1 * 0x30 + 4,g_6cfa,iVar1 * 0x28 + 0x2000,0x28);
  }
  FUN_1000_d6d5(0x3ce,4);
  FUN_1000_d6d5(0x3cf,CONCAT11(extraout_AH_02,2));
  for (iVar1 = 0; iVar1 < 200; iVar1 = iVar1 + 1) {
    FUN_1000_d503(g_34f0,iVar1 * 0x30 + 4,g_6cfa,iVar1 * 0x28 + 0x4000,0x28);
  }
  FUN_1000_d6d5(0x3ce,4);
  FUN_1000_d6d5(0x3cf,CONCAT11(extraout_AH_03,3));
  for (iVar1 = 0; iVar1 < 200; iVar1 = iVar1 + 1) {
    FUN_1000_d503(g_34f0,iVar1 * 0x30 + 4,g_6cfa,iVar1 * 0x28 + 0x6000,0x28);
  }
  FUN_1000_5f5d(0x1d98/*"KEENSCRN.PIC"*/,g_6cf8,g_6cfa,0x8000,0);
  return;
}


/* ===== 0x10c51 FUN_1000_0c51  callers=['FUN_1000_4c32', 'FUN_1000_7dfb', 'FUN_1000_8b1e', 'FUN_1000_8ce4', 'FUN_1000_91f5', 'FUN_1000_949d', 'FUN_1000_993a', 'FUN_1000_9c8e', 'FUN_1000_a4f3', 'FUN_1000_afa4'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:'] */

undefined2 __cdecl16near FUN_1000_0c51(void)

{
  bool bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  
  iVar4 = FUN_1000_cf8d(1);
  iVar4 = iVar4 / 0x100;
  bVar1 = false;
  if (((g_593e != 0) && (g_7d34 != 2)) && (iVar5 = FUN_1000_08b2(), iVar5 != 0)) {
    do {
      iVar4 = FUN_1000_08b2();
    } while (iVar4 != 0);
    iVar4 = 0x3e;
  }
  uVar3 = g_4f64;
  uVar2 = g_4f62;
  if (iVar4 != 0) {
    if (iVar4 == 0x3d) {
      FUN_1000_bfde();
      FUN_1000_5e1f();
      FUN_1000_548b();
      bVar1 = true;
    }
    else if (iVar4 < 0x3e) {
      if (iVar4 == 1) {
        FUN_1000_bfde();
        FUN_1000_082b();
        bVar1 = true;
      }
      else if (iVar4 == 0x3b) {
        FUN_1000_bfde();
        FUN_1000_5e1f();
        FUN_1000_9fe9();
        bVar1 = true;
      }
      else {
        if (iVar4 != 0x3c) {
          return 0;
        }
        FUN_1000_bfde();
        FUN_1000_5e1f();
        FUN_1000_62b8(0xd,1);
        FUN_1000_64c9(0x1da5/*"Sound (Y/N)?"*/);
        uVar6 = FUN_1000_6462();
        g_a1d8 = FUN_1000_cdc5(uVar6);
        if (g_a1d8 == 'N') {
          gb_4f70 = '\0';
          gb_4f71 = '\0';
        }
        else if (g_a1d8 == 'Y') {
          gb_4f70 = '\x01';
          gb_4f71 = '\0';
        }
        bVar1 = true;
      }
    }
    else if (iVar4 == 0x3e) {
      FUN_1000_bfde();
      FUN_1000_5e1f();
      FUN_1000_5074(1);
      bVar1 = true;
    }
    else if (iVar4 == 0x3f) {
      FUN_1000_bfde();
      FUN_1000_9ce9();
      bVar1 = true;
    }
    else {
      if (iVar4 != 0x42) {
        return 0;
      }
      FUN_1000_0af2();
      FUN_1000_bf8d(9);
      FUN_1000_c019();
      FUN_1000_5e1f();
    }
    if (bVar1) {
      g_4f62 = uVar2;
      g_4f64 = uVar3;
      FUN_1000_5e1f();
      FUN_1000_bffd();
      FUN_1000_b8be();
      return 1;
    }
  }
  g_4f64 = uVar3;
  g_4f62 = uVar2;
  return 0;
}


/* ===== 0x10d8e FUN_1000_0d8e  callers=['FUN_1000_4373'] strings=[] */

void __cdecl16near FUN_1000_0d8e(uint param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = CARRY2(g_a5f6,param_1);
  g_a5f6 = g_a5f6 + param_1;
  g_a5f8 = g_a5f8 + ((int)param_1 >> 0xf) + (uint)bVar1;
  uVar2 = CONCAT22(g_6cf4,g_6cf2);
  if ((-1 < (int)((g_a5f8 - g_6cf4) - (uint)(g_a5f6 < g_6cf2))) &&
     ((g_a5f8 - g_6cf4 != (uint)(g_a5f6 < g_6cf2) ||
      (uVar2 = CONCAT22(g_6cf4,g_6cf2), 19999 < g_a5f6 - g_6cf2)))) {
    FUN_1000_bf8d(0x1c);
    FUN_1000_e1a3(g_a5f6,g_a5f8,20000,0);
    uVar2 = FUN_1000_e663();
    g_a5f2 = g_a5f2 + 1;
  }
  g_6cf4 = (int)((ulong)uVar2 >> 0x10);
  g_6cf2 = (uint)uVar2;
  return;
}


/* ===== 0x10dec FUN_1000_0dec  callers=['FUN_1000_122c'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_0dec(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar2 = g_4f64;
  uVar1 = g_4f62;
  FUN_1000_5e1f();
  FUN_1000_62b8(0x1a,4);
  FUN_1000_64c9(0x1db2/*"You are now cheating!\n"*/);
  FUN_1000_64c9(0x1dc9/*"You just got a pogo stick,\n"*/);
  FUN_1000_64c9(0x1de5/*"all the key cards, and\n"*/);
  FUN_1000_64c9(0x1dfd/*"lots of ray gun charges."*/);
  g_a5c6 = 1;
  g_a5f4 = 100;
  for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
    ((int*)&g_a5ca)[iVar3] = 1;
  }
  FUN_1000_6462();
  FUN_1000_b8be();
  FUN_1000_0289();
  FUN_1000_0289();
  g_4f62 = uVar1;
  g_4f64 = uVar2;
  FUN_1000_5e1f();
  return;
}


/* ===== 0x10e76 FUN_1000_0e76  callers=['FUN_1000_122c', 'FUN_1000_7dfb'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_0e76(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  
  uVar2 = g_4f64;
  uVar1 = g_4f62;
  FUN_1000_5e1f();
  FUN_1000_62b8(0x1c,0xd);
  iVar4 = g_7cee;
  iVar3 = g_7c78;
  FUN_1000_a743(0x1e16/*"    SCORE     EXTRA KEEN AT \n"*/);
  g_7c78 = iVar3 + 0xc;
  FUN_1000_a743(0x1e34);
  FUN_1000_a743(0x1e37/*"    KEENS       SHIP PARTS  \n"*/);
  g_7c78 = iVar3 + 0xe;
  FUN_1000_a743(0x1e55);
  g_7c78 = iVar3 + 0xe;
  FUN_1000_a743(0x1e58);
  g_7c78 = iVar3 + 0xe;
  FUN_1000_a743(0x1e5b);
  FUN_1000_a743(0x1e5e/*" RAYGUN   POGO    KEYCARDS  \n"*/);
  g_7c78 = iVar3 + 8;
  FUN_1000_a743(0x1e7c);
  g_7c78 = g_7c78 + 6;
  FUN_1000_a743(0x1e7e);
  g_7c78 = iVar3 + 8;
  FUN_1000_a743(0x1e81);
  g_7c78 = g_7c78 + 6;
  FUN_1000_a743(0x1e83);
  g_7c78 = iVar3 + 8;
  FUN_1000_a743(0x1e86);
  g_7c78 = g_7c78 + 6;
  FUN_1000_a743(0x1e88);
  FUN_1000_a743(0x1e8b/*" CHARGE  "*/);
  g_7c78 = g_7c78 + 6;
  FUN_1000_a743(0x1e95);
  g_7c78 = iVar3 + 8;
  FUN_1000_a743(0x1e98);
  g_7c78 = g_7c78 + 6;
  FUN_1000_a743(0x1e9a);
  FUN_1000_a743(0x1e9d/*"     PLEASE PRESS A KEY     "*/);
  FUN_1000_d47d(g_a5f6,g_a5f8,0x7c86,10);
  iVar5 = FUN_1000_d858(0x7c86);
  g_7c78 = (iVar3 + 10) - iVar5;
  g_7cee = iVar4 + 1;
  FUN_1000_64c9(0x7c86);
  FUN_1000_d47d(g_6cf2 + 20000,g_6cf4 + (uint)(0xb1df < g_6cf2),0x7c86,10);
  iVar5 = FUN_1000_d858(0x7c86);
  g_7c78 = (iVar3 + 0x1a) - iVar5;
  FUN_1000_64c9(0x7c86);
  for (iVar5 = 0; (iVar5 < g_a5f2 && (iVar5 < 6)); iVar5 = iVar5 + 1) {
    FUN_1000_bc97(iVar3 + iVar5 * 2 + 1,(iVar4 + 3) * 8,0);
  }
  g_7c78 = iVar3 + 0x10;
  g_7cee = iVar4 + 3;
  if (g_a5c0 == 0) {
    uVar6 = 0x141;
  }
  else {
    uVar6 = 0x1c0;
  }
  FUN_1000_baa3(g_7c78,g_7cee * 8 + 4,uVar6);
  g_7c78 = g_7c78 + 3;
  if (g_a5c8 == 0) {
    uVar6 = 0x142;
  }
  else {
    uVar6 = 0x1c1;
  }
  FUN_1000_baa3(g_7c78,g_7cee * 8 + 4,uVar6);
  g_7c78 = g_7c78 + 3;
  if (g_a5c2 == 0) {
    uVar6 = 0x143;
  }
  else {
    uVar6 = 0x1c2;
  }
  FUN_1000_baa3(g_7c78,g_7cee * 8 + 4,uVar6);
  g_7c78 = g_7c78 + 3;
  if (g_a5c4 == 0) {
    uVar6 = 0x144;
  }
  else {
    uVar6 = 0x1c3;
  }
  FUN_1000_baa3(g_7c78,g_7cee * 8 + 4,uVar6);
  g_7c78 = iVar3 + 0x13;
  g_7cee = iVar4 + 7;
  if (g_a5ca != 0) {
    FUN_1000_baa3(g_7c78,g_7cee * 8 + 3,0x1a8);
  }
  if (g_a5cc != 0) {
    FUN_1000_baa3(g_7c78 + 4,g_7cee * 8 + 3,0x1a9);
  }
  if (g_a5ce != 0) {
    FUN_1000_baa3(g_7c78,g_7cee * 8 + 0x15,0x1aa);
  }
  if (g_a5d0 != 0) {
    FUN_1000_baa3(g_7c78 + 4,g_7cee * 8 + 0x15,0x1ab);
  }
  FUN_1000_baa3(iVar3 + 3,(iVar4 + 7) * 8 + 4,0x19e);
  g_7c78 = iVar3 + 3;
  g_7cee = iVar4 + 0xb;
  FUN_1000_6521(g_a5f4);
  if (g_a5c6 != 0) {
    FUN_1000_baa3(iVar3 + 0xb,(iVar4 + 8) * 8 + 4,0x19f);
  }
  FUN_1000_5e1f();
  FUN_1000_cf8d(0);
  FUN_1000_b8be();
  FUN_1000_0289();
  FUN_1000_0289();
  FUN_1000_5e1f();
  g_4f62 = uVar1;
  g_4f64 = uVar2;
  return;
}


/* ===== 0x1122c FUN_1000_122c  callers=['FUN_1000_4c32', 'FUN_1000_7dfb', 'FUN_1000_8b1e', 'FUN_1000_afa4'] strings=[] */

void __cdecl16near FUN_1000_122c(void)

{
  undefined2 uVar1;
  
  if (((g_7dbe != 0) && (g_7d8a != 0)) && (g_7dd4 != 0)) {
    FUN_1000_0dec();
  }
  if (((g_7da6 == 0) || (g_7d92 == 0)) || (g_7da2 == 0)) {
    if (g_7dd4 != 0) {
      FUN_1000_bfde();
      FUN_1000_0e76();
      FUN_1000_bffd();
    }
  }
  else {
    FUN_1000_5e1f();
    FUN_1000_62b8(0x14,1);
    g_5bd8 = g_5bd8 ^ 1;
    if (g_5bd8 == 0) {
      uVar1 = 0x1ecb/*"God mode disabled"*/;
    }
    else {
      uVar1 = 0x1eba/*"God mode enabled"*/;
    }
    FUN_1000_64c9(uVar1);
    FUN_1000_6462();
    FUN_1000_b8be();
  }
  return;
}


/* ===== 0x1129d FUN_1000_129d  callers=['FUN_1000_082b', 'FUN_1000_2984', 'FUN_1000_2992', 'FUN_1000_5e52', 'FUN_1000_6a7b', 'FUN_1000_7dfb', 'FUN_1000_b4ec'] strings=[] */

void __cdecl16near FUN_1000_129d(char *param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  if (*param_1 == '\0') {
    FUN_1000_69a0();
  }
  else {
    FUN_1000_cc3d(param_1);
  }
  if (g_79b4 != 0) {
    FUN_1000_5756();
  }
  if (g_79be != 0) {
    FUN_1000_bf51();
  }
  if ((*param_1 == '\0') && (g_6cea == 0)) {
    FUN_1000_d503(0x2218,7,0xb800,0,4000);
  }
  FUN_1000_c974(1,0x17);
  FUN_1000_c666(0);
  return;
}


/* ===== 0x11312 FUN_1000_1312  callers=['entry'] strings=['You just got a pogo stick,\n', 'You just got a pogo stick,\n', 'You just got a pogo stick,\n', 'You just got a pogo stick,\n', 'You just got a pogo stick,\n', 'You just got a pogo stick,\n', 'You just got a pogo stick,\n', 'upper left corner.  \n'] */

void __cdecl16near FUN_1000_1312(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_SI;
  int iVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined1 local_1a [20];
  undefined1 local_6 [2];
  int local_4;
  
  FUN_1000_d834(g_24ca,0x1edd/*"CK1"*/);
  FUN_1000_cc3d(0x1ee1/*"Loading Commander Keen part 1... (versio"*/);
  FUN_1000_59f6(1,&local_4,local_6);
  if (499 < local_4) {
    FUN_1000_cc3d(0x1f22/*"Joystick not detected"*/);
  }
  else {
    FUN_1000_cc3d(0x1f10/*"Joystick detected"*/);
  }
  g_593e = (uint)(499 >= local_4);
  if (1 < param_1) {
    uVar2 = FUN_1000_d872(*(undefined2 *)(param_2 + 2),0x1f38/*"/LEVEL"*/);
    iVar3 = FUN_1000_d805(uVar2);
    if (iVar3 == 0) {
      FUN_1000_e39b(0x2315,local_1a,unaff_SS,unaff_SI);
      FUN_1000_d834(local_1a,7999);
      FUN_1000_d7cc(local_1a,g_24ca);
      FUN_1000_5eb2(local_1a,(undefined2 *)&g_6cea,0x2315);
      goto LAB_1000_13cc;
    }
  }
  g_6cea = 0;
LAB_1000_13cc:
  g_9226 = FUN_1000_c1f8();
  if (g_9226 == 3) {
    FUN_1000_cc3d(0x1f49/*"EGA card detected"*/);
  }
  else if (g_9226 == 5) {
    FUN_1000_cc3d(0x1f5b/*"VGA card detected"*/);
  }
  else {
    FUN_1000_cc3d(0x1f6d/*"Hey, I don't see an EGA or VGA card here"*/);
    FUN_1000_cc3d(0x1fb8/*"anyway (Y = go ahead, N = quit to dos) ?"*/);
    FUN_1000_5e1f();
    uVar1 = FUN_1000_cf8d(0);
    iVar3 = FUN_1000_cdc5(uVar1);
    if (iVar3 != 0x59) {
      FUN_1000_c666(1);
    }
  }
  FUN_1000_6edd();
  for (iVar3 = 0; iVar3 < g_7d48; iVar3 = iVar3 + 1) {
    iVar4 = *(int *)(iVar3 * 2 + 0xa8);
    if (iVar4 == 1) {
      iVar4 = iVar3 << 5;
      ((int*)&g_49c0)[iVar3] = iVar4;
      *(int *)((char *)0x4448 + iVar3 * 2) = iVar4;
      *(int *)((char *)0x3ed0 + iVar3 * 2) = iVar4;
      ((int*)&g_3958)[iVar3] = iVar4;
    }
    else if (iVar4 == 2) {
      *(int *)((char *)0x4448 + iVar3 * 2) = iVar3 << 5;
      ((int*)&g_3958)[iVar3] = iVar3 << 5;
      iVar4 = iVar3 * 0x20 + 0x20;
      ((int*)&g_49c0)[iVar3] = iVar4;
      *(int *)((char *)0x3ed0 + iVar3 * 2) = iVar4;
      iVar3 = iVar3 + 1;
      *(int *)((char *)0x4448 + iVar3 * 2) = iVar3 * 0x20;
      ((int*)&g_3958)[iVar3] = iVar3 * 0x20;
      iVar4 = iVar3 * 0x20 + -0x20;
      ((int*)&g_49c0)[iVar3] = iVar4;
      *(int *)((char *)0x3ed0 + iVar3 * 2) = iVar4;
    }
    else if (iVar4 == 4) {
      ((int*)&g_3958)[iVar3] = iVar3 << 5;
      *(int *)((char *)0x3ed0 + iVar3 * 2) = iVar3 * 0x20 + 0x20
      ;
      *(int *)((char *)0x4448 + iVar3 * 2) = iVar3 * 0x20 + 0x40;
      ((int*)&g_49c0)[iVar3] = iVar3 * 0x20 + 0x60;
      iVar4 = iVar3 + 1;
      ((int*)&g_3958)[iVar4] = iVar4 * 0x20;
      *(int *)((char *)0x3ed0 + iVar4 * 2) = iVar4 * 0x20 + 0x20
      ;
      *(int *)((char *)0x4448 + iVar4 * 2) = iVar4 * 0x20 + 0x40;
      ((int*)&g_49c0)[iVar4] = iVar4 * 0x20 + -0x20;
      iVar4 = iVar3 + 2;
      ((int*)&g_3958)[iVar4] = iVar4 * 0x20;
      *(int *)((char *)0x3ed0 + iVar4 * 2) = iVar4 * 0x20 + 0x20
      ;
      *(int *)((char *)0x4448 + iVar4 * 2) = iVar4 * 0x20 + -0x40;
      ((int*)&g_49c0)[iVar4] = iVar4 * 0x20 + -0x20;
      iVar3 = iVar3 + 3;
      ((int*)&g_3958)[iVar3] = iVar3 * 0x20;
      *(int *)((char *)0x3ed0 + iVar3 * 2) =
           iVar3 * 0x20 + -0x60;
      *(int *)((char *)0x4448 + iVar3 * 2) = iVar3 * 0x20 + -0x40;
      ((int*)&g_49c0)[iVar3] = iVar3 * 0x20 + -0x20;
    }
  }
  FUN_1000_d834(0x7c86,0x1fe1/*"SOUNDS."*/);
  FUN_1000_d7cc(0x7c86,g_24ca);
  g_4f6c = FUN_1000_5fde(0x7c86);
  FUN_1000_c146(1);
  FUN_1000_c0ad(1);
  FUN_1000_beff();
  g_79be = 1;
  FUN_1000_566e();
  g_79b4 = 1;
  FUN_1000_6854();
  g_7d34 = 0;
  uVar5 = FUN_1000_5e52(0,1);
  g_6cfa = (undefined2)((ulong)uVar5 >> 0x10);
  g_6cf8 = (undefined2)uVar5;
  g_2492 = 0x17;
  g_6a90 = 7;
  gb_546c = '\0';
  gb_546d = '\0';
  gb_546e = '\0';
  gb_546f = '\0';
  gb_4f62 = '\0';
  gb_4f63 = '\0';
  gb_4f64 = '\0';
  gb_4f65 = '\0';
  FUN_1000_7b0a();
  return;
}


/* ===== 0x11656 FUN_1000_1656  callers=['FUN_1000_4c32'] strings=[] */

void __cdecl16near FUN_1000_1656(undefined2 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_1000_066b(param_1);
  for (iVar5 = 0; iVar5 < g_6a86; iVar5 = iVar5 + 1) {
    for (iVar4 = 0; iVar4 < g_6a36; iVar4 = iVar4 + 1) {
      iVar2 = *(int *)((int)g_6a7a + (iVar5 * g_6a36 + iVar4) * 2);
      if (iVar2 == 6) {
        FUN_1000_198b(iVar4,iVar5,0);
      }
      else if (iVar2 < 7) {
        switch(iVar2) {
        case 1:
          FUN_1000_18eb(iVar4,iVar5);
          break;
        case 2:
          FUN_1000_18ae(iVar4,iVar5);
          break;
        case 3:
          FUN_1000_1840(iVar4,iVar5);
          break;
        case 4:
          FUN_1000_17e2(iVar4,iVar5);
          break;
        case 5:
          FUN_1000_177e(iVar4,iVar5);
        }
      }
      else if (iVar2 == 9) {
        FUN_1000_198b(iVar4,iVar5,3);
      }
      else if (iVar2 < 10) {
        if (iVar2 == 7) {
          FUN_1000_198b(iVar4,iVar5,1);
        }
        else if (iVar2 == 8) {
          FUN_1000_198b(iVar4,iVar5,2);
        }
      }
      else if (iVar2 == 10) {
        FUN_1000_194e(iVar4,iVar5);
      }
      else if (iVar2 == 0xff) {
        iVar2 = iVar4 >> 0xf;
        g_6d0e = FUN_1000_e251();
        iVar3 = iVar5 >> 0xf;
        g_6d10 = iVar2;
        uVar1 = FUN_1000_e251();
        g_6d12 = uVar1 + 0x800;
        g_6d14 = iVar3 + (uint)(0xf7ff < uVar1);
      }
    }
  }
  return;
}


/* ===== 0x1177e FUN_1000_177e  callers=['FUN_1000_1656'] strings=[] */

void __cdecl16near FUN_1000_177e(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  
  puVar1 = (undefined2 *)FUN_1000_29a0();
  *puVar1 = 6;
  param_1 = param_1 >> 0xf;
  uVar2 = FUN_1000_e251();
  puVar1[2] = uVar2;
  puVar1[3] = param_1;
  param_2 = param_2 >> 0xf;
  uVar3 = FUN_1000_e251();
  puVar1[4] = uVar3 + 0x800;
  puVar1[5] = param_2 + (uint)(0xf7ff < uVar3);
  puVar1[0x10] = 0x5a;
  if (((int)puVar1[3] <= g_6d10) &&
     (((int)puVar1[3] < g_6d10 || ((uint)puVar1[2] < g_6d0e)))) {
    puVar1[0x10] = -puVar1[0x10];
  }
  puVar1[0x19] = 0x1fe0;
  puVar1[0x1a] = 0x20b0;
  puVar1[0x14] = 0x6a;
  return;
}


/* ===== 0x117e2 FUN_1000_17e2  callers=['FUN_1000_1656'] strings=[] */

void __cdecl16near FUN_1000_17e2(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)FUN_1000_29a0();
  *puVar1 = 5;
  param_1 = param_1 >> 0xf;
  uVar2 = FUN_1000_e251();
  puVar1[2] = uVar2;
  puVar1[3] = param_1;
  param_2 = param_2 >> 0xf;
  uVar2 = FUN_1000_e251();
  puVar1[4] = uVar2;
  puVar1[5] = param_2;
  puVar1[0x10] = 0x5a;
  if (((int)puVar1[3] <= g_6d10) &&
     (((int)puVar1[3] < g_6d10 || ((uint)puVar1[2] < g_6d0e)))) {
    puVar1[0x10] = -puVar1[0x10];
  }
  puVar1[0x19] = 0x1e32;
  puVar1[0x1a] = 0x1eff;
  puVar1[0x14] = 0x60;
  return;
}


/* ===== 0x11840 FUN_1000_1840  callers=['FUN_1000_1656'] strings=[] */

void __cdecl16near FUN_1000_1840(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)FUN_1000_29a0();
  *puVar1 = 4;
  param_1 = param_1 >> 0xf;
  uVar2 = FUN_1000_e251();
  puVar1[2] = uVar2;
  puVar1[3] = param_1;
  param_2 = param_2 >> 0xf;
  uVar2 = FUN_1000_e251();
  puVar1[4] = uVar2;
  puVar1[5] = param_2;
  puVar1[0x19] = 0x1c79;
  puVar1[0x1a] = 0x1dd9;
  puVar1[0x12] = 3;
  if (g_7cfa == 0x10) {
    puVar1[0x12] = 0x68;
  }
  if (((int)puVar1[3] < g_6d10) ||
     (((int)puVar1[3] <= g_6d10 && ((uint)puVar1[2] <= g_6d0e)))) {
    puVar1[0x10] = 0x5a;
  }
  else {
    puVar1[0x10] = 0xffa6;
  }
  puVar1[0x14] = 0x4e;
  return;
}


/* ===== 0x118ae FUN_1000_18ae  callers=['FUN_1000_1656'] strings=[] */

void __cdecl16near FUN_1000_18ae(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)FUN_1000_29a0();
  *puVar1 = 3;
  param_1 = param_1 >> 0xf;
  uVar2 = FUN_1000_e251();
  puVar1[2] = uVar2;
  puVar1[3] = param_1;
  param_2 = param_2 >> 0xf;
  uVar2 = FUN_1000_e251();
  puVar1[4] = uVar2;
  puVar1[5] = param_2;
  puVar1[0x19] = 0x1bbc;
  puVar1[0x1a] = 0x1c39;
  puVar1[0x14] = 0x3c;
  return;
}


/* ===== 0x118eb FUN_1000_18eb  callers=['FUN_1000_1656'] strings=[] */

void __cdecl16near FUN_1000_18eb(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  
  puVar1 = (undefined2 *)FUN_1000_29a0();
  *puVar1 = 2;
  param_1 = param_1 >> 0xf;
  uVar2 = FUN_1000_e251();
  puVar1[2] = uVar2;
  puVar1[3] = param_1;
  param_2 = param_2 >> 0xf;
  uVar3 = FUN_1000_e251();
  puVar1[4] = uVar3 + 0x800;
  puVar1[5] = param_2 + (uint)(0xf7ff < uVar3);
  puVar1[0x19] = 0x19ba;
  if ((g_6d10 < (int)puVar1[3]) ||
     ((g_6d10 <= (int)puVar1[3] && (g_6d0e <= (uint)puVar1[2])))) {
    puVar1[0x10] = 0xffc4;
  }
  else {
    puVar1[0x10] = 0x3c;
  }
  puVar1[0x1a] = 0x1ad3;
  puVar1[0x14] = 0x30;
  return;
}


/* ===== 0x1194e FUN_1000_194e  callers=['FUN_1000_1656'] strings=[] */

void __cdecl16near FUN_1000_194e(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)FUN_1000_29a0();
  *puVar1 = 8;
  param_1 = param_1 >> 0xf;
  uVar2 = FUN_1000_e251();
  puVar1[2] = uVar2;
  puVar1[3] = param_1;
  param_2 = param_2 >> 0xf;
  uVar2 = FUN_1000_e251();
  puVar1[4] = uVar2;
  puVar1[5] = param_2;
  puVar1[0x19] = 0x33e9;
  puVar1[0x1a] = 0x2326;
  puVar1[0x14] = 0x72;
  return;
}


/* ===== 0x1198b FUN_1000_198b  callers=['FUN_1000_1656'] strings=[] */

void __cdecl16near FUN_1000_198b(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_29e9();
  piVar1[4] = 3;
  piVar1[0x11] = 0x20b5;
  piVar1[5] = param_3;
  *piVar1 = param_1;
  piVar1[1] = param_1 >> 0xf;
  piVar1[2] = param_2;
  piVar1[3] = param_2 >> 0xf;
  return;
}


/* ===== 0x119ba FUN_1000_19ba  callers=[] strings=[' place!\n\n\nEnter your name:'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_19ba(void)

{
  uint uVar1;
  
  if (_FUN_2315_7c38 == 0) {
    uVar1 = FUN_1000_c168();
    if (uVar1 < g_5942) {
      _FUN_2315_7c38 = FUN_1000_c0f6(0x80);
      _FUN_2315_7c38 = -_FUN_2315_7c38;
    }
    else {
      uVar1 = FUN_1000_c168();
      if (uVar1 < g_5942) {
        g_7c48 = 0x1a3e;
        g_7c40 = 0;
      }
    }
  }
  if (g_7c36 < 1) {
    g_7c3e = 0x36;
  }
  else {
    g_7c3e = 0x34;
  }
  g_7c3e = g_7c3e + ((uint)g_4f62 >> 4 & 1);
  FUN_1000_2c95();
  uVar1 = FUN_1000_2cd8();
  if ((uVar1 & 4) != 0) {
    g_7c36 = -0x3c;
  }
  if ((uVar1 & 1) != 0) {
    g_7c36 = 0x3c;
  }
  return;
}


/* ===== 0x11a3e FUN_1000_1a3e  callers=['FUN_1000_4c32'] strings=[' place!\n\n\nEnter your name:'] */

void FUN_1000_1a3e(void)

{
  g_7c36 = 0;
  g_7c3e = ((uint)g_4f62 >> 5 & 3) + 0x30;
  g_7c40 = g_7c40 + g_5942;
  if (199 < g_7c40) {
    if ((g_6d10 < g_7c1c) ||
       ((g_6d10 <= g_7c1c && (g_6d0e <= g_7c1a)))) {
      g_7c36 = 0xffc4;
    }
    else {
      g_7c36 = 0x3c;
    }
    g_7c48 = 0x19ba;
  }
  FUN_1000_2c95();
  FUN_1000_2cd8();
  return;
}


/* ===== 0x11a92 FUN_1000_1a92  callers=['FUN_1e7c_0e9f'] strings=[] */

void __cdecl16near FUN_1000_1a92(void)

{
  FUN_1000_2cd8();
  return;
}


/* ===== 0x11a97 FUN_1000_1a97  callers=[] strings=[' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_1a97(void)

{
  g_7c3e = ((uint)g_4f62 >> 4 & 1) + 0x38;
  g_7c40 = g_7c40 + g_5942;
  if (799 < g_7c40) {
    g_7c40 = 0;
    g_7c48 = 0x1a3e;
  }
  g_7c36 = 0;
  FUN_1000_2c95();
  FUN_1000_2cd8();
  return;
}


/* ===== 0x11ad3 FUN_1000_1ad3  callers=[] strings=[] */

void __cdecl16near FUN_1000_1ad3(int param_1,int *param_2)

{
  if ((*param_2 == 10) || (*param_2 == 0xb)) {
    *(undefined2 *)(param_1 + 0x2a) = 0;
    *(undefined2 *)(param_1 + 0x2c) = 2;
    *(undefined2 *)(param_1 + 0x28) = 0x3a;
    *(undefined2 *)(param_1 + 0x32) = 0x4966;
    *(undefined2 *)(param_1 + 0x34) = 0x33e9;
    *(undefined2 *)(param_1 + 0x22) = 0xffb0;
    FUN_1000_bf8d(0x22);
  }
  return;
}


/* ===== 0x11b13 FUN_1000_1b13  callers=[] strings=[' place!\n\n\nEnter your name:'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_1b13(void)

{
  uint uVar1;
  
  if (((_FUN_2315_7c38 == 0) && (-0xdc < (int)g_7c36)) && ((int)g_7c36 < 0xdc)) {
    uVar1 = FUN_1000_c168();
    if (uVar1 < g_5942) {
      g_7c48 = 0x1bbc;
      g_7c40 = 0;
    }
  }
  if ((int)g_7c36 < 1) {
    g_7c3e = 0x42;
  }
  else {
    g_7c3e = 0x40;
  }
  g_7c3e = g_7c3e + ((uint)g_4f62 >> 4 & 1);
  FUN_1000_2c95();
  uVar1 = FUN_1000_2cd8();
  if ((uVar1 & 4) != 0) {
    g_7c36 = 0xffc4;
  }
  if ((uVar1 & 1) != 0) {
    g_7c36 = 0x3c;
  }
  if ((uVar1 & 2) == 0) {
    if (((g_7c36 ^ (int)g_7c36 >> 0xf) - ((int)g_7c36 >> 0xf) == 0xdc) &&
       (g_7c40 == 0)) {
      g_7c40 = 1;
      _FUN_2315_7c38 = -200;
    }
  }
  else {
    g_7c40 = 0;
  }
  return;
}


/* ===== 0x11bbc FUN_1000_1bbc  callers=[] strings=[' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_1bbc(void)

{
  g_7c36 = 0;
  g_7c3e = ((uint)g_4f62 >> 5 & 3) + 0x3c;
  g_7c40 = g_7c40 + g_5942;
  FUN_1000_2c95();
  FUN_1000_2cd8();
  if (0x4f < g_7c40) {
    if ((g_7c20 + (uint)(0xf7ff < g_7c1e) == g_6d14) &&
       (g_7c1e + 0x800 == g_6d12)) {
      g_7c36 = 0xdc;
    }
    else {
      g_7c36 = 0x3c;
    }
    if ((g_6d10 <= g_7c1c) &&
       ((g_6d10 < g_7c1c || (g_6d0e < g_7c1a)))) {
      g_7c36 = -g_7c36;
    }
    g_7c48 = 0x1b13;
  }
  return;
}


/* ===== 0x11c39 FUN_1000_1c39  callers=[] strings=[] */

void __cdecl16near FUN_1000_1c39(int param_1,int *param_2)

{
  if ((*param_2 == 10) || (*param_2 == 0xb)) {
    *(undefined2 *)(param_1 + 0x2a) = 0;
    *(undefined2 *)(param_1 + 0x2c) = 2;
    *(undefined2 *)(param_1 + 0x28) = 0x44;
    *(undefined2 *)(param_1 + 0x32) = 0x4966;
    *(undefined2 *)(param_1 + 0x34) = 0x33e9;
    *(undefined2 *)(param_1 + 0x22) = 0xffb0;
    FUN_1000_bf8d(0x23);
  }
  return;
}


/* ===== 0x11c79 FUN_1000_1c79  callers=[] strings=[' place!\n\n\nEnter your name:'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_1c79(void)

{
  uint uVar1;
  
  if (g_7c36 < 1) {
    g_7c3e = 0x46;
  }
  else {
    g_7c3e = 0x4a;
  }
  g_7c3e = g_7c3e + ((uint)g_4f62 >> 4 & 3);
  uVar1 = FUN_1000_c168();
  if (uVar1 < (uint)(g_5942 << 1)) {
    _FUN_2315_7c38 = FUN_1000_c0f6(300);
    _FUN_2315_7c38 = -_FUN_2315_7c38;
    g_7c48 = 0x1d33;
  }
  else {
    uVar1 = FUN_1000_c168();
    if (uVar1 < (uint)(g_5942 << 1)) {
      if (g_7c36 == 0x5a) {
        g_7c36 = 0x78;
      }
      else if (g_7c36 < 0x5b) {
        if (g_7c36 == -0x78) {
          g_7c36 = -0x5a;
        }
        else if (g_7c36 == -0x5a) {
          g_7c36 = -0x78;
        }
      }
      else if (g_7c36 == 0x78) {
        g_7c36 = 0x5a;
      }
    }
  }
  FUN_1000_2c95();
  uVar1 = FUN_1000_2cd8();
  if ((uVar1 & 4) != 0) {
    g_7c36 = -0x5a;
  }
  if ((uVar1 & 1) != 0) {
    g_7c36 = 0x5a;
  }
  return;
}


/* ===== 0x11d33 FUN_1000_1d33  callers=[] strings=[] */

void __cdecl16near FUN_1000_1d33(void)

{
  uint uVar1;
  
  if (g_7c36 < 1) {
    g_7c3e = 0x51;
  }
  else {
    g_7c3e = 0x50;
  }
  FUN_1000_2c95();
  uVar1 = FUN_1000_2cd8();
  if ((uVar1 & 2) != 0) {
    g_7c48 = 0x1d80;
    g_7c40 = 0;
  }
  if ((uVar1 & 4) != 0) {
    g_7c36 = -0x5a;
  }
  if ((uVar1 & 1) != 0) {
    g_7c36 = 0x5a;
  }
  return;
}


/* ===== 0x11d80 FUN_1000_1d80  callers=[] strings=[' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_1d80(void)

{
  g_7c36 = 0;
  g_7c3e = ((uint)g_4f62 >> 5 & 3) + 0x4e;
  g_7c40 = g_7c40 + g_5942;
  if (0x4f < g_7c40) {
    g_7c36 = 0x5a;
    if ((g_6d10 <= g_7c1c) &&
       ((g_6d10 < g_7c1c || (g_6d0e < g_7c1a)))) {
      g_7c36 = 0xffa6;
    }
    g_7c48 = 0x1c79;
  }
  FUN_1000_2c95();
  FUN_1000_2cd8();
  return;
}


/* ===== 0x11dd9 FUN_1000_1dd9  callers=[] strings=[] */

void __cdecl16near FUN_1000_1dd9(int param_1,int *param_2)

{
  int iVar1;
  
  if (((*param_2 == 10) || (*param_2 == 0xb)) &&
     (iVar1 = *(int *)(param_1 + 0x24), *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1,
     iVar1 == 0)) {
    FUN_1000_bf8d(0x27);
    *(undefined2 *)(param_1 + 0x2a) = 0;
    *(undefined2 *)(param_1 + 0x2c) = 6;
    *(undefined2 *)(param_1 + 0x28) = 0x52;
    *(undefined2 *)(param_1 + 0x34) = 0x33e9;
    *(undefined2 *)(param_1 + 0x32) = 0x4966;
    iVar1 = FUN_1000_29e9();
    *(undefined2 *)(iVar1 + 8) = 5;
    *(undefined2 *)(iVar1 + 0x22) = 0x4b0e;
    *(undefined2 *)(iVar1 + 10) = 0;
  }
  return;
}


/* ===== 0x11e32 FUN_1000_1e32  callers=[] strings=[' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_1e32(void)

{
  uint uVar1;
  
  if (g_7c36 < 1) {
    g_7c3e = 0x5c;
  }
  else {
    g_7c3e = 0x58;
  }
  g_7c3e = g_7c3e + ((uint)g_4f62 >> 5 & 3);
  FUN_1000_2c95();
  uVar1 = FUN_1000_2cd8();
  if ((uVar1 & 2) == 0) {
    g_7c32 = g_7c32 * -2;
    g_7c34 = 0;
    g_7c42 = -g_7c36;
    g_7c48 = 0x1ec9;
    g_7c36 = 0;
    g_7c40 = 0;
  }
  if ((uVar1 & 4) != 0) {
    g_7c42 = -0x5a;
    g_7c48 = 0x1ec9;
    g_7c36 = 0;
    g_7c40 = 0;
  }
  if ((uVar1 & 1) != 0) {
    g_7c42 = 0x5a;
    g_7c48 = 0x1ec9;
    g_7c36 = 0;
    g_7c40 = 0;
  }
  return;
}


/* ===== 0x11ec9 FUN_1000_1ec9  callers=[] strings=[' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_1ec9(void)

{
  g_7c40 = g_7c40 + g_5942;
  if (0x32 < g_7c40) {
    g_7c48 = 0x1e32;
    g_7c36 = g_7c42;
  }
  g_7c3e = ((uint)g_4f62 >> 5 & 1) + 0x60;
  FUN_1000_2c95();
  FUN_1000_2cd8();
  return;
}


/* ===== 0x11eff FUN_1000_1eff  callers=[] strings=[] */

void __cdecl16near FUN_1000_1eff(int param_1,int *param_2)

{
  if (*param_2 == 10) {
    *(undefined2 *)(param_1 + 0x2a) = 0;
  }
  return;
}


/* ===== 0x11f14 FUN_1000_1f14  callers=[] strings=[' place!\n\n\nEnter your name:'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_1f14(void)

{
  uint uVar1;
  
  if (g_7c36 < 1) {
    g_7c3e = 0x66;
  }
  else {
    g_7c3e = 0x62;
  }
  g_7c3e = g_7c3e + ((uint)g_4f62 >> 3 & 3);
  uVar1 = FUN_1000_c168();
  if (uVar1 < g_5942) {
    g_7c48 = 0x202c;
    g_7c40 = 0;
    g_7c42 = 0;
    g_7c44 = g_7c36;
    g_7c36 = 0;
  }
  FUN_1000_2c95();
  uVar1 = FUN_1000_2cd8();
  _FUN_2315_7c38 = 0;
  g_7c34 = 0;
  if ((uVar1 & 2) == 0) {
    if (g_7c3e < 0x66) {
      g_7c32 = g_5942 * -0xb4;
      g_7c34 = 0;
      g_7c36 = 0;
      _FUN_2315_7c38 = 0;
      g_7c40 = 0;
      g_7c42 = 0xffa6;
      g_7c48 = 0x1ffa;
      return;
    }
    g_7c32 = g_5942 * 0xb4;
  }
  else {
    if ((uVar1 & 4) != 0) {
      g_7c42 = 0xffa6;
      g_7c48 = 0x1ffa;
      g_7c36 = 0;
      g_7c40 = 0;
    }
    if ((uVar1 & 1) == 0) {
      g_7c34 = 0;
      _FUN_2315_7c38 = 0;
      return;
    }
  }
  g_7c48 = 0x1ffa;
  g_7c42 = 0x5a;
  g_7c40 = 0;
  g_7c36 = 0;
  return;
}


/* ===== 0x11fe0 FUN_1000_1fe0  callers=[] strings=[] */

void __cdecl16near FUN_1000_1fe0(void)

{
  uint uVar1;
  
  FUN_1000_2c95();
  uVar1 = FUN_1000_2cd8();
  if ((uVar1 & 2) != 0) {
    g_7c48 = 0x1f14;
  }
  return;
}


/* ===== 0x11ffa FUN_1000_1ffa  callers=[] strings=[' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_1ffa(void)

{
  g_7c40 = g_7c40 + g_5942;
  g_7c3e = ((uint)g_4f62 >> 4 & 1) + 0x6a;
  if (0x32 < g_7c40) {
    g_7c48 = 0x1f14;
    g_7c36 = g_7c42;
  }
  return;
}


/* ===== 0x1202c FUN_1000_202c  callers=[] strings=[] */

void __cdecl16near FUN_1000_202c(void)

{
  undefined2 uVar1;
  
  g_7c40 = g_7c40 + g_5942;
  if ((g_7c42 == 0) && (0x50 < g_7c40)) {
    FUN_1000_bf8d(0x26);
    uVar1 = 0x15e;
    if (g_7c44 < 0) {
      uVar1 = 0xfea2;
    }
    FUN_1000_49a7(g_7c1a,g_7c1c,g_7c1e,g_7c20,uVar1);
    g_7c42 = 1;
  }
  if (0x78 < g_7c40) {
    g_7c42 = 0x5a;
    if ((g_6d10 <= g_7c1c) &&
       ((g_6d10 < g_7c1c || (g_6d0e < g_7c1a)))) {
      g_7c42 = -0x5a;
    }
    g_7c40 = 0;
    g_7c48 = 0x1ffa;
  }
  return;
}


/* ===== 0x120b0 FUN_1000_20b0  callers=[] strings=[] */

void __cdecl16near FUN_1000_20b0(void)

{
  return;
}


/* ===== 0x120b5 FUN_1000_20b5  callers=[] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', '  * The latest version of each game\n', '  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_20b5(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  if ((uint)g_4f62 >> 7 != param_1[6]) {
    param_1[6] = (uint)g_4f62 >> 7;
    if ((((g_5484 + -4 < *param_1) &&
         (g_5940 + -4 < param_1[2])) &&
        (*param_1 < g_5484 + 0x18)) &&
       (param_1[2] < g_5940 + 0xe)) {
      FUN_1000_bf8d(0x17);
      iVar2 = param_1[3];
      FUN_1000_e251();
      iVar3 = param_1[1];
      uVar1 = FUN_1000_e251(iVar2);
      FUN_1000_2136(uVar1,iVar3);
    }
  }
  return;
}


/* ===== 0x12136 FUN_1000_2136  callers=['FUN_1000_20b5'] strings=[] */

void __cdecl16near
FUN_1000_2136(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             undefined2 param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)FUN_1000_29a0();
  *puVar3 = 0xf;
  puVar3[2] = param_1;
  puVar3[3] = param_2;
  puVar3[4] = param_3;
  puVar3[5] = param_4;
  puVar3[0x19] = 0x21fd;
  switch(param_5) {
  case 0:
    puVar1 = puVar3 + 2;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 0x1000;
    puVar3[3] = puVar3[3] + (uint)(0xefff < uVar2);
    puVar3[0x11] = 0xff38;
    puVar3[0x10] = 200;
    break;
  case 1:
    puVar3[0x11] = 0xff38;
    puVar3[0x10] = 0;
    break;
  case 2:
    puVar3[0x11] = 200;
    puVar3[0x10] = 0;
    break;
  case 3:
    puVar3[0x11] = 0xff38;
    puVar3[0x10] = 0xff38;
  }
  puVar3[0x1a] = 0x2311;
  puVar3[0x14] = 0x70;
  return;
}


/* ===== 0x121fd FUN_1000_21fd  callers=[] strings=[] */

void __cdecl16near FUN_1000_21fd(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = FUN_1000_2cd8();
  if (iVar2 != 0) {
    g_7c16 = 0;
    puVar3 = (undefined2 *)FUN_1000_29a0();
    *puVar3 = 0xc;
    puVar3[0x19] = 0x21bc;
    puVar3[0x1a] = 0x33e9;
    uVar1 = g_7c1c;
    puVar3[2] = g_7c1a;
    puVar3[3] = uVar1;
    uVar1 = g_7c20;
    puVar3[4] = g_7c1e;
    puVar3[5] = uVar1;
    puVar3[0x10] = 300;
    puVar3[0x11] = 300;
    puVar3[0x14] = 0x71;
    puVar3 = (undefined2 *)FUN_1000_29a0();
    *puVar3 = 0xc;
    puVar3[0x19] = 0x21bc;
    puVar3[0x1a] = 0x33e9;
    uVar1 = g_7c1c;
    puVar3[2] = g_7c1a;
    puVar3[3] = uVar1;
    uVar1 = g_7c20;
    puVar3[4] = g_7c1e;
    puVar3[5] = uVar1;
    puVar3[0x10] = 300;
    puVar3[0x11] = 0xfed4;
    puVar3[0x14] = 0x71;
    puVar3 = (undefined2 *)FUN_1000_29a0();
    *puVar3 = 0xc;
    puVar3[0x19] = 0x21bc;
    puVar3[0x1a] = 0x33e9;
    uVar1 = g_7c1c;
    puVar3[2] = g_7c1a;
    puVar3[3] = uVar1;
    uVar1 = g_7c20;
    puVar3[4] = g_7c1e;
    puVar3[5] = uVar1;
    puVar3[0x10] = 0xfed4;
    puVar3[0x11] = 300;
    puVar3[0x14] = 0x71;
    puVar3 = (undefined2 *)FUN_1000_29a0();
    *puVar3 = 0xc;
    puVar3[0x19] = 0x21bc;
    puVar3[0x1a] = 0x33e9;
    uVar1 = g_7c1c;
    puVar3[2] = g_7c1a;
    puVar3[3] = uVar1;
    uVar1 = g_7c20;
    puVar3[4] = g_7c1e;
    puVar3[5] = uVar1;
    puVar3[0x10] = 0xfed4;
    puVar3[0x11] = 0xfed4;
    puVar3[0x14] = 0x71;
    FUN_1000_bf8d(0x13);
  }
  return;
}


/* ===== 0x12311 FUN_1000_2311  callers=[] strings=[] */

void __cdecl16near FUN_1000_2311(int param_1,int *param_2)

{
  if (*param_2 == 1) {
    *(undefined2 *)(param_1 + 0x32) = 0x2979;
  }
  return;
}


/* ===== 0x12326 FUN_1000_2326  callers=[] strings=[] */

void __cdecl16near FUN_1000_2326(int param_1,int *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined2 uVar5;
  int *piVar6;
  
  if (*param_2 == 10) {
    *(undefined2 *)(param_1 + 0x32) = (char *)0x48b1;
    *(undefined2 *)(param_1 + 0x2a) = 0;
    *(undefined2 *)(param_1 + 0x34) = 0x33e9;
    iVar1 = FUN_1000_c168();
    if (iVar1 < 0x81) {
      *(undefined2 *)(param_1 + 0x28) = 0x6f;
    }
    else {
      *(undefined2 *)(param_1 + 0x28) = 0x6e;
    }
    puVar2 = (undefined2 *)FUN_1000_29e9();
    puVar2[4] = 4;
    puVar2[0x11] = 0x23d4;
    uVar5 = *(undefined2 *)(param_1 + 6);
    uVar3 = FUN_1000_e272();
    *puVar2 = uVar3;
    puVar2[1] = uVar5;
    iVar1 = *(int *)(param_1 + 10);
    uVar4 = FUN_1000_e272();
    puVar2[2] = uVar4 + 1;
    puVar2[3] = iVar1 + (uint)(0xfffe < uVar4);
    puVar2[5] = 0;
    for (piVar6 = (undefined2 *)&g_6d0a + g_5be2 * 0x1b; *piVar6 != 4;
        piVar6 = piVar6 + -0x1b) {
    }
    FUN_1000_bf8d(0x27);
    piVar6[0x15] = 0;
    piVar6[0x16] = 6;
    piVar6[0x14] = 0x52;
    piVar6[0x1a] = 0x33e9;
    piVar6[0x19] = 0x4966;
  }
  return;
}


/* ===== 0x123d4 FUN_1000_23d4  callers=[] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_23d4(uint *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((uint)g_4f62 >> 5 != param_1[6]) {
    param_1[6] = (uint)g_4f62 >> 5;
    iVar2 = *param_1 - 4;
    iVar3 = FUN_1000_e663();
    *(undefined2 *)((int)g_6a76 + (iVar3 + iVar2) * 2) = 0x9b;
    iVar3 = FUN_1000_e663();
    *(undefined2 *)((int)g_6a76 + (iVar3 + iVar2) * 2) = 0x1dc;
    iVar3 = FUN_1000_e663();
    *(undefined2 *)((int)g_6a76 + (iVar3 + iVar2) * 2) = 0x1e9;
    uVar4 = *param_1 - 3;
    while( true ) {
      iVar2 = param_1[1] + (uint)(0xfffc < *param_1);
      if ((iVar2 <= (int)uVar4 >> 0xf) && ((iVar2 < (int)uVar4 >> 0xf || (*param_1 + 3 < uVar4))))
      break;
      iVar2 = FUN_1000_e663();
      *(undefined2 *)((int)g_6a76 + (iVar2 + uVar4) * 2) = 0x9b;
      iVar2 = FUN_1000_e663();
      *(undefined2 *)((int)g_6a76 + (iVar2 + uVar4) * 2) = 0x1dd;
      iVar2 = FUN_1000_e663();
      *(undefined2 *)((int)g_6a76 + (iVar2 + uVar4) * 2) = 0x1ea;
      uVar4 = uVar4 + 1;
    }
    iVar2 = *param_1 + 4;
    iVar3 = FUN_1000_e663();
    *(undefined2 *)((int)g_6a76 + (iVar3 + iVar2) * 2) = 0x9b;
    iVar3 = FUN_1000_e663();
    *(undefined2 *)((int)g_6a76 + (iVar3 + iVar2) * 2) = 0x1de;
    iVar3 = FUN_1000_e663();
    *(undefined2 *)((int)g_6a76 + (iVar3 + iVar2) * 2) = 0x1eb;
    puVar1 = param_1 + 2;
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + 1;
    param_1[3] = param_1[3] + (uint)(0xfffe < uVar4);
    param_1[5] = param_1[5] + 1;
    if (param_1[5] == 4) {
      param_1[4] = 0;
    }
  }
  return;
}


/* ===== 0x1255f FUN_1000_255f  callers=['FUN_1000_4373'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_255f(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  char cVar3;
  char *pcVar4;
  
  uVar2 = g_4f64;
  uVar1 = g_4f62;
  FUN_1000_6248(0x15,10);
  switch(g_7cfa) {
  case 2:
    FUN_1000_64c9(0x1ff4/*"You hear in your    \n"*/);
    FUN_1000_64c9(0x200a/*"mind:               \n"*/);
    FUN_1000_64c9(0x2020/*"                    \n"*/);
    FUN_1000_64c9(0x2036/*"It is too bad that  \n"*/);
    FUN_1000_64c9(0x204c/*"you cannot read the \n"*/);
    FUN_1000_64c9(0x2062/*"Standard Galactic   \n"*/);
    pcVar4 = (char *)0x2078/*"Alphabet, human.    \n"*/;
    break;
  default:
    goto switchD_1000_2590_caseD_3;
  case 6:
    FUN_1000_64c9(0x208e/*"A message echoes in \n"*/);
    FUN_1000_64c9(0x20a4/*"your head:          \n"*/);
    FUN_1000_64c9(0x20ba/*"                    \n"*/);
    FUN_1000_64c9(0x20d0/*"The teleporter in   \n"*/);
    FUN_1000_64c9(0x20e6/*"the ice will send   \n"*/);
    FUN_1000_64c9(0x20fc/*"you to the dark side\n"*/);
    pcVar4 = (char *)0x2112/*"of Mars.            \n"*/;
    break;
  case 9:
    FUN_1000_64c9((char *)0x2128/*"A voice buzzes in   \n"*/);
    FUN_1000_64c9((char *)0x213e/*"your mind:          \n"*/);
    FUN_1000_64c9((char *)0x2154/*"                    \n"*/);
    FUN_1000_64c9((char *)0x216a/*"There is a hidden   \n"*/);
    FUN_1000_64c9(0x2180/*"city. Look in the   \n"*/);
    FUN_1000_64c9(0x2196/*"dark area of the    \n"*/);
    pcVar4 = (char *)0x21ac/*"city to the south.  \n"*/;
    break;
  case 10:
    FUN_1000_64c9(0x21c2/*"You see these words \n"*/);
    FUN_1000_64c9(0x21d8/*"in your head:       \n"*/);
    FUN_1000_64c9(0x21ee/*"                    \n"*/);
    FUN_1000_64c9(0x2204/*"You will need a     \n"*/);
    FUN_1000_64c9(0x221a/*"raygun in the end,  \n"*/);
    FUN_1000_64c9(0x2230/*"but not to shoot the\n"*/);
    pcVar4 = (char *)0x2246/*"Vorticon...         \n"*/;
    break;
  case 0xb:
    FUN_1000_64c9(0x225c/*"You hear in your    \n"*/);
    FUN_1000_64c9(0x2272/*"mind:               \n"*/);
    FUN_1000_64c9(0x2288/*"                    \n"*/);
    pcVar4 = (char *)0x229e/*" GAAARRRRRGG!       \n"*/;
    break;
  case 0xc:
    FUN_1000_64c9(0x22b4/*"A Yorpish whisper   \n"*/);
    FUN_1000_64c9(0x22ca/*"says:               \n"*/);
    FUN_1000_64c9(0x22e0/*"                    \n"*/);
    FUN_1000_64c9(0x22f6/*"Look for dark, hidden\n"*/);
    FUN_1000_64c9(0x230d/*"bricks. You can see \n"*/);
    FUN_1000_64c9(0x2323/*"naught but their    \n"*/);
    pcVar4 = (char *)0x2339/*"upper left corner.  \n"*/;
    break;
  case 0xf:
    FUN_1000_64c9(0x234f/*"A Yorpy mind-thought\n"*/);
    FUN_1000_64c9(0x2365/*"bellows:            \n"*/);
    FUN_1000_64c9(0x237b/*"                    \n"*/);
    FUN_1000_64c9(0x2391/*"You cannot kill the \n"*/);
    FUN_1000_64c9(0x23a7/*"Vorticon Commander  \n"*/);
    pcVar4 = (char *)0x23bd/*"directly.           \n"*/;
  }
  FUN_1000_64c9(pcVar4);
switchD_1000_2590_caseD_3:
  g_7cee = g_2494 + 5;
  FUN_1000_666d(0x23d3/*"Press ENTER:"*/);
  FUN_1000_5e1f();
  do {
    cVar3 = FUN_1000_6462();
  } while (cVar3 != '\r');
  FUN_1000_b8be();
  FUN_1000_5e1f();
  g_4f62 = uVar1;
  g_4f64 = uVar2;
  return;
}


/* ===== 0x127a8 FUN_1000_27a8  callers=[] strings=[] */

void __cdecl16near FUN_1000_27a8(undefined2 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  param_1[5] = param_1[5] + g_5942;
  iVar1 = (int)param_1[5] / 5;
  if (0x20 < iVar1) {
    iVar1 = 0x20;
    param_1[4] = 0;
  }
  uVar2 = iVar1 * 0x100;
  FUN_1000_0501(*param_1,param_1[1],param_1[2] + uVar2,
                param_1[3] + ((int)uVar2 >> 0xf) + (uint)CARRY2(param_1[2],uVar2),param_1[8]);
  uVar2 = iVar1 * 0x100;
  uVar3 = param_1[2] + uVar2;
  FUN_1000_0501(*param_1,param_1[1],uVar3 + 0x1000,
                param_1[3] + ((int)uVar2 >> 0xf) + (uint)CARRY2(param_1[2],uVar2) +
                (uint)(0xefff < uVar3),param_1[8] + 1);
  FUN_1000_0501(*param_1,param_1[1],param_1[2] + 0x2000,
                param_1[3] + (uint)(0xdfff < (uint)param_1[2]),param_1[7]);
  FUN_1000_0501(*param_1,param_1[1],param_1[2] + 0x3000,
                param_1[3] + (uint)(0xcfff < (uint)param_1[2]),param_1[6]);
  return;
}


/* ===== 0x12863 FUN_1000_2863  callers=['FUN_1000_4373'] strings=[] */

void __cdecl16near FUN_1000_2863(int param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  
  FUN_1000_bf8d(0x21);
  uVar4 = (undefined2)((ulong)g_6a76 >> 0x10);
  iVar1 = *(int *)(*(int *)((int)g_6a76 + (param_2 * g_6a36 + param_1) * 2) * 2 +
                  0x56e);
  iVar5 = *(int *)(*(int *)((int)g_6a76 + ((param_2 + -1) * g_6a36 + param_1) * 2) * 2
                  + 0x56e);
  if (iVar5 == iVar1) {
    param_2 = param_2 + -1;
  }
  puVar2 = (undefined2 *)FUN_1000_29e9();
  puVar2[4] = 1;
  puVar2[0x11] = 0x27a8;
  iVar3 = param_1 >> 0xf;
  uVar4 = FUN_1000_e251();
  *puVar2 = uVar4;
  puVar2[1] = iVar3;
  iVar3 = param_2 >> 0xf;
  uVar4 = FUN_1000_e251(iVar5);
  puVar2[2] = uVar4;
  puVar2[3] = iVar3;
  puVar2[5] = 0;
  uVar4 = (undefined2)((ulong)g_6a76 >> 0x10);
  puVar2[6] = *(undefined2 *)((int)g_6a76 + ((param_2 + 3) * g_6a36 + param_1) * 2);
  puVar2[7] = *(undefined2 *)((int)g_6a76 + ((param_2 + 2) * g_6a36 + param_1) * 2);
  puVar2[8] = *(undefined2 *)((int)g_6a76 + (param_2 * g_6a36 + param_1) * 2);
  ((int*)&g_a5c6)[iVar1] = 0;
  *(undefined2 *)((int)g_6a76 + (param_2 * g_6a36 + param_1) * 2) = 0x8f;
  *(undefined2 *)((int)g_6a76 + ((param_2 + 1) * g_6a36 + param_1) * 2) = 0x8f;
  return;
}


/* ===== 0x12979 FUN_1000_2979  callers=[] strings=[] */

void __cdecl16near FUN_1000_2979(void)

{
  g_7c16 = 0;
  return;
}


/* ===== 0x12984 FUN_1000_2984  callers=[] strings=[] */

void __cdecl16near FUN_1000_2984(void)

{
  FUN_1000_129d(0x23e0/*"Bad think pointer!"*/);
  return;
}


/* ===== 0x12992 FUN_1000_2992  callers=[] strings=[] */

void __cdecl16near FUN_1000_2992(void)

{
  FUN_1000_129d(0x23f3/*"Bad contact pointer!"*/);
  return;
}


/* ===== 0x129a0 FUN_1000_29a0  callers=['FUN_1000_177e', 'FUN_1000_17e2', 'FUN_1000_1840', 'FUN_1000_18ae', 'FUN_1000_18eb', 'FUN_1000_194e', 'FUN_1000_2136', 'FUN_1000_21fd', 'FUN_1000_49a7'] strings=[] */

int * __cdecl16near FUN_1000_29a0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)&g_6d40;
  for (iVar2 = 1; (*piVar1 != 0 && (iVar2 < g_5be2)); iVar2 = iVar2 + 1) {
    piVar1 = piVar1 + 0x1b;
  }
  if (g_5be2 <= iVar2) {
    g_5be2 = g_5be2 + 1;
  }
  FUN_1000_d4eb(piVar1,0,0x36);
  piVar1[0x19] = 0x2984;
  piVar1[0x1a] = 0x2992;
  piVar1[1] = 1;
  return piVar1;
}


/* ===== 0x129e9 FUN_1000_29e9  callers=['FUN_1000_198b', 'FUN_1000_1dd9', 'FUN_1000_2326', 'FUN_1000_2863', 'FUN_1000_365b'] strings=[] */

int __cdecl16near FUN_1000_29e9(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x79ce;
  for (iVar2 = 0; (*(int *)(iVar1 + 8) != 0 && (iVar2 < g_7c0e)); iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 0x24;
  }
  if (g_7c0e <= iVar2) {
    g_7c0e = g_7c0e + 1;
  }
  FUN_1000_d4eb(iVar1,0,0x24);
  *(undefined2 *)(iVar1 + 0x22) = 0x2984;
  return iVar1;
}


/* ===== 0x12a28 FUN_1000_2a28  callers=['FUN_1000_4c32'] strings=[] */

undefined2 __cdecl16near FUN_1000_2a28(int param_1,int param_2)

{
  undefined2 uVar1;
  
  if ((*(int *)(param_1 + 0xc) == 0 && *(int *)(param_1 + 0xe) == 0) ||
     (*(int *)(param_2 + 0xc) == 0 && *(int *)(param_2 + 0xe) == 0)) {
    uVar1 = 0;
  }
  else if ((*(int *)(param_2 + 0xe) < *(int *)(param_1 + 0x16)) ||
          ((*(int *)(param_2 + 0xe) <= *(int *)(param_1 + 0x16) &&
           (*(uint *)(param_2 + 0xc) <= *(uint *)(param_1 + 0x14))))) {
    if ((*(int *)(param_2 + 0x12) < *(int *)(param_1 + 0x1a)) ||
       ((*(int *)(param_2 + 0x12) <= *(int *)(param_1 + 0x1a) &&
        (*(uint *)(param_2 + 0x10) <= *(uint *)(param_1 + 0x18))))) {
      if ((*(int *)(param_1 + 0xe) < *(int *)(param_2 + 0x16)) ||
         ((*(int *)(param_1 + 0xe) <= *(int *)(param_2 + 0x16) &&
          (*(uint *)(param_1 + 0xc) <= *(uint *)(param_2 + 0x14))))) {
        if ((*(int *)(param_1 + 0x12) < *(int *)(param_2 + 0x1a)) ||
           ((*(int *)(param_1 + 0x12) <= *(int *)(param_2 + 0x1a) &&
            (*(uint *)(param_1 + 0x10) <= *(uint *)(param_2 + 0x18))))) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* ===== 0x12aa6 FUN_1000_2aa6  callers=['FUN_1000_30a7', 'FUN_1000_3248', 'FUN_1000_4c32'] strings=[] */

void __cdecl16near FUN_1000_2aa6(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 unaff_SI;
  undefined2 uVar3;
  
  uVar3 = 0;
  iVar2 = g_7c1c;
  uVar1 = FUN_1000_e272(0);
  FUN_1000_e1b2(uVar1,iVar2);
  FUN_1000_e251(0x2315);
  uVar1 = g_7d46;
  FUN_1000_e33b();
  FUN_1000_e39b(uVar1,iVar2,uVar3,unaff_SI);
  g_7c22 = g_7c1a + g_7d04;
  g_7c24 =
       g_7c1c + ((int)g_7d04 >> 0xf) + (uint)CARRY2(g_7c1a,g_7d04);
  g_7c2a = g_7c1a + g_7d08;
  g_7c2c =
       g_7c1c + ((int)g_7d08 >> 0xf) + (uint)CARRY2(g_7c1a,g_7d08);
  g_7c26 = g_7c1e + g_7d06;
  g_7c28 =
       g_7c20 + ((int)g_7d06 >> 0xf) + (uint)CARRY2(g_7c1e,g_7d06);
  g_7c2e = g_7c1e + g_7d0a;
  g_7c30 =
       g_7c20 + ((int)g_7d0a >> 0xf) + (uint)CARRY2(g_7c1e,g_7d0a);
  return;
}


/* ===== 0x12b54 FUN_1000_2b54  callers=['FUN_1000_ac1c'] strings=[] */

void __cdecl16near FUN_1000_2b54(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_DI;
  bool bVar5;
  undefined2 uVar6;
  
  uVar6 = 0;
  uVar3 = *(undefined2 *)(param_1 + 6);
  uVar2 = FUN_1000_e272(0);
  FUN_1000_e1b2(uVar2,uVar3);
  FUN_1000_e251(0x2315);
  uVar2 = g_7d46;
  FUN_1000_e33b();
  FUN_1000_e39b(uVar2,uVar3,uVar6,unaff_DI);
  iVar1 = *(int *)(param_1 + 6);
  iVar4 = (int)g_7d04 >> 0xf;
  bVar5 = CARRY2(*(uint *)(param_1 + 4),g_7d04);
  *(int *)(param_1 + 0xc) = *(uint *)(param_1 + 4) + g_7d04;
  *(int *)(param_1 + 0xe) = iVar1 + iVar4 + (uint)bVar5;
  iVar1 = *(int *)(param_1 + 6);
  iVar4 = (int)g_7d08 >> 0xf;
  bVar5 = CARRY2(*(uint *)(param_1 + 4),g_7d08);
  *(int *)(param_1 + 0x14) = *(uint *)(param_1 + 4) + g_7d08;
  *(int *)(param_1 + 0x16) = iVar1 + iVar4 + (uint)bVar5;
  iVar1 = *(int *)(param_1 + 10);
  iVar4 = (int)g_7d06 >> 0xf;
  bVar5 = CARRY2(*(uint *)(param_1 + 8),g_7d06);
  *(int *)(param_1 + 0x10) = *(uint *)(param_1 + 8) + g_7d06;
  *(int *)(param_1 + 0x12) = iVar1 + iVar4 + (uint)bVar5;
  iVar1 = *(int *)(param_1 + 10);
  iVar4 = (int)g_7d0a >> 0xf;
  bVar5 = CARRY2(*(uint *)(param_1 + 8),g_7d0a);
  *(int *)(param_1 + 0x18) = *(uint *)(param_1 + 8) + g_7d0a;
  *(int *)(param_1 + 0x1a) = iVar1 + iVar4 + (uint)bVar5;
  return;
}


/* ===== 0x12c05 FUN_1000_2c05  callers=['FUN_1000_38f0', 'FUN_1000_3f51'] strings=[] */

void __cdecl16near FUN_1000_2c05(int param_1)

{
  uint uVar1;
  
  for (uVar1 = 1; uVar1 <= g_5942; uVar1 = uVar1 + 1) {
    g_7c36 = g_7c36 + param_1;
    if (g_7c36 < 0x79) {
      if (g_7c36 < -0x78) {
        g_7c36 = -0x78;
      }
    }
    else {
      g_7c36 = 0x78;
    }
    if (uVar1 != g_5942) {
      g_7c32 = g_7c32 + g_7c36;
    }
  }
  return;
}


/* ===== 0x12c4a FUN_1000_2c4a  callers=['FUN_1000_3f92'] strings=[] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_2c4a(int param_1,int param_2)

{
  uint uVar1;
  
  for (uVar1 = 1; uVar1 <= g_5942; uVar1 = uVar1 + 1) {
    _FUN_2315_7c38 = _FUN_2315_7c38 + param_2;
    if (param_1 < _FUN_2315_7c38) {
      _FUN_2315_7c38 = param_1;
    }
    else if (-_FUN_2315_7c38 != param_1 && _FUN_2315_7c38 <= -param_1) {
      _FUN_2315_7c38 = -param_1;
    }
    if (uVar1 != g_5942) {
      g_7c34 = g_7c34 + _FUN_2315_7c38;
    }
  }
  return;
}


/* ===== 0x12c95 FUN_1000_2c95  callers=['FUN_1000_19ba', 'FUN_1000_1a3e', 'FUN_1000_1a97', 'FUN_1000_1b13', 'FUN_1000_1bbc', 'FUN_1000_1c79', 'FUN_1000_1d33', 'FUN_1000_1d80', 'FUN_1000_1e32', 'FUN_1000_1ec9', 'FUN_1000_1f14', 'FUN_1000_1fe0'] strings=[] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_2c95(void)

{
  uint uVar1;
  
  for (uVar1 = 1; uVar1 <= g_5942; uVar1 = uVar1 + 1) {
    _FUN_2315_7c38 = _FUN_2315_7c38 + 3;
    if (_FUN_2315_7c38 < 0xc9) {
      if (_FUN_2315_7c38 < -400) {
        _FUN_2315_7c38 = -400;
      }
    }
    else {
      _FUN_2315_7c38 = 200;
    }
    if (uVar1 != g_5942) {
      g_7c34 = g_7c34 + _FUN_2315_7c38;
    }
  }
  return;
}


/* ===== 0x12cd8 FUN_1000_2cd8  callers=['FUN_1000_19ba', 'FUN_1000_1a92', 'FUN_1000_1a97', 'FUN_1000_1b13', 'FUN_1000_1bbc', 'FUN_1000_1c79', 'FUN_1000_1d33', 'FUN_1000_1d80', 'FUN_1000_1e32', 'FUN_1000_1ec9', 'FUN_1000_1f14', 'FUN_1000_1fe0'] strings=[] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_2cd8(void)

{
  g_7c32 = g_7c32 + g_7c36 * g_5942;
  g_7c34 = g_7c34 + _FUN_2315_7c38 * g_5942;
  FUN_1000_2d02();
  return;
}


/* ===== 0x12d02 FUN_1000_2d02  callers=['FUN_1000_2cd8', 'FUN_1000_30a7', 'FUN_1000_3248'] strings=[] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl16near FUN_1000_2d02(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_BP;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int in_stack_0000fff4;
  
  uVar9 = 0;
  if ((int)g_7c32 < 0xf01) {
    if ((int)g_7c32 < -0xf00) {
      g_7c32 = 0xf100;
    }
  }
  else {
    g_7c32 = 0xf00;
  }
  if ((int)g_7c34 < 0xf01) {
    if ((int)g_7c34 < -0xf00) {
      g_7c34 = 0xf100;
    }
  }
  else {
    g_7c34 = 0xf00;
  }
  bVar7 = CARRY2(g_7c2e,g_7c34);
  g_7c2e = g_7c2e + g_7c34;
  g_7c30 = g_7c30 + ((int)g_7c34 >> 0xf) + (uint)bVar7;
  bVar7 = CARRY2(g_7c26,g_7c34);
  g_7c26 = g_7c26 + g_7c34;
  g_7c28 = g_7c28 + ((int)g_7c34 >> 0xf) + (uint)bVar7;
  iVar1 = FUN_1000_e272();
  iVar2 = FUN_1000_e272();
  if ((int)g_7c34 < 1) {
    if ((int)g_7c34 < 0) {
      uVar9 = FUN_1000_e272();
      uVar6 = (g_7c28 - ((int)g_7c34 >> 0xf)) - (uint)(g_7c26 < g_7c34);
      iVar3 = FUN_1000_e272();
      if ((uVar9 != uVar6) || (in_stack_0000fff4 != iVar3)) {
        iVar3 = FUN_1000_e272();
        for (; iVar1 <= iVar2; iVar1 = iVar1 + 1) {
          if (*(int *)(*(int *)((int)g_6a76 + (iVar3 * g_6a36 + iVar1) * 2) * 2 +
                      0x13c0) != 0) {
            _FUN_2315_7c38 = 0;
            iVar1 = FUN_1000_e1b2(g_7c26,g_7c28,0x1000,0);
            uVar9 = 0x1000 - iVar1;
            g_7c34 = g_7c34 + uVar9;
            bVar7 = CARRY2(g_7c26,uVar9);
            g_7c26 = g_7c26 + uVar9;
            g_7c28 = g_7c28 + ((int)uVar9 >> 0xf) + (uint)bVar7;
            bVar7 = CARRY2(g_7c2e,uVar9);
            g_7c2e = g_7c2e + uVar9;
            g_7c30 = g_7c30 + ((int)uVar9 >> 0xf) + (uint)bVar7;
            uVar9 = 8;
            break;
          }
        }
      }
    }
  }
  else {
    uVar9 = FUN_1000_e272();
    uVar6 = (g_7c30 - ((int)g_7c34 >> 0xf)) - (uint)(g_7c2e < g_7c34);
    iVar3 = FUN_1000_e272();
    if ((uVar9 != uVar6) || (in_stack_0000fff4 != iVar3)) {
      iVar3 = FUN_1000_e272();
      for (; iVar1 <= iVar2; iVar1 = iVar1 + 1) {
        if (*(int *)(*(int *)((int)g_6a76 + (iVar3 * g_6a36 + iVar1) * 2) * 2 + 0xa34)
            != 0) {
          _FUN_2315_7c38 = 0;
          uVar9 = FUN_1000_e1b2(g_7c2e + 1,g_7c30 + (uint)(0xfffe < g_7c2e),
                                0x1000,0);
          g_7c34 = g_7c34 - uVar9;
          bVar7 = g_7c26 < uVar9;
          g_7c26 = g_7c26 - uVar9;
          g_7c28 = (g_7c28 - ((int)uVar9 >> 0xf)) - (uint)bVar7;
          bVar7 = g_7c2e < uVar9;
          g_7c2e = g_7c2e - uVar9;
          g_7c30 = (g_7c30 - ((int)uVar9 >> 0xf)) - (uint)bVar7;
          uVar9 = 2;
          break;
        }
      }
    }
  }
  bVar7 = CARRY2(g_7c22,g_7c32);
  g_7c22 = g_7c22 + g_7c32;
  g_7c24 = g_7c24 + ((int)g_7c32 >> 0xf) + (uint)bVar7;
  bVar7 = CARRY2(g_7c2a,g_7c32);
  g_7c2a = g_7c2a + g_7c32;
  g_7c2c = g_7c2c + ((int)g_7c32 >> 0xf) + (uint)bVar7;
  FUN_1000_e272();
  iVar1 = FUN_1000_e272();
  if ((int)g_7c32 < 1) {
    if ((int)g_7c32 < 0) {
      iVar2 = FUN_1000_e272();
      iVar4 = (int)g_7c32 >> 0xf;
      iVar5 = (g_7c24 - iVar4) - (uint)(g_7c22 < g_7c32);
      iVar3 = FUN_1000_e272();
      if ((iVar2 != iVar5) || (unaff_BP != iVar3)) {
        iVar2 = FUN_1000_e272();
        for (; iVar4 <= iVar1; iVar4 = iVar4 + 1) {
          if (*(int *)(*(int *)((int)g_6a76 + (iVar4 * g_6a36 + iVar2) * 2) * 2 +
                      0xefa) != 0) {
            g_7c36 = 0;
            iVar1 = FUN_1000_e1b2(g_7c22,g_7c24,0x1000);
            uVar6 = 0x1000 - iVar1;
            bVar7 = CARRY2(g_7c22,uVar6);
            bVar8 = CARRY2(g_7c2a,uVar6);
            g_7c22 = g_7c22 + uVar6;
            g_7c24 = g_7c24 + ((int)uVar6 >> 0xf) + (uint)bVar7;
            g_7c2a = g_7c2a + uVar6;
            g_7c2c = g_7c2c + ((int)uVar6 >> 0xf) + (uint)bVar8;
            g_7c32 = g_7c32 + uVar6;
            return uVar9 | 1;
          }
        }
      }
    }
  }
  else {
    iVar2 = FUN_1000_e272();
    iVar4 = (int)g_7c32 >> 0xf;
    iVar5 = (g_7c2c - iVar4) - (uint)(g_7c2a < g_7c32);
    iVar3 = FUN_1000_e272();
    if ((iVar2 != iVar5) || (unaff_BP != iVar3)) {
      iVar2 = FUN_1000_e272();
      for (; iVar4 <= iVar1; iVar4 = iVar4 + 1) {
        if (*(int *)(*(int *)((int)g_6a76 + (iVar4 * g_6a36 + iVar2) * 2) * 2 + 0x1886
                    ) != 0) {
          g_7c36 = 0;
          uVar6 = FUN_1000_e1b2(g_7c2a + 1,g_7c2c + (uint)(0xfffe < g_7c2a),
                                0x1000);
          bVar7 = g_7c22 < uVar6;
          bVar8 = g_7c2a < uVar6;
          g_7c22 = g_7c22 - uVar6;
          g_7c24 = (g_7c24 - ((int)uVar6 >> 0xf)) - (uint)bVar7;
          g_7c2a = g_7c2a - uVar6;
          g_7c2c = (g_7c2c - ((int)uVar6 >> 0xf)) - (uint)bVar8;
          g_7c32 = g_7c32 - uVar6;
          return uVar9 | 4;
        }
      }
    }
  }
  return uVar9;
}


/* ===== 0x130a7 FUN_1000_30a7  callers=[] strings=[] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_30a7(undefined2 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined2 unaff_SI;
  undefined2 unaff_DI;
  bool bVar6;
  
  FUN_1000_e39b(0x2315,(undefined2 *)&g_7c16,0x2315,unaff_DI);
  if ((g_7c1c < *(int *)(param_2 + 6)) ||
     ((g_7c1c <= *(int *)(param_2 + 6) && (g_7c1a <= *(uint *)(param_2 + 4))))) {
    iVar1 = g_7c32 - *(int *)(param_2 + 0x1c);
    iVar2 = g_7c2a - *(int *)(param_2 + 0xc);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x1c) - g_7c32;
    iVar2 = *(int *)(param_2 + 0x14) - g_7c22;
  }
  iVar1 = iVar1 + 2;
  uVar3 = iVar2 + 1;
  if ((g_7c20 < *(int *)(param_2 + 10)) ||
     ((g_7c20 <= *(int *)(param_2 + 10) && (g_7c1e <= *(uint *)(param_2 + 8))))) {
    iVar2 = g_7c34 - *(int *)(param_2 + 0x1e);
    iVar4 = g_7c2e - *(int *)(param_2 + 0x10);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x1e) - g_7c34;
    iVar4 = *(int *)(param_2 + 0x18) - g_7c26;
  }
  iVar2 = iVar2 + 2;
  uVar5 = iVar4 + 1;
  g_7c34 = 0;
  g_7c32 = 0;
  if (iVar2 < (int)uVar5) {
    if ((*(int *)(param_2 + 6) < g_7c1c) ||
       ((*(int *)(param_2 + 6) <= g_7c1c && (*(uint *)(param_2 + 4) <= g_7c1a)))) {
      g_7c32 = uVar3;
      if (g_7c36 < *(int *)(param_2 + 0x20)) {
        g_7c36 = *(int *)(param_2 + 0x20);
      }
    }
    else {
      g_7c32 = -uVar3;
      if (*(int *)(param_2 + 0x20) < g_7c36) {
        g_7c36 = *(int *)(param_2 + 0x20);
      }
    }
  }
  else if ((*(int *)(param_2 + 10) < g_7c20) ||
          ((*(int *)(param_2 + 10) <= g_7c20 && (*(uint *)(param_2 + 8) <= g_7c1e))))
  {
    g_7c34 = uVar5;
    if (_FUN_2315_7c38 < *(int *)(param_2 + 0x22)) {
      _FUN_2315_7c38 = *(int *)(param_2 + 0x22);
    }
  }
  else {
    g_7c32 = *(uint *)(param_2 + 0x1c);
    if (g_7c48 == (char *)0x3d22) {
      g_7c48 = (char *)0x38f0;
    }
    else if (g_7c48 == (char *)0x3f51) {
      g_7c48 = (char *)0x40dd;
      g_7c40 = 0;
      g_7c42 = g_7c36;
      g_7c36 = 0;
    }
    g_7c46 = 1;
    _FUN_2315_7c38 = *(int *)(param_2 + 0x22);
    g_7c34 = 0xff80 - uVar5;
    if (_FUN_2315_7c38 < 0) {
      _FUN_2315_7c38 = _FUN_2315_7c38 / 2;
    }
  }
  FUN_1000_2d02();
  bVar6 = CARRY2(g_7c1a,g_7c32);
  g_7c1a = g_7c1a + g_7c32;
  g_7c1c = g_7c1c + ((int)g_7c32 >> 0xf) + (uint)bVar6;
  bVar6 = CARRY2(g_7c1e,g_7c34);
  g_7c1e = g_7c1e + g_7c34;
  g_7c20 = g_7c20 + ((int)g_7c34 >> 0xf) + (uint)bVar6;
  FUN_1000_2aa6();
  FUN_1000_e39b(0x2315,param_1,0x2315,unaff_SI);
  FUN_1000_34a1(uVar3,iVar2,iVar1);
  return;
}


/* ===== 0x13248 FUN_1000_3248  callers=[] strings=[] */

/* WARNING: Removing unreachable block (ram,0x0001329b) */

void FUN_1000_3248(undefined2 param_1,int param_2)

{
  int iVar1;
  undefined2 unaff_SI;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  FUN_1000_e39b(0x2315,(undefined2 *)&g_7c16,0x2315,unaff_SI);
  uVar3 = FUN_1000_e1a3(g_7c2a + g_7c22,
                        g_7c2c + g_7c24 + (uint)CARRY2(g_7c2a,g_7c22),2,
                        0);
  uVar6 = 0;
  uVar5 = 2;
  iVar1 = *(int *)(param_2 + 0xe) + *(int *)(param_2 + 0x16) +
          (uint)CARRY2(*(uint *)(param_2 + 0xc),*(uint *)(param_2 + 0x14));
  lVar4 = FUN_1000_e1a3(*(uint *)(param_2 + 0xc) + *(uint *)(param_2 + 0x14),iVar1,2,0,
                        (int)((ulong)uVar3 >> 0x10),(int)uVar3);
  if (CONCAT22(iVar1,uVar5) < lVar4) {
    iVar1 = (g_7c2a - *(int *)(param_2 + 0xc)) + 1;
    g_7c32 = -iVar1;
    if (iVar1 != -0x78 && 0x77 < (int)g_7c32) {
      g_7c34 = 0x78;
    }
  }
  else {
    g_7c32 = (*(int *)(param_2 + 0x14) - g_7c22) + 1;
    if ((int)g_7c32 < -0x78) {
      g_7c34 = 0xff88;
    }
  }
  FUN_1000_2d02();
  bVar2 = CARRY2(g_7c1a,g_7c32);
  g_7c1a = g_7c1a + g_7c32;
  g_7c1c = g_7c1c + ((int)g_7c32 >> 0xf) + (uint)bVar2;
  bVar2 = CARRY2(g_7c1e,g_7c34);
  g_7c1e = g_7c1e + g_7c34;
  g_7c20 = g_7c20 + ((int)g_7c34 >> 0xf) + (uint)bVar2;
  FUN_1000_2aa6();
  FUN_1000_e39b(0x2315,param_1,0x2315,uVar6);
  FUN_1000_34a1();
  return;
}


/* ===== 0x13300 FUN_1000_3300  callers=['FUN_1e7c_0e9f'] strings=[] */

void __cdecl16near FUN_1000_3300(void)

{
  return;
}


/* ===== 0x13301 FUN_1000_3301  callers=['FUN_1000_4c32'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n'] */

undefined2 __cdecl16near FUN_1000_3301(void)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  if ((g_7c1c < (int)g_5472) ||
     ((g_7c1c <= (int)g_5472 &&
      (g_7c1a <= (uint)g_5470)))) {
    if ((g_7c1c < 1) && (g_7c1c < 0)) {
      g_7c1a = 0;
      g_7c1c = 0;
    }
  }
  else {
    g_7c1a = g_5470;
    g_7c1c = g_5472;
  }
  if ((g_7c20 < 1) && (g_7c20 < 0)) {
    g_7c1e = 0;
    g_7c20 = 0;
  }
  else if (((int)g_5476 <= g_7c20) &&
          (((int)g_5476 < g_7c20 ||
           ((uint)g_5474 < g_7c1e)))) {
    g_7c16 = 0;
    return 1;
  }
  iVar1 = FUN_1000_e272();
  iVar2 = FUN_1000_e272();
  if ((((iVar1 < g_5484 + -8) ||
       (iVar2 < g_5940 + -8)) ||
      (g_5484 + 0x1c < iVar1)) ||
     (g_5940 + 0x12 < iVar2)) {
    if (g_7c16 < 9) {
      g_7c18 = 0;
    }
    else {
      g_7c16 = 0;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


/* ===== 0x133e9 FUN_1000_33e9  callers=[] strings=[] */

void __cdecl16near FUN_1000_33e9(void)

{
  return;
}


/* ===== 0x133ee FUN_1000_33ee  callers=['FUN_1000_38f0', 'FUN_1000_3f92'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_33ee(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = g_547a +
          (uint)(0xfff7 < (uint)g_5478);
  if ((iVar1 < g_7c1c) ||
     ((iVar1 <= g_7c1c &&
      (g_5478 + 8 <= g_7c1a)))) {
    if ((g_7c1c < g_5bdc) ||
       ((iVar1 = g_5bdc, uVar2 = g_5bda, g_7c1c <= g_5bdc &&
        (g_7c1a <= g_5bda)))) goto LAB_1000_344e;
  }
  else {
    iVar1 = g_547a +
            (uint)(0xfff7 < (uint)g_5478);
    uVar2 = g_5478 + 8;
  }
  g_7c36 = 0;
  g_7c32 = 0;
  g_7c1a = uVar2;
  g_7c1c = iVar1;
LAB_1000_344e:
  if (((int)g_547e < g_7c20) ||
     (((int)g_547e <= g_7c20 &&
      ((uint)g_547c <= g_7c1e)))) {
    if ((g_5be0 <= g_7c20) &&
       ((g_5be0 < g_7c20 || (g_5bde < g_7c1e)))) {
      FUN_1000_bf8d(0x1b);
      FUN_1000_c019();
      FUN_1000_4335();
    }
  }
  else {
    g_7c34 = 0;
    _FUN_2315_7c38 = 0;
    g_7c1e = g_547c;
    g_7c20 = g_547e;
  }
  return;
}


/* ===== 0x134a1 FUN_1000_34a1  callers=['FUN_1000_30a7', 'FUN_1000_3248', 'FUN_1000_4c32'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_34a1(void)

{
  uint uVar1;
  bool bVar2;
  
  if (g_6d3c == (char *)0x4178) {
    return;
  }
  if (g_6d3c == (char *)0x4281) {
    return;
  }
  if (0 < (int)g_6d26) {
    if ((-1 < (int)((g_6d10 - g_6d02) - (uint)(g_6d0e < g_6d00))) &&
       ((g_6d10 - g_6d02 != (uint)(g_6d0e < g_6d00) ||
        (0xb000 < g_6d0e - g_6d00)))) {
      bVar2 = CARRY2(g_6d00,g_6d26);
      g_6d00 = g_6d00 + g_6d26;
      g_6d02 = g_6d02 + ((int)g_6d26 >> 0xf) + (uint)bVar2;
      if ((g_79b8 <= g_6d02) &&
         ((g_79b8 < g_6d02 || (g_79b6 < g_6d00)))) {
        g_6d00 = g_79b6;
        g_6d02 = g_79b8;
      }
      goto LAB_1000_357b;
    }
  }
  if ((int)g_6d26 < 0) {
    bVar2 = (int)((g_6d10 - g_6d02) - (uint)(g_6d0e < g_6d00)) < 0;
    if ((g_6d10 - g_6d02 == (uint)(g_6d0e < g_6d00) || bVar2) &&
       ((bVar2 || (g_6d0e - g_6d00 < 0x9000)))) {
      bVar2 = CARRY2(g_6d00,g_6d26);
      g_6d00 = g_6d00 + g_6d26;
      g_6d02 = g_6d02 + ((int)g_6d26 >> 0xf) + (uint)bVar2;
      if ((g_6d02 <= (int)g_547a) &&
         ((g_6d02 < (int)g_547a ||
          (g_6d00 < (uint)g_5478)))) {
        g_6d00 = g_5478;
        g_6d02 = g_547a;
      }
    }
  }
LAB_1000_357b:
  if (0 < (int)g_6d28) {
    if ((-1 < (int)((g_6d14 - g_6d06) - (uint)(g_6d12 < g_6d04))) &&
       ((g_6d14 - g_6d06 != (uint)(g_6d12 < g_6d04) ||
        (0x7000 < g_6d12 - g_6d04)))) {
      uVar1 = g_6d04 + g_6d28;
      g_6d06 =
           g_6d06 + ((int)g_6d28 >> 0xf) + (uint)CARRY2(g_6d04,g_6d28);
      if (g_6d06 < g_79bc) {
        g_6d04 = uVar1;
        return;
      }
      if ((g_6d06 <= g_79bc) && (uVar1 <= g_79ba)) {
        g_6d04 = uVar1;
        return;
      }
      g_6d04 = g_79ba;
      g_6d06 = g_79bc;
      return;
    }
  }
  if ((int)g_6d28 < 0) {
    bVar2 = (int)((g_6d14 - g_6d06) - (uint)(g_6d12 < g_6d04)) < 0;
    if ((g_6d14 - g_6d06 == (uint)(g_6d12 < g_6d04) || bVar2) &&
       ((bVar2 || (g_6d12 - g_6d04 < 0x3000)))) {
      bVar2 = CARRY2(g_6d04,g_6d28);
      g_6d04 = g_6d04 + g_6d28;
      g_6d06 = g_6d06 + ((int)g_6d28 >> 0xf) + (uint)bVar2;
      if ((g_6d06 <= (int)g_547e) &&
         ((g_6d06 < (int)g_547e ||
          (g_6d04 < (uint)g_547c)))) {
        g_6d04 = g_547c;
        g_6d06 = g_547e;
      }
    }
  }
  return;
}


/* ===== 0x1361b FUN_1000_361b  callers=['FUN_1000_365b'] strings=[] */

void __cdecl16near FUN_1000_361b(void)

{
  code *pcVar1;
  
  g_7c14 = 1;
  FUN_1000_c17c(1);
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}


/* ===== 0x1363b FUN_1000_363b  callers=['FUN_1000_365b'] strings=[] */

void __cdecl16near FUN_1000_363b(void)

{
  code *pcVar1;
  
  g_7c14 = 0;
  FUN_1000_c17c(1);
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}


/* ===== 0x1365b FUN_1000_365b  callers=['FUN_1000_38f0', 'FUN_1000_3f92'] strings=[] */

void __cdecl16near FUN_1000_365b(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  char local_4;
  
  FUN_1000_bf8d(0x19);
  iVar7 = g_6d06;
  uVar2 = g_6d04;
  iVar5 = g_6d02;
  uVar1 = g_6d00;
  uVar9 = (undefined2)((ulong)g_6a76 >> 0x10);
  iVar8 = (int)g_6a76;
  if (*(int *)(iVar8 + (g_7c10 + (g_7c12 + 5) * g_6a36 + 3) * 2) == 0x1df) {
    for (iVar8 = 1; iVar8 < 0x50; iVar8 = iVar8 + 1) {
      FUN_1000_0239();
      iVar3 = FUN_1000_c0f6(0x40);
      uVar4 = (iVar3 + -0x20) * 0x100;
      g_6d00 = uVar1 + (iVar3 + -0x20) * -0x100;
      g_6d02 = (iVar5 - ((int)uVar4 >> 0xf)) - (uint)(uVar1 < uVar4);
      iVar3 = FUN_1000_c0f6(0x40);
      uVar4 = (iVar3 + -0x20) * 0x100;
      g_6d04 = uVar2 + (iVar3 + -0x20) * -0x100;
      g_6d06 = (iVar7 - ((int)uVar4 >> 0xf)) - (uint)(uVar2 < uVar4);
      FUN_1000_02c5(g_7c1a,g_7c1c,g_7c1e,g_7c20,g_7c3e);
      FUN_1000_0289();
    }
    FUN_1000_62b8(5,1);
    FUN_1000_64c9(0x2408/*"Oops."*/);
    FUN_1000_c17c(100);
    g_6a8e = 3;
  }
  else {
    iVar5 = *(int *)(iVar8 + (g_7c12 * g_6a36 + g_7c10) * 2);
    if (iVar5 == 0x10f) {
      if (g_7c14 == 0) {
        FUN_1000_361b();
      }
      else {
        FUN_1000_363b();
      }
    }
    else {
      if (iVar5 == 0x1e0) {
        *(undefined2 *)(iVar8 + (g_7c12 * g_6a36 + g_7c10) * 2) = 0x1ed;
      }
      else if (iVar5 == 0x1ed) {
        *(undefined2 *)(iVar8 + (g_7c12 * g_6a36 + g_7c10) * 2) = 0x1e0;
      }
      uVar9 = *(undefined2 *)
               ((int)g_6a7a + (g_7c12 * g_6a36 + g_7c10) * 2);
      local_4 = (char)uVar9;
      iVar5 = g_7c10 + local_4;
      iVar7 = g_7c12 + (char)((uint)uVar9 >> 8);
      iVar8 = 0;
      while( true ) {
        if ((g_7c0e <= iVar8) ||
           ((((((int*)&g_79d6)[iVar8 * 0x12] != 0 &&
              (*(int *)(iVar8 * 0x24 + 0x79d0) == iVar5 >> 0xf)) &&
             (*(int *)(iVar8 * 0x24 + 0x79ce) == iVar5)) &&
            ((*(int *)(iVar8 * 0x24 + 0x79d4) == iVar7 >> 0xf &&
             (*(int *)(iVar8 * 0x24 + 0x79d2) == iVar7)))))) break;
        iVar8 = iVar8 + 1;
      }
      if (iVar8 < g_7c0e) {
        if (((int*)&g_79f0)[iVar8 * 0x12] == 0x4bc3) {
          ((int*)&g_79f0)[iVar8 * 0x12] = 0x4b54;
        }
        else {
          ((int*)&g_79f0)[iVar8 * 0x12] = 0x4bc3;
        }
      }
      else {
        piVar6 = (int *)FUN_1000_29e9();
        piVar6[4] = 2;
        piVar6[0x11] = 0x4b54;
        *piVar6 = iVar5;
        piVar6[1] = iVar5 >> 0xf;
        piVar6[2] = iVar7;
        piVar6[3] = iVar7 >> 0xf;
        piVar6[5] = 0;
        if (*(int *)(*(int *)((int)g_6a76 + (iVar5 + iVar7 * g_6a36 + 1) * 2) * 2 +
                    0x1886) == 0) {
          piVar6[6] = 1;
        }
        else {
          piVar6[6] = -1;
        }
        piVar6[7] = *(int *)((int)g_6a76 + (iVar7 * g_6a36 + iVar5) * 2);
        piVar6[8] = 0;
      }
    }
  }
  return;
}


/* ===== 0x138f0 FUN_1000_38f0  callers=[] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_38f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  
  if (g_7c46 == 0) {
    iVar2 = FUN_1000_e272();
    iVar3 = FUN_1000_e272();
    iVar4 = FUN_1000_e272();
    iVar7 = 1;
    for (; iVar2 <= iVar3; iVar2 = iVar2 + 1) {
      iVar1 = *(int *)(*(int *)((int)g_6a76 + ((iVar4 + 1) * g_6a36 + iVar2) * 2) * 2
                      + 0xa34);
      if (1 < iVar1) {
        iVar7 = iVar1;
      }
    }
  }
  else {
    iVar7 = 1;
  }
  if (g_79c4 != 0) {
    g_7c44 = g_7c36;
    g_7c36 = 0;
    g_7c42 = 0;
    g_7c40 = 0;
    if (g_5e7a < 0) {
      g_7c3c = 0xe;
    }
    else {
      g_7c3c = 8;
    }
    g_7c48 = (char *)0x3c14;
  }
  if (iVar7 < 3) {
    switch(g_79c2) {
    case 1:
    case 2:
    case 3:
      FUN_1000_2c05(2);
      if (g_7c36 < 0) {
        g_79c2 = 8;
      }
      break;
    case 5:
    case 6:
    case 7:
      FUN_1000_2c05(0xfffe);
      if (0 < g_7c36) {
        g_79c2 = 8;
      }
    }
  }
  if ((iVar7 == 1) && (g_79c2 == 8)) {
    if (g_7c36 < 1) {
      if ((g_7c36 < 0) && (FUN_1000_2c05(3), 0 < g_7c36)) {
        g_7c36 = 0;
      }
    }
    else {
      FUN_1000_2c05(0xfffd);
      if (g_7c36 < 0) {
        g_7c36 = 0;
      }
    }
  }
  if (iVar7 == 3) {
    if (g_5e7a < 1) {
      if (g_5e7a < 0) {
        g_7c36 = -0xb4;
      }
    }
    else {
      g_7c36 = 0xb4;
    }
  }
  if (g_7c36 == 0) {
    if (g_5e7a < 0) {
      g_7c3e = 4;
    }
    else {
      g_7c3e = 0;
    }
  }
  else {
    if (g_7c36 < 1) {
      g_7c3e = 4;
      if (iVar7 < 3) {
        g_7c3e = ((uint)g_4f62 >> 4 & 3) + 4;
      }
    }
    else {
      g_7c3e = 0;
      if (iVar7 < 3) {
        g_7c3e = (uint)g_4f62 >> 4 & 3;
      }
    }
    g_5e7a = g_7c36;
  }
  if (((g_7c36 != 0) && (((uint)g_4f62 >> 4 & 1) != 0)) &&
     (iVar7 < 3)) {
    if (((uint)g_4f62 >> 5 & 1) == 0) {
      uVar5 = 4;
    }
    else {
      uVar5 = 0x1e;
    }
    FUN_1000_bf8d(uVar5);
  }
  FUN_1000_2c95();
  uVar6 = FUN_1000_2cd8();
  FUN_1000_33ee();
  if ((((uVar6 & 4) != 0) || ((uVar6 & 1) != 0)) &&
     (((uint)g_4f62 >> 4 & 1) != 0)) {
    FUN_1000_bf8d(5);
  }
  if (((uVar6 & 2) == 0) && (g_7c46 == 0)) {
    g_7c48 = (char *)0x3d22;
    FUN_1000_bf8d(0x1b);
  }
  else {
    if (g_79c4 != 0) {
      g_7c44 = g_7c36;
      g_7c36 = 0;
      g_7c42 = 0;
      g_7c40 = 0;
      if (g_5e7a < 0) {
        g_7c3c = 0xe;
      }
      else {
        g_7c3c = 8;
      }
      g_7c48 = (char *)0x3c14;
    }
    if ((g_79c6 != 0) && (g_79cc == 0)) {
      if (g_7c4e == 0) {
        g_7c40 = 0;
        g_7c42 = g_7c36;
        g_7c36 = 0;
        if (g_a5c6 != 0) {
          g_7c48 = (char *)0x40dd;
        }
      }
      else {
        FUN_1000_365b();
      }
    }
    if ((((g_79c4 != 0) && (g_79c6 != 0)) && (g_79ca == 0)) &&
       (g_79cc == 0)) {
      g_7c32 = 0;
      g_7c42 = 0;
      g_7c40 = 0;
      g_7c48 = (char *)0x3e9b;
      if (g_5e7a < 1) {
        g_7c3e = 0x15;
      }
      else {
        g_7c3e = 0x14;
      }
    }
    if (g_7c46 != 0) {
      g_7c46 = g_7c46 + -1;
    }
  }
  return;
}


/* ===== 0x13f51 FUN_1000_3f51  callers=[] strings=[] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_3f51(void)

{
  uint uVar1;
  undefined2 unaff_SI;
  undefined2 unaff_SS;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined1 local_8 [6];
  
  uVar3 = 0x2315;
  puVar2 = (undefined2 *)&g_79c2;
  FUN_1000_5c1e(local_8);
  FUN_1000_e39b(unaff_SS,puVar2,uVar3,unaff_SI);
  switch(g_79c2) {
  case 1:
  case 2:
  case 3:
    FUN_1000_2c05(1);
    if (g_7c36 < 0) {
      g_79c2 = 8;
    }
    break;
  case 5:
  case 6:
  case 7:
    FUN_1000_2c05(0xffff);
    if (0 < g_7c36) {
      g_79c2 = 8;
    }
  }
  if ((g_79c4 != 0) && (_FUN_2315_7c38 < 0)) {
    FUN_1000_2c4a(200,0xffff);
  }
  if ((g_5bd8 != 0) && (g_79c4 != 0)) {
    _FUN_2315_7c38 = -200;
  }
  if (g_7c36 != 0) {
    g_5e7a = g_7c36;
  }
  if (g_5e7a < 0) {
    g_7c3c = 0x1a;
  }
  else {
    g_7c3c = 0x18;
  }
  g_7c3e = g_7c3c;
  FUN_1000_2c95();
  uVar1 = FUN_1000_2cd8();
  if ((((uVar1 & 4) != 0) || ((uVar1 & 1) != 0)) &&
     (((uint)g_4f62 >> 4 & 1) != 0)) {
    FUN_1000_bf8d(5);
  }
  if ((uVar1 & 2) != 0) {
    g_7c48 = (char *)0x40dd;
    g_7c40 = 0;
    g_7c42 = g_7c36;
    g_7c36 = 0;
  }
  if ((uVar1 & 8) != 0) {
    FUN_1000_bf8d(0x15);
  }
  FUN_1000_33ee();
  if ((g_79c6 != 0) && (g_79cc == 0)) {
    if (g_7c4e == 0) {
      g_7c48 = (char *)0x3d22;
    }
    else {
      FUN_1000_365b();
    }
  }
  if ((g_79c4 != 0) && (g_79c6 != 0)) {
    g_7c32 = 0;
    g_7c42 = 0;
    g_7c40 = 0;
    g_7c48 = (char *)0x3e9b;
    if (g_5e7a < 1) {
      g_7c3e = 0x15;
    }
    else {
      g_7c3e = 0x14;
    }
  }
  if (g_7c46 != 0) {
    g_7c46 = g_7c46 + -1;
  }
  return;
}


/* ===== 0x13f92 FUN_1000_3f92  callers=['FUN_1e7c_0e9f'] strings=[' place!\n\n\nEnter your name:'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_3f92(void)

{
  uint uVar1;
  char in_SF;
  char in_OF;
  
  if (in_OF != in_SF) {
    g_79c2 = 8;
  }
  if ((g_79c4 != 0) && (_FUN_2315_7c38 < 0)) {
    FUN_1000_2c4a(200,0xffff);
  }
  if ((g_5bd8 != 0) && (g_79c4 != 0)) {
    _FUN_2315_7c38 = -200;
  }
  if (g_7c36 != 0) {
    g_5e7a = g_7c36;
  }
  if (g_5e7a < 0) {
    g_7c3c = 0x1a;
  }
  else {
    g_7c3c = 0x18;
  }
  g_7c3e = g_7c3c;
  FUN_1000_2c95();
  uVar1 = FUN_1000_2cd8();
  if ((((uVar1 & 4) != 0) || ((uVar1 & 1) != 0)) &&
     (((uint)g_4f62 >> 4 & 1) != 0)) {
    FUN_1000_bf8d(5);
  }
  if ((uVar1 & 2) != 0) {
    g_7c48 = (char *)0x40dd;
    g_7c40 = 0;
    g_7c42 = g_7c36;
    g_7c36 = 0;
  }
  if ((uVar1 & 8) != 0) {
    FUN_1000_bf8d(0x15);
  }
  FUN_1000_33ee();
  if ((g_79c6 != 0) && (g_79cc == 0)) {
    if (g_7c4e == 0) {
      g_7c48 = (char *)0x3d22;
    }
    else {
      FUN_1000_365b();
    }
  }
  if ((g_79c4 != 0) && (g_79c6 != 0)) {
    g_7c32 = 0;
    g_7c42 = 0;
    g_7c40 = 0;
    g_7c48 = (char *)0x3e9b;
    if (g_5e7a < 1) {
      g_7c3e = 0x15;
    }
    else {
      g_7c3e = 0x14;
    }
  }
  if (g_7c46 != 0) {
    g_7c46 = g_7c46 + -1;
  }
  return;
}


/* ===== 0x14178 FUN_1000_4178  callers=[] strings=[' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_4178(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = g_7c40 >> 0xf;
  iVar5 = (int)g_7c42 >> 0xf;
  g_7c32 = g_5942 * 0x3c;
  g_7c3e = (uint)g_4f62 >> 4 & 3;
  g_5e7a = g_7c36;
  uVar2 = g_7c42;
  FUN_1000_e251(g_7c42,iVar5,g_7c40,iVar4);
  iVar3 = iVar4;
  uVar1 = FUN_1000_e251(iVar5);
  FUN_1000_0501(uVar1,iVar4);
  iVar5 = (0xfffe < uVar2) + 0xa0;
  FUN_1000_e251();
  uVar1 = FUN_1000_e251(iVar5);
  FUN_1000_0501(uVar1,iVar3);
  uVar2 = FUN_1000_e251();
  uVar2 = iVar5 + (uint)(0xfffe < uVar2);
  uVar1 = FUN_1000_e251(iVar5);
  FUN_1000_0501(uVar1,uVar2);
  FUN_1000_e251();
  iVar5 = iVar5 + (uint)(0xfffe < uVar2);
  iVar3 = FUN_1000_e251();
  FUN_1000_0501(iVar3,iVar5);
  uVar2 = FUN_1000_e251();
  if ((iVar3 <= g_7c1c) && ((iVar3 != g_7c1c || (uVar2 <= g_7c1a)))) {
    g_7c16 = 0;
    g_6a8e = 1;
  }
  return;
}


/* ===== 0x14281 FUN_1000_4281  callers=[] strings=[' place!\n\n\nEnter your name:'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_4281(void)

{
  int iVar1;
  
  g_7c40 = g_7c40 + g_5942;
  if (199 < g_7c40) {
    g_7c40 = -999;
    iVar1 = FUN_1000_c168();
    g_7c36 = iVar1 + -0x80;
    _FUN_2315_7c38 = -400;
  }
  g_7c3e = ((uint)g_4f62 >> 4 & 1) + 0x16;
  g_7c32 = g_7c36 * g_5942;
  g_7c34 = _FUN_2315_7c38 * g_5942;
  if ((g_7c30 <= g_6d06) &&
     ((g_7c30 < g_6d06 || (g_7c2e < g_6d04)))) {
    g_7c16 = 0;
  }
  return;
}


/* ===== 0x142e9 FUN_1000_42e9  callers=['FUN_1000_4373', 'FUN_1000_468d'] strings=[] */

void __cdecl16near FUN_1000_42e9(void)

{
  bool bVar1;
  
  if ((g_5bd8 == 0) && (g_7c4c == 0)) {
    g_6d3c = (char *)0x4281;
    g_6d3e = 0x33e9;
    bVar1 = 0xf7ff < g_6d12;
    g_6d12 = g_6d12 + 0x800;
    g_6d14 = g_6d14 + (uint)bVar1;
    g_6d2c = 0;
    g_6d2a = 0;
    g_6d34 = 0;
    g_6d32 = 0x16;
    FUN_1000_bf8d(8);
  }
  return;
}


/* ===== 0x14335 FUN_1000_4335  callers=['FUN_1000_33ee'] strings=[] */

void __cdecl16near FUN_1000_4335(void)

{
  bool bVar1;
  
  g_7c48 = (char *)0x4281;
  g_7c4a = 0x33e9;
  bVar1 = 0xf7ff < g_7c1e;
  g_7c1e = g_7c1e + 0x800;
  g_7c20 = g_7c20 + (uint)bVar1;
  g_7c36 = 0;
  g_6d2c = 0;
  g_6d2a = 0;
  g_7c40 = 0;
  g_7c3e = 0x16;
  FUN_1000_bf8d(8);
  return;
}


/* ===== 0x14373 FUN_1000_4373  callers=['FUN_1000_4c32'] strings=[] */

void __cdecl16near FUN_1000_4373(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  
  if (g_6d3c != (char *)0x4281) {
    g_7c4e = 0;
    iVar2 = FUN_1000_e272();
    iVar3 = FUN_1000_e272();
    iVar4 = FUN_1000_e272();
    iVar5 = FUN_1000_e272();
    for (; iVar7 = iVar4, iVar2 <= iVar3; iVar2 = iVar2 + 1) {
      for (; iVar7 <= iVar5; iVar7 = iVar7 + 1) {
        uVar8 = (undefined2)((ulong)g_6a76 >> 0x10);
        iVar6 = *(int *)((int)g_6a76 + (iVar7 * g_6a36 + iVar2) * 2);
        iVar1 = *(int *)(iVar6 * 2 + 0x56e);
        if (iVar1 != 0) {
          switch(iVar1) {
          case 1:
            FUN_1000_42e9();
            break;
          case 2:
          case 3:
          case 4:
          case 5:
            if (((int*)&g_a5c6)[iVar1] == 0) {
              if (g_6d26 < 1) {
                g_6d10 = g_6d10 + (uint)(0xefff < g_6d0e);
                g_6d0e = g_6d0e + 0x1000 & 0xf000;
              }
              else {
                g_6d0e = g_6d0e & 0xf000;
              }
            }
            else {
              FUN_1000_2863(iVar2,iVar7);
            }
            break;
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
            FUN_1000_0d8e(*(undefined2 *)(iVar1 * 2 + 0x1fde));
            FUN_1000_bf8d(9);
            uVar8 = (undefined2)((ulong)g_6a76 >> 0x10);
            iVar6 = (int)g_6a76;
            if (*(uint *)(iVar6 + (iVar7 * g_6a36 + iVar2) * 2) < 0x131) {
              *(undefined2 *)(iVar6 + (iVar7 * g_6a36 + iVar2) * 2) = 0x8f;
            }
            else {
              *(undefined2 *)(iVar6 + (iVar7 * g_6a36 + iVar2) * 2) = 0x114;
            }
            break;
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
            if (iVar1 == 0xb) {
              g_a5c0 = 1;
            }
            if (iVar1 == 0xc) {
              g_a5c8 = 1;
            }
            if (iVar1 == 0xd) {
              g_a5c2 = 1;
            }
            if (iVar1 == 0xe) {
              g_a5c4 = 1;
            }
            FUN_1000_0d8e(10000);
            FUN_1000_bf8d(0xb);
            *(undefined2 *)((int)g_6a76 + (iVar7 * g_6a36 + iVar2) * 2) = 0x8f;
            break;
          case 0xf:
          case 0x10:
            if (iVar1 == 0xf) {
              g_a5f4 = g_a5f4 + 5;
            }
            if (iVar1 == 0x10) {
              g_a5c6 = 1;
            }
            FUN_1000_bf8d(10);
            *(undefined2 *)((int)g_6a76 + (iVar7 * g_6a36 + iVar2) * 2) = 0x8f;
            break;
          case 0x11:
            if (g_6d3c == (char *)0x38f0) {
              FUN_1000_bf8d(0xf);
              g_6d3c = (char *)0x4178;
              g_6d3e = 0x33e9;
              g_6d34 = iVar2 + 2;
              g_6d36 = iVar7;
            }
            break;
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
            *(undefined2 *)(iVar1 * 2 + -0x5a5a) = 1;
            FUN_1000_bf8d(0x20);
            *(undefined2 *)((int)g_6a76 + (iVar7 * g_6a36 + iVar2) * 2) = 0x8f;
            break;
          case 0x16:
            FUN_1000_255f();
            uVar8 = (undefined2)((ulong)g_6a76 >> 0x10);
            if (g_7cfa == 0xb) {
              *(undefined2 *)((int)g_6a76 + (iVar7 * g_6a36 + iVar2) * 2) = 0x1b2;
            }
            else {
              *(undefined2 *)((int)g_6a76 + (iVar7 * g_6a36 + iVar2) * 2) = 0x13b;
            }
            break;
          case 0x17:
          case 0x19:
          case 0x1a:
            g_7c4e = 1;
            g_7c10 = iVar2;
            g_7c12 = iVar7;
            break;
          case 0x18:
            g_6a8e = 2;
            break;
          case 0x1b:
            g_7c4c = g_7c4c + 0x578;
            *(int *)((int)g_6a76 + (iVar7 * g_6a36 + iVar2) * 2) = (iVar6 / 0xd) * 0xd
            ;
            break;
          case 0x1c:
            g_a5f4 = g_a5f4 + 1;
            FUN_1000_bf8d(10);
          }
        }
      }
    }
  }
  return;
}


/* ===== 0x1468d FUN_1000_468d  callers=['FUN_1000_4c32'] strings=[] */

void __cdecl16near FUN_1000_468d(int param_1,int *param_2)

{
  int iVar1;
  undefined2 uVar2;
  
  switch(*param_2) {
  case 2:
    if (param_2[0x19] == 0x1a97) {
      return;
    }
    if (0 < *(int *)(param_1 + 0x22)) {
      iVar1 = *(int *)(param_1 + 10) + (uint)(0xf7ff < *(uint *)(param_1 + 8));
      if ((iVar1 < param_2[5]) ||
         ((iVar1 <= param_2[5] && (*(uint *)(param_1 + 8) + 0x800 <= (uint)param_2[4])))) {
        param_2[0x19] = 0x1a97;
        param_2[0x15] = 0;
        *(undefined2 *)(param_1 + 0x22) = 0;
        *(undefined2 *)(param_1 + 0x32) = 0x38f0;
        FUN_1000_bf8d(0x1f);
        return;
      }
    }
    *(undefined2 *)(param_1 + 0x22) = 0;
    if (param_2[0x10] < 1) {
      *(undefined2 *)(param_1 + 0x20) = 0xff10;
    }
    else {
      *(undefined2 *)(param_1 + 0x20) = 0xf0;
    }
    uVar2 = 0x1d;
    break;
  case 3:
  case 4:
  case 0xb:
    if ((*param_2 == 0xb) && (*(int *)(param_1 + 0x32) == 0x2769)) {
      *(undefined2 *)(param_1 + 0x2a) = 0;
      return;
    }
    FUN_1000_42e9();
    return;
  case 5:
  case 6:
    *(undefined2 *)(param_1 + 0x22) = 0;
    if (param_2[0x10] < 1) {
      *(undefined2 *)(param_1 + 0x20) = 0xff10;
    }
    else {
      *(undefined2 *)(param_1 + 0x20) = 0xf0;
    }
    uVar2 = 0x1d;
    break;
  default:
    goto switchD_1000_46a6_caseD_7;
  case 0xf:
    *(undefined2 *)(param_1 + 0x32) = 0x2769;
    *(int *)(param_1 + 0x20) = param_2[0x10];
    *(int *)(param_1 + 0x22) = param_2[0x11];
    *(undefined2 *)(param_1 + 0x2a) = 800;
    uVar2 = 0x28;
  }
  FUN_1000_bf8d(uVar2);
switchD_1000_46a6_caseD_7:
  return;
}


/* ===== 0x148b1 FUN_1000_48b1  callers=[] strings=[] */

void __cdecl16near FUN_1000_48b1(void)

{
  g_7c16 = 0xe;
  g_7c40 = g_7c40 + g_5942;
  if (0x14 < g_7c40) {
    g_7c16 = 0;
  }
  return;
}


/* ===== 0x148d1 FUN_1000_48d1  callers=[] strings=[] */

void __cdecl16near FUN_1000_48d1(void)

{
  int iVar1;
  
  iVar1 = FUN_1000_2cd8();
  if (iVar1 != 0) {
    FUN_1000_bf8d(0x25);
    g_7c16 = 0xd;
    g_7c48 = (char *)0x48b1;
    g_7c40 = 0;
    iVar1 = FUN_1000_c168();
    if (iVar1 < 0x81) {
      g_7c3e = 0x6f;
    }
    else {
      g_7c3e = 0x6e;
    }
  }
  return;
}


/* ===== 0x14912 FUN_1000_4912  callers=[] strings=[] */

void __cdecl16near FUN_1000_4912(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != 1) && (*param_2 != 0xe)) {
    FUN_1000_bf8d(0x25);
    *(undefined2 *)(param_1 + 0x32) = (char *)0x48b1;
    *(undefined2 *)(param_1 + 0x34) = 0x33e9;
    *(undefined2 *)(param_1 + 0x2a) = 0;
    iVar1 = FUN_1000_c168();
    if (iVar1 < 0x81) {
      *(undefined2 *)(param_1 + 0x28) = 0x6f;
    }
    else {
      *(undefined2 *)(param_1 + 0x28) = 0x6e;
    }
  }
  return;
}


/* ===== 0x14957 FUN_1000_4957  callers=[] strings=[] */

void __cdecl16near FUN_1000_4957(void)

{
  g_7c40 = g_7c40 + 1;
  FUN_1000_2c95();
  FUN_1000_2cd8();
  return;
}


/* ===== 0x14966 FUN_1000_4966  callers=[] strings=[] */

void __cdecl16near FUN_1000_4966(void)

{
  g_7c16 = 0xe;
  g_7c40 = g_7c40 + g_5942;
  if (0x28 < g_7c40) {
    g_7c40 = g_7c40 + -0x28;
    g_7c3e = g_7c3e + 1;
    g_7c42 = g_7c42 + -1;
    if (g_7c42 == 1) {
      g_7c48 = 0x4957;
    }
  }
  g_7c36 = 0;
  FUN_1000_2c95();
  FUN_1000_2cd8();
  return;
}


/* ===== 0x149a7 FUN_1000_49a7  callers=['FUN_1000_202c'] strings=[] */

void __cdecl16near
FUN_1000_49a7(undefined2 param_1,undefined2 param_2,uint param_3,int param_4,int param_5)

{
  undefined2 *puVar1;
  int iVar2;
  int unaff_BP;
  
  puVar1 = (undefined2 *)FUN_1000_29a0();
  *puVar1 = 0xb;
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = param_3 + 0x500;
  puVar1[5] = param_4 + (uint)(0xfaff < param_3);
  puVar1[0x19] = (char *)0x48d1;
  puVar1[0x10] = param_5;
  puVar1[0x1a] = 0x4ac9;
  puVar1[0x14] = 0x6d;
  if (param_5 < 0) {
    FUN_1000_e272();
    FUN_1000_e663();
    iVar2 = FUN_1000_e272();
    if (*(int *)(*(int *)((int)g_6a76 + (unaff_BP + iVar2) * 2) * 2 + 0x1886) != 0) {
      FUN_1000_bf8d(0x25);
      *puVar1 = 0xd;
      puVar1[0x19] = (char *)0x48b1;
      puVar1[0x15] = 0;
      iVar2 = FUN_1000_c168();
      if (iVar2 < 0x81) {
        puVar1[0x14] = 0x6f;
      }
      else {
        puVar1[0x14] = 0x6e;
      }
    }
  }
  else {
    FUN_1000_e272();
    FUN_1000_e272();
    iVar2 = FUN_1000_e663();
    if (*(int *)(*(int *)((int)g_6a76 + (unaff_BP + iVar2 + 1) * 2) * 2 + 0xefa) != 0) {
      FUN_1000_bf8d(0x25);
      *puVar1 = 0xd;
      puVar1[0x19] = (char *)0x48b1;
      puVar1[0x15] = 0;
      iVar2 = FUN_1000_c168();
      if (iVar2 < 0x81) {
        puVar1[0x14] = 0x6f;
      }
      else {
        puVar1[0x14] = 0x6e;
      }
    }
  }
  return;
}


/* ===== 0x14ac9 FUN_1000_4ac9  callers=[] strings=[] */

void __cdecl16near FUN_1000_4ac9(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*param_2 != 6) && (*param_2 != 0xe)) {
    FUN_1000_bf8d(0x25);
    *(undefined2 *)(param_1 + 0x32) = (char *)0x48b1;
    *(undefined2 *)(param_1 + 0x2a) = 0;
    *(undefined2 *)(param_1 + 0x34) = 0x33e9;
    iVar1 = FUN_1000_c168();
    if (iVar1 < 0x81) {
      *(undefined2 *)(param_1 + 0x28) = 0x6f;
    }
    else {
      *(undefined2 *)(param_1 + 0x28) = 0x6e;
    }
  }
  return;
}


/* ===== 0x14b0e FUN_1000_4b0e  callers=[] strings=[' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_4b0e(int param_1)

{
  code *pcVar1;
  
  *(int *)(param_1 + 10) = *(int *)(param_1 + 10) + g_5942;
  if (*(int *)(param_1 + 10) < 0x12d) {
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
  }
  else {
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
    *(undefined2 *)(param_1 + 8) = 0;
  }
  return;
}


/* ===== 0x14b54 FUN_1000_4b54  callers=[] strings=[] */

void __cdecl16near FUN_1000_4b54(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[5] = param_1[5] + g_5942;
  if (0xb < param_1[5]) {
    param_1[5] = param_1[5] + -0xc;
    iVar1 = *param_1;
    iVar2 = param_1[8];
    iVar3 = FUN_1000_e663();
    if (*(int *)((int)g_6a76 + (iVar3 + iVar1 + iVar2) * 2) == param_1[7]) {
      iVar3 = FUN_1000_e663();
      *(undefined2 *)((int)g_6a76 + (iVar3 + iVar1 + iVar2) * 2) = 0x10e;
      param_1[8] = param_1[8] + param_1[6];
    }
    else {
      param_1[0x11] = 0x33e9;
    }
  }
  return;
}


/* ===== 0x14bc3 FUN_1000_4bc3  callers=[] strings=[] */

void __cdecl16near FUN_1000_4bc3(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[5] = param_1[5] + g_5942;
  if (0xb < param_1[5]) {
    param_1[5] = param_1[5] + -0xc;
    param_1[8] = param_1[8] - param_1[6];
    iVar1 = *param_1;
    iVar2 = param_1[8];
    iVar3 = FUN_1000_e663();
    if (*(int *)((int)g_6a76 + (iVar3 + iVar1 + iVar2) * 2) == 0x10e) {
      iVar3 = FUN_1000_e663();
      *(int *)((int)g_6a76 + (iVar3 + iVar1 + iVar2) * 2) = param_1[7];
    }
    else {
      param_1[4] = 0;
    }
  }
  return;
}


/* ===== 0x14c32 FUN_1000_4c32  callers=['FUN_1000_7dfb'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', '  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n'] */

int __cdecl16near FUN_1000_4c32(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined2 unaff_SS;
  bool bVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  int *local_12;
  int *piStack_10;
  int *piStack_e;
  char *local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  g_6d0a = 1;
  g_6d3c = 0x38f0;
  g_6d3e = (char *)0x468d;
  g_6d2c = 0;
  g_6d2a = 0;
  g_6d32 = 4;
  g_6d0c = 1;
  g_5be2 = 1;
  g_7c0e = 0;
  g_5e7a = 1;
  g_5942 = 0;
  gb_546c = '\0';
  gb_546d = '\0';
  gb_546e = '\0';
  gb_546f = '\0';
  gb_4f62 = '\0';
  gb_4f63 = '\0';
  gb_4f64 = '\0';
  gb_4f65 = '\0';
  g_7c4c = 0;
  g_5bd8 = 0;
  g_6a8e = 0;
  FUN_1000_1656(param_1);
  g_6d00 = g_6d0e + 0x6000;
  g_6d02 = g_6d10 + -1 + (uint)(0x9fff < g_6d0e);
  g_6d04 = g_6d12 + -0x5000;
  g_6d06 =
       g_6d14 + -1 + (uint)((char *)0x4fff < g_6d12);
  if ((g_6d02 <= (int)g_547a) &&
     ((g_6d02 < (int)g_547a ||
      (g_6d00 < (uint)g_5478)))) {
    g_6d00._0_1_ = gb_5478;
    g_6d00._1_1_ = gb_5479;
    g_6d02._0_1_ = gb_547a;
    g_6d02._1_1_ = gb_547b;
  }
  if ((g_6d06 <= (int)g_547e) &&
     ((g_6d06 < (int)g_547e ||
      (g_6d04 < (uint)g_547c)))) {
    g_6d04 = (char *)0x5470._12_2_;
    g_6d06._0_1_ = gb_547e;
    g_6d06._1_1_ = gb_547f;
  }
  if ((g_79b8 <= g_6d02) &&
     ((g_79b8 < g_6d02 || (g_79b6 < g_6d00)))) {
    g_6d00 = g_79b6;
    g_6d02 = g_79b8;
  }
  if ((g_79bc <= g_6d06) &&
     ((g_79bc < g_6d06 || (g_79ba < g_6d04)))) {
    g_6d04 = g_79ba;
    g_6d06 = g_79bc;
  }
  FUN_1000_0239();
  if (g_6cea == 0) {
    FUN_1000_6e84();
  }
  g_7c14 = 1;
  FUN_1000_b8be();
  FUN_1000_0289();
  FUN_1000_0289();
  FUN_1000_6e40();
  g_5484 = FUN_1000_e272();
  g_5940 = FUN_1000_e272();
  do {
    FUN_1000_0239();
    uVar6 = 0x2315;
    puVar5 = (undefined2 *)&g_79c2;
    FUN_1000_5c1e(&local_12);
    FUN_1000_e39b(unaff_SS,puVar5,uVar6);
    piVar2 = (int *)&g_6d0a;
    for (local_8 = 0; local_8 < g_5be2; local_8 = local_8 + 1) {
      if (*piVar2 != 0) {
        local_12 = (int *)0x2315;
        FUN_1000_e39b(0x2315,(undefined2 *)&g_7c16);
        if (g_7c18 == 0) {
          piStack_10 = (int *)0x4e1f;
          local_4 = FUN_1000_e272();
          piStack_e = (int *)((char *)0x4e2e);
          local_6 = FUN_1000_e272();
          if ((((g_5484 + -2 < local_4) &&
               (g_5940 + -2 < local_6)) &&
              (local_4 < g_5484 + 0x17)) &&
             (local_6 < g_5940 + 0xc)) {
            g_7c18 = 1;
            if (g_7c48 == (code *)0x1a97) {
              g_7c48 = (code *)0x1a3e;
              g_7c40 = 0;
            }
            local_c = (char *)0x4e7a;
            FUN_1000_2aa6();
            g_7c34 = 0;
            g_7c32 = 0;
            local_c = (char *)0x4e86;
            (*g_7c48)();
            bVar4 = CARRY2(g_7c1a,g_7c32);
            g_7c1a = g_7c1a + g_7c32;
            g_7c1c = g_7c1c + ((int)g_7c32 >> 0xf) + (uint)bVar4;
            bVar4 = CARRY2(g_7c1e,g_7c34);
            g_7c1e = g_7c1e + g_7c34;
            g_7c20 = g_7c20 + ((int)g_7c34 >> 0xf) + (uint)bVar4;
            local_c = (char *)0x4ea1;
            FUN_1000_2aa6();
          }
        }
        else {
          if (local_8 != 0) {
            piStack_10 = (int *)((char *)0x4ddf);
            iVar1 = FUN_1000_3301();
            if (iVar1 != 0) goto LAB_1000_4ea1;
          }
          piStack_10 = (int *)((char *)0x4de9);
          FUN_1000_2aa6();
          g_7c34 = 0;
          g_7c32 = 0;
          piStack_10 = (int *)((char *)0x4df5);
          (*g_7c48)();
          bVar4 = CARRY2(g_7c1a,g_7c32);
          g_7c1a = g_7c1a + g_7c32;
          g_7c1c = g_7c1c + ((int)g_7c32 >> 0xf) + (uint)bVar4;
          bVar4 = CARRY2(g_7c1e,g_7c34);
          g_7c1e = g_7c1e + g_7c34;
          g_7c20 = g_7c20 + ((int)g_7c34 >> 0xf) + (uint)bVar4;
          local_c = (char *)0x4e10;
          FUN_1000_2aa6();
        }
LAB_1000_4ea1:
        local_c = (char *)0x2315;
        piStack_10 = (int *)0x2315;
        local_12 = (int *)&g_7c16;
        piStack_e = piVar2;
        FUN_1000_e39b();
      }
      piVar2 = piVar2 + 0x1b;
    }
    local_12 = (int *)((char *)0x4ec3);
    FUN_1000_34a1();
    piVar2 = (int *)&g_6d0a;
    for (local_8 = 0; local_8 < g_5be2; local_8 = local_8 + 1) {
      if ((*piVar2 != 0) && (piVar2[1] != 0)) {
        piVar3 = (undefined2 *)&g_6d40 + local_8 * 0x1b;
        local_a = local_8;
        while (local_a = local_a + 1, local_a < g_5be2) {
          if (((*piVar3 != 0) && (piVar3[1] != 0)) &&
             (local_12 = piVar3, iVar1 = FUN_1000_2a28(piVar2), iVar1 != 0)) {
            local_12 = piVar3;
            (*(code *)piVar2[0x1a])(piVar2);
            local_12 = piVar3;
            piStack_10 = piVar2;
            (*(code *)piVar3[0x1a])();
          }
          piVar3 = piVar3 + 0x1b;
        }
      }
      piVar2 = piVar2 + 0x1b;
    }
    local_12 = (int *)((char *)0x4f3f);
    g_5484 = FUN_1000_e272();
    piStack_10 = (int *)((char *)0x4f4e);
    g_5940 = FUN_1000_e272();
    piVar2 = (int *)(g_5be2 * 0x36 + 0x6cd4);
    local_8 = g_5be2;
    while (local_8 = local_8 + -1, -1 < local_8) {
      if ((*piVar2 != 0) && (piVar2[1] != 0)) {
        piStack_e = (int *)piVar2[0x14];
        piStack_10 = (int *)piVar2[5];
        local_12 = (int *)piVar2[4];
        FUN_1000_02c5(piVar2[2],piVar2[3]);
      }
      piVar2 = piVar2 + -0x1b;
    }
    piStack_e = (int *)g_4f96;
    FUN_1000_4373();
    local_c = (char *)0x79ce;
    for (local_8 = 0; local_8 < g_7c0e; local_8 = local_8 + 1) {
      if (*(int *)((int)local_c + 8) != 0) {
        piStack_e = (int *)local_c;
        piStack_10 = (int *)((char *)0x4faf);
        (*(code *)*(undefined2 *)((int)local_c + 0x22))();
      }
      local_c = (char *)((int)local_c + 0x24);
    }
    piStack_e = (int *)((char *)0x4fc4);
    FUN_1000_0289();
    piStack_e = (int *)0x2315;
    piStack_10 = (int *)0x79c8;
    local_12 = (int *)0x2315;
    FUN_1000_e39b();
    local_c = (char *)0x4fd7;
    FUN_1000_122c();
    local_c = (char *)0x4fda;
    iVar1 = FUN_1000_0c51();
    if (iVar1 != 0) {
      gb_546c = gb_4f62;
      gb_546d = gb_4f63;
      gb_546e = gb_4f64;
      gb_546f = gb_4f65;
    }
    if (g_6cec != 0) {
      return 0;
    }
    if ((g_6a8e != 0) || (g_6d0a == 0)) {
      local_c = (char *)0x500b;
      FUN_1000_c019();
      local_c = (char *)0x500e;
      FUN_1000_6e84();
      for (local_4 = 0; local_4 < 4; local_4 = local_4 + 1) {
        ((int*)&g_a5ca)[local_4] = 0;
      }
      if (g_6a8e == 0) {
        if (param_1 == 8) {
          g_a5c2 = 0;
        }
        else if (param_1 < 9) {
          if (param_1 == 3) {
            g_a5c8 = 0;
          }
          else if (param_1 == 4) {
            g_a5c0 = 0;
          }
        }
        else if (param_1 == 0x10) {
          g_a5c4 = 0;
        }
      }
      return g_6a8e;
    }
  } while( true );
}


/* ===== 0x15074 FUN_1000_5074  callers=['FUN_1000_0c51'] strings=[] */

void __cdecl16near FUN_1000_5074(int param_1)

{
  undefined2 unaff_SI;
  int iVar1;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined1 local_2e [6];
  undefined1 local_28 [6];
  undefined1 local_22 [6];
  undefined1 local_1c [2];
  int local_1a;
  int local_16;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  undefined1 local_a [2];
  int local_8 [3];
  
  FUN_1000_62b8(0x1c,9);
  local_8[2] = 0;
  local_8[1] = 0;
  FUN_1000_59f6(1,local_8,local_a);
  if (local_8[0] < 500) {
    local_8[2] = 1;
  }
  FUN_1000_59f6(2,local_8,local_a);
  if (local_8[0] < 500) {
    local_8[2] = 2;
  }
  FUN_1000_64c9(0x251d/*"  Joystick Configuration\n"*/);
  FUN_1000_64c9(0x2538/*"  ----------------------\n"*/);
  FUN_1000_64c9(0x2553/*"Hold the joystick in the\n"*/);
  FUN_1000_64c9(0x256e/*"upper left\n"*/);
  FUN_1000_64c9(0x257b/*"corner and press button 1:"*/);
  iVar1 = 9;
  do {
    FUN_1000_ba4a(g_7c78,g_7cee << 3,iVar1);
    FUN_1000_c17c(3);
    iVar1 = iVar1 + 1;
    if (iVar1 == 0xc) {
      iVar1 = 9;
    }
    FUN_1000_59f6(param_1,&local_10,&local_12);
    puVar2 = local_1c;
    uVar3 = unaff_SS;
    FUN_1000_5a94(local_22);
    FUN_1000_e39b(unaff_SS,puVar2,uVar3,unaff_DI);
    if (g_7d64 != 0) goto LAB_1000_52bc;
  } while (local_1a != 1);
  FUN_1000_ba4a(g_7c78,g_7cee << 3,0x20);
  do {
    puVar2 = local_1c;
    uVar3 = unaff_SS;
    FUN_1000_5a94(local_28);
    FUN_1000_e39b(unaff_SS,puVar2,uVar3,unaff_SI);
  } while (local_1a != 0);
  FUN_1000_c17c(2);
  FUN_1000_64c9(0x2596/*"\n\nHold the joystick in the\n"*/);
  FUN_1000_64c9(0x25b4/*"lower right\n"*/);
  FUN_1000_64c9(0x25c2/*"corner and press button 1:"*/);
  do {
    FUN_1000_ba4a(g_7c78,g_7cee << 3,iVar1);
    FUN_1000_c17c(3);
    iVar1 = iVar1 + 1;
    if (iVar1 == 0xc) {
      iVar1 = 9;
    }
    FUN_1000_59f6(param_1,&local_14,&local_16);
    puVar2 = local_1c;
    uVar3 = unaff_SS;
    FUN_1000_5a94(local_2e);
    FUN_1000_e39b(unaff_SS,puVar2,uVar3);
    if (g_7d64 != 0) goto LAB_1000_52bc;
  } while (local_1a != 1);
  FUN_1000_ba4a(g_7c78,g_7cee << 3);
  do {
    puVar2 = local_1c;
    FUN_1000_5a94(&stack0xffcc);
    FUN_1000_e39b(unaff_SS,puVar2);
  } while (local_1a != 0);
  local_c = (local_14 - local_10) / 4;
  local_e = (local_16 - local_12) / 4;
  *(int *)(param_1 * 2 + 0x7c60) = local_10 + local_c;
  *(int *)(param_1 * 2 + 0x7c66) = local_14 - local_c;
  *(int *)(param_1 * 2 + 0x7c6c) = local_12 + local_e;
  *(int *)(param_1 * 2 + 0x7c72) = local_16 - local_e;
  g_7d34 = 2;
LAB_1000_52bc:
  FUN_1000_5e1f();
  return;
}


/* ===== 0x152c5 FUN_1000_52c5  callers=['FUN_1000_548b'] strings=[] */

void __cdecl16near FUN_1000_52c5(uint param_1)

{
  int iVar1;
  undefined1 local_6 [4];
  
  iVar1 = g_7c78;
  param_1 = param_1 & 0x7f;
  if (param_1 == 1) {
    FUN_1000_64c9(0x25dd/*"ESC"*/);
  }
  else if (param_1 == 0xe) {
    FUN_1000_64c9(0x25e1/*"BKSP"*/);
  }
  else if (param_1 == 0xf) {
    FUN_1000_64c9(0x25e6/*"TAB"*/);
  }
  else if (param_1 == 0x1d) {
    FUN_1000_64c9(0x25ea/*"CTRL"*/);
  }
  else if (param_1 == 0x2a) {
    FUN_1000_64c9(0x25ef/*"LSHIFT"*/);
  }
  else if (param_1 == 0x39) {
    FUN_1000_64c9(0x25f6/*"SPACE"*/);
  }
  else if (param_1 == 0x3a) {
    FUN_1000_64c9(0x25fc/*"CAPSLK"*/);
  }
  else if ((param_1 < 0x3b) || (0x44 < param_1)) {
    if (param_1 == 0x57) {
      FUN_1000_64c9(0x2605/*"F11"*/);
    }
    else if (param_1 == 0x59) {
      FUN_1000_64c9(0x2609/*"F12"*/);
    }
    else if (param_1 == 0x46) {
      FUN_1000_64c9(0x260d/*"SCRLLK"*/);
    }
    else if (param_1 == 0x1c) {
      FUN_1000_64c9(0x2614/*"ENTER"*/);
    }
    else if (param_1 == 0x36) {
      FUN_1000_64c9(0x261a/*"RSHIFT"*/);
    }
    else if (param_1 == 0x37) {
      FUN_1000_64c9(0x2621/*"PRTSC"*/);
    }
    else if (param_1 == 0x38) {
      FUN_1000_64c9(0x2627/*"ALT"*/);
    }
    else if (param_1 == 0x47) {
      FUN_1000_64c9(0x262b/*"HOME"*/);
    }
    else if (param_1 == 0x49) {
      FUN_1000_64c9(0x2630/*"PGUP"*/);
    }
    else if (param_1 == 0x4f) {
      FUN_1000_64c9(0x2635/*"END"*/);
    }
    else if (param_1 == 0x51) {
      FUN_1000_64c9(0x2639/*"PGDN"*/);
    }
    else if (param_1 == 0x52) {
      FUN_1000_64c9(0x263e/*"INS"*/);
    }
    else if (param_1 == 0x53) {
      FUN_1000_64c9(0x2642/*"DEL"*/);
    }
    else if (param_1 == 0x45) {
      FUN_1000_64c9(0x2646/*"NUMLK"*/);
    }
    else {
      g_7c78 = g_7c78 + 1;
      FUN_1000_ba4a(iVar1,g_7cee << 3,(int)*(char *)(param_1 + 0x2412));
    }
  }
  else {
    FUN_1000_64c9(0x2603);
    FUN_1000_d43c(param_1 - 0x3a,local_6,10);
    FUN_1000_64c9(local_6);
  }
  return;
}


/* ===== 0x1548b FUN_1000_548b  callers=['FUN_1000_0c51'] strings=[] */

int __cdecl16near FUN_1000_548b(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_a;
  char local_3;
  
  FUN_1000_62b8(0x16,0xe);
  FUN_1000_64c9(0x264c/*"Keyboard Commands\n"*/);
  FUN_1000_64c9(0x265f/*"-----------------"*/);
  FUN_1000_64c9(0x2671/*"\n0 north    :"*/);
  FUN_1000_64c9(0x267f/*"\n1 northeast:"*/);
  FUN_1000_64c9(0x268d/*"\n2 east     :"*/);
  FUN_1000_64c9(0x269b/*"\n3 southeast:"*/);
  FUN_1000_64c9(0x26a9/*"\n4 south    :"*/);
  FUN_1000_64c9(0x26b7/*"\n5 southwest:"*/);
  FUN_1000_64c9(0x26c5/*"\n6 west     :"*/);
  FUN_1000_64c9(0x26d3/*"\n7 northwest:"*/);
  FUN_1000_64c9(0x26e1/*"\n8 button1  :"*/);
  FUN_1000_64c9(0x26ef/*"\n9 button2  :"*/);
  FUN_1000_64c9(0x26fd/*"\nModify which action:"*/);
  iVar2 = g_7cee;
  uVar1 = g_7c78;
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    g_7c78 = 0x1a;
    g_7cee = iVar5 + 7;
    FUN_1000_52c5((int)(char)((undefined1 *)&g_7ce0)[iVar5]);
  }
  g_7c78 = 0x1a;
  g_7cee = 0xf;
  FUN_1000_52c5((int)g_7c7a);
  g_7c78 = 0x1a;
  g_7cee = 0x10;
  FUN_1000_52c5((int)g_7c7b);
  do {
    g_7c78 = uVar1;
    g_7cee = iVar2;
    iVar5 = FUN_1000_6462();
    iVar3 = iVar5 / 0x100;
    local_3 = (char)(iVar5 % 0x100);
    if (('/' < local_3) && (local_3 < ':')) {
      FUN_1000_ba4a(g_7c78,g_7cee << 3,(int)local_3);
      iVar3 = (int)local_3;
      iVar4 = iVar3 + -0x30;
      FUN_1000_64c9(0x2713/*"\nPress the new key:"*/);
      FUN_1000_5e1f();
      local_a = -1;
      iVar5 = local_a;
      while (local_a = iVar5, iVar5 = local_a + 1, ((int*)&g_7d62)[iVar5] == 0) {
        if (iVar5 == 0x79) {
          local_a = -1;
          iVar5 = local_a;
        }
        else if (iVar5 == 0x29) {
          iVar5 = local_a + 2;
        }
      }
      FUN_1000_5e1f();
      FUN_1000_64c9(0x2728/*"                  "*/);
      local_a._0_1_ = (char)iVar5;
      if (iVar4 < 8) {
        *(char *)(iVar3 + 0x7cb0) = (char)local_a;
      }
      if (iVar4 == 8) {
        g_7c7a = (char)local_a;
      }
      if (iVar4 == 9) {
        g_7c7b = (char)local_a;
      }
      g_7cee = iVar3 + -0x29;
      g_7c78 = 0x1a;
      FUN_1000_64c9(0x273c/*"        "*/);
      g_7c78 = 0x1a;
      iVar3 = FUN_1000_52c5(iVar5);
      local_3 = '0';
    }
  } while (('/' < local_3) && (local_3 < ':'));
  g_7d34 = 0;
  return iVar3;
}


/* ===== 0x1566e FUN_1000_566e  callers=['FUN_1000_1312'] strings=[] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_566e(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_1000_d24f(9);
  for (iVar1 = 0; iVar1 < 0x80; iVar1 = iVar1 + 1) {
    ((int*)&g_7d62)[iVar1] = 0;
  }
  _DAT_0000_041c = _DAT_0000_041a;
  if (lVar2 != 0x100056dd) {
    g_240e = (int)lVar2;
    g_2410 = (int)((ulong)lVar2 >> 0x10);
    FUN_1000_d25e(9,0x56dd,0x1000);
  }
  return;
}


/* ===== 0x15756 FUN_1000_5756  callers=['FUN_1000_129d', 'FUN_1000_7cb2', 'FUN_1000_7dbe'] strings=[] */

void __cdecl16near FUN_1000_5756(void)

{
  if (g_240e != 0 || g_2410 != 0) {
    FUN_1000_d25e(9,g_240e,g_2410);
  }
  return;
}


/* ===== 0x15776 FUN_1000_5776  callers=['FUN_1000_5c1e'] strings=[] */

undefined2 __cdecl16near FUN_1000_5776(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined2 unaff_DI;
  uint uVar2;
  undefined2 unaff_SS;
  
  iVar1 = 0;
  if (((int*)&g_7d62)[g_7ce0] != 0) {
    iVar1 = -1;
  }
  uVar2 = (uint)(((int*)&g_7d62)[g_7ce2] != 0);
  if (((int*)&g_7d62)[g_7ce4] != 0) {
    iVar1 = 1;
  }
  if (((int*)&g_7d62)[g_7ce6] != 0) {
    uVar2 = 0xffff;
  }
  if (((int*)&g_7d62)[g_7ce1] != 0) {
    iVar1 = -1;
    uVar2 = 1;
  }
  if (((int*)&g_7d62)[g_7ce7] != 0) {
    iVar1 = -1;
    uVar2 = 0xffff;
  }
  if (((int*)&g_7d62)[g_7ce3] != 0) {
    iVar1 = 1;
    uVar2 = 1;
  }
  if (((int*)&g_7d62)[g_7ce5] != 0) {
    iVar1 = 1;
    uVar2 = 0xffff;
  }
  switch(iVar1 * 3 + uVar2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 0xfffc:
    break;
  case 0xfffd:
    break;
  case 0xfffe:
    break;
  case 0xffff:
  }
  FUN_1000_e39b(unaff_SS,param_1,param_2,unaff_DI);
  return param_1;
}


/* ===== 0x158c0 FUN_1000_58c0  callers=['FUN_1000_5c1e'] strings=[] */

undefined2 __cdecl16near FUN_1000_58c0(undefined2 param_1)

{
  code *pcVar1;
  int in_CX;
  int extraout_DX;
  undefined2 unaff_SS;
  int local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = 0;
  pcVar1 = (code *)swi(0x33);
  (*pcVar1)();
  if (g_7e62 < (in_CX + -0x140) / 2) {
    local_4 = 1;
  }
  else if ((in_CX + -0x140) / 2 < -g_7e62) {
    local_4 = -1;
  }
  if (g_7e62 < extraout_DX + -100) {
    local_6 = 1;
  }
  else if (extraout_DX + -100 < -g_7e62) {
    local_6 = -1;
  }
  pcVar1 = (code *)swi(0x33);
  (*pcVar1)();
  switch(local_6 * 3 + local_4) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case -4:
    break;
  case -3:
    break;
  case -2:
    break;
  case -1:
  }
  FUN_1000_e39b(unaff_SS);
  return param_1;
}


/* ===== 0x159f6 FUN_1000_59f6  callers=['FUN_1000_1312', 'FUN_1000_5074', 'FUN_1000_5a94'] strings=[] */

void __cdecl16near FUN_1000_59f6(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == 1) {
    bVar2 = 1;
    bVar1 = 2;
  }
  else {
    bVar2 = 4;
    bVar1 = 8;
  }
  *param_2 = 0;
  *param_3 = 0;
  uVar4 = FUN_1000_d316(0x201);
  FUN_1000_d6d5(0x201,uVar4);
  while( true ) {
    bVar3 = FUN_1000_d316(0x201);
    uVar5 = (uint)((bVar3 & bVar2) != 0);
    uVar6 = (uint)((bVar3 & bVar1) != 0);
    *param_2 = *param_2 + uVar5;
    *param_3 = *param_3 + uVar6;
    if (uVar5 + uVar6 == 0) {
      return;
    }
    if (499 < *param_2) break;
    if (499 < *param_3) {
      return;
    }
  }
  return;
}


/* ===== 0x15a94 FUN_1000_5a94  callers=['FUN_1000_5074', 'FUN_1000_5c1e'] strings=[] */

undefined2 __cdecl16near FUN_1000_5a94(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  local_4 = 0;
  local_6 = 0;
  local_8 = 0;
  local_a = 0;
  FUN_1000_59f6(param_3,&local_4,&local_6);
  if (500 < local_4 || 500 < local_6) {
    local_4 = *(int *)(param_3 * 2 + 0x7c60) + 1;
    local_6 = *(int *)(param_3 * 2 + 0x7c6c) + 1;
  }
  if (*(int *)(param_3 * 2 + 0x7c66) < local_4) {
    local_8 = 1;
  }
  else if (local_4 < *(int *)(param_3 * 2 + 0x7c60)) {
    local_8 = -1;
  }
  if (*(int *)(param_3 * 2 + 0x7c72) < local_6) {
    local_a = 1;
  }
  else if (local_6 < *(int *)(param_3 * 2 + 0x7c6c)) {
    local_a = -1;
  }
  switch(local_a * 3 + local_8) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case -4:
    break;
  case -3:
    break;
  case -2:
    break;
  case -1:
  }
  FUN_1000_d316(0x201);
  FUN_1000_e39b(unaff_SS,param_1,param_2,unaff_DI);
  return param_1;
}


/* ===== 0x15c1e FUN_1000_5c1e  callers=['FUN_1000_3f51', 'FUN_1000_4c32', 'FUN_1000_7dfb', 'FUN_1000_8b1e', 'FUN_1000_8ce4', 'FUN_1000_91f5', 'FUN_1000_949d', 'FUN_1000_993a', 'FUN_1000_9c8e', 'FUN_1000_a17d', 'FUN_1000_a41a', 'FUN_1000_a4f3'] strings=[] */

undefined2 __cdecl16near FUN_1000_5c1e(undefined2 param_1,undefined2 param_2,int param_3)

{
  undefined2 unaff_SS;
  int *piVar1;
  undefined2 uVar2;
  undefined2 local_22 [3];
  undefined1 local_1c [6];
  undefined1 local_16 [6];
  undefined1 local_10 [6];
  uint local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  if ((g_9228 != 0) && (g_9228 != 2)) {
    local_a = (uint)*g_7d58;
    g_7d58 = g_7d58 + 1;
    local_6 = local_a & 1;
    local_4 = (int)(local_a & 2) >> 1;
    local_8 = (int)(local_a & 0x3c) >> 2;
    goto LAB_1000_5d02;
  }
  uVar2 = unaff_SS;
  switch(*(undefined2 *)(param_3 * 2 + 0x7d32)) {
  case 0:
    piVar1 = &local_8;
    FUN_1000_5776(local_10);
    break;
  case 1:
    piVar1 = &local_8;
    FUN_1000_58c0(local_16);
    break;
  case 2:
    piVar1 = &local_8;
    FUN_1000_5a94(local_1c);
    break;
  case 3:
    piVar1 = &local_8;
    FUN_1000_5a94(local_22);
    break;
  default:
    goto switchD_1000_5c45_default;
  }
  FUN_1000_e39b(unaff_SS,piVar1,uVar2);
switchD_1000_5c45_default:
  if (g_9228 == 2) {
    local_a = local_8 << 2 | local_4 << 1 | local_6;
    *g_7d58 = (char)local_a;
    g_7d58 = g_7d58 + 1;
  }
LAB_1000_5d02:
  local_22[0] = param_2;
  FUN_1000_e39b(unaff_SS,param_1);
  return param_1;
}


/* ===== 0x15d39 FUN_1000_5d39  callers=[] strings=[] */

void __cdecl16near FUN_1000_5d39(undefined2 param_1)

{
  undefined1 local_8 [6];
  
  FUN_1000_d834(0x7c86,0x2745/*"DEMO"*/);
  FUN_1000_d43c(param_1,local_8,10);
  FUN_1000_d7cc(0x7c86,local_8);
  FUN_1000_d7cc(0x7c86,0x274a);
  FUN_1000_d7cc(0x7c86,g_24ca);
  FUN_1000_5eb2(0x7c86,(undefined1 *)&g_7e66,0x2315);
  g_7cfa = (int)g_7e66;
  g_7d58 = 0x7e67;
  g_9228 = 1;
  return;
}


/* ===== 0x15dae FUN_1000_5dae  callers=[] strings=[] */

void __cdecl16near FUN_1000_5dae(undefined2 param_1)

{
  undefined1 local_8 [6];
  
  FUN_1000_d834(0x7c86,0x274c/*"DEMO"*/);
  FUN_1000_d43c(param_1,local_8,10);
  FUN_1000_d7cc(0x7c86,local_8);
  FUN_1000_d7cc(0x7c86,0x2751);
  FUN_1000_d7cc(0x7c86,g_24ca);
  FUN_1000_5f5d(0x7c86,(undefined1 *)&g_7e66,0x2315,g_7d58 + -0x7e66,
                g_7d58 + -0x7e66 >> 0xf);
  g_9228 = 0;
  return;
}


/* ===== 0x15e1f FUN_1000_5e1f  callers=['FUN_1000_082b', 'FUN_1000_0c51', 'FUN_1000_0dec', 'FUN_1000_0e76', 'FUN_1000_122c', 'FUN_1000_1312', 'FUN_1000_255f', 'FUN_1000_5074', 'FUN_1000_548b', 'FUN_1000_7dfb', 'FUN_1000_839a', 'FUN_1000_8ce4'] strings=[] */

void __cdecl16near FUN_1000_5e1f(void)

{
  int iVar1;
  
  while( true ) {
    iVar1 = FUN_1000_cf8d(1);
    if (iVar1 == 0) break;
    FUN_1000_cf8d(0);
  }
  for (iVar1 = 0; iVar1 < 0x80; iVar1 = iVar1 + 1) {
    ((int*)&g_7d62)[iVar1] = 0;
  }
  return;
}


/* ===== 0x15e52 FUN_1000_5e52  callers=['FUN_1000_1312', 'FUN_1000_5fde', 'FUN_1000_6a7b', 'FUN_1000_6f20'] strings=[] */

long __cdecl16near FUN_1000_5e52(uint param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = FUN_1000_dfe4(param_1 + 0xf,param_2 + (uint)(0xfff0 < param_1));
  iVar1 = (int)((ulong)lVar3 >> 0x10);
  bVar2 = true;
  g_a1d4 = (int)lVar3;
  g_a1d6 = iVar1;
  FUN_1000_e67a();
  if (bVar2) {
    FUN_1000_129d(0x2753/*"Out of memory!  Try unloading your TSRs!"*/);
  }
  if ((int)lVar3 != 0) {
    lVar3 = (ulong)(iVar1 + 1) << 0x10;
  }
  return lVar3;
}


/* ===== 0x15eb2 FUN_1000_5eb2  callers=['FUN_1000_066b', 'FUN_1000_0983', 'FUN_1000_1312', 'FUN_1000_5d39', 'FUN_1000_5fde', 'FUN_1000_6a7b', 'FUN_1000_7b0a', 'FUN_1000_9e83'] strings=[] */

undefined4 __cdecl16near FUN_1000_5eb2(undefined2 param_1,undefined2 param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  uint local_10;
  
  bVar6 = &stack0xfffe < (undefined1 *)0xe;
  local_10 = 0;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)(0,param_3,param_2);
  uVar2 = 0;
  if (!bVar6) {
    uVar7 = false;
    pcVar1 = (code *)swi(0x21);
    uVar8 = (*pcVar1)();
    uVar2 = 0;
    if (!(bool)uVar7) {
      iVar4 = (int)((ulong)uVar8 >> 0x10) + 1;
      uVar5 = 0x2315;
      do {
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)(param_3);
        pcVar1 = (code *)swi(0x21);
        iVar3 = (*pcVar1)();
        uVar2 = uVar8;
        if (((bool)uVar7) || (iVar3 != -1)) break;
        pcVar1 = (code *)swi(0x21);
        (*pcVar1)();
        uVar7 = 0xefff < uVar5;
        param_3 = uVar5 + 0x1000;
        iVar4 = iVar4 + -1;
        uVar5 = local_10;
        local_10 = local_10 + 1;
      } while (iVar4 != 0);
    }
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return uVar2;
}


/* ===== 0x15f5d FUN_1000_5f5d  callers=['FUN_1000_0af2', 'FUN_1000_5dae', 'FUN_1000_7b0a', 'FUN_1000_8ce4', 'FUN_1000_9ce9'] strings=[] */

void __cdecl16near
FUN_1000_5f5d(undefined2 param_1,undefined2 param_2,int param_3,uint param_4,int param_5)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)(0,param_3,param_2);
  if (!bVar3) {
    if (param_5 != 0) {
      do {
        do {
          pcVar1 = (code *)swi(0x21);
          (*pcVar1)(param_3,param_2,uVar2);
          param_3 = param_3 + 0x800;
          bVar3 = param_4 < 0x8000;
          param_4 = param_4 + 0x8000;
          param_5 = param_5 - (uint)bVar3;
        } while (param_5 != 0);
      } while (0x7fff < param_4);
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


/* ===== 0x15fde FUN_1000_5fde  callers=['FUN_1000_1312', 'FUN_1000_6edd', 'FUN_1000_6f20', 'FUN_1000_7b0a'] strings=[] */

undefined4 __cdecl16near FUN_1000_5fde(undefined2 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1000_d550(param_1,0x8000);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000_d20e(iVar1);
    uVar2 = FUN_1000_5e52(uVar2);
    FUN_1000_c63a(iVar1);
    FUN_1000_5eb2(param_1,uVar2);
  }
  return uVar2;
}


/* ===== 0x1603b FUN_1000_603b  callers=[] strings=[] */

void __cdecl16near FUN_1000_603b(int param_1)

{
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  uint uVar1;
  
  FUN_1000_c17c(1);
  if (g_9226 == 5) {
    param_1 = param_1 * 2;
  }
  FUN_1000_d6d5(0x3d4,0x18);
  FUN_1000_d6d5(0x3d5,param_1 % 0x100);
  FUN_1000_d6d5(0x3d4,CONCAT11(extraout_AH,7));
  FUN_1000_d6d5(0x3d5,CONCAT11((char)((uint)(param_1 / 0x100) >> 8),
                               (char)(param_1 / 0x100) * '\x10' + '\x01'));
  if (g_9226 == 5) {
    FUN_1000_d6d5(0x3d4,CONCAT11(extraout_AH_00,9));
    uVar1 = FUN_1000_d316(0x3d5);
    FUN_1000_d6d5(0x3d5,uVar1 & 0xffbf);
  }
  return;
}


/* ===== 0x160ce FUN_1000_60ce  callers=[] strings=[] */

void __cdecl16near FUN_1000_60ce(uint param_1)

{
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  
  FUN_1000_c17c(1);
  FUN_1000_d6d5(0x3d4,CONCAT11(extraout_AH,0xd));
  FUN_1000_d6d5(0x3d5,CONCAT11(extraout_AH_00,(undefined1)param_1));
  FUN_1000_d6d5(0x3d4,CONCAT11(extraout_AH_01,0xc));
  FUN_1000_d6d5(0x3d5,param_1 >> 8);
  return;
}


/* ===== 0x16118 FUN_1000_6118  callers=['FUN_1000_6248', 'FUN_1000_7cb2', 'FUN_1000_839a', 'FUN_1000_a0a2'] strings=[] */

void __cdecl16near FUN_1000_6118(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  g_7d4e = param_1;
  g_7d54 = param_2;
  g_7d50 = param_3;
  g_7d56 = param_4;
  FUN_1000_ba4a(param_1,param_2 << 3,1);
  iVar1 = param_1;
  while (iVar1 = iVar1 + 1, iVar1 < param_3) {
    FUN_1000_ba4a(iVar1,param_2 << 3,2);
  }
  FUN_1000_ba4a(param_3,param_2 << 3,3);
  iVar1 = param_2;
  while (iVar1 = iVar1 + 1, iVar1 < param_4) {
    FUN_1000_ba4a(param_1,iVar1 * 8,4);
    iVar2 = param_1;
    while (iVar2 = iVar2 + 1, iVar2 < param_3) {
      FUN_1000_ba4a(iVar2,iVar1 * 8,0x20);
    }
    FUN_1000_ba4a(param_3,iVar1 * 8,5);
  }
  FUN_1000_ba4a(param_1,param_4 << 3,6);
  iVar1 = param_1;
  while (iVar1 = iVar1 + 1, iVar1 < param_3) {
    FUN_1000_ba4a(iVar1,param_4 << 3,7);
  }
  FUN_1000_ba4a(param_3,param_4 << 3,8);
  g_7d4a = param_1 + 1;
  g_7c78 = param_1 + 1;
  g_7cee = param_2 + 1;
  return;
}


/* ===== 0x16248 FUN_1000_6248  callers=['FUN_1000_255f', 'FUN_1000_62b8', 'FUN_1000_6314', 'FUN_1000_6345'] strings=[] */

void __cdecl16near FUN_1000_6248(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = g_2492 - param_1 / 2;
  iVar2 = g_2494 - param_2 / 2;
  FUN_1000_6118(iVar1,iVar2,iVar1 + param_1 + 1,iVar2 + param_2 + 1);
  return;
}


/* ===== 0x16286 FUN_1000_6286  callers=['FUN_1000_8340', 'FUN_1000_b3cb'] strings=[] */

void __cdecl16near FUN_1000_6286(int param_1,int param_2,int param_3,int param_4,undefined2 param_5)

{
  int iVar1;
  
  for (; iVar1 = param_1, param_2 <= param_4; param_2 = param_2 + 1) {
    for (; iVar1 <= param_3; iVar1 = iVar1 + 1) {
      FUN_1000_ba4a(iVar1,param_2 << 3,param_5);
    }
  }
  return;
}


/* ===== 0x162b8 FUN_1000_62b8  callers=['FUN_1000_082b', 'FUN_1000_0c51', 'FUN_1000_0dec', 'FUN_1000_0e76', 'FUN_1000_122c', 'FUN_1000_365b', 'FUN_1000_5074', 'FUN_1000_548b', 'FUN_1000_62b8', 'FUN_1000_8ce4', 'FUN_1000_912b', 'FUN_1000_9ce9'] strings=[] */

void __cdecl16near FUN_1000_62b8(int param_1,int param_2)

{
  if (param_1 < 3) {
    if (2 < param_2) {
      FUN_1000_6345(param_1,param_2 + -2);
    }
  }
  else if (param_2 < 3) {
    FUN_1000_6314(param_1 + -2,param_2);
  }
  else {
    FUN_1000_62b8(param_1 + -2,param_2 + -2);
  }
  FUN_1000_c17c(1);
  FUN_1000_6248(param_1,param_2);
  return;
}


/* ===== 0x16314 FUN_1000_6314  callers=['FUN_1000_62b8', 'FUN_1000_6314'] strings=[] */

void __cdecl16near FUN_1000_6314(int param_1,undefined2 param_2)

{
  if (2 < param_1) {
    FUN_1000_6314(param_1 + -2,param_2);
  }
  FUN_1000_c17c(1);
  FUN_1000_6248(param_1,param_2);
  return;
}


/* ===== 0x16345 FUN_1000_6345  callers=['FUN_1000_62b8', 'FUN_1000_6345'] strings=[] */

void __cdecl16near FUN_1000_6345(undefined2 param_1,int param_2)

{
  if (2 < param_2) {
    FUN_1000_6345(param_1,param_2 + -2);
  }
  FUN_1000_c17c(1);
  FUN_1000_6248(param_1,param_2);
  return;
}


/* ===== 0x16376 FUN_1000_6376  callers=[] strings=[] */

void __cdecl16near FUN_1000_6376(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  param_5 = param_5 * 0x16;
  iVar1 = param_1;
  while (iVar1 = iVar1 + 1, iVar2 = param_2, iVar1 < param_3) {
    FUN_1000_ba4a(iVar1,param_2 << 3,param_5 + 2);
    FUN_1000_ba4a(iVar1,param_4 << 3,param_5 + 7);
  }
  while (iVar2 = iVar2 + 1, iVar2 < param_4) {
    FUN_1000_ba4a(param_1,iVar2 * 8,param_5 + 4);
    FUN_1000_ba4a(param_3,iVar2 * 8,param_5 + 5);
  }
  FUN_1000_ba4a(param_1,param_2 << 3,param_5 + 1);
  FUN_1000_ba4a(param_3,param_2 << 3,param_5 + 3);
  FUN_1000_ba4a(param_3,param_4 << 3,param_5 + 8);
  FUN_1000_ba4a(param_1,param_4 << 3,param_5 + 6);
  return;
}


/* ===== 0x16462 FUN_1000_6462  callers=['FUN_1000_082b', 'FUN_1000_0c51', 'FUN_1000_0dec', 'FUN_1000_122c', 'FUN_1000_255f', 'FUN_1000_548b', 'FUN_1000_67ae', 'FUN_1000_7cb2', 'FUN_1000_9ce9', 'FUN_1000_9e83'] strings=[] */

void __cdecl16near FUN_1000_6462(void)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = 9;
    while( true ) {
      iVar1 = FUN_1000_cf8d(1);
      if ((iVar1 != 0) || (0xc < iVar2)) break;
      FUN_1000_ba4a(g_7c78,g_7cee << 3,iVar2);
      FUN_1000_c17c(5);
      iVar2 = iVar2 + 1;
    }
  } while (iVar1 == 0);
  FUN_1000_ba4a(g_7c78,g_7cee << 3,0x20);
  FUN_1000_cf8d(0);
  return;
}


/* ===== 0x164c9 FUN_1000_64c9  callers=['FUN_1000_082b', 'FUN_1000_0c51', 'FUN_1000_0dec', 'FUN_1000_0e76', 'FUN_1000_122c', 'FUN_1000_255f', 'FUN_1000_365b', 'FUN_1000_5074', 'FUN_1000_52c5', 'FUN_1000_548b', 'FUN_1000_6521', 'FUN_1000_6540'] strings=[] */

void __cdecl16near FUN_1000_64c9(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  while( true ) {
    iVar3 = g_7c78;
    pcVar1 = param_1 + 1;
    cVar2 = *param_1;
    if (cVar2 == '\0') break;
    param_1 = pcVar1;
    if (cVar2 == '\n') {
      g_7cee = g_7cee + 1;
      g_7c78 = g_7d4a;
    }
    else if (cVar2 == '\r') {
      g_7c78 = g_7d4a;
    }
    else {
      g_7c78 = g_7c78 + 1;
      FUN_1000_ba4a(iVar3,g_7cee << 3,cVar2);
    }
  }
  return;
}


/* ===== 0x16521 FUN_1000_6521  callers=['FUN_1000_0e76'] strings=[] */

void __cdecl16near FUN_1000_6521(undefined2 param_1)

{
  FUN_1000_d43c(param_1,0x7c86,10);
  FUN_1000_64c9(0x7c86);
  return;
}


/* ===== 0x16540 FUN_1000_6540  callers=[] strings=[] */

void __cdecl16near FUN_1000_6540(undefined2 param_1,undefined2 param_2)

{
  FUN_1000_d47d(param_1,param_2,0x7c86,10);
  FUN_1000_64c9(0x7c86);
  return;
}


/* ===== 0x16562 FUN_1000_6562  callers=['FUN_1000_9e83'] strings=[] */

undefined4 __cdecl16near FUN_1000_6562(undefined2 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1000_d550(param_1,0x8000);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1000_d20e(iVar1);
    FUN_1000_c63a(iVar1);
  }
  return uVar2;
}


/* ===== 0x165a0 FUN_1000_65a0  callers=['FUN_1000_6604'] strings=[] */

void __cdecl16near FUN_1000_65a0(byte param_1)

{
  undefined2 unaff_SS;
  undefined1 local_6 [2];
  int local_4;
  
  FUN_1000_e39b(0x2315,&stack0xffea,unaff_SS);
  FUN_1000_e39b(0x2315,local_6);
  for (local_4 = 0; local_4 < 2; local_4 = local_4 + 1) {
    local_6[0] = (&stack0xffea)
                 [(int)(uint)param_1 >> (('\x01' - (char)local_4) * '\x04' & 0x1fU) & 0xf];
    FUN_1000_64c9();
  }
  return;
}


/* ===== 0x16604 FUN_1000_6604  callers=[] strings=[] */

void __cdecl16near FUN_1000_6604(uint param_1)

{
  undefined1 extraout_AH;
  
  FUN_1000_64c9(0x277c);
  FUN_1000_65a0(param_1 >> 8);
  FUN_1000_65a0(CONCAT11(extraout_AH,(undefined1)param_1));
  return;
}


/* ===== 0x1662a FUN_1000_662a  callers=[] strings=[] */

void __cdecl16near FUN_1000_662a(uint param_1)

{
  undefined2 uVar1;
  undefined2 local_4;
  
  FUN_1000_64c9(0x277e);
  for (local_4 = 0; local_4 < 0x10; local_4 = local_4 + 1) {
    if ((param_1 >> (0xfU - (char)local_4 & 0x1f) & 1) == 0) {
      uVar1 = 0x2782;
    }
    else {
      uVar1 = 0x2780;
    }
    FUN_1000_64c9(uVar1);
  }
  return;
}


/* ===== 0x1666d FUN_1000_666d  callers=['FUN_1000_255f'] strings=[] */

void __cdecl16near FUN_1000_666d(undefined2 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_1000_d858(param_1);
  g_7c78 = (g_2492 + 1) - (uVar1 >> 1);
  FUN_1000_64c9(param_1);
  return;
}


/* ===== 0x1668f FUN_1000_668f  callers=[] strings=[] */

uint __cdecl16near FUN_1000_668f(void)

{
  int iVar1;
  uint uVar2;
  undefined2 unaff_SI;
  uint uVar3;
  undefined2 unaff_DI;
  undefined2 unaff_SS;
  char local_2a [16];
  char local_1a;
  char acStack_19 [17];
  uint local_8;
  uint local_6;
  char local_3;
  
  FUN_1000_e39b(0x2315,&local_1a,unaff_SS,unaff_DI);
  FUN_1000_e39b(0x2315,local_2a,unaff_SS,unaff_SI);
  FUN_1000_67ae(&local_1a,0x11);
  if (local_1a == '$') {
    iVar1 = FUN_1000_d858(&local_1a);
    local_8 = iVar1 - 2U;
    if ((int)(iVar1 - 2U) < 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      for (local_6 = 0; local_6 <= local_8; local_6 = local_6 + 1) {
        local_3 = FUN_1000_cdc5((int)acStack_19[local_6]);
        for (uVar3 = 0; uVar3 < 0x10; uVar3 = uVar3 + 1) {
          if (local_2a[uVar3] == local_3) {
            uVar2 = uVar2 | uVar3 << (((char)local_8 - (char)local_6) * '\x04' & 0x1fU);
            break;
          }
        }
      }
    }
  }
  else if (local_1a == '%') {
    iVar1 = FUN_1000_d858(&local_1a);
    local_8 = iVar1 - 2;
    if ((int)local_8 < 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      for (local_6 = 0; local_6 <= local_8; local_6 = local_6 + 1) {
        if ((acStack_19[local_6] < '0') || ('1' < acStack_19[local_6])) {
          return 0;
        }
        uVar2 = uVar2 | acStack_19[local_6] + -0x30 << ((char)local_8 - (char)local_6 & 0x1fU);
      }
    }
  }
  else {
    uVar2 = FUN_1000_cf01(&local_1a);
  }
  return uVar2;
}


/* ===== 0x167ae FUN_1000_67ae  callers=['FUN_1000_668f', 'FUN_1000_8ce4'] strings=[] */

bool __cdecl16near FUN_1000_67ae(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    uVar2 = FUN_1000_6462();
    cVar3 = FUN_1000_cdc5(uVar2);
    if (((cVar3 == '\x7f') || (cVar3 == '\b')) && (0 < iVar4)) {
      iVar4 = iVar4 + -1;
      FUN_1000_ba4a(g_7c78,g_7cee << 3,0x20);
      g_7c78 = g_7c78 + -1;
    }
    if ((('\x1f' < cVar3) && (cVar3 < '{')) && (iVar4 < param_2)) {
      *(char *)(param_1 + iVar4) = cVar3;
      iVar1 = g_7c78;
      iVar4 = iVar4 + 1;
      g_7c78 = g_7c78 + 1;
      FUN_1000_ba4a(iVar1,g_7cee << 3,(int)cVar3);
    }
  } while ((cVar3 != '\x1b') && (cVar3 != '\r'));
  for (; iVar4 < param_2; iVar4 = iVar4 + 1) {
    *(undefined1 *)(param_1 + iVar4) = 0;
  }
  return cVar3 == '\r';
}


/* ===== 0x16854 FUN_1000_6854  callers=['FUN_1000_1312'] strings=[' place!\n\n\nEnter your name:'] */

void __cdecl16near FUN_1000_6854(void)

{
  int iVar1;
  
  FUN_1000_d834(0x7c86,0x2788/*"CTLPANEL."*/);
  FUN_1000_d7cc(0x7c86,g_24ca);
  iVar1 = FUN_1000_d550(0x7c86,0x8001,0x180);
  if (iVar1 == -1) {
    gb_4f70 = '\x01';
    gb_4f71 = '\0';
    g_7d34 = 0;
    g_7d36 = 2;
    g_7c64 = 0x14;
    g_7c62 = 0x14;
    g_7c6a = 0x3c;
    g_7c68 = 0x3c;
    g_7c70 = 0x14;
    g_7c6e = 0x14;
    g_7c76 = 0x3c;
    g_7c74 = 0x3c;
    g_7e62 = 5;
    g_7ce0 = 0x48;
    g_7ce1 = 0x49;
    g_7ce2 = 0x4d;
    g_7ce3 = 0x51;
    g_7ce4 = 0x50;
    g_7ce5 = 0x4f;
    g_7ce6 = 0x4b;
    g_7ce7 = 0x47;
    g_7c7a = 0x1d;
    g_7c7b = 0x38;
  }
  else {
    FUN_1000_d6e1(iVar1,(char *)0x4f70,2);
    FUN_1000_d6e1(iVar1,0x7d32,6);
    FUN_1000_d6e1(iVar1,0x7c60,6);
    FUN_1000_d6e1(iVar1,0x7c6c,6);
    FUN_1000_d6e1(iVar1,0x7c66,6);
    FUN_1000_d6e1(iVar1,0x7c72,6);
    FUN_1000_d6e1(iVar1,(undefined2 *)&g_7e62,2);
    FUN_1000_d6e1(iVar1,(undefined1 *)&g_7ce0,8);
    FUN_1000_d6e1(iVar1,(undefined1 *)&g_7c7a,1);
    FUN_1000_d6e1(iVar1,(undefined1 *)&g_7c7b,1);
    FUN_1000_c63a(iVar1);
  }
  return;
}


/* ===== 0x169a0 FUN_1000_69a0  callers=['FUN_1000_129d'] strings=[] */

void __cdecl16near FUN_1000_69a0(void)

{
  int iVar1;
  
  FUN_1000_d834(0x7c86,0x2792/*"CTLPANEL."*/);
  FUN_1000_d7cc(0x7c86,g_24ca);
  iVar1 = FUN_1000_d550(0x7c86,0x8302,0x180);
  if (iVar1 != -1) {
    FUN_1000_cdf1(iVar1,(char *)0x4f70,2);
    FUN_1000_cdf1(iVar1,0x7d32,6);
    FUN_1000_cdf1(iVar1,0x7c60,6);
    FUN_1000_cdf1(iVar1,0x7c6c,6);
    FUN_1000_cdf1(iVar1,0x7c66,6);
    FUN_1000_cdf1(iVar1,0x7c72,6);
    FUN_1000_cdf1(iVar1,(undefined2 *)&g_7e62,2);
    FUN_1000_cdf1(iVar1,(undefined1 *)&g_7ce0,8);
    FUN_1000_cdf1(iVar1,(undefined1 *)&g_7c7a,1);
    FUN_1000_cdf1(iVar1,(undefined1 *)&g_7c7b,1);
    FUN_1000_c63a(iVar1);
  }
  return;
}


/* ===== 0x16a7b FUN_1000_6a7b  callers=['FUN_1000_6f20'] strings=[] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl16near FUN_1000_6a7b(undefined2 param_1)

{
  undefined2 uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 local_6;
  undefined2 local_4;
  
  local_6 = 0;
  local_4 = 0;
  uVar1 = FUN_1000_d550(param_1,0x8000);
  FUN_1000_d6e1(uVar1,&local_6,4);
  FUN_1000_d6e1(uVar1,(undefined2 *)&g_7d1c,2);
  FUN_1000_c63a(uVar1);
  uVar3 = FUN_1000_5e52(local_6,local_4);
  g_7d20 = (undefined2)((ulong)uVar3 >> 0x10);
  g_7d1e = (undefined2)uVar3;
  uVar1 = FUN_1000_d550(param_1,0x8000);
  uVar4 = FUN_1000_d20e(uVar1);
  FUN_1000_c63a(uVar1);
  uVar4 = FUN_1000_dfe4(uVar4);
  g_7c52 = (undefined2)((ulong)uVar4 >> 0x10);
  g_7c50 = (undefined2)uVar4;
  bVar2 = true;
  FUN_1000_e67a();
  if (bVar2) {
    FUN_1000_129d(0x279c/*"Out of memory!  Try unloading your TSRs!"*/);
  }
  FUN_1000_5eb2(param_1,g_7c50,g_7c52);
  g_7d52 = g_7d1c + -8;
  if (g_7d1c == 0xc) {
    g_7d4c = (char *)0x139d;
  }
  else if (g_7d1c == 0xd) {
    g_7d4c = (char *)0x2345;
  }
  else if (g_7d1c == 0xe) {
    g_7d4c = (char *)0x4679;
  }
  _g_91f0 = 9;
  g_7d3e = 0x1ff;
  uVar5 = FUN_1000_dfe4((int)g_7d4c << 1,0);
  g_7c5e = (undefined2)((ulong)uVar5 >> 0x10);
  g_7c5c = (undefined2)uVar5;
  bVar2 = true;
  FUN_1000_e67a();
  if (bVar2) {
    FUN_1000_129d(0x27c5/*"Out of memory!  Try unloading your TSRs!"*/);
  }
  uVar5 = FUN_1000_dfe4(g_7d4c,0);
  g_a1ce = (undefined2)((ulong)uVar5 >> 0x10);
  g_a1cc = (undefined2)uVar5;
  bVar2 = true;
  FUN_1000_e67a();
  if (bVar2) {
    FUN_1000_129d(0x27ee/*"Out of memory!  Try unloading your TSRs!"*/);
  }
  g_7cec = 0;
  g_7ce8 = 0;
  g_7cea = 0;
  FUN_1000_6c27();
  FUN_1000_defe(g_7c5c,g_7c5e);
  FUN_1000_defe(g_a1cc,g_a1ce);
  FUN_1000_defe(uVar4);
  return uVar3;
}


/* ===== 0x16c27 FUN_1000_6c27  callers=['FUN_1000_6a7b'] strings=[] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_6c27(void)

{
  byte bVar1;
  bool bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint *puVar5;
  uint uVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  uint local_8;
  uint local_6;
  
  uVar8 = 0x102;
  bVar2 = true;
  FUN_1000_e2b3();
  uVar6 = local_6;
  while (local_6 = uVar6, uVar6 = FUN_1000_6dcb(), uVar6 != 0x101) {
    if (bVar2) {
      bVar2 = false;
      local_6._0_1_ = (byte)uVar6;
      *_g_7d1e = (byte)local_6;
      FUN_1000_e2b3();
      local_8 = uVar6;
    }
    else if (uVar6 == 0x100) {
      bVar2 = true;
      _g_91f0 = 9;
      uVar8 = 0x102;
      g_7d3e = 0x1ff;
      uVar6 = local_6;
    }
    else {
      if (uVar6 < uVar8) {
        puVar3 = (undefined1 *)&g_922a;
        uVar9 = uVar6;
      }
      else {
        g_922a = (undefined1)local_8;
        puVar3 = (undefined1 *)0x922b;
        uVar9 = local_6;
      }
      pbVar4 = (byte *)FUN_1000_6d59(puVar3,uVar9);
      bVar1 = *pbVar4;
      local_8 = (uint)bVar1;
      for (; (byte *)((int)(undefined2 *)&g_9228 + 1) < pbVar4; pbVar4 = pbVar4 + -1) {
        *_g_7d1e = *pbVar4;
        FUN_1000_e2b3();
      }
      if (uVar8 <= g_7d3e) {
        uVar7 = g_7c5e;
        puVar5 = (uint *)FUN_1000_e33b();
        *puVar5 = local_6;
        uVar7 = g_a1ce;
        pbVar4 = (byte *)FUN_1000_e33b();
        *pbVar4 = bVar1;
        uVar8 = uVar8 + 1;
        if ((uVar8 == g_7d3e) && (_g_91f0 < g_7d1c)) {
          _g_91f0 = _g_91f0 + 1;
          g_7d3e = (1 << ((byte)_g_91f0 & 0x1f)) - 1;
        }
      }
    }
  }
  return;
}


/* ===== 0x16d59 FUN_1000_6d59  callers=['FUN_1000_6c27'] strings=[] */

undefined1 * __cdecl16near FUN_1000_6d59(undefined1 *param_1,uint param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  while (0xff < param_2) {
    uVar4 = g_a1ce;
    puVar2 = (undefined1 *)FUN_1000_e33b();
    *param_1 = *puVar2;
    param_1 = param_1 + 1;
    uVar4 = g_7c5e;
    puVar3 = (uint *)FUN_1000_e33b();
    param_2 = *puVar3;
    iVar5 = iVar6 + 1;
    bVar1 = 3999 < iVar6;
    iVar6 = iVar5;
    if (bVar1) {
      FUN_1000_c9c4(0x2817/*"Error during code expansion!\n"*/);
      FUN_1000_c666(1);
    }
  }
  *param_1 = (undefined1)param_2;
  return param_1;
}


/* ===== 0x16dcb FUN_1000_6dcb  callers=['FUN_1000_6c27'] strings=[] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_1000_6dcb(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  
  for (; g_7cec < 0x19; g_7cec = g_7cec + 8) {
    FUN_1000_e2b3();
    uVar3 = 0;
    uVar1 = FUN_1000_e251();
    g_7ce8 = g_7ce8 | uVar1;
    g_7cea = g_7cea | uVar3;
  }
  uVar2 = FUN_1000_e292();
  g_7ce8 = FUN_1000_e251();
  g_7cec = g_7cec - _g_91f0;
  return uVar2;
}


/* ===== 0x16e40 FUN_1000_6e40  callers=['FUN_1000_4c32', 'FUN_1000_7dfb', 'FUN_1000_839a', 'FUN_1000_8b1e', 'FUN_1000_8ce4', 'FUN_1000_91f5', 'FUN_1000_949d', 'FUN_1000_98ea', 'FUN_1000_993a', 'FUN_1000_9c8e', 'FUN_1000_9fa8', 'FUN_1000_a4f3'] strings=[] */

void __cdecl16near FUN_1000_6e40(void)

{
  code *pcVar1;
  
  FUN_1000_c17c(1);
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  FUN_1000_c17c();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  FUN_1000_c17c();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}


/* ===== 0x16e84 FUN_1000_6e84  callers=['FUN_1000_4c32', 'FUN_1000_7b0a', 'FUN_1000_839a', 'FUN_1000_8ce4', 'FUN_1000_91f5', 'FUN_1000_949d', 'FUN_1000_98ea', 'FUN_1000_9fa8'] strings=[] */

void __cdecl16near FUN_1000_6e84(void)

{
  code *pcVar1;
  
  FUN_1000_c17c(1);
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  FUN_1000_c17c();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  FUN_1000_c17c();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  FUN_1000_c17c();
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  return;
}


/* ===== 0x16edd FUN_1000_6edd  callers=['FUN_1000_1312'] strings=[] */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl16near FUN_1000_6edd(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined1 extraout_AH;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined2 *puVar8;
  undefined2 extraout_DX;
  int unaff_SI;
  byte *pbVar9;
  undefined2 unaff_DI;
  byte *pbVar10;
  undefined2 uVar11;
  undefined2 unaff_SS;
  bool bVar12;
  undefined4 uVar13;
  undefined2 uVar14;
  int aiStack_6a [7];
  int aiStack_56 [8];
  int iStack_44;
  undefined2 local_42;
  undefined *puStack_40;
  int iStack_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined2 uStack_2c;
  undefined4 uStack_2a;
  undefined4 uStack_26;
  undefined4 local_22;
  byte bStack_1d;
  int iStack_1c;
  int iStack_1a;
  byte *pbStack_18;
  int iStack_16;
  byte *pbStack_14;
  int iStack_12;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  uint uStack_6;
  int iStack_4;
  
  FUN_1000_e39b(0x2315,&local_42,unaff_SS,unaff_DI);
  FUN_1000_d834(&local_42,0x2835/*"EGAHEAD."*/);
  FUN_1000_d7cc(&local_42,g_24ca);
  local_22 = (undefined2 *)FUN_1000_5fde(&local_42);
  uVar11 = (undefined2)((ulong)local_22 >> 0x10);
  puVar8 = (undefined2 *)local_22;
  iStack_e = puVar8[0x17];
  g_7e64 = puVar8[8];
  g_7d48 = puVar8[0xe];
  g_7d38 = puVar8[0x11];
  g_9224 = puVar8[0x14];
  uVar14 = 0x10;
  iVar4 = puVar8[7];
  iVar2 = FUN_1000_e1a3(puVar8[6],iVar4,0x10,0);
  g_7d46 = local_22._2_2_ + iVar2;
  g_7d44 = (undefined2 *)local_22;
  uStack_6 = 0;
  iStack_4 = 0;
  for (iStack_8 = 0; iVar2 = ((undefined2 *)local_22)[0x14] * 4,
      iVar2 - iStack_8 != 0 && iStack_8 <= iVar2; iStack_8 = iStack_8 + 1) {
    FUN_1000_e251(uVar14);
    FUN_1000_e33b();
    iVar4 = iStack_8 >> 0xf;
    FUN_1000_e251();
    uVar14 = 0x6fae;
    iVar2 = g_7d46;
    iVar5 = FUN_1000_e33b();
    uVar3 = unaff_SI * *(int *)(iVar5 + 2);
    bVar12 = CARRY2(uStack_6,uVar3);
    uStack_6 = uStack_6 + uVar3;
    iStack_4 = iStack_4 + ((int)uVar3 >> 0xf) + (uint)bVar12;
  }
  for (iStack_8 = 0; iStack_8 < 5; iStack_8 = iStack_8 + 1) {
    FUN_1000_5e52(uStack_6,iStack_4,iVar4);
    ((int*)&g_7cd6)[iStack_8] = extraout_DX;
  }
  FUN_1000_d834(&local_42,0x283e/*"EGALATCH."*/);
  FUN_1000_d7cc(&local_42,g_24ca);
  if (iStack_e == 0) {
    uStack_2a = FUN_1000_5fde(&local_42);
  }
  else {
    uStack_2a = FUN_1000_6a7b(&local_42);
  }
  uStack_32 = g_a1d4;
  uStack_30 = g_a1d6;
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  g_34f0 = 0xa000;
  for (iStack_8 = 0; iStack_8 < 4; iStack_8 = iStack_8 + 1) {
    FUN_1000_c193(iStack_8);
    *(undefined1 *)0x2000 = 0;
  }
  FUN_1000_d6d5(0x3d4,0x13);
  FUN_1000_d6d5(0x3d5,CONCAT11(extraout_AH,0x18));
  FUN_1000_d6c9(0x3ce,5);
  for (iStack_8 = 0; iStack_8 < 4; iStack_8 = iStack_8 + 1) {
    uVar13 = FUN_1000_e663(0x10,0);
    iStack_34 = FUN_1000_e1a3(uVar13);
    iStack_34 = uStack_2a._2_2_ + iStack_34;
    FUN_1000_d6c9(0x3c4,(1 << ((byte)iStack_8 & 0x1f)) << 8 | 2);
    FUN_1000_d503(iStack_34,0,0xa700,0,*local_22);
  }
  uVar11 = (undefined2)((ulong)local_22 >> 0x10);
  iVar4 = FUN_1000_e1a3(((undefined2 *)local_22)[9],((undefined2 *)local_22)[10],0x10,0);
  g_7cf6 = iVar4 + -0x5900;
  g_7cf4 = 0;
  uVar11 = (undefined2)((ulong)local_22 >> 0x10);
  iVar4 = FUN_1000_e1a3(((undefined2 *)local_22)[0xf],((undefined2 *)local_22)[0x10],0x10,0);
  g_7d60 = iVar4 + -0x5900;
  g_7d5e = 0;
  iVar4 = 0;
  uVar11 = (undefined2)((ulong)local_22 >> 0x10);
  iVar2 = FUN_1000_e1a3(((undefined2 *)local_22)[0x12],((undefined2 *)local_22)[0x13],0x10);
  g_7d42 = iVar2 + -0x5900;
  g_7d40 = 0;
  uVar11 = (undefined2)((ulong)local_22 >> 0x10);
  iVar2 = FUN_1000_e1a3(((undefined2 *)local_22)[4],((undefined2 *)local_22)[5],0x10,0);
  g_7d5c = local_22._2_2_ + iVar2;
  g_7d5a = (undefined2 *)local_22;
  FUN_1000_defe(uStack_32,uStack_30);
  pcVar1 = (code *)swi(0x10);
  (*pcVar1)();
  FUN_1000_bc20(0xf,0x4c,0xe);
  FUN_1000_d6c9(0x3ce,5);
  FUN_1000_d834(&local_42,0x2848/*"EGASPRIT."*/);
  FUN_1000_d7cc(&local_42,g_24ca);
  if (iStack_e == 0) {
    uStack_26 = FUN_1000_5fde(&local_42);
  }
  else {
    uStack_26 = FUN_1000_6a7b(&local_42);
  }
  uStack_2e = g_a1d4;
  uStack_2c = g_a1d6;
  g_a1d0 = 0;
  g_a1d2 = 0;
  g_7c54 = 0;
  g_7c56 = 0;
  for (iStack_8 = 0; iStack_8 < g_9224; iStack_8 = iStack_8 + 1) {
    FUN_1000_e251();
    FUN_1000_e33b();
    FUN_1000_e251();
    iVar2 = g_7d46;
    iVar5 = FUN_1000_e33b();
    iStack_10 = iVar4 * *(int *)(iVar5 + 2);
    iVar4 = (iStack_8 << 2) >> 0xf;
    FUN_1000_e251();
    iVar2 = g_7d46;
    iVar5 = FUN_1000_e33b();
    g_a1d2 = *(int *)(iVar5 + 6);
    g_a1d0 = *(int *)(iVar5 + 4);
    FUN_1000_e251();
    iVar5 = g_7d46;
    iVar6 = FUN_1000_e33b();
    iVar2 = g_7c56;
    *(int *)(iVar6 + 4) = g_7c54;
    *(int *)(iVar6 + 6) = iVar2;
    for (iStack_a = 0; iStack_a < 5; iStack_a = iStack_a + 1) {
      uVar13 = FUN_1000_e663(0x10,0);
      iVar2 = FUN_1000_e1a3(uVar13);
      iVar4 = iStack_a;
      iVar5 = g_a1d2 + uStack_26._2_2_;
      aiStack_56[iStack_a * 2] = g_a1d0;
      aiStack_56[iVar4 * 2 + 1] = iVar5 + iVar2;
      iVar2 = iStack_a;
      iVar4 = ((int*)&g_7cd6)[iStack_a];
      aiStack_6a[iStack_a * 2] = g_7c54;
      aiStack_6a[iVar2 * 2 + 1] = g_7c56 + iVar4;
      iVar4 = aiStack_56[iStack_a * 2 + 1];
      FUN_1000_d503(iVar4,aiStack_56[iStack_a * 2],aiStack_6a[iStack_a * 2 + 1],
                    aiStack_6a[iStack_a * 2],iStack_10);
    }
    g_7c54 = g_7c54 + iStack_10;
    FUN_1000_e251();
    FUN_1000_e33b();
    FUN_1000_e33b();
    FUN_1000_e251();
    iVar2 = g_7d46;
    FUN_1000_e33b();
    iVar5 = FUN_1000_e33b();
    iStack_10 = aiStack_6a[1] * *(int *)(iVar5 + 2);
    iVar2 = (iStack_8 << 2) >> 0xf;
    aiStack_6a[1] = 0x73e8;
    FUN_1000_e251();
    aiStack_6a[2] = 0x73f6;
    iVar5 = g_7d46;
    aiStack_6a[1] = iVar2;
    FUN_1000_e33b();
    aiStack_6a[3] = 0x73fe;
    iVar6 = FUN_1000_e33b();
    iVar2 = g_7c56;
    *(int *)(iVar6 + 4) = g_7c54;
    *(int *)(iVar6 + 6) = iVar2;
    for (iStack_c = 0; iVar2 = iStack_c, iStack_c < 5; iStack_c = iStack_c + 1) {
      iVar5 = ((int*)&g_7cd6)[iStack_c];
      aiStack_6a[iStack_c * 2] = g_7c54;
      aiStack_6a[iVar2 * 2 + 1] = g_7c56 + iVar5;
      pbStack_18 = (byte *)aiStack_6a[iStack_c * 2];
      iStack_16 = aiStack_6a[iStack_c * 2 + 1];
      pbStack_14 = (byte *)aiStack_56[iStack_c * 2];
      iStack_12 = aiStack_56[iStack_c * 2 + 1];
      iVar5 = (iStack_8 << 2) >> 0xf;
      aiStack_6a[4] = 0x748c;
      FUN_1000_e251();
      aiStack_6a[5] = 0x749a;
      iVar2 = g_7d46;
      aiStack_6a[4] = iVar5;
      piVar7 = (int *)FUN_1000_e33b();
      iStack_1a = *piVar7;
      iVar5 = (iStack_8 << 2) >> 0xf;
      aiStack_6a[6] = 0x74b1;
      FUN_1000_e251();
      iVar2 = g_7d46;
      aiStack_6a[6] = iVar5;
      iVar6 = FUN_1000_e33b();
      iVar5 = iStack_c;
      iVar2 = *(int *)(iVar6 + 2);
      iStack_1c = iVar2;
      bStack_1d = -(iStack_c == 4);
      aiStack_6a[6] = 0x2315;
      iVar6 = iStack_1a;
      pbVar9 = pbStack_14;
      pbVar10 = pbStack_18;
      do {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pbVar10 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
        }
        *pbVar10 = bStack_1d;
        pbVar10 = pbVar10 + -iStack_1a;
        iVar6 = iStack_1a + 1;
        uVar3 = (uint)bStack_1d;
        do {
          uVar3 = CONCAT11((uVar3 & 1) != 0,*pbVar10);
          *pbVar10 = (byte)(uVar3 >> 1);
          pbVar10 = pbVar10 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        pbVar10 = pbVar10 + (-1 - iStack_1a);
        iVar6 = iStack_1a + 1;
        uVar3 = (uint)bStack_1d;
        do {
          uVar3 = CONCAT11((uVar3 & 1) != 0,*pbVar10);
          *pbVar10 = (byte)(uVar3 >> 1);
          pbVar10 = pbVar10 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar2 = iVar2 + -1;
        iVar6 = iStack_1a;
      } while (iVar2 != 0);
      iVar2 = aiStack_6a[iStack_c * 2 + 1];
      aiStack_56[iStack_c * 2] = aiStack_6a[iStack_c * 2];
      aiStack_56[iVar5 * 2 + 1] = iVar2;
    }
    g_7c54 = g_7c54 + iStack_10;
    iVar2 = (iStack_8 << 2) >> 0xf;
    aiStack_6a[4] = 0x757f;
    FUN_1000_e251();
    aiStack_6a[5] = 0x758d;
    aiStack_6a[4] = iVar2;
    FUN_1000_e33b();
    aiStack_6a[6] = 0x7595;
    FUN_1000_e33b();
    iVar5 = (iStack_8 << 2) >> 0xf;
    aiStack_6a[6] = 0x75aa;
    FUN_1000_e251();
    iVar2 = g_7d46;
    aiStack_6a[6] = iVar5;
    FUN_1000_e33b();
    iVar5 = FUN_1000_e33b();
    iStack_10 = aiStack_56[0] * *(int *)(iVar5 + 2);
    iVar2 = (iStack_8 << 2) >> 0xf;
    aiStack_56[0] = 0x75d9;
    FUN_1000_e251();
    aiStack_56[1] = 0x75e7;
    iVar5 = g_7d46;
    aiStack_56[0] = iVar2;
    FUN_1000_e33b();
    aiStack_56[2] = 0x75ef;
    iVar6 = FUN_1000_e33b();
    iVar2 = g_7c56;
    *(int *)(iVar6 + 4) = g_7c54;
    *(int *)(iVar6 + 6) = iVar2;
    for (iStack_c = 0; iVar2 = iStack_c, iStack_c < 5; iStack_c = iStack_c + 1) {
      iStack_44 = iStack_c * 2;
      iVar5 = ((int*)&g_7cd6)[iStack_c];
      aiStack_6a[iStack_c * 2] = g_7c54;
      aiStack_6a[iVar2 * 2 + 1] = g_7c56 + iVar5;
      pbStack_18 = (byte *)aiStack_6a[iStack_c * 2];
      iStack_16 = aiStack_6a[iStack_c * 2 + 1];
      pbStack_14 = (byte *)aiStack_56[iStack_c * 2];
      iStack_12 = aiStack_56[iStack_c * 2 + 1];
      iVar5 = (iStack_8 << 2) >> 0xf;
      aiStack_56[3] = 0x767d;
      FUN_1000_e251();
      aiStack_56[4] = 0x768b;
      iVar2 = g_7d46;
      aiStack_56[3] = iVar5;
      FUN_1000_e33b();
      aiStack_56[5] = 0x7693;
      piVar7 = (int *)FUN_1000_e33b();
      iStack_1a = *piVar7;
      iVar5 = (iStack_8 << 2) >> 0xf;
      aiStack_56[6] = 0x76aa;
      FUN_1000_e251();
      aiStack_56[7] = 0x76b8;
      iVar2 = g_7d46;
      aiStack_56[6] = iVar5;
      FUN_1000_e33b();
      iVar6 = FUN_1000_e33b();
      iVar5 = iStack_c;
      iVar2 = *(int *)(iVar6 + 2);
      iStack_1c = iVar2;
      bStack_1d = -(iStack_c == 4);
      aiStack_56[7] = 0x2315;
      iVar6 = iStack_1a;
      pbVar9 = pbStack_14;
      pbVar10 = pbStack_18;
      do {
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pbVar10 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
        }
        pbVar10 = pbVar10 + -iStack_1a;
        uVar3 = (uint)bStack_1d;
        iVar6 = iStack_1a;
        do {
          uVar3 = CONCAT11((uVar3 & 1) != 0,*pbVar10);
          *pbVar10 = (byte)(uVar3 >> 1);
          pbVar10 = pbVar10 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        pbVar10 = pbVar10 + -iStack_1a;
        uVar3 = (uint)bStack_1d;
        iVar6 = iStack_1a;
        do {
          uVar3 = CONCAT11((uVar3 & 1) != 0,*pbVar10);
          *pbVar10 = (byte)(uVar3 >> 1);
          pbVar10 = pbVar10 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        iVar2 = iVar2 + -1;
        iVar6 = iStack_1a;
      } while (iVar2 != 0);
      iVar2 = aiStack_6a[iStack_c * 2 + 1];
      aiStack_56[iStack_c * 2] = aiStack_6a[iStack_c * 2];
      aiStack_56[iVar5 * 2 + 1] = iVar2;
    }
    g_7c54 = g_7c54 + iStack_10;
    iVar5 = (iStack_8 << 2) >> 0xf;
    aiStack_56[3] = 0x7778;
    FUN_1000_e251();
    aiStack_56[4] = 0x7786;
    iVar2 = g_7d46;
    aiStack_56[3] = iVar5;
    FUN_1000_e33b();
    aiStack_56[5] = 0x778e;
    puVar8 = (undefined2 *)FUN_1000_e33b();
    aiStack_56[6] = *puVar8;
    iVar5 = (iStack_8 << 2) >> 0xf;
    aiStack_56[5] = 0x77a3;
    FUN_1000_e251();
    aiStack_56[6] = 0x77b1;
    iVar2 = g_7d46;
    aiStack_56[5] = iVar5;
    FUN_1000_e33b();
    aiStack_56[7] = 0x77b9;
    iVar5 = FUN_1000_e33b();
    iStack_10 = iStack_44 * *(int *)(iVar5 + 2);
    iStack_44 = (iStack_8 << 2) >> 0xf;
    FUN_1000_e251();
    local_42 = 0x77e0;
    iVar5 = g_7d46;
    FUN_1000_e33b();
    puStack_40 = (undefined *)&g_77e8;
    iVar6 = FUN_1000_e33b();
    iVar2 = g_7c56;
    *(int *)(iVar6 + 4) = g_7c54;
    *(int *)(iVar6 + 6) = iVar2;
    for (iStack_c = 0; iVar2 = iStack_c, iStack_c < 5; iStack_c = iStack_c + 1) {
      iVar4 = ((int*)&g_7cd6)[iStack_c];
      aiStack_6a[iStack_c * 2] = g_7c54;
      aiStack_6a[iVar2 * 2 + 1] = g_7c56 + iVar4;
      pbStack_18 = (byte *)aiStack_6a[iStack_c * 2];
      iStack_16 = aiStack_6a[iStack_c * 2 + 1];
      pbStack_14 = (byte *)aiStack_56[iStack_c * 2];
      iStack_12 = aiStack_56[iStack_c * 2 + 1];
      FUN_1000_e251();
      iVar4 = g_7d46;
      FUN_1000_e33b();
      piVar7 = (int *)FUN_1000_e33b();
      iStack_1a = *piVar7;
      FUN_1000_e251();
      iVar4 = g_7d46;
      FUN_1000_e33b();
      iVar5 = FUN_1000_e33b();
      iVar2 = iStack_c;
      iVar4 = *(int *)(iVar5 + 2);
      iStack_1c = iVar4;
      bStack_1d = -(iStack_c == 4);
      iVar5 = iStack_1a;
      pbVar9 = pbStack_14;
      pbVar10 = pbStack_18;
      do {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pbVar10 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
        }
        pbVar10 = pbVar10 + -iStack_1a;
        uVar3 = (uint)bStack_1d;
        iVar5 = iStack_1a;
        do {
          uVar3 = CONCAT11((uVar3 & 1) != 0,*pbVar10);
          *pbVar10 = (byte)(uVar3 >> 1);
          pbVar10 = pbVar10 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        pbVar10 = pbVar10 + -iStack_1a;
        uVar3 = (uint)bStack_1d;
        iVar5 = iStack_1a;
        do {
          uVar3 = CONCAT11((uVar3 & 1) != 0,*pbVar10);
          *pbVar10 = (byte)(uVar3 >> 1);
          pbVar10 = pbVar10 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        iVar4 = iVar4 + -1;
        iVar5 = iStack_1a;
      } while (iVar4 != 0);
      iVar4 = aiStack_6a[iStack_c * 2 + 1];
      aiStack_56[iStack_c * 2] = aiStack_6a[iStack_c * 2];
      aiStack_56[iVar2 * 2 + 1] = iVar4;
      iVar4 = 0x2315;
    }
    g_7c54 = g_7c54 + iStack_10;
  }
  FUN_1000_defe(uStack_2e,uStack_2c);
  return;
}


/* ===== 0x16f20 FUN_1000_6f20  callers=['FUN_1000_b8d8'] strings=[] */

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __cdecl16near FUN_1000_6f20(undefined2 param_1,int param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined1 extraout_AH;
  int iVar8;
  int iVar9;
  undefined2 extraout_DX;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  int *piVar14;
  undefined2 *puVar15;
  int unaff_BP;
  undefined1 *puVar16;
  undefined2 unaff_DI;
  undefined1 *puVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 unaff_SS;
  undefined4 uVar20;
  int in_stack_00000000;
  int in_stack_00000016;
  int in_stack_00000028;
  int iVar21;
  int iVar22;
  undefined2 uVar23;
  
  uVar18 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x20) >> 0x10);
  iVar10 = (int)*(undefined4 *)(unaff_BP + -0x20);
  *(undefined2 *)(unaff_BP + -0xc) = *(undefined2 *)(iVar10 + 0x2e);
  g_7e64 = *(undefined2 *)(iVar10 + 0x10);
  g_7d48 = *(undefined2 *)(iVar10 + 0x1c);
  g_7d38 = *(undefined2 *)(iVar10 + 0x22);
  g_9224 = *(int *)(iVar10 + 0x28);
  uVar23 = 0x10;
  iVar11 = *(int *)(iVar10 + 0xe);
  iVar10 = FUN_1000_e1a3(*(undefined2 *)(iVar10 + 0xc),iVar11,0x10,0);
  g_7d46 = *(int *)(unaff_BP + -0x1e) + iVar10;
  g_7d44 = *(undefined2 *)(unaff_BP + -0x20);
  *(undefined2 *)(unaff_BP + -4) = 0;
  *(undefined2 *)(unaff_BP + -2) = 0;
  *(undefined2 *)(unaff_BP + -6) = 0;
  while (iVar10 = *(int *)((int)*(undefined4 *)(unaff_BP + -0x20) + 0x28) * 4,
        iVar10 - *(int *)(unaff_BP + -6) != 0 && *(int *)(unaff_BP + -6) <= iVar10) {
    FUN_1000_e251(uVar23);
    FUN_1000_e33b();
    iVar11 = *(int *)(unaff_BP + -6) >> 0xf;
    FUN_1000_e251();
    uVar23 = 0x6fae;
    iVar10 = g_7d46;
    iVar12 = FUN_1000_e33b();
    uVar7 = in_stack_00000000 * *(int *)(iVar12 + 2);
    puVar1 = (uint *)(unaff_BP + -4);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + uVar7;
    *(int *)(unaff_BP + -2) =
         *(int *)(unaff_BP + -2) + ((int)uVar7 >> 0xf) + (uint)CARRY2(uVar6,uVar7);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  }
  *(undefined2 *)(unaff_BP + -6) = 0;
  while (*(int *)(unaff_BP + -6) < 5) {
    FUN_1000_5e52(*(undefined2 *)(unaff_BP + -4),*(undefined2 *)(unaff_BP + -2),iVar11);
    ((int*)&g_7cd6)[*(int *)(unaff_BP + -6)] = extraout_DX;
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  }
  FUN_1000_d834(unaff_BP + -0x40,0x283e/*"EGALATCH."*/);
  FUN_1000_d7cc(unaff_BP + -0x40,g_24ca);
  if (*(int *)(unaff_BP + -0xc) == 0) {
    uVar20 = FUN_1000_5fde(unaff_BP + -0x40);
  }
  else {
    uVar20 = FUN_1000_6a7b(unaff_BP + -0x40);
  }
  *(undefined2 *)(unaff_BP + -0x28) = (int)uVar20;
  *(undefined2 *)(unaff_BP + -0x26) = (int)((ulong)uVar20 >> 0x10);
  uVar18 = g_a1d6;
  *(undefined2 *)(unaff_BP + -0x30) = g_a1d4;
  *(undefined2 *)(unaff_BP + -0x2e) = uVar18;
  pcVar5 = (code *)swi(0x10);
  (*pcVar5)();
  g_34f0 = 0xa000;
  *(undefined2 *)(unaff_BP + -6) = 0;
  while (*(int *)(unaff_BP + -6) < 4) {
    FUN_1000_c193(*(undefined2 *)(unaff_BP + -6));
    *(undefined1 *)0x2000 = 0;
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  }
  FUN_1000_d6d5(0x3d4,0x13);
  FUN_1000_d6d5(0x3d5,CONCAT11(extraout_AH,0x18));
  FUN_1000_d6c9(0x3ce,5);
  *(undefined2 *)(unaff_BP + -6) = 0;
  while (*(int *)(unaff_BP + -6) < 4) {
    uVar20 = FUN_1000_e663(0x10,0);
    iVar11 = FUN_1000_e1a3(uVar20);
    *(int *)(unaff_BP + -0x32) = *(int *)(unaff_BP + -0x26) + iVar11;
    FUN_1000_d6c9(0x3c4,(1 << (*(byte *)(unaff_BP + -6) & 0x1f)) << 8 | 2);
    FUN_1000_d503(*(undefined2 *)(unaff_BP + -0x32),0,0xa700,0,
                  *(undefined2 *)*(undefined4 *)(unaff_BP + -0x20));
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  }
  uVar18 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x20) >> 0x10);
  iVar11 = (int)*(undefined4 *)(unaff_BP + -0x20);
  iVar11 = FUN_1000_e1a3(*(undefined2 *)(iVar11 + 0x12),*(undefined2 *)(iVar11 + 0x14),0x10,0);
  g_7cf6 = iVar11 + -0x5900;
  g_7cf4 = 0;
  iVar11 = 0x10;
  uVar23 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x20) >> 0x10);
  iVar10 = (int)*(undefined4 *)(unaff_BP + -0x20);
  uVar18 = *(undefined2 *)(iVar10 + 0x20);
  iVar10 = FUN_1000_e1a3(*(undefined2 *)(iVar10 + 0x1e),uVar18,0x10,0);
  g_7d60 = iVar10 + -0x5900;
  g_7d5e = 0;
  iVar10 = 0;
  iVar22 = 0x10;
  uVar19 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x20) >> 0x10);
  iVar12 = (int)*(undefined4 *)(unaff_BP + -0x20);
  uVar23 = *(undefined2 *)(iVar12 + 0x26);
  iVar12 = FUN_1000_e1a3(*(undefined2 *)(iVar12 + 0x24),uVar23,0x10);
  g_7d42 = iVar12 + -0x5900;
  g_7d40 = 0;
  iVar21 = 0;
  uVar19 = (undefined2)((ulong)*(undefined4 *)(unaff_BP + -0x20) >> 0x10);
  iVar12 = (int)*(undefined4 *)(unaff_BP + -0x20);
  iVar12 = FUN_1000_e1a3(*(undefined2 *)(iVar12 + 8),*(undefined2 *)(iVar12 + 10),0x10,0);
  g_7d5c = *(int *)(unaff_BP + -0x1e) + iVar12;
  g_7d5a = *(undefined2 *)(unaff_BP + -0x20);
  FUN_1000_defe(*(undefined2 *)(unaff_BP + -0x30),*(undefined2 *)(unaff_BP + -0x2e));
  pcVar5 = (code *)swi(0x10);
  (*pcVar5)();
  FUN_1000_bc20(0xf,0x4c,0xe);
  FUN_1000_d6c9(0x3ce,5);
  FUN_1000_d834(unaff_BP + -0x40,0x2848/*"EGASPRIT."*/);
  FUN_1000_d7cc(unaff_BP + -0x40,g_24ca);
  if (*(int *)(unaff_BP + -0xc) == 0) {
    uVar20 = FUN_1000_5fde(unaff_BP + -0x40);
  }
  else {
    uVar20 = FUN_1000_6a7b(unaff_BP + -0x40);
  }
  *(undefined2 *)(unaff_BP + -0x24) = (int)uVar20;
  *(undefined2 *)(unaff_BP + -0x22) = (int)((ulong)uVar20 >> 0x10);
  uVar19 = g_a1d6;
  *(undefined2 *)(unaff_BP + -0x2c) = g_a1d4;
  *(undefined2 *)(unaff_BP + -0x2a) = uVar19;
  g_a1d0 = 0;
  g_a1d2 = 0;
  g_7c54 = 0;
  g_7c56 = 0;
  *(undefined2 *)(unaff_BP + -6) = 0;
  while (*(int *)(unaff_BP + -6) < g_9224) {
    FUN_1000_e251();
    FUN_1000_e33b();
    iVar21 = (*(int *)(unaff_BP + -6) << 2) >> 0xf;
    FUN_1000_e251();
    uVar23 = 0x7256;
    iVar11 = g_7d46;
    iVar12 = FUN_1000_e33b();
    *(int *)(unaff_BP + -0xe) = iVar10 * *(int *)(iVar12 + 2);
    iVar10 = (*(int *)(unaff_BP + -6) << 2) >> 0xf;
    FUN_1000_e251();
    uVar18 = 0x727d;
    iVar11 = g_7d46;
    iVar12 = FUN_1000_e33b();
    g_a1d2 = *(int *)(iVar12 + 6);
    g_a1d0 = *(undefined2 *)(iVar12 + 4);
    iVar11 = (*(int *)(unaff_BP + -6) << 2) >> 0xf;
    FUN_1000_e251();
    iVar9 = g_7d46;
    iVar8 = FUN_1000_e33b();
    iVar12 = g_7c56;
    *(int *)(iVar8 + 4) = g_7c54;
    *(int *)(iVar8 + 6) = iVar12;
    *(undefined2 *)(unaff_BP + -8) = 0;
    while (*(int *)(unaff_BP + -8) < 5) {
      uVar20 = FUN_1000_e663(0x10,0);
      iVar11 = FUN_1000_e1a3(uVar20);
      iVar10 = g_a1d2 + *(int *)(unaff_BP + -0x22);
      puVar13 = (undefined2 *)(*(int *)(unaff_BP + -8) * 4 + unaff_BP + -0x54);
      *puVar13 = g_a1d0;
      puVar13[1] = iVar10 + iVar11;
      piVar14 = (int *)(*(int *)(unaff_BP + -8) * 4 + unaff_BP + -0x68);
      iVar11 = g_7c56 + ((int*)&g_7cd6)[*(int *)(unaff_BP + -8)];
      *piVar14 = g_7c54;
      piVar14[1] = iVar11;
      iVar11 = *(int *)(*(int *)(unaff_BP + -8) * 4 + unaff_BP + -0x66);
      uVar18 = *(undefined2 *)(*(int *)(unaff_BP + -8) * 4 + unaff_BP + -0x54);
      iVar10 = *(int *)(*(int *)(unaff_BP + -8) * 4 + unaff_BP + -0x52);
      iVar22 = 0x7361;
      FUN_1000_d503();
      *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + 1;
    }
    g_7c54 = g_7c54 + *(int *)(unaff_BP + -0xe);
    FUN_1000_e251();
    FUN_1000_e33b();
    FUN_1000_e33b();
    FUN_1000_e251();
    iVar12 = g_7d46;
    FUN_1000_e33b();
    iVar9 = FUN_1000_e33b();
    *(int *)(unaff_BP + -0xe) = param_2 * *(int *)(iVar9 + 2);
    param_2 = (*(int *)(unaff_BP + -6) << 2) >> 0xf;
    FUN_1000_e251();
    iVar9 = g_7d46;
    FUN_1000_e33b();
    iVar8 = FUN_1000_e33b();
    iVar12 = g_7c56;
    *(int *)(iVar8 + 4) = g_7c54;
    *(int *)(iVar8 + 6) = iVar12;
    *(undefined2 *)(unaff_BP + -10) = 0;
    while (*(int *)(unaff_BP + -10) < 5) {
      piVar14 = (int *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x68);
      iVar12 = g_7c56 + ((int*)&g_7cd6)[*(int *)(unaff_BP + -10)];
      *piVar14 = g_7c54;
      piVar14[1] = iVar12;
      *(undefined2 *)(unaff_BP + -0x16) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x68);
      *(undefined2 *)(unaff_BP + -0x14) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x66);
      *(undefined2 *)(unaff_BP + -0x12) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x54);
      *(undefined2 *)(unaff_BP + -0x10) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x52);
      FUN_1000_e251();
      iVar12 = g_7d46;
      puVar13 = (undefined2 *)FUN_1000_e33b();
      *(undefined2 *)(unaff_BP + -0x18) = *puVar13;
      FUN_1000_e251();
      iVar12 = g_7d46;
      iVar9 = FUN_1000_e33b();
      *(undefined2 *)(unaff_BP + -0x1a) = *(undefined2 *)(iVar9 + 2);
      *(char *)(unaff_BP + -0x1b) = -(*(int *)(unaff_BP + -10) == 4);
      puVar17 = (undefined1 *)*(undefined2 *)(unaff_BP + -0x16);
      puVar16 = (undefined1 *)*(undefined2 *)(unaff_BP + -0x12);
      iVar12 = *(int *)(unaff_BP + -0x18);
      iVar9 = *(int *)(unaff_BP + -0x1a);
      uVar19 = *(undefined2 *)(unaff_BP + -0x14);
      uVar4 = *(undefined2 *)(unaff_BP + -0x10);
      iVar8 = iVar12;
      do {
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar17;
          puVar17 = puVar17 + 1;
          puVar2 = puVar16;
          puVar16 = puVar16 + 1;
          *puVar3 = *puVar2;
        }
        *puVar17 = *(undefined1 *)(unaff_BP + -0x1b);
        puVar17 = puVar17 + -iVar12;
        iVar8 = iVar12 + 1;
        uVar6 = (uint)*(byte *)(unaff_BP + -0x1b);
        do {
          uVar6 = CONCAT11((uVar6 & 1) != 0,*puVar17);
          *puVar17 = (char)(uVar6 >> 1);
          puVar17 = puVar17 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        puVar17 = puVar17 + (-1 - iVar12);
        iVar8 = iVar12 + 1;
        uVar6 = (uint)*(byte *)(unaff_BP + -0x1b);
        do {
          uVar6 = CONCAT11((uVar6 & 1) != 0,*puVar17);
          *puVar17 = (char)(uVar6 >> 1);
          puVar17 = puVar17 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar9 = iVar9 + -1;
        iVar8 = iVar12;
      } while (iVar9 != 0);
      puVar13 = (undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x68);
      uVar19 = puVar13[1];
      puVar15 = (undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x54);
      *puVar15 = *puVar13;
      puVar15[1] = uVar19;
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
    }
    g_7c54 = g_7c54 + *(int *)(unaff_BP + -0xe);
    FUN_1000_e251();
    FUN_1000_e33b();
    FUN_1000_e33b();
    FUN_1000_e251();
    iVar12 = g_7d46;
    FUN_1000_e33b();
    iVar9 = FUN_1000_e33b();
    *(int *)(unaff_BP + -0xe) = in_stack_00000016 * *(int *)(iVar9 + 2);
    in_stack_00000016 = (*(int *)(unaff_BP + -6) << 2) >> 0xf;
    FUN_1000_e251();
    iVar9 = g_7d46;
    FUN_1000_e33b();
    iVar8 = FUN_1000_e33b();
    iVar12 = g_7c56;
    *(int *)(iVar8 + 4) = g_7c54;
    *(int *)(iVar8 + 6) = iVar12;
    *(undefined2 *)(unaff_BP + -10) = 0;
    while (*(int *)(unaff_BP + -10) < 5) {
      piVar14 = (int *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x68);
      in_stack_00000028 = *(int *)(unaff_BP + -10) * 2;
      iVar12 = g_7c56 + ((int*)&g_7cd6)[*(int *)(unaff_BP + -10)];
      *piVar14 = g_7c54;
      piVar14[1] = iVar12;
      *(undefined2 *)(unaff_BP + -0x16) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x68);
      *(undefined2 *)(unaff_BP + -0x14) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x66);
      *(undefined2 *)(unaff_BP + -0x12) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x54);
      *(undefined2 *)(unaff_BP + -0x10) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x52);
      FUN_1000_e251();
      iVar12 = g_7d46;
      FUN_1000_e33b();
      puVar13 = (undefined2 *)FUN_1000_e33b();
      *(undefined2 *)(unaff_BP + -0x18) = *puVar13;
      FUN_1000_e251();
      iVar12 = g_7d46;
      FUN_1000_e33b();
      iVar9 = FUN_1000_e33b();
      *(undefined2 *)(unaff_BP + -0x1a) = *(undefined2 *)(iVar9 + 2);
      *(char *)(unaff_BP + -0x1b) = -(*(int *)(unaff_BP + -10) == 4);
      puVar17 = (undefined1 *)*(undefined2 *)(unaff_BP + -0x16);
      puVar16 = (undefined1 *)*(undefined2 *)(unaff_BP + -0x12);
      iVar12 = *(int *)(unaff_BP + -0x18);
      iVar9 = *(int *)(unaff_BP + -0x1a);
      uVar19 = *(undefined2 *)(unaff_BP + -0x14);
      uVar4 = *(undefined2 *)(unaff_BP + -0x10);
      iVar8 = iVar12;
      do {
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar3 = puVar17;
          puVar17 = puVar17 + 1;
          puVar2 = puVar16;
          puVar16 = puVar16 + 1;
          *puVar3 = *puVar2;
        }
        puVar17 = puVar17 + -iVar12;
        uVar6 = (uint)*(byte *)(unaff_BP + -0x1b);
        iVar8 = iVar12;
        do {
          uVar6 = CONCAT11((uVar6 & 1) != 0,*puVar17);
          *puVar17 = (char)(uVar6 >> 1);
          puVar17 = puVar17 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        puVar17 = puVar17 + -iVar12;
        uVar6 = (uint)*(byte *)(unaff_BP + -0x1b);
        iVar8 = iVar12;
        do {
          uVar6 = CONCAT11((uVar6 & 1) != 0,*puVar17);
          *puVar17 = (char)(uVar6 >> 1);
          puVar17 = puVar17 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar9 = iVar9 + -1;
        iVar8 = iVar12;
      } while (iVar9 != 0);
      puVar13 = (undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x68);
      uVar19 = puVar13[1];
      puVar15 = (undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x54);
      *puVar15 = *puVar13;
      puVar15[1] = uVar19;
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
    }
    g_7c54 = g_7c54 + *(int *)(unaff_BP + -0xe);
    FUN_1000_e251();
    FUN_1000_e33b();
    FUN_1000_e33b();
    FUN_1000_e251();
    iVar12 = g_7d46;
    FUN_1000_e33b();
    iVar9 = FUN_1000_e33b();
    *(int *)(unaff_BP + -0xe) = in_stack_00000028 * *(int *)(iVar9 + 2);
    in_stack_00000028 = (*(int *)(unaff_BP + -6) << 2) >> 0xf;
    FUN_1000_e251();
    iVar9 = g_7d46;
    FUN_1000_e33b();
    iVar8 = FUN_1000_e33b();
    iVar12 = g_7c56;
    *(int *)(iVar8 + 4) = g_7c54;
    *(int *)(iVar8 + 6) = iVar12;
    *(undefined2 *)(unaff_BP + -10) = 0;
    while (*(int *)(unaff_BP + -10) < 5) {
      piVar14 = (int *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x68);
      iVar11 = *(int *)(unaff_BP + -10) * 2;
      iVar10 = g_7c56 + ((int*)&g_7cd6)[*(int *)(unaff_BP + -10)];
      *piVar14 = g_7c54;
      piVar14[1] = iVar10;
      *(undefined2 *)(unaff_BP + -0x16) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x68);
      *(undefined2 *)(unaff_BP + -0x14) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x66);
      *(undefined2 *)(unaff_BP + -0x12) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x54);
      *(undefined2 *)(unaff_BP + -0x10) =
           *(undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x52);
      FUN_1000_e251();
      iVar21 = 0x7884;
      iVar10 = g_7d46;
      FUN_1000_e33b();
      uVar23 = 0x788c;
      puVar13 = (undefined2 *)FUN_1000_e33b();
      *(undefined2 *)(unaff_BP + -0x18) = *puVar13;
      iVar22 = (*(int *)(unaff_BP + -6) << 2) >> 0xf;
      FUN_1000_e251();
      iVar10 = g_7d46;
      FUN_1000_e33b();
      iVar12 = FUN_1000_e33b();
      *(undefined2 *)(unaff_BP + -0x1a) = *(undefined2 *)(iVar12 + 2);
      *(char *)(unaff_BP + -0x1b) = -(*(int *)(unaff_BP + -10) == 4);
      puVar17 = (undefined1 *)*(undefined2 *)(unaff_BP + -0x16);
      puVar16 = (undefined1 *)*(undefined2 *)(unaff_BP + -0x12);
      iVar10 = *(int *)(unaff_BP + -0x18);
      iVar12 = *(int *)(unaff_BP + -0x1a);
      uVar18 = *(undefined2 *)(unaff_BP + -0x14);
      uVar19 = *(undefined2 *)(unaff_BP + -0x10);
      iVar9 = iVar10;
      do {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          puVar3 = puVar17;
          puVar17 = puVar17 + 1;
          puVar2 = puVar16;
          puVar16 = puVar16 + 1;
          *puVar3 = *puVar2;
        }
        puVar17 = puVar17 + -iVar10;
        uVar6 = (uint)*(byte *)(unaff_BP + -0x1b);
        iVar9 = iVar10;
        do {
          uVar6 = CONCAT11((uVar6 & 1) != 0,*puVar17);
          *puVar17 = (char)(uVar6 >> 1);
          puVar17 = puVar17 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        puVar17 = puVar17 + -iVar10;
        uVar6 = (uint)*(byte *)(unaff_BP + -0x1b);
        iVar9 = iVar10;
        do {
          uVar6 = CONCAT11((uVar6 & 1) != 0,*puVar17);
          *puVar17 = (char)(uVar6 >> 1);
          puVar17 = puVar17 + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        iVar12 = iVar12 + -1;
        iVar9 = iVar10;
      } while (iVar12 != 0);
      puVar13 = (undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x68);
      uVar18 = puVar13[1];
      puVar15 = (undefined2 *)(*(int *)(unaff_BP + -10) * 4 + unaff_BP + -0x54);
      *puVar15 = *puVar13;
      puVar15[1] = uVar18;
      *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + 1;
      iVar10 = 0x2315;
      uVar18 = unaff_DI;
    }
    g_7c54 = g_7c54 + *(int *)(unaff_BP + -0xe);
    *(int *)(unaff_BP + -6) = *(int *)(unaff_BP + -6) + 1;
  }
  FUN_1000_defe(*(undefined2 *)(unaff_BP + -0x2c),*(undefined2 *)(unaff_BP + -0x2a),iVar21,uVar23,
                iVar22,iVar10,uVar18,iVar11);
  return;
}


/* ===== 0x17985 FUN_1000_7985  callers=[] strings=[] */

undefined4 __cdecl16near FUN_1000_7985(uint *param_1,uint param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  undefined2 uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  puVar5 = param_4;
  uVar6 = param_4._2_2_;
  puVar3 = (uint *)param_4;
  param_4 = (uint *)CONCAT22(param_4._2_2_,(uint *)param_4 + 2);
  iVar7 = FUN_1000_e1a3(param_2 + 1,param_3 + (0xfffe < param_2),2,0);
  puVar8 = (uint *)param_1 + iVar7;
  do {
    uVar9 = 1;
    uVar2 = *param_1;
    while ((puVar1 = (uint *)param_1 + 1, param_1 = (uint *)CONCAT22(param_1._2_2_,puVar1),
           *param_1 == uVar2 && (puVar1 < puVar8))) {
      uVar9 = uVar9 + 1;
    }
    if ((uVar9 < 4) && (uVar2 != 0xfefe)) {
      for (uVar10 = 1; uVar10 <= uVar9; uVar10 = uVar10 + 1) {
        *param_4 = uVar2;
        param_4 = (uint *)CONCAT22(param_4._2_2_,(uint *)param_4 + 1);
      }
    }
    else {
      *param_4 = 0xfefe;
      puVar4 = (uint *)param_4;
      param_4 = (uint *)CONCAT22(param_4._2_2_,(uint *)param_4 + 1);
      *param_4 = uVar9;
      param_4 = (uint *)CONCAT22(param_4._2_2_,puVar4 + 2);
      *param_4 = uVar2;
      param_4 = (uint *)CONCAT22(param_4._2_2_,puVar4 + 3);
    }
  } while (puVar1 < puVar8);
  uVar11 = FUN_1000_e1a3((int)(uint *)param_4 - (int)puVar3,-(uint)((uint *)param_4 < puVar3),2,0);
  *puVar5 = param_2;
  puVar3[1] = param_3;
  return CONCAT22((int)((ulong)uVar11 >> 0x10) << 1 | (uint)((int)uVar11 < 0),(int)uVar11 << 1);
}


/* ===== 0x17a78 FUN_1000_7a78  callers=['FUN_1000_066b'] strings=[] */

void __cdecl16near FUN_1000_7a78(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = FUN_1000_e1a3(*param_1,((undefined2 *)param_1)[1],2,0);
  puVar5 = (uint *)param_2 + iVar4;
  param_1 = (uint *)CONCAT22(uVar7,(undefined2 *)param_1 + 2);
  do {
    uVar1 = *param_1;
    puVar3 = (uint *)param_1;
    param_1 = (uint *)CONCAT22(param_1._2_2_,(uint *)param_1 + 1);
    if (uVar1 == 0xfefe) {
      uVar1 = *param_1;
      param_1 = (uint *)CONCAT22(param_1._2_2_,puVar3 + 2);
      uVar2 = *param_1;
      param_1 = (uint *)CONCAT22(param_1._2_2_,puVar3 + 3);
      for (uVar6 = 1; uVar6 <= uVar1; uVar6 = uVar6 + 1) {
        *param_2 = uVar2;
        param_2 = (uint *)CONCAT22(param_2._2_2_,(uint *)param_2 + 1);
      }
    }
    else {
      *param_2 = uVar1;
      param_2 = (uint *)CONCAT22(param_2._2_2_,(uint *)param_2 + 1);
    }
  } while ((uint *)param_2 < puVar5);
  return;
}


/* ===== 0x17b0a FUN_1000_7b0a  callers=['FUN_1000_1312'] strings=[] */

void FUN_1000_7b0a(void)

{
  int iVar1;
  undefined2 unaff_SI;
  undefined2 unaff_SS;
  undefined4 uVar2;
  int local_3e [23];
  undefined1 local_10 [14];
  
  FUN_1000_e39b(0x2315,local_10,unaff_SS,unaff_SI);
  FUN_1000_e39b(0x2315,local_3e,unaff_SS);
  local_3e[0] = g_24ca;
  FUN_1000_d7cc(local_10);
  local_3e[0] = g_24ca;
  FUN_1000_d7cc(0x2872/*"HELPTEXT."*/);
  local_3e[0] = g_24ca;
  FUN_1000_d7cc(0x288c/*"STORYTXT."*/);
  local_3e[0] = g_24ca;
  FUN_1000_d7cc(0x287f/*"ENDTEXT."*/);
  local_3e[0] = g_24ca;
  FUN_1000_d7cc(0x2899/*"PREVIEWS."*/);
  local_3e[0] = 0x2872/*"HELPTEXT."*/;
  uVar2 = FUN_1000_5fde();
  g_a5be = (int)((ulong)uVar2 >> 0x10);
  g_a5bc = (undefined2)uVar2;
  local_3e[0] = g_a5be;
  FUN_1000_b4ec(g_a5bc);
  local_3e[0] = 0x288c/*"STORYTXT."*/;
  uVar2 = FUN_1000_5fde();
  g_a238 = (int)((ulong)uVar2 >> 0x10);
  g_a236 = (undefined2)uVar2;
  local_3e[0] = g_a238;
  FUN_1000_b4ec(g_a236);
  local_3e[0] = 0x287f/*"ENDTEXT."*/;
  uVar2 = FUN_1000_5fde();
  g_a61e = (int)((ulong)uVar2 >> 0x10);
  g_a61c = (undefined2)uVar2;
  local_3e[0] = g_a61e;
  FUN_1000_b4ec(g_a61c);
  local_3e[0] = 0x2899/*"PREVIEWS."*/;
  uVar2 = FUN_1000_5fde();
  g_a212 = (int)((ulong)uVar2 >> 0x10);
  g_a210 = (undefined2)uVar2;
  local_3e[0] = g_a212;
  FUN_1000_b4ec(g_a210);
  local_3e[0] = 0x7cb2;
  FUN_1000_d2a7();
  g_a628 = 0;
  local_3e[0] = 0;
  iVar1 = FUN_1000_c5e1(local_10);
  if (iVar1 == 0) {
    local_3e[0] = 0x2315;
    FUN_1000_5eb2(local_10,(undefined2 *)&g_a62a);
  }
  else {
    for (iVar1 = 0; iVar1 < 7; iVar1 = iVar1 + 1) {
      ((int*)&g_a62a)[iVar1 * 2] = 100;
      ((int*)&g_a62c)[iVar1 * 2] = 0;
      ((int*)&g_a68c)[iVar1] = 0;
      ((int*)&g_a67e)[iVar1] = 0;
      local_3e[0] = (int)local_3e + (iVar1 % 3) * 0xf;
      FUN_1000_d834(iVar1 * 0xd + -0x5966);
      ((int*)&g_a646)[iVar1] = 0;
      ((int*)&g_a654)[iVar1] = 0;
      ((int*)&g_a670)[iVar1] = 0;
      ((int*)&g_a662)[iVar1] = 0;
    }
    local_3e[0] = 0;
    FUN_1000_5f5d(local_10,(undefined2 *)&g_a62a,0x2315,0xcc);
  }
  local_3e[0] = 0x7ca5;
  FUN_1000_6e84();
  do {
    local_3e[0] = 0x7ca8;
    FUN_1000_91f5();
    local_3e[0] = 0x7cab;
    FUN_1000_7dfb();
  } while( true );
}


/* ===== 0x17cb2 FUN_1000_7cb2  callers=[] strings=[] */

undefined2 FUN_1000_7cb2(void)

{
  code *pcVar1;
  uint unaff_SI;
  undefined2 unaff_SS;
  undefined2 *local_1e;
  undefined2 *puStack_1c;
  undefined2 *puStack_1a;
  undefined2 uStack_18;
  uint local_c;
  undefined2 local_a;
  uint local_8;
  undefined2 local_6;
  uint local_4;
  
  FUN_1000_e39b(0x2315,&local_1e,unaff_SS,unaff_SI);
  local_8 = g_6d00;
  local_6 = g_6d02;
  local_c = g_6d04;
  local_a = g_6d06;
  g_6d00 = g_6d00 & 0xf000;
  g_6d04 = g_6d04 & 0xf000;
  pcVar1 = (code *)swi(0x10);
  local_4 = (*pcVar1)();
  local_4 = local_4 & 0xff;
  if (local_4 == 0xd) {
    puStack_1c = (undefined2 *)0x7d1f;
    FUN_1000_0289();
    puStack_1c = (undefined2 *)0x5;
    local_1e = (undefined2 *)0x2b;
    FUN_1000_6118(4,0);
    puStack_1c = (undefined2 *)0x2ae6/*"DISK ERROR!  I am having some problems\n"*/;
    local_1e = (undefined2 *)0x7d3b;
    FUN_1000_64c9();
    puStack_1c = (undefined2 *)0x2b0e/*"accessing the disk drive. Put the disk\n"*/;
    local_1e = (undefined2 *)&g_7d44;
    FUN_1000_64c9();
    puStack_1c = (undefined2 *)0x2b36/*"back in (if it's out) and press a key\n"*/;
    local_1e = (undefined2 *)0x7d4d;
    FUN_1000_64c9();
    puStack_1c = (undefined2 *)0x2b5d/*"to retry, or ESC to abort:"*/;
    local_1e = (undefined2 *)&g_7d56;
    FUN_1000_64c9();
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
    uStack_18 = 0x7d69;
    unaff_SI = FUN_1000_6462();
    g_6d00 = local_8;
    g_6d02 = local_6;
    g_6d04 = local_c;
    g_6d06 = local_a;
    uStack_18 = 0x7d88;
    FUN_1000_0289();
  }
  else {
    puStack_1c = (undefined2 *)0x2b78/*"DISK ERROR!  I am having some problems\n"*/;
    local_1e = (undefined2 *)0x7d91;
    FUN_1000_c9c4();
    puStack_1c = (undefined2 *)0x2ba0/*"accessing the disk drive.\n"*/;
    local_1e = (undefined2 *)0x7d9a;
    FUN_1000_c9c4();
    if (g_79b4 != 0) {
      puStack_1c = (undefined2 *)&g_7da6;
      FUN_1000_5756();
    }
    if (g_79be != 0) {
      puStack_1c = (undefined2 *)0x7db0;
      FUN_1000_bf51();
    }
    puStack_1c = (undefined2 *)0x2;
    local_1e = (undefined2 *)0x7db7;
    FUN_1000_d2c1();
  }
  if ((unaff_SI & 0xff) == 0x1b) {
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
    uStack_18 = 0x2bbb/*"Aborting.\n"*/;
    puStack_1a = (undefined2 *)&g_7dd4;
    FUN_1000_c9c4();
    if (g_79b4 != 0) {
      uStack_18 = 0x7de0;
      FUN_1000_5756();
    }
    if (g_79be != 0) {
      uStack_18 = 0x7dea;
      FUN_1000_bf51();
    }
    uStack_18 = 2;
  }
  else {
    uStack_18 = 1;
  }
  puStack_1a = (undefined2 *)0x7df1;
  FUN_1000_d2c1();
  return 1;
}


/* ===== 0x17dbe FUN_1000_7dbe  callers=['FUN_1e7c_0962'] strings=[] */

undefined2 __cdecl16near FUN_1000_7dbe(void)

{
  code *pcVar1;
  int in_AX;
  undefined2 uVar2;
  
  if (in_AX == 0x1b) {
    pcVar1 = (code *)swi(0x10);
    (*pcVar1)();
    FUN_1000_c9c4(0x2bbb/*"Aborting.\n"*/);
    if (g_79b4 != 0) {
      FUN_1000_5756();
    }
    if (g_79be != 0) {
      FUN_1000_bf51();
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  FUN_1000_d2c1(uVar2);
  return 1;
}


/* ===== 0x17dfb FUN_1000_7dfb  callers=['FUN_1000_7b0a'] strings=['  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_7dfb(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 local_20 [6];
  undefined1 local_1a [6];
  undefined1 local_14 [6];
  undefined1 local_e [2];
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  undefined2 *local_4;
  
  local_8 = 0;
  FUN_1000_5e1f();
  FUN_1000_b8be();
  FUN_1000_066b(0x50);
  if (g_a5ba == 0) {
    FUN_1000_9195((undefined2 *)&g_a5fa,(undefined2 *)&g_a5fe);
    g_a602 = g_a5fa + 0x7000;
    g_a604 = g_a5fc + -1 + (uint)(0x8fff < g_a5fa);
    g_a606 = g_a5fe + 0xd000;
    g_a608 = g_a600 + -1 + (uint)(0x2fff < g_a5fe);
    g_a5f6 = 0;
    g_a5f8 = 0;
  }
  g_a22e = g_a602;
  g_a230 = g_a604;
  g_a232 = g_a606;
  g_a234 = g_a608;
  g_a226 = g_a5fa;
  g_a228 = g_a5fc;
  g_a22a = g_a5fe;
  g_a22c = g_a600;
  g_a214 = 0x8000;
  uVar8 = g_a5f8;
  uVar5 = FUN_1000_e1a3(g_a5f6,g_a5f8,20000,0);
  g_6cec = 0;
  gb_5480 = '\0';
  gb_5481 = '\0';
  g_6a90 = 3;
  do {
    g_6cf4 = (undefined2)((ulong)uVar5 >> 0x10);
    g_6cf2 = (undefined2)uVar5;
    local_4 = (undefined2 *)&g_6d0a;
    g_6d26 = 0;
    g_6d28 = 0;
    g_6d2a = 0;
    g_6d2c = 0;
    g_6d32 = 0x24;
    g_6cf0 = 0;
    FUN_1000_066b(0x50);
    FUN_1000_826d();
    for (local_6 = 0; iVar3 = g_a228, local_6 < 0x10; local_6 = local_6 + 1) {
      iVar3 = *(int *)(local_6 * 6 + -0x5dc6);
      iVar1 = *(int *)(local_6 * 6 + -0x5dc4);
      if (*(int *)(local_6 * 2 + -0x5a2e) != 0) {
        iVar2 = *(int *)(local_6 * 6 + -0x5dc2);
        uVar4 = (undefined2)((ulong)g_6a7a >> 0x10);
        if (iVar2 == 0) {
          *(undefined2 *)((int)g_6a7a + (iVar1 * g_6a36 + iVar3) * 2) = 0;
          *(undefined2 *)((int)g_6a76 + (iVar1 * g_6a36 + iVar3) * 2) = 0x4d;
        }
        else if (iVar2 == 1) {
          *(undefined2 *)((int)g_6a7a + (iVar1 * g_6a36 + iVar3) * 2) = 0;
          *(undefined2 *)((int)g_6a7a + (iVar3 + iVar1 * g_6a36 + 1) * 2) = 0;
          *(undefined2 *)((int)g_6a7a + ((iVar1 + 1) * g_6a36 + iVar3) * 2) = 0;
          *(undefined2 *)((int)g_6a7a + (iVar3 + (iVar1 + 1) * g_6a36 + 1) * 2) = 0;
          uVar4 = (undefined2)((ulong)g_6a76 >> 0x10);
          *(undefined2 *)((int)g_6a76 + (iVar1 * g_6a36 + iVar3) * 2) = 0x4e;
          *(undefined2 *)((int)g_6a76 + (iVar3 + iVar1 * g_6a36 + 1) * 2) = 0x4f;
          *(undefined2 *)((int)g_6a76 + ((iVar1 + 1) * g_6a36 + iVar3) * 2) = 0x50;
          *(undefined2 *)((int)g_6a76 + (iVar3 + (iVar1 + 1) * g_6a36 + 1) * 2) = 0x51
          ;
        }
      }
    }
    local_4[2] = g_a226;
    local_4[3] = iVar3;
    iVar3 = g_a22c;
    local_4[4] = g_a22a;
    local_4[5] = iVar3;
    g_6d00 = g_a22e;
    g_6d02 = g_a230;
    g_6d04 = g_a232;
    g_6d06 = g_a234;
    FUN_1000_0239();
    FUN_1000_0289();
    FUN_1000_0289();
    if (g_6cea == 0) {
      if (local_8 == 0) {
        FUN_1000_912b();
      }
      if (local_8 < 2) {
        FUN_1000_6e40();
      }
      if (local_8 == 0) {
        uVar4 = 0x80a6;
        FUN_1000_5e1f();
        for (local_6 = 0; local_6 < 0x3c; local_6 = local_6 + 1) {
          FUN_1000_c17c(1);
          puVar6 = local_e;
          uVar4 = unaff_SS;
          FUN_1000_5c1e(local_14);
          FUN_1000_e39b(unaff_SS,puVar6,uVar4,uVar8);
          if ((local_c != 0) || (local_a != 0)) break;
          uVar8 = 1;
          uVar4 = 33000;
          iVar3 = FUN_1000_cf8d();
          if (iVar3 != 0) break;
        }
        do {
          do {
            puVar6 = local_e;
            uVar7 = unaff_SS;
            FUN_1000_5c1e(local_1a);
            FUN_1000_e39b(unaff_SS,puVar6,uVar7,uVar4);
          } while (local_c != 0);
        } while (local_a != 0);
      }
      FUN_1000_5e1f();
      FUN_1000_b8be();
      g_a628 = 1;
      do {
        FUN_1000_0239();
        FUN_1000_5c1e(local_20);
        FUN_1000_e3ba();
        FUN_1000_ac1c();
        FUN_1000_0289();
        FUN_1000_122c();
        g_a228 = local_4[3];
        g_a226 = local_4[2];
        g_a22c = local_4[5];
        g_a22a = local_4[4];
        g_a22e = g_6d00;
        g_a230 = g_6d02;
        g_a232 = g_6d04;
        g_a234 = g_6d06;
        FUN_1000_0c51();
        if (g_7dd4 != 0) {
          FUN_1000_0e76();
        }
        if (g_6cec != 0) goto LAB_1000_8264;
      } while (g_6cf0 == 0);
      g_a628 = 0;
    }
    else {
      g_6cf0 = g_6cea;
    }
    if (((int*)&g_a5d0)[g_6cf0] == 0) {
      FUN_1000_bf8d(3);
      local_8 = FUN_1000_4c32(g_6cf0 & 0xff);
      if (g_6cec != 0) {
        g_6cec = 0;
        goto LAB_1000_8264;
      }
      if (local_8 == 0) {
        g_a5f2 = g_a5f2 + -1;
      }
      else {
        if (g_6cea != 0) {
          FUN_1000_129d(0x2bc6);
        }
        if (local_8 == 1) {
          ((int*)&g_a5d0)[g_6cf0] = 1;
        }
        else if (local_8 == 2) {
          FUN_1000_8b1e();
        }
        if ((((g_a5c0 != 0) && (g_a5c8 != 0)) && (g_a5c2 != 0)) &&
           (g_a5c4 != 0)) {
          FUN_1000_839a();
          goto LAB_1000_8264;
        }
      }
    }
    uVar5 = CONCAT22(g_6cf4,g_6cf2);
  } while (-1 < g_a5f2);
  FUN_1000_c019();
  FUN_1000_6e40();
LAB_1000_8264:
  FUN_1000_8ce4();
  return;
}


/* ===== 0x1826d FUN_1000_826d  callers=['FUN_1000_7dfb'] strings=[] */

void __cdecl16near FUN_1000_826d(void)

{
  uint uVar1;
  int iVar2;
  int unaff_SI;
  int iVar3;
  undefined2 uVar4;
  int local_4;
  
  for (local_4 = 0; local_4 < 0x10; local_4 = local_4 + 1) {
    *(undefined2 *)(unaff_SI * 6 + -0x5dc6) = 0;
  }
  for (iVar2 = 0; iVar2 < g_6a86; iVar2 = iVar2 + 1) {
    for (iVar3 = 0; iVar3 < g_6a36; iVar3 = iVar3 + 1) {
      uVar4 = (undefined2)((ulong)g_6a7a >> 0x10);
      uVar1 = *(uint *)((int)g_6a7a + (iVar2 * g_6a36 + iVar3) * 2) & 0x7fff;
      if (((uVar1 != 0) && (uVar1 < 0x100)) && (((int*)&g_a234)[uVar1 * 3] == 0)) {
        ((int*)&g_a234)[uVar1 * 3] = iVar3;
        ((int*)&g_a236)[uVar1 * 3] = iVar2;
        ((int*)&g_a238)[uVar1 * 3] = 0;
        if ((*(uint *)((int)g_6a7a + (iVar3 + iVar2 * g_6a36 + 1) * 2) & 0x7fff) ==
            uVar1) {
          iVar3 = iVar3 + 1;
          ((int*)&g_a238)[uVar1 * 3] = 1;
        }
      }
    }
  }
  return;
}


/* ===== 0x18340 FUN_1000_8340  callers=['FUN_1000_839a'] strings=[] */

void __cdecl16near FUN_1000_8340(void)

{
  FUN_1000_6286(g_7d4e,g_7d54,g_7d50,g_7d56,0);
  return;
}


/* ===== 0x1835e FUN_1000_835e  callers=['FUN_1000_839a'] strings=[] */

void __cdecl16near FUN_1000_835e(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_4;
  undefined1 local_3;
  
  local_3 = 0;
  uVar2 = 0;
  while( true ) {
    uVar1 = FUN_1000_d858(param_1);
    if (uVar1 <= uVar2) break;
    local_4 = *(undefined1 *)(uVar2 + param_1);
    FUN_1000_64c9(&local_4);
    FUN_1000_c17c(6);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* ===== 0x1839a FUN_1000_839a  callers=['FUN_1000_7dfb'] strings=[] */

void __cdecl16near FUN_1000_839a(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined2 unaff_SI;
  int iVar4;
  undefined2 unaff_SS;
  bool bVar5;
  int local_198 [79];
  int local_fa [86];
  int local_4e [30];
  uint local_12;
  int local_10;
  uint local_e;
  int local_c;
  char *local_a;
  int local_8;
  uint local_6;
  int local_4;
  
  FUN_1000_e39b(0x2315,local_4e,unaff_SS,unaff_SI);
  FUN_1000_e39b(0x2315,local_fa,unaff_SS);
  FUN_1000_e39b(0x2315,&stack0xfe66);
  local_198[0] = -0x7c29;
  FUN_1000_5e1f();
  local_198[0] = 0x50;
  FUN_1000_066b();
  g_6d00 = 0x3000;
  g_6d02 = 0;
  g_6d04 = 0x3000;
  g_6d06 = 2;
  local_198[0] = -0x7c05;
  FUN_1000_b8be();
  local_198[0] = -0x7c02;
  FUN_1000_0239();
  local_198[0] = 0x28;
  FUN_1000_02c5(0xd000,0,0x7000);
  local_198[0] = -0x7be6;
  FUN_1000_0289();
  local_198[0] = 300;
  FUN_1000_c17c();
  local_198[0] = 0x14;
  FUN_1000_6118(5,0xf);
  local_198[0] = -0x7bc4;
  FUN_1000_6e40();
  local_198[0] = 0x2bc7/*"Commander Keen returns to the Bean-\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2bec/*"with-Bacon Megarocket and quickly\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2c0f/*"replaces the missing parts. He must\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2c34/*"get home before his parents do!\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x51;
  FUN_1000_066b();
  local_198[0] = 0xf0;
  FUN_1000_c17c();
  local_198[0] = -0x7b8b;
  FUN_1000_6e84();
  g_6d04 = 0;
  g_6d06 = 0;
  g_6d00 = 0;
  g_6d02 = 0;
  local_198[0] = -0x7b76;
  FUN_1000_b8be();
  local_198[0] = -0x7b73;
  FUN_1000_0239();
  local_198[0] = -0x7b70;
  FUN_1000_0289();
  local_198[0] = -0x7b6d;
  FUN_1000_0289();
  local_198[0] = -0x7b6a;
  FUN_1000_6e40();
  local_6 = 0x6400;
  local_4 = 0;
  local_a = (char *)0x5000;
  local_8 = 0;
  iVar4 = 0;
  do {
    uVar3 = local_4e[iVar4 * 2] * 0x100;
    bVar5 = CARRY2(local_6,uVar3);
    local_6 = local_6 + uVar3;
    local_4 = local_4 + ((int)uVar3 >> 0xf) + (uint)bVar5;
    uVar3 = local_4e[iVar4 * 2 + 1] * 0x100;
    bVar5 = CARRY2((uint)local_a,uVar3);
    local_a = local_a + uVar3;
    local_8 = local_8 + ((int)uVar3 >> 0xf) + (uint)bVar5;
    local_198[0] = -0x7b23;
    FUN_1000_0239();
    local_198[0] = 0x73;
    FUN_1000_02c5(local_6,local_4,local_a);
    local_198[0] = -0x7b0a;
    FUN_1000_0289();
    local_198[0] = 4;
    FUN_1000_c17c();
    iVar1 = iVar4 * 2;
    iVar2 = iVar4 * 2;
    iVar4 = iVar4 + 1;
  } while (local_4e[iVar1] + local_4e[iVar2 + 1] != 0);
  iVar4 = 0;
  do {
    bVar5 = 0xfcff < local_6;
    local_6 = local_6 + 0x300;
    local_4 = local_4 + (uint)bVar5;
    bVar5 = (char *)0xfeff < local_a;
    local_a = local_a + 0x100;
    local_8 = local_8 + (uint)bVar5;
    local_198[0] = -0x7acb;
    FUN_1000_0239();
    local_198[0] = 0x73;
    FUN_1000_02c5(local_6,local_4,local_a);
    local_198[0] = -0x7ab2;
    FUN_1000_0289();
    bVar5 = iVar4 < 0x14;
    iVar4 = iVar4 + 1;
  } while (bVar5);
  iVar4 = 0;
  do {
    bVar5 = 0xfcff < g_6d00;
    g_6d00 = g_6d00 + 0x300;
    g_6d02 = g_6d02 + (uint)bVar5;
    bVar5 = 0xfeff < g_6d04;
    g_6d04 = g_6d04 + 0x100;
    g_6d06 = g_6d06 + (uint)bVar5;
    bVar5 = 0xfcff < local_6;
    local_6 = local_6 + 0x300;
    local_4 = local_4 + (uint)bVar5;
    bVar5 = (char *)0xfeff < local_a;
    local_a = local_a + 0x100;
    local_8 = local_8 + (uint)bVar5;
    local_198[0] = -0x7a7d;
    FUN_1000_0239();
    local_198[0] = 0x73;
    FUN_1000_02c5(local_6,local_4,local_a);
    local_198[0] = -0x7a64;
    FUN_1000_0289();
    bVar5 = iVar4 < 200;
    iVar4 = iVar4 + 1;
  } while (bVar5);
  iVar4 = 0;
  do {
    bVar5 = (char *)0xfeff < local_a;
    local_a = local_a + 0x100;
    local_8 = local_8 + (uint)bVar5;
    if (iVar4 < 0x14) {
      bVar5 = 0xfcff < g_6d04;
      g_6d04 = g_6d04 + 0x300;
      g_6d06 = g_6d06 + (uint)bVar5;
    }
    local_198[0] = -0x7a3e;
    FUN_1000_0239();
    local_198[0] = 0x73;
    FUN_1000_02c5(local_6,local_4,local_a);
    local_198[0] = -0x7a25;
    FUN_1000_0289();
    bVar5 = iVar4 < 0x3c;
    iVar4 = iVar4 + 1;
  } while (bVar5);
  local_198[0] = 0x14;
  FUN_1000_c17c();
  iVar4 = 0;
  do {
    local_198[0] = -0x7a0f;
    FUN_1000_0239();
    local_198[0] = 0x73;
    FUN_1000_02c5(local_6,local_4,local_a);
    local_198[0] = 0x76;
    FUN_1000_02c5(local_6 + 0x600,local_4 + (uint)(63999 < local_6),local_a + -0xe00);
    local_198[0] = -0x79ce;
    FUN_1000_0289();
    bVar5 = iVar4 < 0x1e;
    iVar4 = iVar4 + 1;
  } while (bVar5);
  iVar4 = 0;
  do {
    local_198[0] = -0x79c1;
    FUN_1000_0239();
    bVar5 = local_6 < 0x200;
    local_6 = local_6 - 0x200;
    local_4 = local_4 - (uint)bVar5;
    local_198[0] = 0x74;
    FUN_1000_02c5(local_6,local_4,local_a);
    local_198[0] = -0x799f;
    FUN_1000_0289();
    bVar5 = iVar4 < 0x32;
    iVar4 = iVar4 + 1;
  } while (bVar5);
  iVar4 = 0;
  do {
    local_198[0] = -0x7992;
    FUN_1000_0239();
    local_198[0] = 0x74;
    FUN_1000_02c5(local_6,local_4,local_a);
    local_198[0] = 0x75;
    FUN_1000_02c5(local_6 + 0x600,local_4 + (uint)(63999 < local_6),local_a + -0xe00);
    local_198[0] = -0x7951;
    FUN_1000_0289();
    bVar5 = iVar4 < 0x1e;
    iVar4 = iVar4 + 1;
  } while (bVar5);
  iVar4 = 0;
  do {
    local_198[0] = -0x7944;
    FUN_1000_0239();
    uVar3 = local_198[iVar4 * 2 + -1] * 0x100;
    bVar5 = CARRY2(local_6,uVar3);
    local_6 = local_6 + uVar3;
    local_4 = local_4 + ((int)uVar3 >> 0xf) + (uint)bVar5;
    uVar3 = local_198[iVar4 * 2] * 0x100;
    bVar5 = CARRY2((uint)local_a,uVar3);
    local_a = local_a + uVar3;
    local_8 = local_8 + ((int)uVar3 >> 0xf) + (uint)bVar5;
    local_198[0] = 0x73;
    FUN_1000_02c5(local_6,local_4,local_a);
    local_198[0] = -0x78fb;
    FUN_1000_0289();
    iVar1 = iVar4 * 2;
    iVar2 = iVar4 * 2;
    iVar4 = iVar4 + 1;
  } while (local_198[iVar1 + -1] + local_198[iVar2] != 0);
  local_198[0] = 0x3c;
  FUN_1000_c17c();
  local_198[0] = -0x78d0;
  FUN_1000_6e84();
  local_e = g_6d00;
  local_c = g_6d02;
  local_12 = g_6d04;
  local_10 = g_6d06;
  local_198[0] = 0x2c55/*"FINALE.CK1"*/;
  FUN_1000_0983();
  local_198[0] = 0x13;
  FUN_1000_6118(4,0xf);
  local_198[0] = -0x7894;
  FUN_1000_6e40();
  local_198[0] = 0x2c60/*"Keen makes it home and\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2c78/*"rushes to beat his\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2c8c/*"parents upstairs."*/;
  FUN_1000_835e();
  local_198[0] = 0x78;
  FUN_1000_c17c();
  local_198[0] = -0x786d;
  FUN_1000_8340();
  local_198[0] = 0x3c;
  FUN_1000_c17c();
  local_198[0] = 0xc;
  FUN_1000_bc20(0xe);
  local_198[0] = 0x19;
  FUN_1000_bf8d();
  local_198[0] = 0x78;
  FUN_1000_c17c();
  local_198[0] = 0xd;
  FUN_1000_bc20(0xe);
  local_198[0] = 0x19;
  FUN_1000_bf8d();
  local_198[0] = 300;
  FUN_1000_c17c();
  local_198[0] = 0x13;
  FUN_1000_6118(4,0xf);
  local_198[0] = 0x2c9e/*"Shhh, honey...let's\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2cb3/*"see if little Billy\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2cc8/*"is asleep."*/;
  FUN_1000_835e();
  local_198[0] = 0xb4;
  FUN_1000_c17c();
  local_198[0] = -0x77e1;
  FUN_1000_8340();
  local_198[0] = 0x3c;
  FUN_1000_c17c();
  local_198[0] = 0xc;
  FUN_1000_bc20(0xe);
  local_198[0] = 0x19;
  FUN_1000_bf8d();
  local_198[0] = 0x14;
  FUN_1000_6118(4,0xf);
  local_198[0] = 0x2cd3/*"Billy...? Are you a--\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2cea/*"WHAT IS THIS ONE-EYED\n"*/;
  FUN_1000_64c9();
  local_198[0] = 0x2d01/*"GREEN THING IN YOUR\n"*/;
  FUN_1000_64c9();
  local_198[0] = 0x2d16/*"ROOM!!!!???\n"*/;
  FUN_1000_64c9();
  local_198[0] = 0xf0;
  FUN_1000_c17c();
  local_198[0] = -0x7778;
  FUN_1000_8340();
  local_198[0] = 0x12;
  FUN_1000_6118(4,0xf);
  local_198[0] = 0x2d23/*"Aw, Mom, can't I\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2d35/*"keep him?"*/;
  FUN_1000_835e();
  local_198[0] = 0xb4;
  FUN_1000_c17c();
  local_198[0] = -0x7744;
  FUN_1000_8340();
  local_198[0] = 0x13;
  FUN_1000_6118(4,0xf);
  local_198[0] = 0x2d3f/*"Well, we'll talk about\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2d57/*"that in the morning,\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2d6d/*"son. You get some rest."*/;
  FUN_1000_835e();
  local_198[0] = 0xb4;
  FUN_1000_c17c();
  local_198[0] = -0x7707;
  FUN_1000_8340();
  local_198[0] = 0x11;
  FUN_1000_6118(4,0xf);
  local_198[0] = 0x2d85/*"OK, Mom. Goodnight."*/;
  FUN_1000_835e();
  local_198[0] = 0xb4;
  FUN_1000_c17c();
  local_198[0] = 0x11;
  FUN_1000_6118(4,0xf);
  local_198[0] = 0x2d99/*"Goodnight, dear."*/;
  FUN_1000_835e();
  local_198[0] = 0xb4;
  FUN_1000_c17c();
  local_198[0] = -0x76b4;
  FUN_1000_8340();
  local_198[0] = 0x3c;
  FUN_1000_c17c();
  local_198[0] = 0xd;
  FUN_1000_bc20(0xe);
  local_198[0] = 0x19;
  FUN_1000_bf8d();
  local_198[0] = 300;
  FUN_1000_c17c();
  local_198[0] = 0xc;
  FUN_1000_bc20(0xe);
  local_198[0] = 0x15;
  FUN_1000_6118(4,0xf);
  local_198[0] = 0x19;
  FUN_1000_bf8d();
  local_198[0] = 0x2daa/*"But there is no sleep\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2dc1/*"for Commander Keen! The\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2dda/*"Vorticon Mothership\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2def/*"looms above, ready to\n"*/;
  FUN_1000_835e();
  local_198[0] = 0x2e06/*"destroy Earth!"*/;
  FUN_1000_835e();
  local_198[0] = 300;
  FUN_1000_c17c();
  local_198[0] = -0x761f;
  FUN_1000_6e84();
  local_198[0] = 0x51;
  FUN_1000_066b();
  g_6d00 = local_e;
  g_6d02 = local_c;
  g_6d04 = local_12;
  g_6d06 = local_10;
  local_198[0] = -0x75f9;
  FUN_1000_b8be();
  local_198[0] = -0x75f6;
  FUN_1000_0239();
  local_198[0] = 0x74;
  FUN_1000_02c5(local_6,local_4,local_a);
  local_198[0] = -0x75dd;
  FUN_1000_0289();
  local_198[0] = -0x75da;
  FUN_1000_6e40();
  local_198[0] = 0x1e;
  FUN_1000_c17c();
  iVar4 = 0;
  do {
    local_198[0] = -0x75cc;
    FUN_1000_0239();
    uVar3 = local_fa[iVar4 * 2] * 0x100;
    bVar5 = CARRY2(local_6,uVar3);
    local_6 = local_6 + uVar3;
    local_4 = local_4 + ((int)uVar3 >> 0xf) + (uint)bVar5;
    uVar3 = local_fa[iVar4 * 2 + 1] * 0x100;
    bVar5 = CARRY2((uint)local_a,uVar3);
    local_a = local_a + uVar3;
    local_8 = local_8 + ((int)uVar3 >> 0xf) + (uint)bVar5;
    local_198[0] = 0x74;
    FUN_1000_02c5(local_6,local_4,local_a);
    local_198[0] = -0x7583;
    FUN_1000_0289();
    iVar1 = iVar4 * 2;
    iVar2 = iVar4 * 2;
    iVar4 = iVar4 + 1;
  } while (local_fa[iVar1] + local_fa[iVar2 + 1] != 0);
  local_198[0] = -0x7561;
  FUN_1000_0239();
  local_198[0] = 0x73;
  FUN_1000_02c5(local_6,local_4,local_a);
  local_198[0] = -0x7548;
  FUN_1000_0289();
  local_198[0] = 0x3c;
  FUN_1000_c17c();
  local_198[0] = 5;
  FUN_1000_6118(0xc,3);
  local_198[0] = 0x2e15/*"TO BE CONTINUED...."*/;
  FUN_1000_835e();
  local_198[0] = 400;
  FUN_1000_c17c();
  g_6d00 = g_6d00 & 0xf000;
  local_198[0] = -0x74ff;
  FUN_1000_0289();
  local_198[0] = -0x74fc;
  FUN_1000_0289();
  local_198[0] = 0x16;
  FUN_1000_a17d(g_a61c,g_a61e);
  return;
}


/* ===== 0x18b1e FUN_1000_8b1e  callers=['FUN_1000_7dfb'] strings=[] */

void __cdecl16near FUN_1000_8b1e(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined1 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 local_16 [6];
  undefined1 local_10 [2];
  int local_e;
  int local_c;
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  FUN_1000_066b(0x50);
  FUN_1000_bf8d(0x12);
  g_6d26 = 0;
  g_6d28 = 0;
  g_6d2a = 0;
  g_6d2c = 0;
  g_6d32 = 0x24;
  g_a226 = g_2866;
  g_a228 = g_2868;
  g_a620 = g_2866;
  g_a622 = g_2868;
  g_6d0e = g_2866;
  g_6d10 = g_2868;
  g_a22a = g_286a;
  g_a22c = g_286c;
  g_a624 = g_286a;
  g_a626 = g_286c;
  g_6d12 = g_286a;
  g_6d14 = g_286c;
  g_6d00 = g_2866 + 0x7000;
  g_6d02 = g_2868 + -1 + (uint)(0x8fff < g_2866);
  g_6d04 = g_286a + 0xd000;
  g_6d06 = g_286c + -1 + (uint)(0x2fff < g_286a);
  g_a22e = g_6d00;
  g_a230 = g_6d02;
  g_a232 = g_6d04;
  g_a234 = g_6d06;
  FUN_1000_0239();
  FUN_1000_b8be();
  FUN_1000_0289();
  FUN_1000_6e40();
  local_4 = FUN_1000_e1a3(g_6d0e,g_6d10,0x1000,0);
  iVar4 = g_6d14;
  local_6 = FUN_1000_e1a3(g_6d12,g_6d14,0x1000,0);
  local_a = 0x152;
  if (g_286e != 0) {
    local_a = 0x156;
  }
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    FUN_1000_0239();
    FUN_1000_b8be();
    if ((iVar1 % 2 == 0) && (local_8 = local_8 + 1, 3 < local_8)) {
      local_8 = 0;
    }
    *(int *)((int)g_6a76 + (local_6 * g_6a36 + local_4) * 2) = local_8 + local_a;
    FUN_1000_0289();
  }
  local_a = 0x145;
  if (g_286e != 0) {
    local_a = 99;
  }
  *(undefined2 *)((int)g_6a76 + (local_6 * g_6a36 + local_4) * 2) = local_a;
  do {
    do {
      FUN_1000_0239(iVar4);
      puVar2 = local_10;
      uVar3 = unaff_SS;
      FUN_1000_5c1e(local_16);
      FUN_1000_e39b(unaff_SS,puVar2,uVar3,iVar4);
      FUN_1000_02c5(g_6d0e,g_6d10,g_6d12,g_6d14,g_6d32);
      FUN_1000_0289();
      FUN_1000_122c();
      iVar4 = -0x734a;
      FUN_1000_0c51();
    } while (local_e != 0);
  } while (local_c != 0);
  g_a22e = g_6d00;
  g_a230 = g_6d02;
  g_a232 = g_6d04;
  g_a234 = g_6d06;
  return;
}


/* ===== 0x18ce4 FUN_1000_8ce4  callers=['FUN_1000_7dfb'] strings=[] */

void __cdecl16near FUN_1000_8ce4(void)

{
  undefined2 uVar1;
  undefined2 unaff_SI;
  int iVar2;
  undefined2 unaff_DI;
  int iVar3;
  undefined2 unaff_SS;
  undefined1 *puVar4;
  undefined2 local_6c [25];
  undefined1 local_3a [14];
  undefined1 local_2c [6];
  undefined1 local_26 [6];
  undefined1 local_20 [6];
  undefined1 local_1a [10];
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  undefined1 local_8 [2];
  int local_6;
  int local_4;
  
  FUN_1000_e39b(0x2315,local_3a,unaff_SS,unaff_DI);
  FUN_1000_e39b(0x2315,local_6c,unaff_SS,unaff_SI);
  FUN_1000_d7cc(local_3a,g_24ca);
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < 7; iVar2 = iVar2 + 1) {
    if (((int)((int*)&g_a62c)[iVar2 * 2] <= g_a5f8) &&
       (((int)((int*)&g_a62c)[iVar2 * 2] < g_a5f8 ||
        ((uint)((int*)&g_a62a)[iVar2 * 2] < g_a5f6)))) {
      iVar3 = iVar2 + 1;
      break;
    }
  }
  g_6d00 = g_6d00 & 0xf000;
  g_6d04 = g_6d04 & 0xf000;
  FUN_1000_b8be();
  FUN_1000_0239();
  FUN_1000_0289();
  if (iVar3 == 0) {
    g_7c78 = 7;
    g_7cee = 10;
  }
  else {
    FUN_1000_62b8(0x20,0xd);
    local_a = g_7c78;
    local_c = g_7cee;
  }
  FUN_1000_bc20(g_7c78 + 9,g_7cee << 3,7);
  FUN_1000_bf8d(0x10);
  iVar2 = iVar3 + -1;
  if (iVar3 != 0) {
    g_7c78 = local_a + 1;
    g_7cee = local_c + 4;
    g_7d4a = g_7c78;
    FUN_1000_64c9(0x2e29/*"         SCORE:"*/);
    uVar1 = FUN_1000_d47d(g_a5f6,g_a5f8,local_1a,10);
    FUN_1000_64c9(uVar1);
    g_7c78 = g_7d4a + 0xb;
    if (g_a5c0 != 0) {
      FUN_1000_baa3(g_7c78,(g_7cee + 2) * 8 + -4,0x1c0);
    }
    if (g_a5c8 != 0) {
      FUN_1000_baa3(g_7c78 + 2,(g_7cee + 2) * 8 + -4,0x1c1);
    }
    if (g_a5c2 != 0) {
      FUN_1000_baa3(g_7c78 + 4,(g_7cee + 2) * 8 + -4,0x1c2);
    }
    if (g_a5c4 != 0) {
      FUN_1000_baa3(g_7c78 + 6,(g_7cee + 2) * 8 + -4,0x1c3);
    }
    g_7c78 = g_7d4a;
    g_7cee = g_7cee + 4;
    FUN_1000_64c9(0x2e39/*"       CONGRATULATIONS!\n"*/);
    FUN_1000_64c9(0x2e52/*"     You got "*/);
    FUN_1000_64c9((int)local_6c + iVar2 * 7);
    FUN_1000_64c9(0x2e60/*" place!\n\n\nEnter your name:"*/);
    for (iVar3 = 5; iVar2 <= iVar3; iVar3 = iVar3 + -1) {
      uVar1 = ((int*)&g_a62c)[iVar3 * 2];
      *(undefined2 *)(iVar3 * 4 + -0x59d2) = ((int*)&g_a62a)[iVar3 * 2];
      *(undefined2 *)(iVar3 * 4 + -0x59d0) = uVar1;
      *(undefined2 *)(iVar3 * 2 + -0x5980) = ((int*)&g_a67e)[iVar3];
      *(undefined2 *)(iVar3 * 2 + -0x5972) = ((int*)&g_a68c)[iVar3];
      *(undefined2 *)(iVar3 * 2 + -0x59b8) = ((int*)&g_a646)[iVar3];
      *(undefined2 *)(iVar3 * 2 + -0x59aa) = ((int*)&g_a654)[iVar3];
      *(undefined2 *)(iVar3 * 2 + -0x598e) = ((int*)&g_a670)[iVar3];
      *(undefined2 *)(iVar3 * 2 + -0x599c) = ((int*)&g_a662)[iVar3];
      FUN_1000_d834(iVar3 * 0xd + -0x5959,iVar3 * 0xd + -0x5966);
    }
    FUN_1000_5e1f();
    FUN_1000_67ae(iVar2 * 0xd + -0x5966,0xc);
    iVar3 = g_a5f8;
    ((int*)&g_a62a)[iVar2 * 2] = g_a5f6;
    ((int*)&g_a62c)[iVar2 * 2] = iVar3;
    ((int*)&g_a646)[iVar2] = g_a5c0;
    ((int*)&g_a654)[iVar2] = g_a5c8;
    ((int*)&g_a670)[iVar2] = g_a5c2;
    ((int*)&g_a662)[iVar2] = g_a5c4;
    local_10 = 0;
    for (iVar3 = 0; iVar3 < 7; iVar3 = iVar3 + 1) {
      local_10 = local_10 + ((int*)&g_a60a)[iVar3];
    }
    ((int*)&g_a67e)[iVar2] = local_10;
    ((int*)&g_a68c)[iVar2] = g_a61a;
    FUN_1000_5f5d(local_3a,(undefined2 *)&g_a62a,0x2315,0xcc,0);
  }
  do {
    do {
      puVar4 = local_8;
      uVar1 = unaff_SS;
      FUN_1000_5c1e(local_20);
      FUN_1000_e39b(unaff_SS,puVar4,uVar1);
    } while (local_6 != 0);
  } while (local_4 != 0);
  local_6c[0] = 0x905a;
  FUN_1000_5e1f();
  if (iVar2 < 0) {
    for (iVar3 = 0; iVar3 < 0x168; iVar3 = iVar3 + 1) {
      FUN_1000_c17c(1);
      puVar4 = local_8;
      uVar1 = unaff_SS;
      FUN_1000_5c1e(local_26);
      FUN_1000_e39b(unaff_SS,puVar4,uVar1);
      if ((local_6 != 0) || (local_4 != 0)) break;
      local_6c[0] = 1;
      iVar2 = FUN_1000_cf8d();
      if (iVar2 != 0) break;
    }
  }
  FUN_1000_6e84();
  FUN_1000_5e1f();
  FUN_1000_066b(0x5a);
  FUN_1000_9c59();
  FUN_1000_6e40();
  local_e = 0x960;
  g_a628 = 0;
  while( true ) {
    FUN_1000_0239();
    FUN_1000_0289();
    puVar4 = local_8;
    uVar1 = unaff_SS;
    FUN_1000_5c1e(local_2c);
    FUN_1000_e39b(unaff_SS,puVar4,uVar1);
    local_6c[0] = 0x90f2;
    iVar3 = FUN_1000_0c51();
    if (iVar3 != 0) {
      local_6c[0] = 0x90f9;
      FUN_1000_9c59();
    }
    local_e = local_e - g_5942;
    if ((local_6 != 0) || (local_4 != 0)) break;
    local_6c[0] = 1;
    iVar3 = FUN_1000_cf8d();
    if ((iVar3 != 0) || (local_e < 1)) break;
  }
  local_6c[0] = 0x9125;
  FUN_1000_6e84();
  return;
}


/* ===== 0x1912b FUN_1000_912b  callers=['FUN_1000_7dfb'] strings=[] */

void __cdecl16near FUN_1000_912b(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_1000_62b8(0x10,4);
  iVar1 = g_7c78;
  FUN_1000_64c9(0x2e7b/*"   Keens Left"*/);
  iVar3 = g_a5f2;
  if (6 < g_a5f2) {
    iVar3 = 6;
  }
  for (iVar2 = 0; iVar2 < iVar3; iVar2 = iVar2 + 1) {
    FUN_1000_bc97(iVar1 + iVar2 * 2 + 1,g_7cee * 8 + 0xb,0x90);
  }
  FUN_1000_bf8d(0x29);
  return;
}


/* ===== 0x19195 FUN_1000_9195  callers=['FUN_1000_7dfb'] strings=[] */

void __cdecl16near FUN_1000_9195(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    if (g_6a86 <= iVar3) {
      return;
    }
    for (iVar2 = 0; iVar2 < g_6a36; iVar2 = iVar2 + 1) {
      iVar4 = *(int *)((int)g_6a7a + (iVar3 * g_6a36 + iVar2) * 2);
      if (iVar4 == 0xff) {
        iVar2 = iVar2 >> 0xf;
        uVar1 = FUN_1000_e251();
        *param_1 = uVar1;
        param_1[1] = iVar2;
        iVar3 = iVar3 >> 0xf;
        uVar1 = FUN_1000_e251(iVar4);
        *param_2 = uVar1;
        param_2[1] = iVar3;
        return;
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}


/* ===== 0x191f5 FUN_1000_91f5  callers=['FUN_1000_7b0a'] strings=['  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_91f5(void)

{
  int iVar1;
  undefined2 unaff_SI;
  int iVar2;
  undefined2 unaff_DI;
  int iVar3;
  undefined2 unaff_SS;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined1 local_18 [6];
  undefined1 local_12 [6];
  int local_c;
  int local_a;
  undefined1 local_8 [2];
  int local_6;
  int local_4;
  
  g_a5ba = 0;
  g_a5f2 = 4;
  g_a5f4 = 0;
  g_a5c6 = 0;
  g_a5c0 = 0;
  g_a5c8 = 0;
  g_a5c2 = 0;
  g_a5c4 = 0;
  for (local_a = 0; local_a < 8; local_a = local_a + 1) {
    ((int*)&g_a60a)[local_a] = 0;
  }
  g_a5ca = 0;
  g_a5cc = 0;
  g_a5ce = 0;
  g_a5d0 = 0;
  for (local_a = 0; local_a < 0x10; local_a = local_a + 1) {
    *(undefined2 *)(local_a * 2 + -0x5a2e) = 0;
  }
  if (g_6cea != 0) {
    return;
  }
  do {
    gb_5480 = '\0';
    gb_5481 = '\0';
    g_6a90 = 3;
    FUN_1000_b8be();
    FUN_1000_066b(0x5a);
    if (g_2870 != 0) {
      FUN_1000_066b(0x5a);
      g_6d00 = 0x8000;
      g_6d02 = 6;
      g_6d04 = 0x2000;
      g_6d06 = 0;
      FUN_1000_b8be();
      FUN_1000_0239();
      FUN_1000_0289();
      FUN_1000_6e40();
      FUN_1000_a41a();
      FUN_1000_6e84();
      g_2870 = 0;
    }
    iVar3 = 0x960;
    iVar2 = 0;
    g_6d00 = 0x2000;
    g_6d02 = 0;
    g_6d04 = 0x2000;
    g_6d06 = 0;
    FUN_1000_b8be();
    FUN_1000_0239();
    FUN_1000_99db();
    FUN_1000_6e40();
    FUN_1000_5e1f();
    do {
      puVar4 = local_8;
      uVar5 = unaff_SS;
      FUN_1000_5c1e(local_12);
      FUN_1000_e39b(unaff_SS,puVar4,uVar5,unaff_DI);
      FUN_1000_0239();
      FUN_1000_0289();
      unaff_DI = 0x9337;
      iVar1 = FUN_1000_0c51();
      if (iVar1 != 0) {
        switch(iVar2) {
        case 0:
          unaff_DI = 0x934c;
          FUN_1000_99db();
          break;
        case 1:
          unaff_DI = 0x9351;
          FUN_1000_9a81();
          break;
        case 2:
          unaff_DI = 0x9356;
          FUN_1000_9c59();
          break;
        case 3:
          FUN_1000_a70b();
          FUN_1000_0289();
          unaff_DI = 0x9361;
          FUN_1000_a70b();
        }
      }
      iVar3 = iVar3 - g_5942;
      if (iVar3 < 1) {
        unaff_DI = 0x9373;
        FUN_1000_6e84();
        if (iVar2 == 0) {
          g_6d00 = -0x1000;
          g_6d02 = 3;
          g_6d04 = 0x1c00;
          g_6d06 = 0;
          unaff_DI = 0x93a1;
          FUN_1000_9a81();
        }
        else if (iVar2 == 1) {
          g_6d00 = 0x4000;
          g_6d02 = 5;
          g_6d04 = 0x2000;
          g_6d06 = 0;
          unaff_DI = 0x93be;
          FUN_1000_9c59();
        }
        else if (iVar2 == 2) {
          iVar2 = 3;
          FUN_1000_a4f3(1);
          puVar4 = local_8;
          uVar5 = unaff_SS;
          FUN_1000_5c1e(local_18);
          FUN_1000_e39b(unaff_SS,puVar4,uVar5,unaff_SI);
          unaff_SI = 1;
          unaff_DI = 0x93f0;
          iVar3 = FUN_1000_cf8d();
          if (((iVar3 != 0) || (local_6 != 0)) || (local_4 != 0)) {
            iVar3 = 0x960;
            goto LAB_1000_943e;
          }
          FUN_1000_6e84();
        }
        iVar3 = 0x960;
        FUN_1000_0239();
        FUN_1000_0289();
        iVar2 = iVar2 + 1;
        if (iVar2 == 4) {
          iVar2 = 0;
          g_6d00 = 0x2000;
          g_6d02 = 0;
          g_6d04 = 0x2000;
          g_6d06 = 0;
          FUN_1000_b8be();
          FUN_1000_99db();
        }
        unaff_SI = 0x943e;
        FUN_1000_6e40();
      }
LAB_1000_943e:
      iVar1 = FUN_1000_cf8d(1);
    } while (((iVar1 == 0) && (local_6 == 0)) && ((local_4 == 0 && (g_a224 == 0))));
    g_a224 = 0;
    if ((g_6d02 != 0) || (g_6d00 != 0x2000)) {
      FUN_1000_6e84();
    }
    local_c = FUN_1000_949d(iVar2);
    if (local_c != 0) {
      FUN_1000_5e1f();
      FUN_1000_6e84();
      return;
    }
    local_c = 0;
  } while( true );
}


/* ===== 0x1949d FUN_1000_949d  callers=['FUN_1000_91f5'] strings=[] */

bool __cdecl16near FUN_1000_949d(void)

{
  int iVar1;
  undefined2 unaff_DI;
  int iVar2;
  undefined2 unaff_SS;
  int *piVar3;
  undefined2 uVar4;
  undefined1 local_22 [6];
  undefined1 local_1c [6];
  undefined1 local_16 [6];
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  uint local_8;
  int local_6;
  int local_4;
  
  do {
    if ((g_6d02 == 0) && (g_6d00 == 0x2000)) {
      FUN_1000_98b8();
    }
    else {
      FUN_1000_98b8();
      FUN_1000_6e40();
    }
    FUN_1000_5e1f();
    local_4 = 0;
    iVar2 = 0;
    local_a = 0x14;
    do {
      for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
        FUN_1000_c17c(1);
        piVar3 = &local_10;
        uVar4 = unaff_SS;
        FUN_1000_5c1e(local_16);
        FUN_1000_e39b(unaff_SS,piVar3,uVar4,unaff_DI);
        if (local_10 != 8) break;
      }
      FUN_1000_ba4a(g_7c78,g_7cee << 3,iVar2 + 9);
      iVar2 = iVar2 + 1;
      if (2 < iVar2) {
        iVar2 = 0;
      }
      if (local_10 == 0) {
        if (local_4 == 0) {
          local_4 = 7;
          FUN_1000_ba4a(g_7c78,g_7cee << 3,0x20);
        }
        else {
          local_4 = local_4 + -1;
          for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
            FUN_1000_ba4a(g_7c78,g_7cee * 8 - iVar1,iVar2 + 9);
            FUN_1000_c17c(1);
            FUN_1000_ba4a(g_7c78,g_7cee * 8 - iVar1,0x20);
            iVar2 = iVar2 + 1;
            if (2 < iVar2) {
              iVar2 = 0;
            }
          }
        }
        g_7cee = g_a624 + local_4;
        FUN_1000_ba4a(g_7c78,g_7cee * 8,iVar2 + 9);
        while ((local_a != 0 && (local_10 != 8))) {
          piVar3 = &local_10;
          uVar4 = unaff_SS;
          local_a = local_a + -1;
          FUN_1000_5c1e(local_1c);
          FUN_1000_e39b(unaff_SS,piVar3,uVar4,unaff_DI);
          unaff_DI = 1;
          FUN_1000_c17c();
        }
        local_a = 0x14;
      }
      else if (local_10 == 4) {
        if (local_4 < 7) {
          local_4 = local_4 + 1;
          for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
            FUN_1000_ba4a(g_7c78,g_7cee * 8 + iVar1,iVar2 + 9);
            FUN_1000_c17c(1);
            FUN_1000_ba4a(g_7c78,g_7cee * 8 + iVar1,0x20);
            iVar2 = iVar2 + 1;
            if (2 < iVar2) {
              iVar2 = 0;
            }
          }
        }
        else {
          local_4 = 0;
          FUN_1000_ba4a(g_7c78,g_7cee << 3,0x20);
        }
        g_7cee = g_a624 + local_4;
        FUN_1000_ba4a(g_7c78,g_7cee * 8,iVar2 + 9);
        while ((local_a != 0 && (local_10 != 8))) {
          piVar3 = &local_10;
          uVar4 = unaff_SS;
          local_a = local_a + -1;
          FUN_1000_5c1e(local_22);
          FUN_1000_e39b(unaff_SS,piVar3,uVar4,unaff_DI);
          unaff_DI = 1;
          FUN_1000_c17c();
        }
        local_a = 0x14;
      }
      else {
        FUN_1000_c17c(7);
      }
      local_8 = FUN_1000_cf8d(1);
      local_8 = local_8 & 0xff;
      if ((local_8 != 0) && (g_7d34 != 0)) {
        local_e = 1;
      }
      if (((local_8 == 0x20) || (local_8 == 0xd)) && (g_7d34 == 0)) {
        local_e = 1;
      }
      iVar1 = FUN_1000_0c51();
      if (iVar1 != 0) {
        FUN_1000_98b8();
        g_7cee = g_a624 + local_4;
      }
    } while ((local_e == 0) && (local_c == 0));
    FUN_1000_5e1f();
    FUN_1000_c17c(8);
    switch(local_4) {
    case 0:
      local_6 = 1;
      goto switchD_1000_9773_default;
    case 1:
      local_6 = FUN_1000_9e83();
      goto switchD_1000_9773_default;
    case 2:
      local_6 = 0;
      FUN_1000_9fa8();
      goto switchD_1000_9773_default;
    case 3:
      local_6 = 0;
      FUN_1000_6e84();
      FUN_1000_993a();
      break;
    case 4:
      local_6 = 0;
      FUN_1000_6e84();
      FUN_1000_9c8e();
      break;
    case 5:
      local_6 = 0;
      FUN_1000_6e84();
      FUN_1000_a4f3(0);
      break;
    case 6:
      local_6 = 0;
      FUN_1000_6e84();
      FUN_1000_98ea();
      break;
    case 7:
      local_6 = 0;
      break;
    default:
      goto switchD_1000_9773_default;
    }
    FUN_1000_6e84();
switchD_1000_9773_default:
    if ((local_4 == 7) || (local_6 != 0)) {
      return local_6 != 0;
    }
  } while( true );
}


/* ===== 0x198b8 FUN_1000_98b8  callers=['FUN_1000_949d'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_98b8(void)

{
  g_6d00 = 0x2000;
  g_6d02 = 0;
  g_6d04 = 0x2000;
  g_6d06 = 0;
  FUN_1000_b8be();
  FUN_1000_99db();
  gb_5486 = '\x05';
  gb_5487 = -0x68;
  FUN_1000_0289();
  gb_5486 = '\0';
  gb_5487 = '\0';
  return;
}


/* ===== 0x198ea FUN_1000_98ea  callers=['FUN_1000_949d'] strings=[] */

void __cdecl16near FUN_1000_98ea(void)

{
  FUN_1000_0983(0x2f23/*"PREVIEW2.CK1"*/);
  FUN_1000_6e40();
  FUN_1000_c17c(300);
  FUN_1000_6e84();
  FUN_1000_0983(0x2f30/*"PREVIEW3.CK1"*/);
  FUN_1000_6e40();
  FUN_1000_c17c(300);
  FUN_1000_a17d(g_a210,g_a212,0,0x16);
  FUN_1000_066b(0x5a);
  return;
}


/* ===== 0x1993a FUN_1000_993a  callers=['FUN_1000_949d'] strings=[] */

void __cdecl16near FUN_1000_993a(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 local_e [3];
  undefined1 local_8 [2];
  int local_6;
  int local_4;
  
  g_6d00 = 0xf000;
  g_6d02 = 3;
  g_6d04 = 0x1c00;
  g_6d06 = 0;
  FUN_1000_b8be();
  FUN_1000_0239();
  FUN_1000_9a81();
  FUN_1000_6e40();
  FUN_1000_5e1f();
  do {
    FUN_1000_0239();
    FUN_1000_0289();
    iVar1 = FUN_1000_0c51();
    if (iVar1 != 0) {
      FUN_1000_9a81();
    }
    puVar2 = local_8;
    uVar3 = unaff_SS;
    FUN_1000_5c1e(local_e);
    FUN_1000_e39b(unaff_SS,puVar2,uVar3);
    if (local_6 != 0) {
      return;
    }
    if (local_4 != 0) {
      return;
    }
    local_e[0] = 1;
    iVar1 = FUN_1000_cf8d();
  } while (iVar1 == 0);
  return;
}


/* ===== 0x199b3 FUN_1000_99b3  callers=[] strings=[] */

void __cdecl16near FUN_1000_99b3(void)

{
  FUN_1000_bc20(8,1,0);
  FUN_1000_bc20(0x10,0xb6,2);
  return;
}


/* ===== 0x199db FUN_1000_99db  callers=['FUN_1000_91f5', 'FUN_1000_98b8'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_99db(void)

{
  gb_5486 = -0x4d;
  gb_5487 = -0x67;
  FUN_1000_0239();
  FUN_1000_0289();
  FUN_1000_0289();
  gb_5486 = '\0';
  gb_5487 = '\0';
  FUN_1000_5e1f();
  return;
}


/* ===== 0x199f8 FUN_1000_99f8  callers=[] strings=[] */

void __cdecl16near FUN_1000_99f8(void)

{
  FUN_1000_bc20(0x11,0x17,1);
  g_7d4a = 7;
  g_7c78 = 7;
  g_7cee = 9;
  FUN_1000_a743(0x2f3d/*"We are a group of Software Artists\n"*/);
  FUN_1000_a743(0x2f61/*"whose goal is to bring commercial\n"*/);
  FUN_1000_a743(0x2f84/*"quality software to the public\n"*/);
  FUN_1000_a743(0x2fa4/*"at shareware prices.\n\n"*/);
  FUN_1000_a743(0x2fbb/*"Our effort is only possible with\n"*/);
  FUN_1000_a743(0x2fdd/*"your support. Without it, we cannot\n"*/);
  FUN_1000_a743(0x3002/*"continue to make this fine\n"*/);
  FUN_1000_a743(0x301e/*"software so affordable.\n\n"*/);
  FUN_1000_a743(0x3038/*"Thank you in advance for your\n"*/);
  FUN_1000_a743(0x3057/*"contribution to the future of the\n"*/);
  FUN_1000_a743(0x307a/*"growing shareware market."*/);
  return;
}


/* ===== 0x19a81 FUN_1000_9a81  callers=['FUN_1000_91f5', 'FUN_1000_993a'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_9a81(void)

{
  gb_5486 = -8;
  gb_5487 = -0x67;
  FUN_1000_b8be();
  FUN_1000_0239();
  FUN_1000_0289();
  FUN_1000_0289();
  gb_5486 = '\0';
  gb_5487 = '\0';
  FUN_1000_5e1f();
  return;
}


/* ===== 0x19aa1 FUN_1000_9aa1  callers=[] strings=[] */

void __cdecl16near FUN_1000_9aa1(void)

{
  int iVar1;
  int iVar2;
  undefined1 local_12 [12];
  int local_6;
  int local_4;
  
  FUN_1000_bc20(0xf,7,3);
  FUN_1000_bc20(9,0x2c,4);
  FUN_1000_bc20(0x17,0x2c,5);
  FUN_1000_bc20(0x21,0x2c,6);
  for (iVar2 = 0; iVar2 < 7; iVar2 = iVar2 + 1) {
    local_4 = FUN_1000_e1a3(g_6d00,g_6d02,0x1000,0);
    local_6 = FUN_1000_e1a3(g_6d04,g_6d06,0x1000,0);
    iVar1 = iVar2 % 4;
    g_7cee = iVar2 * 2 + 8;
    if (((int*)&g_a646)[iVar2] != 0) {
      *(int *)((int)g_6a76 +
              (local_4 + (g_7cee / 2 + local_6) * g_6a36 + 0xe) * 2) = iVar1 + 0xdd;
    }
    if (((int*)&g_a654)[iVar2] != 0) {
      *(int *)((int)g_6a76 +
              (local_4 + (g_7cee / 2 + local_6) * g_6a36 + 0xf) * 2) = iVar1 + 0xed;
    }
    if (((int*)&g_a670)[iVar2] != 0) {
      *(int *)((int)g_6a76 +
              (local_4 + (g_7cee / 2 + local_6) * g_6a36 + 0x10) * 2) = iVar1 + 0xf1;
    }
    if (((int*)&g_a662)[iVar2] != 0) {
      *(int *)((int)g_6a76 +
              (local_4 + (g_7cee / 2 + local_6) * g_6a36 + 0x11) * 2) = iVar1 + 0xf5;
    }
    FUN_1000_d47d(((int*)&g_a62a)[iVar2 * 2],
                  ((int*)&g_a62c)[iVar2 * 2],local_12,10);
    iVar1 = FUN_1000_d858(local_12);
    g_7c78 = 0x1d - iVar1;
    FUN_1000_a743(local_12);
    g_7c78 = 9;
    FUN_1000_a743(iVar2 * 0xd + -0x5966);
  }
  return;
}


/* ===== 0x19c59 FUN_1000_9c59  callers=['FUN_1000_8ce4', 'FUN_1000_91f5', 'FUN_1000_9c8e'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_9c59(void)

{
  g_6d00 = 0x4000;
  g_6d02 = 5;
  g_6d04 = 0x2000;
  g_6d06 = 0;
  FUN_1000_b8be();
  FUN_1000_0239();
  gb_5486 = -0x5f;
  gb_5487 = -0x66;
  FUN_1000_0289();
  FUN_1000_0289();
  gb_5486 = '\0';
  gb_5487 = '\0';
  return;
}


/* ===== 0x19c8e FUN_1000_9c8e  callers=['FUN_1000_949d'] strings=[] */

void __cdecl16near FUN_1000_9c8e(void)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 local_e [3];
  undefined1 local_8 [2];
  int local_6;
  int local_4;
  
  FUN_1000_9c59();
  FUN_1000_6e40();
  FUN_1000_5e1f();
  do {
    FUN_1000_0239();
    FUN_1000_0289();
    iVar1 = FUN_1000_0c51();
    if (iVar1 != 0) {
      FUN_1000_9c59();
    }
    puVar2 = local_8;
    uVar3 = unaff_SS;
    FUN_1000_5c1e(local_e);
    FUN_1000_e39b(unaff_SS,puVar2,uVar3);
    if (local_6 != 0) {
      return;
    }
    if (local_4 != 0) {
      return;
    }
    local_e[0] = 1;
    iVar1 = FUN_1000_cf8d();
  } while (iVar1 == 0);
  return;
}


/* ===== 0x19ce9 FUN_1000_9ce9  callers=['FUN_1000_0c51'] strings=[] */

void __cdecl16near FUN_1000_9ce9(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 unaff_SI;
  int iVar3;
  undefined2 unaff_SS;
  undefined1 local_12 [5];
  char local_d;
  char local_3;
  
  iVar3 = 0;
  FUN_1000_e39b(0x2315,local_12,unaff_SS,unaff_SI);
  FUN_1000_d7cc(local_12,g_24ca);
  if (g_a628 == 0) {
    FUN_1000_62b8(0x16,3);
    FUN_1000_64c9(0x3094/*"You can SAVE the game\n"*/);
    FUN_1000_64c9(0x30ab/*"ONLY on the World Map!\n"*/);
    FUN_1000_64c9(0x30c3/*"    press a key:"*/);
    FUN_1000_5e1f();
    FUN_1000_b30d();
  }
  else {
    do {
      FUN_1000_62b8(0x14,3);
      FUN_1000_64c9(0x30d4/*"Which game position\n"*/);
      FUN_1000_64c9(0x30e9/*"do you want to save?\n"*/);
      FUN_1000_64c9(0x30ff/*"    1-9 or ESC:"*/);
      do {
        local_3 = FUN_1000_6462();
        if (local_3 == '\x1b') break;
      } while ((local_3 < '1') || ('9' < local_3));
      if (local_3 == '\x1b') {
        return;
      }
      local_d = local_3;
      iVar2 = FUN_1000_c5e1(local_12,0);
      if (iVar2 == 0) {
        FUN_1000_62b8(0x14,3);
        FUN_1000_64c9(0x310f/*"That game position\n"*/);
        FUN_1000_64c9(0x3123/*"already exists!\n"*/);
        FUN_1000_64c9(0x3134/*"Overwrite it?:"*/);
        do {
          uVar1 = FUN_1000_6462();
          local_3 = FUN_1000_cdc5(uVar1);
          if ((local_3 == '\x1b') || (local_3 == 'Y')) break;
        } while (local_3 != 'N');
        if (local_3 == '\x1b') {
          return;
        }
        if (local_3 == 'Y') {
          iVar3 = iVar3 + 1;
        }
      }
      else {
        iVar3 = iVar3 + 1;
      }
    } while (iVar3 == 0);
    g_a602 = g_a22e;
    g_a604 = g_a230;
    g_a606 = g_a232;
    g_a608 = g_a234;
    g_a5fa = g_a226;
    g_a5fc = g_a228;
    g_a5fe = g_a22a;
    g_a600 = g_a22c;
    FUN_1000_5f5d(local_12,(undefined2 *)&g_a5c0,0x2315,0x5c,0);
    FUN_1000_62b8(0x1d,3);
    FUN_1000_64c9(0x3143/*"You can continue this game\n"*/);
    FUN_1000_64c9(0x315f/*"from the Main Menu next time\n"*/);
    FUN_1000_64c9(0x317d/*"you play. Press a key:"*/);
    FUN_1000_6462();
  }
  return;
}


/* ===== 0x19e83 FUN_1000_9e83  callers=['FUN_1000_949d'] strings=[] */

undefined2 __cdecl16near FUN_1000_9e83(void)

{
  undefined2 unaff_SS;
  long lVar1;
  undefined2 ***local_16 [2];
  char local_11;
  undefined4 local_8;
  char local_3;
  
  FUN_1000_e39b(0x2315,local_16,unaff_SS);
  local_16[0] = (undefined2 ***)0x20;
  FUN_1000_ba4a(g_7c78,g_7cee << 3);
  do {
    local_16[0] = (undefined2 ***)0x2;
    FUN_1000_62b8(0x19);
    g_a622 = g_7c78 >> 0xf;
    g_a620 = g_7c78;
    g_a626 = g_7cee >> 0xf;
    g_a624 = g_7cee;
    local_16[0] = (undefined2 ***)0x3194/*"  Continue Which Game?\n"*/;
    FUN_1000_64c9();
    local_16[0] = (undefined2 ***)0x31ac/*"       1-9 or ESC:"*/;
    FUN_1000_64c9();
    do {
      local_16[0] = (undefined2 ***)0x9eea;
      local_3 = FUN_1000_6462();
      if (('0' < local_3) && (local_3 < ':')) break;
    } while (local_3 != '\x1b');
    if (local_3 == '\x1b') {
      return 0;
    }
    local_16[0] = g_24ca;
    local_11 = local_3;
    FUN_1000_d7cc(local_16);
    local_16[0] = local_16;
    lVar1 = FUN_1000_6562();
    local_8 = lVar1;
    if (lVar1 == 0) {
      local_16[0] = (undefined2 ***)0x2;
      FUN_1000_62b8(0x19);
      local_16[0] = (undefined2 ***)0x31bf/*"  That game hasn't\n"*/;
      FUN_1000_64c9();
      local_16[0] = (undefined2 ***)0x31d3/*"  been saved yet!:"*/;
      FUN_1000_64c9();
      local_16[0] = (undefined2 ***)0x9f55;
      FUN_1000_6462();
    }
    else {
      if (lVar1 == 0x5c) {
        local_16[0] = (undefined2 ***)0x2315;
        FUN_1000_5eb2(local_16,(undefined2 *)&g_a5c0);
        g_a5ba = 1;
        return 1;
      }
      local_16[0] = (undefined2 ***)0x2;
      FUN_1000_62b8(0x19);
      local_16[0] = (undefined2 ***)0x31e6/*"That file is incompatible\n"*/;
      FUN_1000_64c9();
      local_16[0] = (undefined2 ***)0x3201/*"with this verion of CK:"*/;
      FUN_1000_64c9();
      local_16[0] = (undefined2 ***)0x9fa1;
      FUN_1000_6462();
    }
  } while( true );
}


/* ===== 0x19fa8 FUN_1000_9fa8  callers=['FUN_1000_949d'] strings=[] */

void __cdecl16near FUN_1000_9fa8(void)

{
  FUN_1000_6e84();
  g_6d00 = 0xa000;
  g_6d02 = 2;
  g_6d04 = 0x2000;
  g_6d06 = 0;
  FUN_1000_b8be();
  FUN_1000_0289();
  FUN_1000_6e40();
  FUN_1000_a17d(g_a236,g_a238,0,0x10);
  FUN_1000_6e84();
  return;
}


/* ===== 0x19fe9 FUN_1000_9fe9  callers=['FUN_1000_0c51'] strings=[] */

void __cdecl16near FUN_1000_9fe9(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined2 uVar4;
  
  uVar4 = g_6d06;
  uVar3 = g_6d04;
  uVar2 = g_6d02;
  uVar1 = g_6d00;
  g_6d00 = g_6d00 & 0xf000;
  g_6d04 = g_6d04 & 0xf000;
  FUN_1000_a17d(g_a5bc,g_a5be,1,0x14);
  g_6d00 = uVar1;
  g_6d02 = uVar2;
  g_6d04 = uVar3;
  g_6d06 = uVar4;
  return;
}


/* ===== 0x1a067 FUN_1000_a067  callers=['FUN_1000_a0a2'] strings=[] */

void __cdecl16near
FUN_1000_a067(int param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  uVar2 = g_7cee;
  uVar1 = g_7c78;
  g_7c78 = param_2;
  g_7cee = param_3;
  if (param_1 == 0) {
    FUN_1000_64c9(param_4);
  }
  else {
    FUN_1000_a743(param_4);
  }
  g_7c78 = uVar1;
  g_7cee = uVar2;
  return;
}


/* ===== 0x1a0a2 FUN_1000_a0a2  callers=[] strings=[] */

void __cdecl16near FUN_1000_a0a2(void)

{
  int iVar1;
  
  FUN_1000_6118(4,g_a21e,0x2b,g_a222);
  FUN_1000_ba4a(4,(g_a222 + 1) * 8,4);
  FUN_1000_ba4a(0x2b,(g_a222 + 1) * 8,4);
  FUN_1000_ba4a(4,(g_a222 + 2) * 8,1);
  FUN_1000_ba4a(0x2b,(g_a222 + 2) * 8,3);
  for (iVar1 = 5; iVar1 < 0x2b; iVar1 = iVar1 + 1) {
    FUN_1000_ba4a(iVar1,(g_a222 + 2) * 8,2);
  }
  FUN_1000_a067(1,5,g_a222 + 1,0x3219);
  FUN_1000_b3cb(g_a21c,g_a21e + 1,g_a218,g_a21a,g_a216,
                g_a220);
  return;
}


/* ===== 0x1a17d FUN_1000_a17d  callers=['FUN_1000_839a', 'FUN_1000_98ea', 'FUN_1000_9fa8', 'FUN_1000_9fe9'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_a17d(undefined2 param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_DI;
  undefined2 unaff_SS;
  int *piVar4;
  undefined2 uVar5;
  undefined1 local_16 [6];
  undefined1 local_10 [6];
  int local_a;
  int local_8;
  int local_6;
  int local_4;
  
  iVar1 = param_4 - param_3;
  iVar2 = iVar1 + -1;
  local_a = FUN_1000_b667(param_1,param_2,0xa29a,0x26,200);
  g_a21c = 5;
  g_a21e = param_3;
  g_a218 = param_1;
  g_a21a = param_2;
  g_a216 = 0xa29a;
  g_a222 = param_4;
  gb_5486 = -0x5e;
  gb_5487 = -0x60;
  g_a220 = iVar2;
  FUN_1000_0289();
  FUN_1000_0289();
  gb_5486 = '\0';
  gb_5487 = '\0';
  iVar3 = 0;
  FUN_1000_c17c(8);
  do {
    piVar4 = &local_8;
    uVar5 = unaff_SS;
    FUN_1000_5c1e(local_10);
    FUN_1000_e39b(unaff_SS,piVar4,uVar5,unaff_DI);
    if ((g_7df2 == 0) && (local_8 != 0)) {
      if ((((g_7e02 != 0) || (local_8 == 4)) && (iVar3 <= local_a - iVar2)) &&
         (iVar3 <= 200 - iVar2)) {
        iVar3 = iVar3 + 1;
        FUN_1000_b7c8(param_3 + 1,param_4 + -1,0);
        unaff_DI = 1;
        FUN_1000_b3cb(5,param_4 + -1,param_1,param_2,iVar3 * 4 + iVar2 * 4 + -0x5d6a);
      }
    }
    else if (0 < iVar3) {
      iVar3 = iVar3 + -1;
      FUN_1000_b7c8(param_3 + 1,param_4 + -1,1);
      unaff_DI = 1;
      FUN_1000_b3cb(5,param_3 + 1,param_1,param_2,iVar3 * 4 + -0x5d66);
    }
    if (g_7df4 != 0) {
      if (iVar3 - iVar2 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 - (iVar1 + -2);
      }
      unaff_DI = iVar2;
      FUN_1000_b3cb(5,param_3 + 1,param_1,param_2,iVar3 * 4 + -0x5d66);
      do {
      } while (g_7df4 != 0);
    }
    if (g_7e04 != 0) {
      if (iVar3 + iVar2 * 2 < local_a) {
        iVar3 = iVar3 + iVar1 + -2;
      }
      else {
        iVar3 = (local_a - iVar2) + 1;
      }
      unaff_DI = iVar2;
      FUN_1000_b3cb(5,param_3 + 1,param_1,param_2,iVar3 * 4 + -0x5d66);
      do {
      } while (g_7e04 != 0);
    }
  } while (((g_7d64 == 0) && (local_6 == 0)) && (local_4 == 0));
  do {
    do {
      piVar4 = &local_8;
      uVar5 = unaff_SS;
      FUN_1000_5c1e(local_16);
      FUN_1000_e39b(unaff_SS,piVar4,uVar5,unaff_DI);
    } while (local_6 != 0);
  } while (local_4 != 0);
  FUN_1000_5e1f();
  return;
}


/* ===== 0x1a38c FUN_1000_a38c  callers=[] strings=[] */

void __cdecl16near FUN_1000_a38c(void)

{
  FUN_1000_bc20(0x10,g_a21c,10);
  return;
}


/* ===== 0x1a3a3 FUN_1000_a3a3  callers=[] strings=[] */

void __cdecl16near FUN_1000_a3a3(void)

{
  FUN_1000_bc20(0x16,g_a21c + -10,8);
  FUN_1000_bc20(0x10,g_a21c,10);
  FUN_1000_bc20(0x12,g_a21c + 0x20,9);
  FUN_1000_bc20(0x15,99,0xf);
  FUN_1000_bc20(0x13,0x72,0x11);
  FUN_1000_bc20(0x13,0x9f,0x10);
  return;
}


/* ===== 0x1a41a FUN_1000_a41a  callers=['FUN_1000_91f5'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_a41a(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DI;
  int iVar3;
  undefined2 unaff_SS;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined1 local_12 [6];
  int local_c;
  int local_a;
  undefined1 local_8 [2];
  int local_6;
  int local_4;
  
  g_6d00 = 0x8000;
  g_6d02 = 6;
  g_6d04 = 0x2000;
  g_6d06 = 0;
  local_a = 300;
  iVar3 = 200;
  iVar2 = 0;
  local_c = 0;
  FUN_1000_b8be();
  FUN_1000_5e1f();
  g_a224 = 0;
LAB_1000_a4da:
  if (local_a == 0) {
    gb_5486 = '\0';
    gb_5487 = '\0';
    return;
  }
  local_a = local_a + -1;
  FUN_1000_0239();
  g_a21c = iVar3;
  FUN_1000_0289();
  if (iVar2 == 0) {
    local_c = local_c + 1;
    if (0x1e < local_c) {
      local_c = 0;
      iVar2 = 1;
      gb_5486 = -0x74;
      gb_5487 = -0x5d;
    }
  }
  else if (iVar2 == 1) {
    if (iVar3 < 0x38) {
      iVar2 = 2;
      gb_5486 = -0x5d;
      gb_5487 = -0x5d;
    }
    else {
      iVar3 = iVar3 + -1;
    }
  }
  puVar4 = local_8;
  uVar5 = unaff_SS;
  FUN_1000_5c1e(local_12);
  FUN_1000_e39b(unaff_SS,puVar4,uVar5,unaff_DI);
  if ((local_6 == 0) && (local_4 == 0)) goto code_r0x0001a4c2;
  goto LAB_1000_a4cf;
code_r0x0001a4c2:
  unaff_DI = 1;
  iVar1 = FUN_1000_cf8d();
  if (iVar1 != 0) {
LAB_1000_a4cf:
    local_a = 0;
    g_a224 = 1;
  }
  goto LAB_1000_a4da;
}


/* ===== 0x1a4f3 FUN_1000_a4f3  callers=['FUN_1000_91f5', 'FUN_1000_949d'] strings=[] */

void __cdecl16near FUN_1000_a4f3(int param_1)

{
  int iVar1;
  undefined2 unaff_SI;
  uint uVar2;
  undefined2 unaff_DI;
  int iVar3;
  undefined2 unaff_SS;
  undefined1 *puVar4;
  int local_22;
  int local_20;
  int local_1e;
  uint local_1c [4];
  int local_14 [4];
  undefined1 local_c [4];
  undefined1 local_8 [2];
  int local_6;
  int local_4;
  
  FUN_1000_e39b(0x2315,local_c,unaff_SS,unaff_DI);
  FUN_1000_e39b(0x2315,local_14,unaff_SS,unaff_SI);
  FUN_1000_e39b(0x2315,local_1c,unaff_SS);
  iVar3 = 0;
  local_1e = 0;
  uVar2 = 0;
  local_22 = 0;
  FUN_1000_a70b();
  FUN_1000_6e40();
  FUN_1000_5e1f();
  local_20 = 0x960;
  do {
    puVar4 = local_8;
    FUN_1000_5c1e(&stack0xffd8);
    FUN_1000_e39b(unaff_SS,puVar4);
    FUN_1000_0239();
    if (local_22 % 6 == 0) {
      iVar1 = FUN_1000_c0f6();
      iVar3 = iVar3 + iVar1 + -2;
      if ((7 < iVar3) || (iVar3 < 0)) {
        iVar3 = FUN_1000_c0f6();
        iVar3 = iVar3 / 7;
      }
    }
    local_1e = local_1e + 1;
    if (500 < local_1e) {
      uVar2 = uVar2 ^ 1;
      local_1e = 0;
    }
    FUN_1000_02c5(local_1c[uVar2 * 2] + g_6d00,
                  local_1c[uVar2 * 2 + 1] + g_6d02 +
                  (uint)CARRY2(local_1c[uVar2 * 2],g_6d00),
                  local_14[uVar2 * 2] + g_6d04);
    FUN_1000_0289();
    local_22 = local_22 + 1;
    if (param_1 != 0) {
      local_20 = local_20 - g_5942;
    }
    iVar1 = FUN_1000_0c51();
    if (iVar1 != 0) {
      FUN_1000_5e1f();
      FUN_1000_a70b();
    }
    if (((local_6 != 0) || (local_4 != 0)) || (iVar1 = FUN_1000_cf8d(), iVar1 != 0)) {
      local_20 = 0;
    }
  } while (0 < local_20);
  return;
}


/* ===== 0x1a64f FUN_1000_a64f  callers=[] strings=[] */

void __cdecl16near FUN_1000_a64f(void)

{
  g_7c78 = 0xc;
  g_7d4a = 0xc;
  g_7cee = 4;
  FUN_1000_a743(0x3240/*"Commander Keen: Invasion\n"*/);
  FUN_1000_a743(0x325a/*"of the Vorticons consists\n"*/);
  FUN_1000_a743(0x3275/*"   of three unique and\n"*/);
  FUN_1000_a743(0x328d/*"  challenging episodes:\n\n"*/);
  FUN_1000_a743(0x32a7/*"1. Marooned on Mars   $15\n"*/);
  FUN_1000_a743(0x32c2/*"2. The Earth Explodes $15\n"*/);
  FUN_1000_a743(0x32dd/*"3. Keen Must Die!     $15\n\n"*/);
  g_7c78 = 4;
  g_7d4a = 4;
  FUN_1000_a743(0x32f9/*" Order the trilogy for $30 and you get:\n"*/);
  FUN_1000_a743(0x3322/*"  * The "Secret Hints & Tricks" sheet\n"*/);
  FUN_1000_a743(0x3349/*"  * The special "cheat mode" password\n"*/);
  FUN_1000_a743(0x3370/*"  * The latest version of each game\n"*/);
  FUN_1000_a743(0x3395/*"  * SEVERAL FREE BONUS GAMES!\n\n"*/);
  FUN_1000_a743(0x33b5/*"                       Mail orders to:\n"*/);
  FUN_1000_a743(0x33dd/*"(U.S. funds only       Apogee Software\n"*/);
  FUN_1000_a743(0x3405/*"checks or M/O's        P.O. Box 476389\n"*/);
  FUN_1000_a743(0x342d/*"include $2 P&H)        Garland, TX 75047"*/);
  g_7c78 = 0;
  FUN_1000_a743(0x3458/*"       Or order toll free: 1-800-852-565"*/);
  return;
}


/* ===== 0x1a70b FUN_1000_a70b  callers=['FUN_1000_91f5', 'FUN_1000_a4f3'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_a70b(void)

{
  g_6d00 = 0x6000;
  g_6d02 = 1;
  g_6d04 = 0x2000;
  g_6d06 = 0;
  FUN_1000_b8be();
  FUN_1000_0239();
  gb_5486 = 'O';
  gb_5487 = -0x5a;
  FUN_1000_0289();
  FUN_1000_0289();
  gb_5486 = '\0';
  gb_5487 = '\0';
  FUN_1000_5e1f();
  return;
}


/* ===== 0x1a743 FUN_1000_a743  callers=['FUN_1000_0e76', 'FUN_1000_99f8', 'FUN_1000_9aa1', 'FUN_1000_a067', 'FUN_1000_a64f'] strings=[] */

void __cdecl16near FUN_1000_a743(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  while( true ) {
    iVar3 = g_7c78;
    pcVar1 = param_1 + 1;
    cVar2 = *param_1;
    if (cVar2 == '\0') break;
    param_1 = pcVar1;
    if (cVar2 == '\n') {
      g_7cee = g_7cee + 1;
      g_7c78 = g_7d4a;
    }
    else if (cVar2 == '\r') {
      g_7c78 = g_7d4a;
    }
    else {
      g_7c78 = g_7c78 + 1;
      FUN_1000_ba4a(iVar3,g_7cee << 3,cVar2 + 0x80);
    }
  }
  return;
}


/* ===== 0x1a79d FUN_1000_a79d  callers=['FUN_1000_ac1c'] strings=[] */

undefined2 __cdecl16near FUN_1000_a79d(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DI;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 local_10;
  int local_6;
  int local_4;
  
  if (g_5bd8 == 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * g_5942;
    *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + *(int *)(param_1 + 0x22) * g_5942;
    FUN_1000_e39b(0x2315,0xa1da,0x2315,unaff_DI);
    local_10 = 0;
    bVar4 = CARRY2(g_a1f2,g_a1f8);
    g_a1f2 = g_a1f2 + g_a1f8;
    g_a1f4 = g_a1f4 + ((int)g_a1f8 >> 0xf) + (uint)bVar4;
    bVar4 = CARRY2(g_a1ea,g_a1f8);
    g_a1ea = g_a1ea + g_a1f8;
    g_a1ec = g_a1ec + ((int)g_a1f8 >> 0xf) + (uint)bVar4;
    local_4 = FUN_1000_e1a3(g_a1e6,g_a1e8,0x1000,0);
    iVar1 = FUN_1000_e1a3(g_a1ee,g_a1f0,0x1000,0);
    if ((int)g_a1f8 < 1) {
      if ((int)g_a1f8 < 0) {
        uVar9 = 0;
        uVar8 = 0x1000;
        uVar6 = FUN_1000_e1a3(g_a1ea,g_a1ec);
        lVar7 = FUN_1000_e1a3(g_a1ea - g_a1f8,
                              (g_a1ec - ((int)g_a1f8 >> 0xf)) -
                              (uint)(g_a1ea < g_a1f8),0x1000,0,
                              (int)((ulong)uVar6 >> 0x10),(int)uVar6);
        if (lVar7 != CONCAT22(uVar8,uVar9)) {
          iVar3 = FUN_1000_e1a3(g_a1ea,g_a1ec,0x1000,0);
          for (; local_4 <= iVar1; local_4 = local_4 + 1) {
            if ((*(int *)(*(int *)((int)g_6a76 + (iVar3 * g_6a36 + local_4) * 2) * 2 +
                         0x13c0) != 0) ||
               ((*(uint *)((int)g_6a7a + (iVar3 * g_6a36 + local_4) * 2) &
                g_a214) != 0)) {
              *(undefined2 *)(param_1 + 0x22) = 0;
              iVar1 = FUN_1000_e1b2(g_a1ea,g_a1ec,0x1000,0);
              uVar2 = 0x1000 - iVar1;
              *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) + uVar2;
              bVar4 = CARRY2(g_a1ea,uVar2);
              g_a1ea = g_a1ea + uVar2;
              g_a1ec = g_a1ec + ((int)uVar2 >> 0xf) + (uint)bVar4;
              bVar4 = CARRY2(g_a1f2,uVar2);
              g_a1f2 = g_a1f2 + uVar2;
              g_a1f4 = g_a1f4 + ((int)uVar2 >> 0xf) + (uint)bVar4;
              local_10 = 1;
              break;
            }
          }
        }
      }
    }
    else {
      uVar9 = 0;
      uVar8 = 0x1000;
      uVar6 = FUN_1000_e1a3(g_a1f2,g_a1f4);
      lVar7 = FUN_1000_e1a3(g_a1f2 - g_a1f8,
                            (g_a1f4 - ((int)g_a1f8 >> 0xf)) -
                            (uint)(g_a1f2 < g_a1f8),0x1000,0,
                            (int)((ulong)uVar6 >> 0x10),(int)uVar6);
      if (lVar7 != CONCAT22(uVar8,uVar9)) {
        iVar3 = FUN_1000_e1a3(g_a1f2,g_a1f4,0x1000,0);
        for (; local_4 <= iVar1; local_4 = local_4 + 1) {
          if ((*(int *)(*(int *)((int)g_6a76 + (iVar3 * g_6a36 + local_4) * 2) * 2 +
                       0xa34) != 0) ||
             ((*(uint *)((int)g_6a7a + (iVar3 * g_6a36 + local_4) * 2) & g_a214
              ) != 0)) {
            *(undefined2 *)(param_1 + 0x22) = 0;
            uVar2 = FUN_1000_e1b2(g_a1f2 + 1,g_a1f4 + (uint)(0xfffe < g_a1f2),
                                  0x1000,0);
            *(int *)(param_1 + 0x1e) = *(int *)(param_1 + 0x1e) - uVar2;
            bVar4 = g_a1ea < uVar2;
            g_a1ea = g_a1ea - uVar2;
            g_a1ec = (g_a1ec - ((int)uVar2 >> 0xf)) - (uint)bVar4;
            bVar4 = g_a1f2 < uVar2;
            g_a1f2 = g_a1f2 - uVar2;
            g_a1f4 = (g_a1f4 - ((int)uVar2 >> 0xf)) - (uint)bVar4;
            local_10 = 1;
            break;
          }
        }
      }
    }
    bVar4 = CARRY2(g_a1e6,g_a1f6);
    g_a1e6 = g_a1e6 + g_a1f6;
    g_a1e8 = g_a1e8 + ((int)g_a1f6 >> 0xf) + (uint)bVar4;
    bVar4 = CARRY2(g_a1ee,g_a1f6);
    g_a1ee = g_a1ee + g_a1f6;
    g_a1f0 = g_a1f0 + ((int)g_a1f6 >> 0xf) + (uint)bVar4;
    local_6 = FUN_1000_e1a3(g_a1ea,g_a1ec,0x1000,0);
    iVar1 = FUN_1000_e1a3(g_a1f2,g_a1f4,0x1000,0);
    if ((int)g_a1f6 < 1) {
      if ((int)g_a1f6 < 0) {
        uVar6 = FUN_1000_e1a3(g_a1e6,g_a1e8,0x1000,0);
        uVar8 = 0x1000;
        iVar3 = (g_a1e8 - ((int)g_a1f6 >> 0xf)) -
                (uint)(g_a1e6 < g_a1f6);
        lVar7 = FUN_1000_e1a3(g_a1e6 - g_a1f6,iVar3,0x1000,0,
                              (int)((ulong)uVar6 >> 0x10),(int)uVar6);
        if (lVar7 != CONCAT22(iVar3,uVar8)) {
          iVar3 = FUN_1000_e1a3(g_a1e6,g_a1e8,0x1000,0);
          for (; local_6 <= iVar1; local_6 = local_6 + 1) {
            if ((*(int *)(*(int *)((int)g_6a76 + (local_6 * g_6a36 + iVar3) * 2) * 2 +
                         0xefa) != 0) ||
               ((*(uint *)((int)g_6a7a + (local_6 * g_6a36 + iVar3) * 2) &
                g_a214) != 0)) {
              *(undefined2 *)(param_1 + 0x20) = 0;
              iVar1 = FUN_1000_e1b2(g_a1e6,g_a1e8,0x1000,0);
              uVar2 = 0x1000 - iVar1;
              *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar2;
              bVar4 = CARRY2(g_a1e6,uVar2);
              bVar5 = CARRY2(g_a1ee,uVar2);
              g_a1e6 = g_a1e6 + uVar2;
              g_a1e8 = g_a1e8 + ((int)uVar2 >> 0xf) + (uint)bVar4;
              g_a1ee = g_a1ee + uVar2;
              g_a1f0 = g_a1f0 + ((int)uVar2 >> 0xf) + (uint)bVar5;
              return 1;
            }
          }
        }
      }
    }
    else {
      uVar6 = FUN_1000_e1a3(g_a1ee,g_a1f0,0x1000,0);
      uVar8 = 0x1000;
      iVar3 = (g_a1f0 - ((int)g_a1f6 >> 0xf)) - (uint)(g_a1ee < g_a1f6);
      lVar7 = FUN_1000_e1a3(g_a1ee - g_a1f6,iVar3,0x1000,0,(int)((ulong)uVar6 >> 0x10)
                            ,(int)uVar6);
      if (lVar7 != CONCAT22(iVar3,uVar8)) {
        iVar3 = FUN_1000_e1a3(g_a1ee,g_a1f0,0x1000,0);
        for (; local_6 <= iVar1; local_6 = local_6 + 1) {
          if ((*(int *)(*(int *)((int)g_6a76 + (local_6 * g_6a36 + iVar3) * 2) * 2 +
                       0x1886) != 0) ||
             ((*(uint *)((int)g_6a7a + (local_6 * g_6a36 + iVar3) * 2) & g_a214
              ) != 0)) {
            *(undefined2 *)(param_1 + 0x20) = 0;
            uVar2 = FUN_1000_e1b2(g_a1ee + 1,g_a1f0 + (uint)(0xfffe < g_a1ee),
                                  0x1000,0);
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - uVar2;
            bVar4 = g_a1e6 < uVar2;
            bVar5 = g_a1ee < uVar2;
            g_a1e6 = g_a1e6 - uVar2;
            g_a1e8 = (g_a1e8 - ((int)uVar2 >> 0xf)) - (uint)bVar4;
            g_a1ee = g_a1ee - uVar2;
            g_a1f0 = (g_a1f0 - ((int)uVar2 >> 0xf)) - (uint)bVar5;
            return 1;
          }
        }
      }
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}


/* ===== 0x1ac1c FUN_1000_ac1c  callers=['FUN_1000_7dfb'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n', '  * The latest version of each game\n'] */

void __cdecl16near FUN_1000_ac1c(undefined2 param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  bool bVar10;
  uint local_14;
  int local_10;
  int local_e;
  int local_4;
  
  FUN_1000_2b54(param_4);
  if ((param_2 != 0) || (param_3 != 0)) {
    local_4 = FUN_1000_e1a3(*(undefined2 *)(param_4 + 0xc),*(undefined2 *)(param_4 + 0xe),0x1000,0);
    iVar7 = FUN_1000_e1a3(*(undefined2 *)(param_4 + 0x14),*(undefined2 *)(param_4 + 0x16),0x1000,0);
    iVar5 = FUN_1000_e1a3(*(undefined2 *)(param_4 + 0x10),*(undefined2 *)(param_4 + 0x12),0x1000,0);
    iVar6 = FUN_1000_e1a3(*(undefined2 *)(param_4 + 0x18),*(undefined2 *)(param_4 + 0x1a),0x1000,0);
    for (; iVar9 = iVar5, local_4 <= iVar7; local_4 = local_4 + 1) {
      for (; iVar9 <= iVar6; iVar9 = iVar9 + 1) {
        uVar8 = (undefined2)((ulong)g_6a7a >> 0x10);
        if (*(int *)((int)g_6a7a + (iVar9 * g_6a36 + local_4) * 2) != 0) {
          local_e = local_4;
          g_6cf0 = *(int *)((int)g_6a7a + (iVar9 * g_6a36 + local_4) * 2);
          local_10 = iVar9;
          if (g_6cf0 == 0xff) {
            g_6cf0 = 0;
          }
        }
      }
    }
  }
  *(undefined2 *)(param_4 + 0x1e) = 0;
  *(undefined2 *)(param_4 + 0x1c) = 0;
  switch(param_1) {
  case 0:
    *(undefined2 *)(param_4 + 0x1e) = 0xfc00;
    *(undefined2 *)(param_4 + 0x28) = 0x2c;
    break;
  case 1:
    *(undefined2 *)(param_4 + 0x1e) = 0xfc00;
    *(undefined2 *)(param_4 + 0x1c) = 0x400;
    *(undefined2 *)(param_4 + 0x28) = 0x2c;
    break;
  case 2:
    *(undefined2 *)(param_4 + 0x1c) = 0x400;
    *(undefined2 *)(param_4 + 0x28) = 0x20;
    break;
  case 3:
    *(undefined2 *)(param_4 + 0x1e) = 0x400;
    *(undefined2 *)(param_4 + 0x1c) = 0x400;
    *(undefined2 *)(param_4 + 0x28) = 0x24;
    break;
  case 4:
    *(undefined2 *)(param_4 + 0x1e) = 0x400;
    *(undefined2 *)(param_4 + 0x28) = 0x24;
    break;
  case 5:
    *(undefined2 *)(param_4 + 0x1e) = 0x400;
    *(undefined2 *)(param_4 + 0x1c) = 0xfc00;
    *(undefined2 *)(param_4 + 0x28) = 0x24;
    break;
  case 6:
    *(undefined2 *)(param_4 + 0x1c) = 0xfc00;
    *(undefined2 *)(param_4 + 0x28) = 0x28;
    break;
  case 7:
    *(undefined2 *)(param_4 + 0x1e) = 0xfc00;
    *(undefined2 *)(param_4 + 0x1c) = 0xfc00;
    *(undefined2 *)(param_4 + 0x28) = 0x2c;
  }
  bVar10 = *(int *)(param_4 + 0x1c) == 0;
  bVar4 = *(int *)(param_4 + 0x1e) == 0;
  if (bVar10 && bVar4) {
    local_14 = 0;
  }
  else {
    local_14 = (uint)g_4f62 >> 4 & 3;
  }
  g_a214 = 0x8000;
  if ((g_7d80 != 0) && (g_7db6 != 0)) {
    g_a214 = 0;
  }
  iVar7 = FUN_1000_a79d(param_4);
  uVar3 = *(uint *)(param_4 + 0x1c);
  puVar1 = (uint *)(param_4 + 4);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)(param_4 + 6) = *(int *)(param_4 + 6) + ((int)uVar3 >> 0xf) + (uint)CARRY2(uVar2,uVar3);
  uVar3 = *(uint *)(param_4 + 0x1e);
  puVar1 = (uint *)(param_4 + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)(param_4 + 10) = *(int *)(param_4 + 10) + ((int)uVar3 >> 0xf) + (uint)CARRY2(uVar2,uVar3);
  if ((!bVar10 || !bVar4) && (((uint)g_4f62 >> 3 & 3) == 0)) {
    if (iVar7 == 0) {
      uVar8 = 1;
    }
    else {
      uVar8 = 2;
    }
    FUN_1000_bf8d(uVar8);
  }
  if (*(int *)(param_4 + 0x1c) < 1) {
LAB_1000_ae45:
    if (*(int *)(param_4 + 0x1c) < 0) {
      uVar2 = (uint)(*(uint *)(param_4 + 4) < g_6d00);
      uVar3 = *(int *)(param_4 + 6) - g_6d02;
      bVar10 = (int)(uVar3 - uVar2) < 0;
      if ((uVar3 == uVar2 || bVar10) &&
         ((bVar10 || (*(uint *)(param_4 + 4) - g_6d00 < 0x9000)))) {
        uVar2 = *(uint *)(param_4 + 0x1c);
        bVar10 = CARRY2(g_6d00,uVar2);
        g_6d00 = g_6d00 + uVar2;
        g_6d02 = g_6d02 + ((int)uVar2 >> 0xf) + (uint)bVar10;
        if ((g_6d02 <= (int)g_547a) &&
           ((g_6d02 < (int)g_547a ||
            (g_6d00 < (uint)g_5478)))) {
          g_6d00._0_1_ = gb_5478;
          g_6d00._1_1_ = gb_5479;
          g_6d02._0_1_ = gb_547a;
          g_6d02._1_1_ = gb_547b;
        }
      }
    }
  }
  else {
    uVar2 = (uint)(*(uint *)(param_4 + 4) < g_6d00);
    uVar3 = *(int *)(param_4 + 6) - g_6d02;
    if (((int)(uVar3 - uVar2) < 0) ||
       ((uVar3 == uVar2 && (*(uint *)(param_4 + 4) - g_6d00 < 0xb001)))) goto LAB_1000_ae45;
    uVar2 = *(uint *)(param_4 + 0x1c);
    bVar10 = CARRY2(g_6d00,uVar2);
    g_6d00 = g_6d00 + uVar2;
    g_6d02 = g_6d02 + ((int)uVar2 >> 0xf) + (uint)bVar10;
    if ((g_79b8 <= g_6d02) &&
       ((g_79b8 < g_6d02 || (g_79b6 < g_6d00)))) {
      g_6d00 = g_79b6;
      g_6d02 = g_79b8;
    }
  }
  if (0 < *(int *)(param_4 + 0x1e)) {
    uVar2 = (uint)(*(uint *)(param_4 + 8) < g_6d04);
    uVar3 = *(int *)(param_4 + 10) - g_6d06;
    if ((-1 < (int)(uVar3 - uVar2)) &&
       ((uVar3 != uVar2 || (0x7000 < *(uint *)(param_4 + 8) - g_6d04)))) {
      uVar2 = *(uint *)(param_4 + 0x1e);
      bVar10 = CARRY2(g_6d04,uVar2);
      g_6d04 = g_6d04 + uVar2;
      g_6d06 = g_6d06 + ((int)uVar2 >> 0xf) + (uint)bVar10;
      if ((g_79bc <= g_6d06) &&
         ((g_79bc < g_6d06 || (g_79ba < g_6d04)))) {
        g_6d04 = g_79ba;
        g_6d06 = g_79bc;
      }
      goto LAB_1000_af34;
    }
  }
  if (*(int *)(param_4 + 0x1e) < 0) {
    uVar2 = (uint)(*(uint *)(param_4 + 8) < g_6d04);
    uVar3 = *(int *)(param_4 + 10) - g_6d06;
    bVar10 = (int)(uVar3 - uVar2) < 0;
    if ((uVar3 == uVar2 || bVar10) &&
       ((bVar10 || (*(uint *)(param_4 + 8) - g_6d04 < 0x3000)))) {
      uVar2 = *(uint *)(param_4 + 0x1e);
      bVar10 = CARRY2(g_6d04,uVar2);
      g_6d04 = g_6d04 + uVar2;
      g_6d06 = g_6d06 + ((int)uVar2 >> 0xf) + (uint)bVar10;
      if ((g_6d06 <= (int)g_547e) &&
         ((g_6d06 < (int)g_547e ||
          (g_6d04 < (uint)g_547c)))) {
        g_6d04._0_1_ = gb_547c;
        g_6d04._1_1_ = gb_547d;
        g_6d06._0_1_ = gb_547e;
        g_6d06._1_1_ = gb_547f;
      }
    }
  }
LAB_1000_af34:
  g_5484 = FUN_1000_e272();
  g_5940 = FUN_1000_e272();
  FUN_1000_02c5(*(undefined2 *)(param_4 + 4),*(undefined2 *)(param_4 + 6),
                *(undefined2 *)(param_4 + 8),*(undefined2 *)(param_4 + 10),
                *(int *)(param_4 + 0x28) + local_14);
  if ((g_6cf0 != 0) &&
     (iVar7 = FUN_1000_afa4(g_6cf0,param_4,local_e,local_10), iVar7 != 0)) {
    g_6cf0 = 0;
  }
  return;
}


/* ===== 0x1afa4 FUN_1000_afa4  callers=['FUN_1000_ac1c'] strings=[] */

undefined2 __cdecl16near FUN_1000_afa4(uint param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 unaff_SS;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_1a [6];
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  undefined1 local_8 [2];
  int local_6;
  int local_4;
  
  if (param_1 == 0x14) {
    FUN_1000_62b8(0x14,8);
    FUN_1000_64c9(0x3487/*"Your ship is missing\nthese parts:\n\n\n\n\n"*/);
    FUN_1000_64c9(0x34ae/*"    GO GET THEM!\n"*/);
    FUN_1000_64c9(0x34c0/*"   press a "*/);
    if (g_7d34 == 0) {
      uVar4 = 0x34cc/*"key:"*/;
    }
    else {
      uVar4 = 0x34d1/*"button:"*/;
    }
    FUN_1000_64c9(uVar4);
    if (g_a5c0 == 0) {
      FUN_1000_baa3(g_7d4a + 3,(g_7cee + -4) * 8,0x141);
    }
    if (g_a5c8 == 0) {
      FUN_1000_baa3(g_7d4a + 7,(g_7cee + -4) * 8,0x142);
    }
    if (g_a5c2 == 0) {
      FUN_1000_baa3(g_7d4a + 0xb,(g_7cee + -4) * 8,0x143);
    }
    if (g_a5c4 == 0) {
      FUN_1000_baa3(g_7d4a + 0xf,(g_7cee + -4) * 8,0x144);
    }
    FUN_1000_c17c(0xf);
    FUN_1000_b30d();
    FUN_1000_b8be();
    uVar4 = 1;
  }
  else {
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      if ((param_1 & 0x20) == 0x20) {
        local_a = (param_1 & 3) - 1;
        local_c = ((int)param_1 >> 2 & 3U) - 1;
        local_12 = param_3;
        local_14 = param_4;
        local_10 = 0x152;
        if (*(int *)(local_c * 10 + 0x285a) != 0) {
          local_10 = 0x156;
        }
        FUN_1000_bf8d(0x12);
        for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
          FUN_1000_0239();
          FUN_1000_b8be();
          if ((iVar1 % 2 == 0) && (local_e = local_e + 1, 3 < local_e)) {
            local_e = 0;
          }
          *(int *)((int)g_6a76 + (local_14 * g_6a36 + local_12) * 2) =
               local_e + local_10;
          FUN_1000_0289();
        }
        local_10 = 0x145;
        if (*(int *)(local_c * 10 + 0x285a) != 0) {
          local_10 = 99;
        }
        *(undefined2 *)((int)g_6a76 + (local_14 * g_6a36 + local_12) * 2) = local_10;
        uVar4 = *(undefined2 *)(local_a * 10 + 0x2854);
        g_a226 = *(undefined2 *)(local_a * 10 + 0x2852);
        g_a228 = uVar4;
        g_a620 = g_a226;
        g_a622 = uVar4;
        *(undefined2 *)(param_2 + 4) = g_a226;
        *(undefined2 *)(param_2 + 6) = uVar4;
        uVar4 = *(undefined2 *)(local_a * 10 + 0x2858);
        g_a22a = *(undefined2 *)(local_a * 10 + 0x2856);
        g_a22c = uVar4;
        g_a624 = g_a22a;
        g_a626 = uVar4;
        *(undefined2 *)(param_2 + 8) = g_a22a;
        *(undefined2 *)(param_2 + 10) = uVar4;
        g_6d00 = *(uint *)(param_2 + 4) + 0x7000;
        g_6d02 = *(int *)(param_2 + 6) + -1 + (uint)(0x8fff < *(uint *)(param_2 + 4));
        g_6d04 = *(uint *)(param_2 + 8) + 0xd000;
        g_6d06 = *(int *)(param_2 + 10) + -1 + (uint)(0x2fff < *(uint *)(param_2 + 8));
        local_12 = FUN_1000_e1a3(*(undefined2 *)(param_2 + 4),*(undefined2 *)(param_2 + 6),0x1000,0)
        ;
        uVar4 = *(undefined2 *)(param_2 + 10);
        local_14 = FUN_1000_e1a3(*(undefined2 *)(param_2 + 8),uVar4,0x1000,0);
        local_10 = 0x152;
        if (*(int *)(local_a * 10 + 0x285a) != 0) {
          local_10 = 0x156;
        }
        for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
          FUN_1000_0239();
          FUN_1000_b8be();
          if ((iVar1 % 2 == 0) && (local_e = local_e + 1, 3 < local_e)) {
            local_e = 0;
          }
          *(int *)((int)g_6a76 + (local_14 * g_6a36 + local_12) * 2) =
               local_e + local_10;
          FUN_1000_0289();
        }
        local_10 = 0x145;
        if (*(int *)(local_a * 10 + 0x285a) != 0) {
          local_10 = 99;
        }
        *(undefined2 *)((int)g_6a76 + (local_14 * g_6a36 + local_12) * 2) = local_10;
        do {
          do {
            FUN_1000_0239(uVar4);
            puVar2 = local_8;
            uVar3 = unaff_SS;
            FUN_1000_5c1e(local_1a);
            FUN_1000_e39b(unaff_SS,puVar2,uVar3,uVar4);
            FUN_1000_02c5(*(undefined2 *)(param_2 + 4),*(undefined2 *)(param_2 + 6),
                          *(undefined2 *)(param_2 + 8),*(undefined2 *)(param_2 + 10),
                          *(undefined2 *)(param_2 + 0x28));
            FUN_1000_0289();
            FUN_1000_122c();
            uVar4 = 0xb2eb;
            FUN_1000_0c51();
          } while (local_6 != 0);
        } while (local_4 != 0);
        return 1;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


/* ===== 0x1b30d FUN_1000_b30d  callers=['FUN_1000_9ce9', 'FUN_1000_afa4'] strings=[] */

void __cdecl16near FUN_1000_b30d(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DI;
  int iVar3;
  undefined2 unaff_SS;
  undefined1 *puVar4;
  undefined2 uVar5;
  undefined1 local_16 [6];
  undefined1 local_10 [6];
  int local_a;
  undefined1 local_8 [2];
  int local_6;
  int local_4;
  
  local_a = 0;
  iVar3 = 0;
  do {
    FUN_1000_ba4a(g_7c78,g_7cee << 3,local_a + 9);
    for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
      FUN_1000_c17c(1);
      puVar4 = local_8;
      uVar5 = unaff_SS;
      FUN_1000_5c1e(local_16);
      FUN_1000_e39b(unaff_SS,puVar4,uVar5,unaff_DI);
      if ((local_6 != 0) || (local_4 != 0)) {
LAB_1000_b37c:
        iVar3 = iVar3 + 1;
        break;
      }
      unaff_DI = 1;
      iVar1 = FUN_1000_cf8d();
      if (iVar1 != 0) goto LAB_1000_b37c;
    }
    local_a = local_a + 1;
    if (4 < local_a) {
      local_a = 0;
    }
    if (iVar3 != 0) {
      do {
        puVar4 = local_8;
        uVar5 = unaff_SS;
        FUN_1000_5c1e(local_10);
        FUN_1000_e39b(unaff_SS,puVar4,uVar5,unaff_DI);
      } while (local_6 != 0 || local_4 != 0);
      FUN_1000_5e1f();
      return;
    }
  } while( true );
}


/* ===== 0x1b3cb FUN_1000_b3cb  callers=['FUN_1000_a0a2', 'FUN_1000_a17d'] strings=[] */

void __cdecl16near
FUN_1000_b3cb(int param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5,uint param_6
             )

{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint local_4;
  
  g_7cee = param_2;
  iVar8 = 0;
  local_4 = 0;
  while ((local_4 < param_6 && (iVar9 = *(int *)(param_5 + local_4 * 4), iVar9 != -1))) {
    uVar5 = *(uint *)(param_5 + local_4 * 4 + 2);
    uVar3 = param_4;
    g_7c78 = param_1;
    FUN_1000_e33b();
    iVar6 = -0x4bd7;
    FUN_1000_e33b(iVar8,iVar9);
    uVar7 = 0xb432;
    pcVar2 = (char *)FUN_1000_e33b();
    if (*pcVar2 == '\r') {
      uVar5 = uVar5 - 1;
    }
    uVar3 = param_4;
    pcVar2 = (char *)FUN_1000_e33b();
    if (*pcVar2 == '~') {
      iVar8 = 0x80;
      iVar9 = iVar9 + 1;
      uVar5 = uVar5 - 1;
    }
    else {
      iVar8 = 0;
    }
    for (uVar4 = 0; uVar4 < uVar5; uVar4 = uVar4 + 1) {
      uVar3 = param_4;
      FUN_1000_e33b(uVar7,iVar8,iVar9);
      pcVar2 = (char *)FUN_1000_e33b();
      iVar1 = g_7c78;
      uVar7 = *pcVar2 + iVar8 & 0xff;
      iVar6 = g_7cee << 3;
      g_7c78 = g_7c78 + 1;
      FUN_1000_ba4a(iVar1,iVar6);
    }
    if (g_7c78 < 0x2b) {
      FUN_1000_6286(g_7c78,g_7cee,0x2a,g_7cee,iVar8 + 0x20,iVar6);
    }
    g_7cee = g_7cee + 1;
    local_4 = local_4 + 1;
  }
  g_7c78 = param_1;
  return;
}


/* ===== 0x1b4ec FUN_1000_b4ec  callers=['FUN_1000_7b0a'] strings=[] */

void __cdecl16near FUN_1000_b4ec(undefined2 param_1,undefined2 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined2 uVar4;
  bool bVar5;
  char local_3;
  
  bVar5 = true;
  FUN_1000_e67a();
  if (bVar5) {
    FUN_1000_129d(0x34d9/*"Missing a text file!"*/);
  }
  do {
    uVar4 = param_2;
    pcVar2 = (char *)FUN_1000_e33b();
  } while (*pcVar2 != '\x1a');
  do {
    while( true ) {
      while( true ) {
        uVar4 = param_2;
        pcVar2 = (char *)FUN_1000_e33b();
        if (*pcVar2 == '\x1a') {
          return;
        }
        uVar4 = param_2;
        pcVar2 = (char *)FUN_1000_e33b();
        local_3 = *pcVar2;
        if (local_3 != '\x1f') break;
        uVar4 = param_2;
        puVar3 = (undefined1 *)FUN_1000_e33b();
        *puVar3 = 0xd;
      }
      if (local_3 == '\r') break;
LAB_1000_b605:
      if (local_3 == '\r') {
        uVar4 = param_2;
        FUN_1000_e33b();
        pcVar2 = (char *)FUN_1000_e33b();
        cVar1 = *pcVar2;
        while (cVar1 == '\r') {
          uVar4 = param_2;
          pcVar2 = (char *)FUN_1000_e33b();
          cVar1 = *pcVar2;
        }
      }
    }
    uVar4 = param_2;
    FUN_1000_e33b();
    local_3 = -0x4b;
    pcVar2 = (char *)FUN_1000_e33b();
    if (*pcVar2 == '\r') goto LAB_1000_b605;
    puVar3 = (undefined1 *)FUN_1000_e33b();
    *puVar3 = 0x20;
    FUN_1000_e33b();
    FUN_1000_e33b();
    FUN_1000_e33b();
    FUN_1000_e33b();
    FUN_1000_e33b();
    FUN_1000_e33b();
    param_2 = 0xb5f3;
    FUN_1000_e33b();
    FUN_1000_e33b();
    FUN_1000_d503();
  } while( true );
}


/* ===== 0x1b667 FUN_1000_b667  callers=['FUN_1000_a17d'] strings=[] */

int __cdecl16near
FUN_1000_b667(undefined2 param_1,undefined2 param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 local_6;
  undefined2 local_4;
  
  local_4 = 0;
  iVar4 = 0;
  do {
    local_6 = 0;
    *(uint *)(param_3 + iVar4 * 4) = local_4;
    for (uVar3 = local_4; uVar3 < local_4 + param_4; uVar3 = uVar3 + 1) {
      uVar2 = param_2;
      pcVar1 = (char *)FUN_1000_e33b();
      if (*pcVar1 == '\x1a') {
        local_6 = 2;
        *(int *)(param_3 + iVar4 * 4 + 2) = uVar3 - local_4;
        *(undefined2 *)(param_3 + (iVar4 + 1) * 4) = 0xffff;
        *(undefined2 *)(param_3 + (iVar4 + 1) * 4 + 2) = 0xffff;
        break;
      }
      uVar2 = param_2;
      pcVar1 = (char *)FUN_1000_e33b();
      if (*pcVar1 == '\r') {
        *(int *)(param_3 + iVar4 * 4 + 2) = (uVar3 - local_4) + 1;
        iVar4 = iVar4 + 1;
        local_4 = uVar3 + 2;
        local_6 = 1;
        break;
      }
    }
    if (local_6 == 0) {
      for (; local_4 < uVar3; uVar3 = uVar3 - 1) {
        uVar2 = param_2;
        pcVar1 = (char *)FUN_1000_e33b();
        if (*pcVar1 == ' ') {
          *(int *)(param_3 + iVar4 * 4 + 2) = uVar3 - local_4;
          iVar4 = iVar4 + 1;
          local_4 = uVar3 + 1;
          break;
        }
      }
      if (uVar3 == local_4) {
        *(int *)(param_3 + iVar4 * 4 + 2) = param_4;
        iVar4 = iVar4 + 1;
        local_4 = local_4 + param_4;
      }
    }
    if (iVar4 == param_5) {
      *(undefined2 *)(param_3 + (iVar4 + -1) * 4) = 0xffff;
      *(undefined2 *)(param_3 + (iVar4 + -1) * 4 + 2) = 0xffff;
      local_6 = 2;
    }
    if (1 < local_6) {
      return iVar4;
    }
  } while( true );
}


/* ===== 0x1b7c8 FUN_1000_b7c8  callers=['FUN_1000_a17d'] strings=[] */

void __cdecl16near FUN_1000_b7c8(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined1 extraout_AH_02;
  undefined1 extraout_AH_03;
  undefined1 extraout_AH_04;
  undefined1 *puVar5;
  undefined1 *puVar6;
  
  iVar4 = (param_2 - param_1) * 0x180;
  if (param_3 == 0) {
    FUN_1000_d6d5(0x3ce,5);
    FUN_1000_d6d5(0x3cf,CONCAT11(extraout_AH,1));
    FUN_1000_d6d5(0x3c4,CONCAT11(extraout_AH_00,2));
    FUN_1000_d6d5(0x3c5,CONCAT11(extraout_AH_01,0xf));
    uVar3 = g_34f0;
    puVar5 = (undefined1 *)(param_1 * 0x180);
    puVar6 = puVar5 + 0x180;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar1 = puVar5;
      puVar5 = puVar5 + 1;
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar1 = *puVar2;
    }
  }
  else if (param_3 == 1) {
    FUN_1000_d6d5(0x3ce,5);
    FUN_1000_d6d5(0x3cf,CONCAT11(extraout_AH_02,1));
    FUN_1000_d6d5(0x3c4,CONCAT11(extraout_AH_03,2));
    FUN_1000_d6d5(0x3c5,CONCAT11(extraout_AH_04,0xf));
    uVar3 = g_34f0;
    puVar5 = (undefined1 *)(param_2 * 0x180);
    puVar6 = puVar5 + 0x17f;
    for (; puVar5 = puVar5 + -1, iVar4 != 0; iVar4 = iVar4 + -1) {
      puVar2 = puVar6;
      puVar6 = puVar6 + -1;
      *puVar2 = *puVar5;
    }
  }
  return;
}


/* ===== 0x1b8be FUN_1000_b8be  callers=['FUN_1000_0983', 'FUN_1000_0c51', 'FUN_1000_0dec', 'FUN_1000_0e76', 'FUN_1000_122c', 'FUN_1000_255f', 'FUN_1000_4c32', 'FUN_1000_7dfb', 'FUN_1000_839a', 'FUN_1000_8b1e', 'FUN_1000_8ce4', 'FUN_1000_91f5'] strings=[] */

void __cdecl16near FUN_1000_b8be(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)&g_5944;
  for (iVar2 = 0x126; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0xffff;
  }
  puVar3 = (undefined2 *)&g_5be6;
  for (iVar2 = 0x126; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0xffff;
  }
  return;
}


/* ===== 0x1b8d8 FUN_1000_b8d8  callers=['FUN_1000_0289'] strings=[' place!\n\n\nEnter your name:', '  * The latest version of each game\n', '  * The latest version of each game\n'] */

undefined4 __cdecl16near FUN_1000_b8d8(void)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined2 uVar3;
  
  FUN_1000_b9e6();
  out(0x3ce,0x105);
  g_34f2 = 0;
  g_34fa =
       *(undefined2 *)
        ((char *)0x4f38 +
        ((uint)g_4f62 >> ((byte)g_6a90 & 0x1f) & 6));
  if (g_5480 == 0) {
    FUN_1e7c_1d00(0x1000);
  }
  else {
    FUN_1e7c_004d(0x1000);
  }
  uVar3 = g_34f0;
  g_34f0 = g_34ee;
  if (g_6cee != 0) {
    iVar2 = 0;
    iVar1 = g_6cee;
    do {
      FUN_1000_bc97(*(undefined2 *)(iVar2 + 0x5e7c),*(undefined2 *)(iVar2 + 0x5e7e),
                    *(undefined2 *)(iVar2 + 0x5e80));
      iVar2 = iVar2 + 6;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (g_6d08 != 0) {
    iVar2 = 0;
    iVar1 = g_6d08;
    do {
      FUN_1000_baa3(*(undefined2 *)(iVar2 + 0x6a92),*(undefined2 *)(iVar2 + 0x6a94),
                    *(undefined2 *)(iVar2 + 0x6a96));
      iVar2 = iVar2 + 6;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (g_6cfc != 0) {
    iVar2 = 0;
    iVar1 = g_6cfc;
    do {
      FUN_1000_bc20(*(undefined2 *)(iVar2 + 0x6a38),*(undefined2 *)(iVar2 + 0x6a3a),
                    *(undefined2 *)(iVar2 + 0x6a3c));
      iVar2 = iVar2 + 6;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  g_34f0 = uVar3;
  if (g_5486 != 0) {
    (*(code *)g_5486)();
  }
  out(0x3d4,0xc);
  out(0x3d5,(char)((uint)g_34f6 >> 8));
  out(0x3d4,0xd);
  out(0x3d5,(char)g_34f6);
  FUN_1000_c17c(1);
  in(0x3da);
  out(0x3c0,0x33);
  out(0x3c0,(char)g_34f4);
  return CONCAT22(0x3c0,g_34f4);
}


/* ===== 0x1b9e6 FUN_1000_b9e6  callers=['FUN_1000_b8d8'] strings=['  * The latest version of each game\n', '  * The latest version of each game\n'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_b9e6(void)

{
  uint uVar1;
  
  g_34f6 = 4;
  if ((_g_6d00 & 0x800) != 0) {
    g_34f6 = 5;
  }
  g_34f4 = ram0x00029e51 & 7;
  uVar1 = g_5480 ^ 1;
  gb_5480 = (char)uVar1;
  gb_5481 = (char)(uVar1 >> 8);
  if ((uVar1 & 1) == 0) {
    g_34ee = 0xa000;
  }
  else {
    g_34ee = 0xa300;
    g_34f6 = g_34f6 + 0x3000;
  }
  g_34f6 = g_34f6 + (ram0x00029e55 & 0xf) * 0x30 + 0x600;
  g_34f0 = (g_34f6 >> 4) + 0xa000;
  return;
}


/* ===== 0x1ba4a FUN_1000_ba4a  callers=['FUN_1000_5074', 'FUN_1000_52c5', 'FUN_1000_548b', 'FUN_1000_6118', 'FUN_1000_6286', 'FUN_1000_6376', 'FUN_1000_6462', 'FUN_1000_64c9', 'FUN_1000_67ae', 'FUN_1000_949d', 'FUN_1000_9e83', 'FUN_1000_a0a2'] strings=[] */

void __cdecl16near FUN_1000_ba4a(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  uVar2 = g_7cf6;
  uVar1 = g_34f0;
  puVar4 = (undefined1 *)(param_1 + *(int *)(param_2 * 2 + 0x3748));
  out(0x3ce,0x105);
  puVar3 = (undefined1 *)(param_3 * 8);
  *puVar4 = *puVar3;
  puVar4[0x30] = puVar3[1];
  puVar4[0x60] = puVar3[2];
  puVar4[0x90] = puVar3[3];
  puVar4[0xc0] = puVar3[4];
  puVar4[0xf0] = puVar3[5];
  puVar4[0x120] = puVar3[6];
  puVar4[0x150] = puVar3[7];
  return;
}


/* ===== 0x1baa3 FUN_1000_baa3  callers=['FUN_1000_0e76', 'FUN_1000_8ce4', 'FUN_1000_afa4', 'FUN_1000_b8d8'] strings=[] */

void __cdecl16near FUN_1000_baa3(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  uVar3 = g_7d60;
  uVar2 = g_34f0;
  puVar7 = (uint *)(param_1 + *(int *)(param_2 * 2 + 0x3748));
  if (-1 < param_3) {
    puVar1 = (undefined1 *)*(undefined2 *)(param_3 * 2 + g_34fa);
    out(0x3c4,0xf02);
    out(0x3ce,0x105);
    *(undefined1 *)puVar7 = *puVar1;
    *(undefined1 *)((int)puVar7 + 1) = puVar1[1];
    *(undefined1 *)(puVar7 + 0x18) = puVar1[2];
    *(undefined1 *)((int)puVar7 + 0x31) = puVar1[3];
    *(undefined1 *)(puVar7 + 0x30) = puVar1[4];
    *(undefined1 *)((int)puVar7 + 0x61) = puVar1[5];
    *(undefined1 *)(puVar7 + 0x48) = puVar1[6];
    *(undefined1 *)((int)puVar7 + 0x91) = puVar1[7];
    *(undefined1 *)(puVar7 + 0x60) = puVar1[8];
    *(undefined1 *)((int)puVar7 + 0xc1) = puVar1[9];
    *(undefined1 *)(puVar7 + 0x78) = puVar1[10];
    *(undefined1 *)((int)puVar7 + 0xf1) = puVar1[0xb];
    *(undefined1 *)(puVar7 + 0x90) = puVar1[0xc];
    *(undefined1 *)((int)puVar7 + 0x121) = puVar1[0xd];
    *(undefined1 *)(puVar7 + 0xa8) = puVar1[0xe];
    *(undefined1 *)((int)puVar7 + 0x151) = puVar1[0xf];
    *(undefined1 *)(puVar7 + 0xc0) = puVar1[0x10];
    *(undefined1 *)((int)puVar7 + 0x181) = puVar1[0x11];
    *(undefined1 *)(puVar7 + 0xd8) = puVar1[0x12];
    *(undefined1 *)((int)puVar7 + 0x1b1) = puVar1[0x13];
    *(undefined1 *)(puVar7 + 0xf0) = puVar1[0x14];
    *(undefined1 *)((int)puVar7 + 0x1e1) = puVar1[0x15];
    *(undefined1 *)(puVar7 + 0x108) = puVar1[0x16];
    *(undefined1 *)((int)puVar7 + 0x211) = puVar1[0x17];
    *(undefined1 *)(puVar7 + 0x120) = puVar1[0x18];
    *(undefined1 *)((int)puVar7 + 0x241) = puVar1[0x19];
    *(undefined1 *)(puVar7 + 0x138) = puVar1[0x1a];
    *(undefined1 *)((int)puVar7 + 0x271) = puVar1[0x1b];
    *(undefined1 *)(puVar7 + 0x150) = puVar1[0x1c];
    *(undefined1 *)((int)puVar7 + 0x2a1) = puVar1[0x1d];
    *(undefined1 *)(puVar7 + 0x168) = puVar1[0x1e];
    *(undefined1 *)((int)puVar7 + 0x2d1) = puVar1[0x1f];
    return;
  }
  puVar5 = (uint *)(param_3 << 5);
  out(0x3ce,5);
  out(0x3ce,4);
  out(0x3c4,0x102);
  iVar4 = 0x10;
  puVar6 = puVar5;
  puVar8 = puVar7;
  do {
    *puVar8 = *puVar8 & puVar6[0x10] | *puVar6 & (puVar6[0x10] ^ 0xffff);
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 0x18;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  out(0x3ce,0x104);
  out(0x3c4,0x202);
  iVar4 = 0x10;
  puVar6 = puVar5;
  puVar8 = puVar7;
  do {
    *puVar8 = *puVar8 & puVar6[0x10] | *puVar6 & (puVar6[0x10] ^ 0xffff);
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 0x18;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  out(0x3ce,0x204);
  out(0x3c4,0x402);
  iVar4 = 0x10;
  puVar6 = puVar5;
  puVar8 = puVar7;
  do {
    *puVar8 = *puVar8 & puVar6[0x10] | *puVar6 & (puVar6[0x10] ^ 0xffff);
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 0x18;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  out(0x3ce,0x304);
  out(0x3c4,0x802);
  iVar4 = 0x10;
  do {
    *puVar7 = *puVar7 & puVar5[0x10] | *puVar5 & (puVar5[0x10] ^ 0xffff);
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 0x18;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  out(0x3ce,0x105);
  out(0x3c4,0xf02);
  return;
}


/* ===== 0x1bc20 FUN_1000_bc20  callers=['FUN_1000_6f20', 'FUN_1000_839a', 'FUN_1000_8ce4', 'FUN_1000_99b3', 'FUN_1000_99f8', 'FUN_1000_9aa1', 'FUN_1000_a38c', 'FUN_1000_a3a3', 'FUN_1000_b8d8'] strings=[] */

void __cdecl16near FUN_1000_bc20(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined2 unaff_SS;
  
  uVar4 = g_7d42;
  uVar3 = g_34f0;
  piVar6 = (int *)(param_3 * 0x10);
  DAT_1000_ba44 = *piVar6;
  DAT_1000_ba48 = piVar6[1];
  puVar7 = (undefined1 *)piVar6[2];
  DAT_1000_ba46 = param_1;
  out(0x3c4,2);
  out(0x3c5,0xf);
  out(0x3ce,5);
  out(0x3cf,1);
  param_2 = param_2 << 1;
  do {
    piVar6 = (int *)(param_2 + 0x3748);
    param_2 = param_2 + 2;
    puVar8 = (undefined1 *)(*piVar6 + DAT_1000_ba46);
    for (iVar5 = DAT_1000_ba44; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar8;
      puVar8 = puVar8 + 1;
      puVar1 = puVar7;
      puVar7 = puVar7 + 1;
      *puVar2 = *puVar1;
    }
    DAT_1000_ba48 = DAT_1000_ba48 + -1;
  } while (DAT_1000_ba48 != 0);
  return;
}


/* ===== 0x1bc97 FUN_1000_bc97  callers=['FUN_1000_0e76', 'FUN_1000_912b', 'FUN_1000_b8d8'] strings=['     You got ', '     You got ', '     You got ', '     You got ', '     You got ', '     You got ', '     You got ', '     You got '] */

undefined4 __cdecl16near FUN_1000_bc97(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined2 unaff_SS;
  
  g_4f5e = param_1 + *(int *)(param_2 * 2 + 0x3748);
  piVar1 = (int *)(param_3 * 0x20);
  g_4f54 = piVar1[1];
  g_4f56 = piVar1[2];
  g_4f52 =
       *(undefined2 *)((char *)0x4f40 + *piVar1 * 2);
  gb_4f60 = '\x03';
  gb_4f61 = '\0';
  out(0x3ce,5);
  out(0x3ce,4);
  out(0x3c4,0x102);
  (**(code **)(char *)0x4f52)();
  out(0x3ce,0x104);
  out(0x3c4,0x202);
  (**(code **)(char *)0x4f52)();
  out(0x3ce,0x204);
  out(0x3c4,0x402);
  (**(code **)(char *)0x4f52)();
  out(0x3ce,0x304);
  out(0x3c4,0x802);
  (**(code **)(char *)0x4f52)();
  out(0x3ce,0x105);
  out(0x3c4,0xf02);
  return 0x3c40f02;
}


/* ===== 0x1beff FUN_1000_beff  callers=['FUN_1000_1312'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', '   Keens Left'] */

void __cdecl16near FUN_1000_beff(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined2 in_BX;
  undefined2 unaff_ES;
  undefined2 uVar2;
  
  if (g_4f7e != 0) {
    return;
  }
  uVar2 = 0x2315;
  if (g_4f6a == 0) {
    FUN_1000_bfc4();
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    gb_4f76 = '\b';
    pcVar1 = (code *)swi(0x21);
    g_4f72 = in_BX;
    g_4f74 = unaff_ES;
    (*pcVar1)();
    out(0x43,0x36);
    out(0x40,0);
    out(0x40,0x20);
    *(int *)((char *)0x4f6a) =
         *(int *)((char *)0x4f6a) + 1;
    uVar2 = param_3;
  }
  ((char *)0x4f70)[0] = '\x01';
  ((char *)0x4f70)[1] = '\0';
  return;
}


/* ===== 0x1bf51 FUN_1000_bf51  callers=['FUN_1000_129d', 'FUN_1000_7cb2', 'FUN_1000_7dbe'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', '   Keens Left'] */

uint __cdecl16near FUN_1000_bf51(undefined2 param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  uint in_AX;
  undefined1 extraout_AH;
  uint uVar3;
  
  if (g_4f7e != 0) {
    return in_AX;
  }
  out(0x43,0x36);
  out(0x40,0);
  out(0x40,0);
  uVar3 = 0;
  if (g_4f6a != 0) {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    ((char *)0x4f6a)[0] = '\0';
    ((char *)0x4f6a)[1] = '\0';
    uVar2 = in(0x61);
    uVar3 = CONCAT11(extraout_AH,uVar2) & 0xfffd;
    out(0x61,(char)uVar3);
  }
  return uVar3;
}


/* ===== 0x1bf8d FUN_1000_bf8d  callers=['FUN_1000_0c51', 'FUN_1000_0d8e', 'FUN_1000_1ad3', 'FUN_1000_1c39', 'FUN_1000_1dd9', 'FUN_1000_202c', 'FUN_1000_20b5', 'FUN_1000_21fd', 'FUN_1000_2326', 'FUN_1000_2863', 'FUN_1000_33ee', 'FUN_1000_365b'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', '   Keens Left'] */

void __cdecl16near FUN_1000_bf8d(int param_1)

{
  byte bVar1;
  
  if (g_4f7e != 0) {
    return;
  }
  bVar1 = ((char *)(param_1 * 0x10))[2];
  if ((byte)gb_4f79 <= bVar1) {
    g_4f77 = *(undefined2 *)(char *)(param_1 * 0x10);
    gb_4f79 = bVar1;
  }
  return;
}


/* ===== 0x1bfc4 FUN_1000_bfc4  callers=['FUN_1000_beff', 'FUN_1000_bfde', 'FUN_1000_c031'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', '   Keens Left'] */

uint __cdecl16near FUN_1000_bfc4(void)

{
  byte bVar1;
  uint in_AX;
  
  if (g_4f7e != 0) {
    return in_AX;
  }
  gb_4f77 = '\0';
  gb_4f78 = '\0';
  gb_4f79 = '\0';
  bVar1 = in(0x61);
  out(0x61,(char)(bVar1 & 0xfffd));
  return bVar1 & 0xfffd;
}


/* ===== 0x1bfde FUN_1000_bfde  callers=['FUN_1000_0c51', 'FUN_1000_122c'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', '   Keens Left', '   Keens Left', '   Keens Left'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_bfde(void)

{
  if (g_4f7e != 0) {
    return;
  }
  ram0x000280ca = g_4f77;
  gb_4f7c = gb_4f79;
  gb_4f7d = gb_4f76;
  FUN_1000_bfc4();
  return;
}


/* ===== 0x1bffd FUN_1000_bffd  callers=['FUN_1000_0c51', 'FUN_1000_122c'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', '   Keens Left', '   Keens Left', '   Keens Left'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_bffd(void)

{
  if (g_4f7e != 0) {
    return;
  }
  g_4f77 = ram0x000280ca;
  gb_4f79 = gb_4f7c;
  gb_4f76 = gb_4f7d;
  return;
}


/* ===== 0x1c019 FUN_1000_c019  callers=['FUN_1000_0c51', 'FUN_1000_33ee', 'FUN_1000_4c32', 'FUN_1000_7dfb'] strings=[' place!\n\n\nEnter your name:', '   Keens Left'] */

void __cdecl16near FUN_1000_c019(void)

{
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  
  if (g_4f7e != 0) {
    return;
  }
  FUN_1000_c031(0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 |
                       (uint)(in_TF & 1) * 0x100 | 0x40 | (uint)(in_AF & 1) * 0x10 | 4);
  do {
  } while (g_4f77 != 0);
  return;
}


/* ===== 0x1c031 FUN_1000_c031  callers=['FUN_1000_c019'] strings=[' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:', ' place!\n\n\nEnter your name:'] */

undefined2 FUN_1000_c031(void)

{
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  byte bVar4;
  undefined2 in_AX;
  bool bVar5;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  
  uVar3 = g_4f6e;
  out(0x20,0x20);
  bVar5 = 0xfffe < (uint)g_4f62;
  g_4f62 = g_4f62 + 1;
  bVar2 = CARRY2(g_4f64,(uint)bVar5);
  g_4f64 =
       g_4f64 + (uint)bVar5;
  bVar5 = SBORROW1(gb_4f76,'\x01');
  gb_4f76 = gb_4f76 + -1;
  if (gb_4f76 == '\0') {
    gb_4f76 = '\b';
    (*(code *)g_4f72)
              (0x1000,(uint)(in_NT & 1) * 0x4000 | (uint)bVar5 * 0x800 | (uint)(in_IF & 1) * 0x200 |
                      (uint)(in_TF & 1) * 0x100 | 0x40 | (uint)(in_AF & 1) * 0x10 | 4 | (uint)bVar2)
    ;
  }
  if (g_4f77 != 0) {
    iVar1 = *(int *)g_4f77;
    g_4f77 = g_4f77 + 2;
    if (iVar1 != 0) {
      if (iVar1 == -1) {
        FUN_1000_bfc4();
        return in_AX;
      }
      if ((g_4f70 & 0xff) != 0) {
        out(0x43,0xb6);
        out(0x42,(char)iVar1);
        out(0x42,(char)((uint)iVar1 >> 8));
        bVar4 = in(0x61);
        out(0x61,bVar4 | 3);
        return in_AX;
      }
    }
  }
  bVar4 = in(0x61);
  out(0x61,bVar4 & 0xfc);
  return in_AX;
}


/* ===== 0x1c0ad FUN_1000_c0ad  callers=['FUN_1000_1312'] strings=['quality software to the public\n', 'quality software to the public\n', 'quality software to the public\n', 'quality software to the public\n', 'quality software to the public\n', 'at shareware prices.\n\n', 'at shareware prices.\n\n'] */

undefined2 __cdecl16near FUN_1000_c0ad(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  uint uVar4;
  uint extraout_DX;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = (char *)0x508c;
  pcVar5 = (char *)0x50ae;
  for (uVar4 = 0x11; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = pcVar6;
    pcVar6 = pcVar6 + 2;
    pcVar1 = pcVar5;
    pcVar5 = pcVar5 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  gb_508a = '\0';
  gb_508b = '\0';
  gb_5086 = '\"';
  gb_5087 = '\0';
  gb_5088 = '\n';
  gb_5089 = '\0';
  if (param_1 != 0) {
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    g_5094 = extraout_DX ^ uVar4;
    g_50ac = extraout_DX;
  }
  FUN_1000_c0f6();
  return 0xffff;
}


/* ===== 0x1c0f6 FUN_1000_c0f6  callers=['FUN_1000_19ba', 'FUN_1000_1c79', 'FUN_1000_365b', 'FUN_1000_a4f3', 'FUN_1000_c0ad'] strings=['quality software to the public\n', 'quality software to the public\n', 'quality software to the public\n', 'quality software to the public\n', 'quality software to the public\n', 'quality software to the public\n'] */

uint __cdecl16near FUN_1000_c0f6(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = 0xffff;
  uVar1 = param_1;
  while( true ) {
    bVar5 = (int)uVar1 < 0;
    uVar1 = uVar1 << 1;
    if (bVar5) break;
    uVar3 = uVar3 >> 1;
  }
  iVar2 = *(int *)((char *)0x508a +
                  g_5086) +
          *(int *)((char *)0x508a +
                  g_5088) + 1;
  *(int *)((char *)0x508a +
          g_5086) = iVar2;
  g_508a =
       iVar2 + g_508a;
  iVar2 = g_5086 + -2;
  if (iVar2 == 0) {
    iVar2 = 0x22;
  }
  iVar4 = g_5088 + -2;
  if (iVar4 == 0) {
    iVar4 = 0x22;
  }
  gb_5086 = (char)iVar2;
  gb_5087 = (char)((uint)iVar2 >> 8);
  gb_5088 = (char)iVar4;
  gb_5089 = (char)((uint)iVar4 >> 8);
  uVar3 = g_508a & uVar3;
  if (param_1 < uVar3) {
    uVar3 = uVar3 >> 1;
  }
  return uVar3;
}


/* ===== 0x1c146 FUN_1000_c146  callers=['FUN_1000_1312'] strings=['   Keens Left'] */

void __cdecl16near FUN_1000_c146(int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint extraout_DX;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    uVar2 = extraout_DX & 0xff;
  }
  gb_4f84 = (char)uVar2;
  gb_4f85 = (char)(uVar2 >> 8);
  return;
}


/* ===== 0x1c168 FUN_1000_c168  callers=['FUN_1000_19ba', 'FUN_1000_1b13', 'FUN_1000_1c79', 'FUN_1000_1f14', 'FUN_1000_2326', 'FUN_1000_4281', 'FUN_1000_48d1', 'FUN_1000_4912', 'FUN_1000_49a7', 'FUN_1000_4ac9'] strings=['   Keens Left', '   Keens Left', '   Ordering Info\n'] */

char __cdecl16near FUN_1000_c168(void)

{
  uint uVar1;
  
  uVar1 = g_4f84 + 1 & 0xff;
  gb_4f84 = (char)uVar1;
  gb_4f85 = (char)(uVar1 >> 8);
  return ((char *)0x4f86)[uVar1];
}


/* ===== 0x1c17c FUN_1000_c17c  callers=['FUN_1000_361b', 'FUN_1000_363b', 'FUN_1000_365b', 'FUN_1000_5074', 'FUN_1000_603b', 'FUN_1000_60ce', 'FUN_1000_62b8', 'FUN_1000_6314', 'FUN_1000_6345', 'FUN_1000_6462', 'FUN_1000_6e40', 'FUN_1000_6e84'] strings=[] */

void __cdecl16near FUN_1000_c17c(int param_1)

{
  byte bVar1;
  
  do {
    do {
      bVar1 = in(0x3da);
    } while ((bVar1 & 8) != 0);
    do {
      bVar1 = in(0x3da);
    } while ((bVar1 & 8) == 0);
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}


/* ===== 0x1c193 FUN_1000_c193  callers=['FUN_1000_6f20'] strings=[] */

void __cdecl16near FUN_1000_c193(byte param_1)

{
  out(0x3ce,5);
  out(0x3ce,CONCAT11(param_1,4));
  out(0x3c4,CONCAT11('\x01' << (param_1 & 0x1f),2));
  return;
}


/* ===== 0x1c1f8 FUN_1000_c1f8  callers=['FUN_1000_1312'] strings=[] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __cdecl16near FUN_1000_c1f8(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  
  _DAT_1000_c1c8 = 0;
  DAT_1000_c1ca = 0;
  DAT_1000_c1f2 = 1;
  DAT_1000_c1ef = 1;
  DAT_1000_c1f5 = 1;
  iVar4 = 4;
  pcVar5 = (char *)0xc1ec;
  do {
    pcVar1 = pcVar5;
    pcVar2 = pcVar5 + 1;
    pcVar5 = pcVar5 + 3;
    if (*pcVar1 != '\0') {
      (**(code **)pcVar2)();
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_1000_c326();
  uVar3 = DAT_1000_c1c8;
  return uVar3;
}


/* ===== 0x1c23e FUN_1000_c23e  callers=['FUN_1000_c1f8'] strings=[] */

void __cdecl16near FUN_1000_c23e(void)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  uint in_BX;
  char *unaff_DI;
  
  pcVar1 = (code *)swi(0x10);
  cVar2 = (*pcVar1)();
  if (cVar2 == '\x1a') {
    bVar3 = (byte)(in_BX >> 8);
    if (bVar3 != 0) {
      *(undefined2 *)(unaff_DI + 2) = *(undefined2 *)((uint)bVar3 * 2 + -0x3e2e);
    }
    *(undefined2 *)unaff_DI = *(undefined2 *)((in_BX & 0xff) * 2 + -0x3e2e);
    g_c1f2 = 0;
    g_c1ef = 0;
    g_c1f5 = 0;
    if ((*unaff_DI == '\x01') || (unaff_DI = unaff_DI + 2, *unaff_DI == '\x01')) {
      unaff_DI[0] = '\0';
      unaff_DI[1] = '\0';
      g_c1f5 = 1;
    }
  }
  return;
}


/* ===== 0x1c326 FUN_1000_c326  callers=['FUN_1000_c1f8'] strings=[] */

void __cdecl16near FUN_1000_c326(void)

{
  undefined2 uVar1;
  code *pcVar2;
  byte bVar3;
  char *unaff_DI;
  
  if (((*(int *)(unaff_DI + 2) != 0) && (*unaff_DI < '\x04')) && (unaff_DI[2] < '\x04')) {
    pcVar2 = (code *)swi(0x10);
    bVar3 = (*pcVar2)();
    if ((bVar3 & 7) == 7) {
      if (unaff_DI[1] == '\x01') {
        return;
      }
    }
    else if (unaff_DI[1] != '\x01') {
      return;
    }
    LOCK();
    uVar1 = *(undefined2 *)(unaff_DI + 2);
    *(undefined2 *)(unaff_DI + 2) = *(undefined2 *)unaff_DI;
    UNLOCK();
    *(undefined2 *)unaff_DI = uVar1;
  }
  return;
}


/* ===== 0x1c364 FUN_1000_c364  callers=['FUN_1000_c3ee', 'FUN_1000_c454'] strings=['your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n'] */

void __cdecl16near FUN_1000_c364(void)

{
  gb_50f2 = '\0';
  gb_50f3 = '\0';
  gb_50f5 = '\x01';
  gb_50f6 = '\0';
  gb_50ee = '\0';
  gb_50ef = '\0';
  gb_50f0 = '\0';
  gb_50f1 = '\0';
  return;
}


/* ===== 0x1c385 FUN_1000_c385  callers=['FUN_1000_c454'] strings=['your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n'] */

undefined2 __cdecl16near FUN_1000_c385(void)

{
  undefined2 uVar1;
  undefined2 in_AX;
  char *unaff_DI;
  bool bVar2;
  
  uVar1 = g_50e2;
  *unaff_DI = (char)g_50f2 + -2;
  unaff_DI[1] = gb_50f4;
  g_50e8 =
       g_50e8 + 1 +
       g_50f2;
  bVar2 = 0xfffd < (uint)g_50ee;
  g_50ee =
       g_50ee + 2;
  g_50f0 =
       g_50f0 + (uint)bVar2;
  gb_50f2 = '\0';
  gb_50f3 = '\0';
  return in_AX;
}


/* ===== 0x1c3b7 FUN_1000_c3b7  callers=['FUN_1000_c454'] strings=['your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n'] */

undefined2 __cdecl16near FUN_1000_c3b7(void)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 in_AX;
  char *unaff_DI;
  bool bVar4;
  
  uVar2 = g_50e2;
  *unaff_DI = (char)g_50f5 + '\x7f';
  uVar3 = g_50e4;
  bVar4 = CARRY2(g_50ee,
                 g_50f5 + 1);
  g_50ee =
       g_50ee +
       g_50f5 + 1;
  g_50f0 =
       g_50f0 + (uint)bVar4;
  for (; unaff_DI = unaff_DI + 1, g_50f5 != 0;
      g_50f5 =
           g_50f5 + -1) {
    pcVar1 = (char *)0x50dd._11_2_;
    g_50e8 =
         g_50e8 + 1;
    *unaff_DI = *pcVar1;
  }
  gb_50f5 = '\0';
  gb_50f6 = '\0';
  return in_AX;
}


/* ===== 0x1c3ee FUN_1000_c3ee  callers=['FUN_1000_c5a2'] strings=['your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n'] */

void __cdecl16near FUN_1000_c3ee(void)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  undefined2 uVar7;
  uint uVar8;
  uint uVar9;
  byte *unaff_SI;
  byte *pbVar10;
  byte *unaff_DI;
  bool bVar11;
  
  FUN_1000_c364();
  uVar9 = 1;
  iVar6 = g_50e4;
  while( true ) {
    while (uVar7 = g_50e2, (byte *)0xffef < unaff_SI) {
      g_50e4 =
           g_50e4 + ((uint)unaff_SI >> 4);
      g_50e2 =
           g_50e2 + ((uint)unaff_DI >> 4);
      unaff_DI = (byte *)((uint)unaff_DI & 0xf);
      iVar6 = g_50e4;
      unaff_SI = (byte *)0x0;
    }
    bVar11 = (uint)g_50ea < uVar9;
    g_50ea =
         g_50ea - uVar9;
    bVar5 = (uint)g_50ec < (uint)bVar11;
    g_50ec =
         g_50ec - (uint)bVar11;
    if (bVar5) break;
    pbVar10 = unaff_DI + 1;
    bVar2 = *unaff_DI;
    if (bVar2 < 0x80) {
      unaff_DI = unaff_DI + 2;
      bVar3 = *pbVar10;
      uVar9 = (uint)(byte)(bVar2 + 3);
      for (uVar8 = uVar9; uVar8 != 0; uVar8 = uVar8 - 1) {
        pbVar1 = unaff_SI;
        unaff_SI = unaff_SI + 1;
        *pbVar1 = bVar3;
      }
    }
    else {
      uVar9 = (uint)(byte)(bVar2 + 0x81);
      for (uVar8 = uVar9; unaff_DI = pbVar10, uVar8 != 0; uVar8 = uVar8 - 1) {
        pbVar4 = unaff_SI;
        unaff_SI = unaff_SI + 1;
        pbVar1 = pbVar10;
        pbVar10 = pbVar10 + 1;
        *pbVar4 = *pbVar1;
      }
    }
  }
  return;
}


/* ===== 0x1c454 FUN_1000_c454  callers=['FUN_1000_c552'] strings=['your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n'] */

void __cdecl16near FUN_1000_c454(void)

{
  bool bVar1;
  undefined2 uVar2;
  char cVar3;
  char *unaff_SI;
  char *pcVar4;
  bool bVar5;
  
  FUN_1000_c364();
  uVar2 = g_50e4;
  gb_50f4 = *unaff_SI;
  while (pcVar4 = unaff_SI, pcVar4 < (char *)0xff00) {
    bVar5 = g_50ea == 0;
    g_50ea =
         g_50ea + -1;
    bVar1 = (uint)g_50ec < (uint)bVar5;
    g_50ec =
         g_50ec - (uint)bVar5;
    if (bVar1) break;
    unaff_SI = pcVar4 + 1;
    cVar3 = *unaff_SI;
    if (cVar3 == gb_50f4) {
      g_50f2 =
           g_50f2 + 1;
      if (1 < (uint)g_50f2) {
        if (1 < (uint)g_50f5) {
          g_50f5 =
               g_50f5 + -1;
          FUN_1000_c3b7();
        }
        gb_50f5 = '\0';
        gb_50f6 = '\0';
        if (((0x80 < (uint)g_50f2) &&
            (cVar3 = FUN_1000_c385(), cVar3 == pcVar4[2])) && (cVar3 == pcVar4[3])) {
          unaff_SI = pcVar4 + 2;
        }
      }
    }
    else {
      if (g_50f2 != 0) {
        if ((uint)g_50f2 < 2) {
          g_50f5 =
               g_50f5 +
               g_50f2;
          gb_50f2 = '\0';
          gb_50f3 = '\0';
        }
        else {
          cVar3 = FUN_1000_c385();
        }
      }
      g_50f5 =
           g_50f5 + 1;
      gb_50f4 = cVar3;
      if (((0x7d < (uint)g_50f5) &&
          (cVar3 = FUN_1000_c3b7(), cVar3 == pcVar4[2])) && (cVar3 == pcVar4[3])) {
        g_50f5 =
             g_50f5 + 1;
        unaff_SI = pcVar4 + 2;
      }
    }
  }
  if (g_50f2 != 0) {
    if (1 < (uint)g_50f2) {
      if (g_50f5 != 0) {
        FUN_1000_c3b7();
      }
      FUN_1000_c385();
      return;
    }
    g_50f5 =
         g_50f5 +
         g_50f2;
  }
  if (g_50f5 != 0) {
    FUN_1000_c3b7();
  }
  return;
}


/* ===== 0x1c552 FUN_1000_c552  callers=[] strings=['your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n'] */

undefined4 __cdecl16near
FUN_1000_c552(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
             char *param_5,undefined2 param_6)

{
  g_50e8 = param_1;
  g_50e4 = param_2;
  g_50e6 = param_5;
  g_50e2 = param_6;
  g_50ea = param_3;
  g_50ec = param_4;
  *(undefined2 *)param_5 = param_3;
  *(undefined2 *)(param_5 + 2) = g_50ec;
  FUN_1000_c454();
  return CONCAT22(g_50f0,
                  g_50ee);
}


/* ===== 0x1c5a2 FUN_1000_c5a2  callers=['FUN_1000_0983'] strings=['your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n'] */

void __cdecl16near
FUN_1000_c5a2(char *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  g_50e2 = param_2;
  g_50e8 = param_3;
  g_50e4 = param_4;
  g_50ea = *(undefined2 *)param_1;
  g_50ec = *(undefined2 *)(param_1 + 2);
  g_50e6 = param_1 + 4;
  FUN_1000_c3ee();
  return;
}


/* ===== 0x1c5e1 FUN_1000_c5e1  callers=['FUN_1000_7b0a', 'FUN_1000_9ce9'] strings=[] */

undefined2 __cdecl16near FUN_1000_c5e1(undefined2 param_1,uint param_2)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar1 = FUN_1000_d01f(param_1,0);
  if (uVar1 == 0xffff) {
    uVar2 = 0xffff;
  }
  else if (((param_2 & 2) == 0) || ((uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    g_0092 = 5;
    uVar2 = 0xffff;
  }
  return uVar2;
}


/* ===== 0x1c616 FUN_1000_c616  callers=[] strings=['your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n'] */

bool __cdecl16near FUN_1000_c616(undefined2 param_1)

{
  bool bVar1;
  
  bVar1 = g_50fa != 0x20;
  if (bVar1) {
    *(undefined2 *)(g_50fa * 2 + -0x590a) = param_1;
    g_50fa =
         g_50fa + 1;
  }
  return !bVar1;
}


/* ===== 0x1c63a FUN_1000_c63a  callers=['FUN_1000_066b', 'FUN_1000_5fde', 'FUN_1000_6562', 'FUN_1000_6854', 'FUN_1000_69a0', 'FUN_1000_6a7b'] strings=[] */

void __cdecl16near FUN_1000_c63a(int param_1)

{
  if ((param_1 < 0) || (0x13 < param_1)) {
    FUN_1000_d348(6);
  }
  else {
    ((char *)0x5346 + param_1 * 2)[0] = -1;
    ((char *)0x5346 + param_1 * 2)[1] = -1;
    FUN_1000_d03a(param_1);
  }
  return;
}


/* ===== 0x1c666 FUN_1000_c666  callers=['entry', 'FUN_1000_129d', 'FUN_1000_1312', 'FUN_1000_6d59'] strings=['your support. Without it, we cannot\n', 'your support. Without it, we cannot\n', 'your support. Without it, we cannot\n'] */

void __cdecl16near FUN_1000_c666(undefined2 param_1)

{
  int iVar1;
  
  while (iVar1 = g_50fa + -1,
        g_50fa != 0) {
    g_50fa = iVar1;
    (*(code *)*(undefined2 *)(iVar1 * 2 + -0x590a))();
  }
  g_50fa = iVar1;
  FUN_1000_010f(param_1);
  return;
}


/* ===== 0x1c689 FUN_1000_c689  callers=['FUN_1000_c707', 'FUN_1000_c746'] strings=['    1-9 or ESC:', '    1-9 or ESC:'] */

undefined2 FUN_1000_c689(undefined2 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (param_2 - g_008e) + 0x40U >> 6;
  if (uVar1 != g_5204) {
    uVar1 = uVar1 * 0x40;
    if (g_00a6 < uVar1 + g_008e) {
      uVar1 = g_00a6 - g_008e;
    }
    iVar2 = FUN_1000_d7b0(g_008e,uVar1);
    if (iVar2 != -1) {
      g_00a4 = 0;
      g_00a6 = g_008e + iVar2;
      return 0;
    }
    g_5204 = uVar1 >> 6;
  }
  g_00a2 = param_2;
  g_00a0 = param_1;
  return 1;
}


/* ===== 0x1c707 FUN_1000_c707  callers=['FUN_1000_ddcc', 'FUN_1000_e0d9'] strings=[] */

undefined2 __cdecl16near FUN_1000_c707(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined1 in_CF;
  undefined1 in_ZF;
  
  FUN_1000_e67a();
  if (((!(bool)in_CF) && (FUN_1000_e67a(), (bool)in_CF || (bool)in_ZF)) &&
     (iVar1 = FUN_1000_c689(param_1,param_2), iVar1 != 0)) {
    return 0;
  }
  return 0xffff;
}


/* ===== 0x1c746 FUN_1000_c746  callers=['FUN_1000_df27', 'FUN_1000_df88'] strings=[] */

undefined4 __cdecl16near FUN_1000_c746(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar5 = &stack0xfffe < (undefined1 *)0x8;
  uVar6 = &stack0x0000 == (undefined1 *)0xa;
  uVar2 = g_00a2;
  uVar1 = FUN_1000_e33b();
  FUN_1000_e67a();
  if ((((bool)uVar5) || (FUN_1000_e67a(), uVar4 = g_00a2, !(bool)uVar5 && !(bool)uVar6)) ||
     (iVar3 = FUN_1000_c689(uVar1,uVar2), iVar3 == 0)) {
    uVar4 = 0xffff;
    uVar2 = 0xffff;
  }
  return CONCAT22(uVar4,uVar2);
}


/* ===== 0x1c7b3 FUN_1000_c7b3  callers=['FUN_1000_c835', 'FUN_1000_c8d1', 'FUN_1000_c9f5', 'FUN_1000_cb0b'] strings=[] */

undefined2 __cdecl16near FUN_1000_c7b3(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    FUN_1000_c835();
  }
  else {
    if ((int *)param_1[7] != param_1) {
      return 0xffff;
    }
    if (*param_1 < 0) {
      iVar1 = param_1[3] + *param_1 + 1;
      *param_1 = *param_1 - iVar1;
      iVar2 = param_1[4];
      param_1[5] = iVar2;
      iVar2 = FUN_1000_cdf1((int)(char)param_1[2],iVar2,iVar1);
      if ((iVar2 != iVar1) && ((param_1[1] & 0x200U) == 0)) {
        param_1[1] = param_1[1] | 0x10;
        return 0xffff;
      }
    }
    else if ((((param_1[1] & 8U) != 0) || (param_1[5] == (int)param_1 + 5)) &&
            (*param_1 = 0, param_1[5] == (int)param_1 + 5)) {
      param_1[5] = param_1[4];
    }
  }
  return 0;
}


/* ===== 0x1c835 FUN_1000_c835  callers=['FUN_1000_c7b3'] strings=['    1-9 or ESC:'] */

int __cdecl16near FUN_1000_c835(void)

{
  char *pcVar1;
  int iVar2;
  int local_4;
  
  local_4 = 0;
  pcVar1 = (char *)0x5206;
  iVar2 = 0x14;
  while (iVar2 != 0) {
    if ((*(uint *)(pcVar1 + 2) & 3) != 0) {
      FUN_1000_c7b3(pcVar1);
      local_4 = local_4 + 1;
    }
    pcVar1 = pcVar1 + 0x10;
    iVar2 = iVar2 + -1;
  }
  return local_4;
}


/* ===== 0x1c86b FUN_1000_c86b  callers=['FUN_1000_c8d1', 'FUN_1000_c933'] strings=[] */

int FUN_1000_c86b(uint *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  if ((int)*param_1 < 0) {
    iVar2 = param_1[3] + *param_1 + 1;
  }
  else {
    uVar3 = (int)*param_1 >> 0xf;
    iVar2 = (*param_1 ^ uVar3) - uVar3;
  }
  if ((param_1[1] & 0x40) == 0) {
    pcVar6 = (char *)param_1[5];
    iVar4 = iVar2;
    if ((int)*param_1 < 0) {
      while (iVar5 = iVar4 + -1, iVar4 != 0) {
        pcVar6 = pcVar6 + -1;
        iVar4 = iVar5;
        if (*pcVar6 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
    else {
      while (iVar5 = iVar4 + -1, iVar4 != 0) {
        pcVar7 = pcVar6 + 1;
        pcVar1 = pcVar6;
        iVar4 = iVar5;
        pcVar6 = pcVar7;
        if (*pcVar1 == '\n') {
          iVar2 = iVar2 + 1;
        }
      }
    }
  }
  return iVar2;
}


/* ===== 0x1c8d1 FUN_1000_c8d1  callers=['FUN_1000_cce1'] strings=[] */

undefined2 __cdecl16near FUN_1000_c8d1(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  
  iVar1 = FUN_1000_c7b3(param_1);
  if (iVar1 == 0) {
    if ((param_4 == 1) && (0 < *param_1)) {
      uVar3 = FUN_1000_c86b(param_1);
      bVar4 = param_2 < uVar3;
      param_2 = param_2 - uVar3;
      param_3 = (param_3 - ((int)uVar3 >> 0xf)) - (uint)bVar4;
    }
    param_1[1] = param_1[1] & 0xfe5f;
    *param_1 = 0;
    param_1[5] = param_1[4];
    lVar5 = FUN_1000_d396((int)(char)param_1[2],param_2,param_3,param_4);
    if (lVar5 == -1) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffff;
  }
  return uVar2;
}


/* ===== 0x1c933 FUN_1000_c933  callers=[] strings=[] */

undefined4 __cdecl16near FUN_1000_c933(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_6;
  int local_4;
  
  uVar5 = FUN_1000_cdad((int)(char)param_1[2]);
  iVar4 = (int)((ulong)uVar5 >> 0x10);
  uVar1 = (uint)uVar5;
  if (*param_1 < 0) {
    uVar2 = FUN_1000_c86b(param_1);
    local_4 = iVar4 + ((int)uVar2 >> 0xf) + (uint)CARRY2(uVar1,uVar2);
  }
  else {
    uVar3 = FUN_1000_c86b(param_1);
    uVar2 = -uVar3;
    local_4 = (iVar4 - ((int)uVar3 >> 0xf)) - (uint)(uVar1 < uVar3);
  }
  local_6 = uVar1 + uVar2;
  return CONCAT22(local_4,local_6);
}


/* ===== 0x1c974 FUN_1000_c974  callers=['FUN_1000_129d'] strings=['   of three unique and\n', '   of three unique and\n', '   of three unique and\n', '   of three unique and\n', '   of three unique and\n', '   of three unique and\n'] */

void __cdecl16near FUN_1000_c974(char param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = param_2 + -1 + gb_537d;
  bVar2 = param_1 + -1 + gb_537c;
  if (((((byte)gb_537d <= bVar1) &&
       (bVar1 <= (byte)gb_537f)) &&
      ((byte)gb_537c <= bVar2)) &&
     (bVar2 <= (byte)gb_537e)) {
    FUN_1000_d090();
  }
  return;
}


/* ===== 0x1c9c4 FUN_1000_c9c4  callers=['FUN_1000_6d59', 'FUN_1000_7cb2', 'FUN_1000_7dbe'] strings=[] */

void __cdecl16near FUN_1000_c9c4(undefined2 param_1)

{
  FUN_1000_d8aa(&stack0x0004,param_1,(char *)0x5216,0xcb0b);
  return;
}


/* ===== 0x1c9db FUN_1000_c9db  callers=['FUN_1000_cb0b'] strings=[] */

void __cdecl16near FUN_1000_c9db(char param_1,int *param_2)

{
  *param_2 = *param_2 + -1;
  FUN_1000_c9f5((int)param_1,param_2);
  return;
}


/* ===== 0x1c9f5 FUN_1000_c9f5  callers=['FUN_1000_c9db', 'FUN_1000_caf7', 'FUN_1000_cb0b', 'FUN_1000_cc3d'] strings=[] */

uint __cdecl16near FUN_1000_c9f5(byte param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  
  g_a736 = param_1;
  if (*param_2 < -1) {
    *param_2 = *param_2 + 1;
    pbVar1 = (byte *)param_2[5];
    param_2[5] = param_2[5] + 1;
    *pbVar1 = g_a736;
    if (((param_2[1] & 8U) == 0) || ((g_a736 != 10 && (g_a736 != 0xd))))
    goto LAB_1000_caef;
    iVar2 = FUN_1000_c7b3(param_2);
  }
  else {
    if (((param_2[1] & 0x90U) != 0) || ((param_2[1] & 2U) == 0)) {
      param_2[1] = param_2[1] | 0x10;
      return 0xffff;
    }
    param_2[1] = param_2[1] | 0x100;
    if (param_2[3] == 0) {
      if (((((g_a736 == 10) && ((param_2[1] & 0x40U) == 0)) &&
           (iVar2 = FUN_1000_dd6e((int)(char)param_2[2],
                                  (char *)0x5374,1),
           iVar2 != 1)) ||
          (iVar2 = FUN_1000_dd6e((int)(char)param_2[2],(undefined1 *)&g_a736,1), iVar2 != 1))
         && ((param_2[1] & 0x200U) == 0)) {
        param_2[1] = param_2[1] | 0x10;
        return 0xffff;
      }
      goto LAB_1000_caef;
    }
    if ((*param_2 != 0) && (iVar2 = FUN_1000_c7b3(param_2), iVar2 != 0)) {
      return 0xffff;
    }
    *param_2 = -param_2[3];
    pbVar1 = (byte *)param_2[5];
    param_2[5] = param_2[5] + 1;
    *pbVar1 = g_a736;
    if (((param_2[1] & 8U) == 0) || ((g_a736 != 10 && (g_a736 != 0xd))))
    goto LAB_1000_caef;
    iVar2 = FUN_1000_c7b3(param_2);
  }
  if (iVar2 != 0) {
    return 0xffff;
  }
LAB_1000_caef:
  return (uint)g_a736;
}


/* ===== 0x1caf7 FUN_1000_caf7  callers=[] strings=[] */

void __cdecl16near FUN_1000_caf7(undefined2 param_1)

{
  FUN_1000_c9f5(param_1,(char *)0x5216);
  return;
}


/* ===== 0x1cb0b FUN_1000_cb0b  callers=['FUN_1000_cc3d'] strings=[] */

/* WARNING: Type propagation algorithm not settling */

uint FUN_1000_cb0b(int *param_1,uint param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_2;
  if ((param_1[1] & 8U) == 0) {
    if ((param_1[1] & 0x40U) == 0) {
      if (param_1[3] != 0) {
        do {
          if (uVar5 == 0) {
            return param_2;
          }
          iVar3 = *param_1 + 1;
          *param_1 = iVar3;
          if (iVar3 < 0) {
            pbVar2 = (byte *)param_1[5];
            param_1[5] = param_1[5] + 1;
            bVar1 = *param_3;
            *pbVar2 = bVar1;
            uVar4 = (uint)bVar1;
          }
          else {
            uVar4 = FUN_1000_c9db(CONCAT11((char)((uint)iVar3 >> 8),*param_3),param_1);
          }
          param_3 = param_3 + 1;
          uVar5 = uVar5 - 1;
        } while (uVar4 != 0xffff);
        return 0;
      }
      uVar5 = FUN_1000_cdf1((int)(char)param_1[2],param_3,param_2);
    }
    else if (param_1[3] == 0) {
      uVar5 = FUN_1000_dd6e((int)(char)param_1[2],param_3,param_2);
    }
    else {
      if (param_2 <= (uint)param_1[3]) {
        if (SCARRY2(*param_1,param_2) == (int)(*param_1 + param_2) < 0) {
          if (*param_1 == 0) {
            *param_1 = -1 - param_1[3];
          }
          else {
            iVar3 = FUN_1000_c7b3(param_1);
            if (iVar3 != 0) {
              return 0;
            }
          }
        }
        FUN_1000_d4a2(param_1[5],param_3,param_2);
        *param_1 = *param_1 + param_2;
        param_1[5] = param_1[5] + param_2;
        return param_2;
      }
      if ((*param_1 != 0) && (iVar3 = FUN_1000_c7b3(param_1), iVar3 != 0)) {
        return 0;
      }
      uVar5 = FUN_1000_dd6e((int)(char)param_1[2],param_3,param_2);
    }
    if (param_2 <= uVar5) {
      return param_2;
    }
  }
  else {
    do {
      if (uVar5 == 0) {
        return param_2;
      }
      iVar3 = FUN_1000_c9f5((int)(char)*param_3,param_1);
      uVar5 = uVar5 - 1;
      param_3 = param_3 + 1;
    } while (iVar3 != -1);
  }
  return 0;
}


/* ===== 0x1cc3d FUN_1000_cc3d  callers=['FUN_1000_129d', 'FUN_1000_1312'] strings=[] */

undefined2 __cdecl16near FUN_1000_cc3d(undefined2 param_1)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  iVar1 = FUN_1000_d858(param_1);
  iVar2 = FUN_1000_cb0b((char *)0x5216,iVar1,param_1);
  if (iVar2 == iVar1) {
    iVar1 = FUN_1000_c9f5(10,(char *)0x5216);
    if (iVar1 == 10) {
      uVar3 = 10;
    }
    else {
      uVar3 = 0xffff;
    }
  }
  else {
    uVar3 = 0xffff;
  }
  return uVar3;
}


/* ===== 0x1cce1 FUN_1000_cce1  callers=[] strings=['do you want to save?\n', '   of three unique and\n', '   of three unique and\n', '   of three unique and\n', '   of three unique and\n'] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_1000_cce1(int *param_1,int param_2,int param_3,uint param_4)

{
  undefined2 uVar1;
  
  if ((((int *)param_1[7] == param_1) && (param_3 < 3)) && (param_4 < 0x8000)) {
    if ((g_5378 == 0) &&
       (param_1 == (int *)((char *)0x5216))) {
      gb_5378 = '\x01';
      gb_5379 = '\0';
    }
    else if ((g_5376 == 0) &&
            (param_1 == (int *)((char *)0x5206))) {
      gb_5376 = '\x01';
      gb_5377 = '\0';
    }
    if (*param_1 != 0) {
      FUN_1000_c8d1(param_1,0,0,1);
    }
    if ((param_1[1] & 4U) != 0) {
      FUN_1000_e3f0(param_1[4]);
    }
    param_1[1] = param_1[1] & 0xfff3;
    param_1[3] = 0;
    param_1[4] = (int)param_1 + 5;
    param_1[5] = (int)param_1 + 5;
    if ((param_3 != 2) && (param_4 != 0)) {
      ram0x0002834e = 0xcee0;
      if (param_2 == 0) {
        param_2 = FUN_1000_e4bf(param_4);
        if (param_2 == 0) goto LAB_1000_ccfd;
        param_1[1] = param_1[1] | 4;
      }
      param_1[5] = param_2;
      param_1[4] = param_2;
      param_1[3] = param_4;
      if (param_3 == 1) {
        param_1[1] = param_1[1] | 8;
      }
    }
    uVar1 = 0;
  }
  else {
LAB_1000_ccfd:
    uVar1 = 0xffff;
  }
  return uVar1;
}


/* ===== 0x1cdad FUN_1000_cdad  callers=['FUN_1000_c933'] strings=[] */

void __cdecl16near FUN_1000_cdad(undefined2 param_1)

{
  FUN_1000_d396(param_1,0,0,1);
  return;
}


/* ===== 0x1cdc5 FUN_1000_cdc5  callers=['FUN_1000_082b', 'FUN_1000_0c51', 'FUN_1000_1312', 'FUN_1000_668f', 'FUN_1000_67ae', 'FUN_1000_9ce9'] strings=[] */

uint __cdecl16near FUN_1000_cdc5(uint param_1)

{
  if (param_1 == 0xffff) {
    param_1 = 0xffff;
  }
  else if ((((char *)0x50fd)[param_1 & 0xff] & 8U) == 0
          ) {
    param_1 = param_1 & 0xff;
  }
  else {
    param_1 = (param_1 & 0xff) - 0x20;
  }
  return param_1;
}


/* ===== 0x1cdf1 FUN_1000_cdf1  callers=['FUN_1000_08dd', 'FUN_1000_69a0', 'FUN_1000_c7b3', 'FUN_1000_cb0b'] strings=[] */

/* WARNING: Removing unreachable block (ram,0x0001ce86) */

int __cdecl16near FUN_1000_cdf1(int param_1,char *param_2,int param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char local_8c [130];
  char *local_a;
  char local_7;
  int local_6;
  int local_4;
  
  if (param_3 + 1U < 2) {
    iVar2 = 0;
  }
  else if ((*(uint *)((char *)0x5346 + param_1 * 2) & 0x8000) == 0
          ) {
    *(uint *)((char *)0x5346 + param_1 * 2) =
         *(uint *)((char *)0x5346 + param_1 * 2) & 0xfdff;
    local_a = param_2;
    local_6 = param_3;
    do {
      pcVar3 = local_8c;
      do {
        if (local_6 == 0) {
          iVar2 = (int)pcVar3 - (int)local_8c;
          if (iVar2 == 0) {
            return param_3;
          }
          local_4 = FUN_1000_dd6e(param_1,local_8c,iVar2);
          if (local_4 == iVar2) {
            return param_3;
          }
          goto LAB_1000_ced0;
        }
        local_6 = local_6 + -1;
        pcVar1 = local_a + 1;
        local_7 = *local_a;
        local_a = pcVar1;
        if (local_7 == '\n') {
          *pcVar3 = '\r';
          pcVar3 = pcVar3 + 1;
        }
        *pcVar3 = local_7;
        pcVar3 = pcVar3 + 1;
      } while ((int)pcVar3 - (int)local_8c < 0x80);
      iVar2 = (int)pcVar3 - (int)local_8c;
      local_4 = FUN_1000_dd6e(param_1,local_8c,iVar2);
    } while (local_4 == iVar2);
    param_3 = param_3 - local_6;
LAB_1000_ced0:
    iVar2 = (param_3 + local_4) - iVar2;
  }
  else {
    iVar2 = FUN_1000_dd6e(param_1,param_2,param_3);
  }
  return iVar2;
}


/* ===== 0x1cf01 FUN_1000_cf01  callers=['FUN_1000_668f', 'FUN_1000_cf71'] strings=[] */

ulong __cdecl16near FUN_1000_cf01(byte *param_1)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  uVar3 = 0;
  uVar5 = 0;
  do {
    bVar4 = *param_1;
    param_1 = param_1 + 1;
  } while ((((char *)0x50fd)[bVar4] & 1U) != 0);
  bVar2 = false;
  if (bVar4 != 0x2b) {
    if (bVar4 != 0x2d) goto LAB_1000_cf2f;
    bVar2 = true;
  }
  do {
    bVar4 = *param_1;
    param_1 = param_1 + 1;
LAB_1000_cf2f:
    uVar1 = CONCAT22(uVar5,uVar3);
    if ((0x39 < bVar4) || (uVar1 = CONCAT22(uVar5,uVar3), bVar4 < 0x30)) goto LAB_1000_cf62;
    uVar1 = (ulong)uVar3;
    uVar5 = (uint)(uVar1 * 10);
    uVar3 = uVar5 + (byte)(bVar4 - 0x30);
    bVar4 = (char)(uVar1 * 10 >> 0x10) + CARRY2(uVar5,(uint)(byte)(bVar4 - 0x30));
    uVar5 = (uint)bVar4;
    uVar1 = (ulong)CONCAT12(bVar4,uVar3);
  } while (bVar4 == 0);
  while( true ) {
    bVar4 = *param_1;
    param_1 = param_1 + 1;
    if ((0x39 < bVar4) || (bVar4 < 0x30)) break;
    uVar1 = (uVar1 & 0xffff) * 10 + CONCAT22((int)(uVar1 >> 0x10) * 10,(uint)(byte)(bVar4 - 0x30));
  }
LAB_1000_cf62:
  if (bVar2) {
    uVar1 = CONCAT22(-(uint)((int)uVar1 != 0) - (int)(uVar1 >> 0x10),-(int)uVar1);
  }
  return uVar1;
}


/* ===== 0x1cf71 FUN_1000_cf71  callers=[] strings=[] */

void __cdecl16near FUN_1000_cf71(undefined2 param_1)

{
  FUN_1000_cf01(param_1);
  return;
}


/* ===== 0x1cf7d FUN_1000_cf7d  callers=['FUN_1000_d2dc'] strings=[] */

void __cdecl16near FUN_1000_cf7d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


/* ===== 0x1cf8d FUN_1000_cf8d  callers=['FUN_1000_0c51', 'FUN_1000_0e76', 'FUN_1000_1312', 'FUN_1000_5e1f', 'FUN_1000_6462', 'FUN_1000_7dfb', 'FUN_1000_8ce4', 'FUN_1000_91f5', 'FUN_1000_949d', 'FUN_1000_993a', 'FUN_1000_9c8e', 'FUN_1000_a41a'] strings=[] */

int __cdecl16near FUN_1000_cf8d(char param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 in_ZF;
  
  pcVar1 = (code *)swi(0x16);
  iVar2 = (*pcVar1)();
  if ((bool)in_ZF) {
    if (param_1 == '\x01') {
      iVar2 = 0;
    }
  }
  else if ((param_1 == '\x01') && (iVar2 == 0)) {
    iVar2 = -1;
  }
  return iVar2;
}


/* ===== 0x1cfb0 FUN_1000_cfb0  callers=['FUN_1000_d003', 'FUN_1000_e40d'] strings=[] */

undefined2 __cdecl16near FUN_1000_cfb0(undefined1 *param_1)

{
  undefined2 uVar1;
  undefined1 auStack_202 [512];
  
  if (param_1 < auStack_202) {
    g_009a = param_1;
    uVar1 = 0;
  }
  else {
    g_0092 = 8;
    uVar1 = 0xffff;
  }
  return uVar1;
}


/* ===== 0x1cfd2 FUN_1000_cfd2  callers=['FUN_1000_d00f', 'FUN_1000_e51f', 'FUN_1000_e55f'] strings=[] */

uint __cdecl16near FUN_1000_cfd2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 + g_009a;
  if (((param_2 + (uint)CARRY2(param_1,g_009a) == 0) && (uVar1 < 0xfe00)) &&
     ((undefined1 *)(uVar1 + 0x200) < &stack0xfffe)) {
    LOCK();
    UNLOCK();
    uVar2 = g_009a;
    g_009a = uVar1;
  }
  else {
    g_0092 = 8;
    uVar2 = 0xffff;
  }
  return uVar2;
}


/* ===== 0x1d003 FUN_1000_d003  callers=[] strings=[] */

void __cdecl16near FUN_1000_d003(undefined2 param_1)

{
  FUN_1000_cfb0(param_1);
  return;
}


/* ===== 0x1d00f FUN_1000_d00f  callers=[] strings=[] */

void __cdecl16near FUN_1000_d00f(int param_1)

{
  FUN_1000_cfd2(param_1,param_1 >> 0xf);
  return;
}


/* ===== 0x1d01f FUN_1000_d01f  callers=['FUN_1000_c5e1', 'FUN_1000_d550'] strings=[] */

undefined2 __cdecl16near FUN_1000_d01f(undefined2 param_1,undefined2 param_2,undefined2 param_3)

{
  code *pcVar1;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    param_3 = FUN_1000_d348();
  }
  return param_3;
}


/* ===== 0x1d03a FUN_1000_d03a  callers=['FUN_1000_c63a', 'FUN_1000_d550'] strings=[] */

undefined2 __cdecl16near FUN_1000_d03a(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    uVar2 = FUN_1000_d348();
  }
  else {
    ((char *)0x5346 + param_1 * 2)[0] = -1;
    ((char *)0x5346 + param_1 * 2)[1] = -1;
    uVar2 = 0;
  }
  return uVar2;
}


/* ===== 0x1d058 FUN_1000_d058  callers=['FUN_1000_d134'] strings=[] */

undefined2 FUN_1000_d058(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  do {
    pcVar2 = param_2;
    if (*param_1 == '\0') {
      return 1;
    }
    param_2 = (char *)CONCAT22(param_2._2_2_,(char *)param_2 + 1);
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar2 == *pcVar1);
  return 0;
}


/* ===== 0x1d082 FUN_1000_d082  callers=['FUN_1000_d090', 'FUN_1000_d134'] strings=[] */

char __cdecl16near FUN_1000_d082(void)

{
  char cVar1;
  
  cVar1 = '\x10';
  FUN_1000_d090();
  return cVar1 + -0x10;
}


/* ===== 0x1d090 FUN_1000_d090  callers=['FUN_1000_c974', 'FUN_1000_d082', 'FUN_1000_d134'] strings=[] */

char __cdecl16near FUN_1000_d090(void)

{
  code *pcVar1;
  char cVar2;
  undefined2 in_AX;
  char cVar3;
  
  cVar2 = (char)((uint)in_AX >> 8);
  if (cVar2 == '\0') {
    if ((char)in_AX == '\x03') {
      pcVar1 = (code *)swi(0x10);
      cVar2 = (*pcVar1)();
      if (cVar2 != '\x1a') {
        DAT_0000_0487 = DAT_0000_0487 & 0xfe;
      }
      pcVar1 = (code *)swi(0x10);
      (*pcVar1)();
    }
    else if ((char)in_AX == '@') {
      cVar3 = '\x10';
      pcVar1 = (code *)swi(0x10);
      cVar2 = (*pcVar1)();
      if (cVar3 == '\x10') {
        return cVar2;
      }
      pcVar1 = (code *)swi(0x10);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x10);
      (*pcVar1)();
      pcVar1 = (code *)swi(0x10);
      cVar2 = (*pcVar1)();
      if (cVar2 == '\x1a') {
        return '\x1a';
      }
      DAT_0000_0487 = DAT_0000_0487 | 1;
      pcVar1 = (code *)swi(0x10);
      cVar2 = (*pcVar1)();
      return cVar2;
    }
  }
  else if (cVar2 == '\x0f') {
    pcVar1 = (code *)swi(0x10);
    cVar2 = (*pcVar1)();
    if (cVar2 != '\x03') {
      return cVar2;
    }
    cVar2 = FUN_1000_d082();
    if (cVar2 == '\0') {
      return '\x03';
    }
    if (DAT_0000_0484 == '\x18') {
      return '\x03';
    }
    return '@';
  }
  pcVar1 = (code *)swi(0x10);
  cVar2 = (*pcVar1)();
  return cVar2;
}


/* ===== 0x1d134 FUN_1000_d134  callers=[] strings=['   of three unique and\n', '   of three unique and\n', '   of three unique and\n', '   of three unique and\n', '   of three unique and\n', '   of three unique and\n', '   of three unique and\n', '   of three unique and\n'] */

void __cdecl16near FUN_1000_d134(char param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  gb_5382 = param_1;
  uVar1 = FUN_1000_d090();
  gb_5384 = (char)((uint)uVar1 >> 8);
  if ((char)uVar1 != gb_5382) {
    FUN_1000_d090();
    uVar1 = FUN_1000_d090();
    gb_5382 = (char)uVar1;
    gb_5384 = (char)((uint)uVar1 >> 8);
    if ((gb_5382 == '\x03') && ('\x18' < DAT_0000_0484)) {
      gb_5382 = '@';
    }
  }
  if ((((byte)gb_5382 < 4) ||
      (0x3f < (byte)gb_5382)) ||
     (gb_5382 == '\a')) {
    gb_5385 = '\0';
  }
  else {
    gb_5385 = '\x01';
  }
  if (gb_5382 == '@') {
    gb_5383 = DAT_0000_0484 + '\x01';
  }
  else {
    gb_5383 = '\x19';
  }
  if (gb_5382 != '\a') {
    iVar2 = FUN_1000_d058((char *)0x538d/*"COMPAQ"*/,0xffea,0xf000);
    if (iVar2 == 0) {
      iVar2 = FUN_1000_d082();
      if (iVar2 == 0) {
        gb_5386 = '\x01';
        goto LAB_1000_d1d9;
      }
    }
  }
  gb_5386 = '\0';
LAB_1000_d1d9:
  if (gb_5382 == '\a') {
    uVar1._0_1_ = '\0';
    uVar1._1_1_ = -0x50;
  }
  else {
    uVar1._0_1_ = '\0';
    uVar1._1_1_ = -0x48;
  }
  gb_5389 = (char)uVar1;
  gb_538a = SUB21(uVar1,1);
  gb_5387 = '\0';
  gb_5388 = '\0';
  gb_537d = '\0';
  gb_537c = '\0';
  gb_537e = gb_5384 + -1;
  gb_537f = gb_5383 + -1;
  return;
}


/* ===== 0x1d20e FUN_1000_d20e  callers=['FUN_1000_066b', 'FUN_1000_5fde', 'FUN_1000_6562', 'FUN_1000_6a7b'] strings=[] */

undefined4 __cdecl16near FUN_1000_d20e(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  
  bVar5 = false;
  pcVar1 = (code *)swi(0x21);
  uVar6 = (*pcVar1)();
  iVar2 = (int)uVar6;
  if (!bVar5) {
    bVar5 = false;
    pcVar1 = (code *)swi(0x21);
    uVar6 = (*pcVar1)((int)((ulong)uVar6 >> 0x10));
    iVar4 = (int)((ulong)uVar6 >> 0x10);
    iVar3 = (int)uVar6;
    iVar2 = iVar3;
    if (!bVar5) {
      pcVar1 = (code *)swi(0x21);
      iVar2 = (*pcVar1)();
      if (!bVar5) goto LAB_1000_d24b;
    }
  }
  iVar3 = FUN_1000_d348(iVar2);
  iVar4 = iVar3 >> 0xf;
LAB_1000_d24b:
  return CONCAT22(iVar4,iVar3);
}


/* ===== 0x1d24f FUN_1000_d24f  callers=['FUN_1000_566e'] strings=[] */

undefined2 __cdecl16near FUN_1000_d24f(void)

{
  code *pcVar1;
  undefined2 in_BX;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return in_BX;
}


/* ===== 0x1d25e FUN_1000_d25e  callers=['FUN_1000_566e', 'FUN_1000_5756', 'FUN_1000_d2a7'] strings=[] */

void __cdecl16near FUN_1000_d25e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


/* ===== 0x1d2a7 FUN_1000_d2a7  callers=['FUN_1000_7b0a'] strings=[] */

void __cdecl16near FUN_1000_d2a7(undefined2 param_1)

{
  g_a738 = param_1;
  FUN_1000_d25e(0x24,0xd26f,0x1000);
  return;
}


/* ===== 0x1d2c1 FUN_1000_d2c1  callers=['FUN_1000_7cb2', 'FUN_1000_7dbe'] strings=[] */

/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_1000_d2c1(undefined2 param_1)

{
  undefined2 unaff_SS;
  
  return CONCAT22(*(undefined2 *)(g_a73a + 10),param_1);
}


/* ===== 0x1d2dc FUN_1000_d2dc  callers=[] strings=[] */

void FUN_1000_d2dc(void)

{
  undefined2 unaff_SS;
  
  FUN_1000_cf7d(0x54,0,0);
  *(byte *)(g_a73a + 0x2e) = *(byte *)(g_a73a + 0x2e) | 1;
  return;
}


/* ===== 0x1d30d FUN_1000_d30d  callers=[] strings=[] */

undefined2 __cdecl16near FUN_1000_d30d(undefined2 param_1)

{
  undefined2 uVar1;
  
  uVar1 = in(param_1);
  return uVar1;
}


/* ===== 0x1d316 FUN_1000_d316  callers=['FUN_1000_08b2', 'FUN_1000_59f6', 'FUN_1000_5a94', 'FUN_1000_603b'] strings=[] */

undefined1 __cdecl16near FUN_1000_d316(undefined2 param_1)

{
  undefined1 uVar1;
  
  uVar1 = in(param_1);
  return uVar1;
}


/* ===== 0x1d321 FUN_1000_d321  callers=['FUN_1000_d550'] strings=[] */

undefined2 __cdecl16near FUN_1000_d321(undefined2 param_1,int param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  undefined4 uVar3;
  
  pcVar1 = (code *)swi(0x21);
  uVar3 = (*pcVar1)();
  uVar2 = (undefined2)uVar3;
  if ((bool)in_CF) {
    uVar2 = FUN_1000_d348();
  }
  else if (param_2 == 0) {
    uVar2 = (int)((ulong)uVar3 >> 0x10);
  }
  return uVar2;
}


/* ===== 0x1d348 FUN_1000_d348  callers=['FUN_1000_c63a', 'FUN_1000_d01f', 'FUN_1000_d03a', 'FUN_1000_d20e', 'FUN_1000_d321', 'FUN_1000_d396', 'FUN_1000_d525', 'FUN_1000_d550', 'FUN_1000_d67d', 'FUN_1000_d796', 'FUN_1000_d7b0', 'FUN_1000_dd6e'] strings=['  challenging episodes:\n\n', '  challenging episodes:\n\n', '3. Keen Must Die!     $15\n\n'] */

undefined2 FUN_1000_d348(int param_1)

{
  if (param_1 < 0) {
    if (param_1 == -0x23 || -param_1 < 0x23) {
      g_0092 = -param_1;
      gb_5394 = -1;
      gb_5395 = -1;
      return 0xffff;
    }
  }
  else if (param_1 < 0x59) goto LAB_1000_d35b;
  param_1 = 0x57;
LAB_1000_d35b:
  gb_5394 = (char)param_1;
  gb_5395 = (char)((uint)param_1 >> 8);
  g_0092 = (int)((char *)0x5396)[param_1];
  return 0xffff;
}


/* ===== 0x1d385 FUN_1000_d385  callers=[] strings=[] */

ulong __cdecl16near FUN_1000_d385(void)

{
  code *pcVar1;
  ulong uVar2;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  return uVar2 & 0xffff0080;
}


/* ===== 0x1d396 FUN_1000_d396  callers=['FUN_1000_c8d1', 'FUN_1000_cdad', 'FUN_1000_d6e1', 'FUN_1000_dd6e'] strings=[] */

void __cdecl16near FUN_1000_d396(int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = false;
  *(uint *)((char *)0x5346 + param_1 * 2) =
       *(uint *)((char *)0x5346 + param_1 * 2) & 0xfdff;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (bVar2) {
    FUN_1000_d348();
  }
  return;
}


/* ===== 0x1d3bf FUN_1000_d3bf  callers=['FUN_1000_d43c', 'FUN_1000_d463', 'FUN_1000_d47d', 'FUN_1000_d90a'] strings=[] */

char * FUN_1000_d3bf(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  byte local_24 [34];
  
  pcVar7 = param_4;
  if ((param_3 < 0x25) && (1 < (byte)param_3)) {
    if (((int)param_6 < 0) && (param_2 != '\0')) {
      *param_4 = '-';
      pcVar7 = param_4 + 1;
      bVar8 = param_5 != 0;
      param_5 = -param_5;
      param_6 = -(uint)bVar8 - param_6;
    }
    pbVar6 = local_24;
    if (param_6 == 0) goto LAB_1000_d409;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1000_d409:
      *pbVar6 = (byte)(param_5 % param_3);
      pbVar6 = pbVar6 + 1;
      param_5 = param_5 / param_3;
    }
    iVar5 = (int)pbVar6 - (int)local_24;
    do {
      pbVar6 = pbVar6 + -1;
      bVar2 = *pbVar6;
      if (bVar2 < 10) {
        cVar4 = bVar2 + 0x30;
      }
      else {
        cVar4 = (bVar2 - 10) + param_1;
      }
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar1 = cVar4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *pcVar7 = '\0';
  return param_4;
}


/* ===== 0x1d43c FUN_1000_d43c  callers=['FUN_1000_066b', 'FUN_1000_52c5', 'FUN_1000_5d39', 'FUN_1000_5dae', 'FUN_1000_6521'] strings=[] */

void __cdecl16near FUN_1000_d43c(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = param_1 >> 0xf;
  }
  else {
    iVar1 = 0;
  }
  FUN_1000_d3bf(0x61,1,param_3,param_2,param_1,iVar1);
  return;
}


/* ===== 0x1d463 FUN_1000_d463  callers=[] strings=[] */

void __cdecl16near
FUN_1000_d463(undefined2 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint in_AX;
  
  FUN_1000_d3bf(0x61,in_AX & 0xff00,param_4,param_3,param_1,param_2);
  return;
}


/* ===== 0x1d47d FUN_1000_d47d  callers=['FUN_1000_0e76', 'FUN_1000_6540', 'FUN_1000_8ce4', 'FUN_1000_9aa1'] strings=[] */

void __cdecl16near
FUN_1000_d47d(undefined2 param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  FUN_1000_d3bf(0x61,param_4 == 10,param_4,param_3,param_1,param_2);
  return;
}


/* ===== 0x1d4a2 FUN_1000_d4a2  callers=['FUN_1000_cb0b'] strings=[] */

undefined2 * __cdecl16near FUN_1000_d4a2(undefined2 *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  
  puVar4 = param_1;
  for (uVar3 = param_3 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar4;
    puVar4 = puVar4 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  if ((param_3 & 1) != 0) {
    *(undefined1 *)puVar4 = *(undefined1 *)param_2;
  }
  return param_1;
}


/* ===== 0x1d4c3 FUN_1000_d4c3  callers=['FUN_1000_d4eb'] strings=[] */

void __cdecl16near FUN_1000_d4c3(undefined2 *param_1,uint param_2,undefined1 param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  
  if (((uint)param_1 & 1) != 0) {
    if (param_2 == 0) {
      return;
    }
    puVar1 = param_1;
    param_1 = (undefined2 *)((int)param_1 + 1);
    *(undefined1 *)puVar1 = param_3;
    param_2 = param_2 - 1;
  }
  for (uVar2 = param_2 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    puVar1 = param_1;
    param_1 = param_1 + 1;
    *puVar1 = CONCAT11(param_3,param_3);
  }
  if ((param_2 & 1) != 0) {
    *(undefined1 *)param_1 = param_3;
  }
  return;
}


/* ===== 0x1d4eb FUN_1000_d4eb  callers=['FUN_1000_29a0', 'FUN_1000_29e9'] strings=[] */

undefined2 __cdecl16near FUN_1000_d4eb(undefined2 param_1,undefined1 param_2,undefined2 param_3)

{
  FUN_1000_d4c3(param_1,param_3,param_2);
  return param_1;
}


/* ===== 0x1d503 FUN_1000_d503  callers=['FUN_1000_0983', 'FUN_1000_0af2', 'FUN_1000_129d', 'FUN_1000_6f20', 'FUN_1000_b4ec'] strings=[] */

void __cdecl16near
FUN_1000_d503(undefined2 param_1,undefined2 *param_2,undefined2 param_3,undefined2 *param_4,
             uint param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  
  for (uVar3 = param_5 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = param_4;
    param_4 = param_4 + 1;
    puVar1 = param_2;
    param_2 = param_2 + 1;
    *puVar2 = *puVar1;
  }
  if ((param_5 & 1) != 0) {
    *(undefined1 *)param_4 = *(undefined1 *)param_2;
  }
  return;
}


/* ===== 0x1d525 FUN_1000_d525  callers=['FUN_1000_d550'] strings=[] */

void FUN_1000_d525(void)

{
  code *pcVar1;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1000_d348();
  }
  return;
}


/* ===== 0x1d53e FUN_1000_d53e  callers=['FUN_1000_d550'] strings=[] */

void FUN_1000_d53e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return;
}


/* ===== 0x1d550 FUN_1000_d550  callers=['FUN_1000_066b', 'FUN_1000_5fde', 'FUN_1000_6562', 'FUN_1000_6854', 'FUN_1000_69a0', 'FUN_1000_6a7b'] strings=['of the Vorticons consists\n', 'of the Vorticons consists\n'] */

int __cdecl16near FUN_1000_d550(undefined2 param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((param_2 & 0xc000) == 0) {
    param_2 = param_2 | g_536e & 0xc000;
  }
  if ((param_2 & 0x100) == 0) {
LAB_1000_d5ed:
    bVar5 = false;
  }
  else {
    param_3 = param_3 & g_5370;
    if ((param_3 & 0x180) == 0) {
      FUN_1000_d348(1);
    }
    iVar2 = FUN_1000_d01f(param_1,0);
    if (iVar2 != -1) {
      if ((param_2 & 0x400) != 0) {
        iVar2 = FUN_1000_d348(0x50);
        return iVar2;
      }
      goto LAB_1000_d5ed;
    }
    bVar5 = (param_3 & 0x80) == 0;
    if ((param_2 & 0xf0) == 0) {
      iVar2 = FUN_1000_d525(bVar5,param_1);
      if (iVar2 < 0) {
        return iVar2;
      }
      goto LAB_1000_d654;
    }
    iVar2 = FUN_1000_d525(0,param_1);
    if (iVar2 < 0) {
      return iVar2;
    }
    FUN_1000_d03a(iVar2);
  }
  iVar2 = FUN_1000_d67d(param_1,param_2);
  if (-1 < iVar2) {
    bVar1 = FUN_1000_d321(iVar2,0);
    if ((bVar1 & 0x80) == 0) {
      if ((param_2 & 0x200) != 0) {
        FUN_1000_d53e(iVar2);
      }
    }
    else {
      uVar4 = param_2 | 0x2000;
      uVar3 = param_2 & 0x8000;
      param_2 = uVar4;
      if (uVar3 != 0) {
        FUN_1000_d321(iVar2,1,bVar1 | 0x20);
      }
    }
    if ((bVar5) && ((param_2 & 0xf0) != 0)) {
      FUN_1000_d01f(param_1,1,1);
    }
  }
LAB_1000_d654:
  if (-1 < iVar2) {
    if ((param_2 & 0x300) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x1000;
    }
    *(uint *)((char *)0x5346 + iVar2 * 2) =
         param_2 & 0xf8ff | uVar3;
  }
  return iVar2;
}


/* ===== 0x1d67d FUN_1000_d67d  callers=['FUN_1000_d550'] strings=[] */

int __cdecl16near FUN_1000_d67d(undefined2 param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  pcVar1 = (code *)swi(0x21);
  iVar2 = (*pcVar1)();
  if (bVar3) {
    iVar2 = FUN_1000_d348(iVar2);
  }
  else {
    *(uint *)((char *)0x5346 + iVar2 * 2) =
         param_2 & 0xf8ff | 0x8000;
  }
  return iVar2;
}


/* ===== 0x1d6c9 FUN_1000_d6c9  callers=['FUN_1000_0983', 'FUN_1000_0af2', 'FUN_1000_6f20'] strings=[] */

undefined4 __cdecl16near FUN_1000_d6c9(undefined2 param_1,undefined2 param_2)

{
  out(param_1,param_2);
  return CONCAT22(param_1,param_2);
}


/* ===== 0x1d6d5 FUN_1000_d6d5  callers=['FUN_1000_0983', 'FUN_1000_0af2', 'FUN_1000_59f6', 'FUN_1000_603b', 'FUN_1000_60ce', 'FUN_1000_6f20', 'FUN_1000_b7c8'] strings=[] */

undefined1 __cdecl16near FUN_1000_d6d5(undefined2 param_1,undefined1 param_2)

{
  out(param_1,param_2);
  return param_2;
}


/* ===== 0x1d6e1 FUN_1000_d6e1  callers=['FUN_1000_6854', 'FUN_1000_6a7b'] strings=[] */

int __cdecl16near FUN_1000_d6e1(int param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 uVar7;
  char local_5;
  int local_4;
  
  if ((param_3 + 1U < 2) ||
     ((*(uint *)((char *)0x5346 + param_1 * 2) & 0x200) != 0)) {
    iVar3 = 0;
  }
  else {
    do {
      local_4 = FUN_1000_d796(param_1,param_2,param_3);
      if (local_4 + 1U < 2) {
        return local_4;
      }
      iVar3 = local_4;
      pcVar5 = param_2;
      pcVar2 = param_2;
      if ((*(uint *)((char *)0x5346 + param_1 * 2) & 0x8000) != 0)
      {
        return local_4;
      }
      do {
        while( true ) {
          pcVar6 = pcVar2;
          cVar1 = *pcVar5;
          pcVar4 = param_2;
          if (cVar1 == '\x1a') {
            FUN_1000_d396(param_1,-iVar3,-(uint)(iVar3 != 0),1);
            *(uint *)((char *)0x5346 + param_1 * 2) =
                 *(uint *)((char *)0x5346 + param_1 * 2) | 0x200;
            goto LAB_1000_d78d;
          }
          if (cVar1 == '\r') break;
          *pcVar6 = cVar1;
          iVar3 = iVar3 + -1;
          pcVar5 = pcVar5 + 1;
          pcVar2 = pcVar6 + 1;
          if (iVar3 == 0) goto LAB_1000_d765;
        }
        iVar3 = iVar3 + -1;
        pcVar5 = pcVar5 + 1;
        pcVar2 = pcVar6;
      } while (iVar3 != 0);
      uVar7 = 0x2315;
      FUN_1000_d796(param_1,&local_5,1);
      *pcVar6 = local_5;
LAB_1000_d765:
      pcVar6 = pcVar6 + 1;
    } while (pcVar6 == pcVar4);
LAB_1000_d78d:
    iVar3 = (int)pcVar6 - (int)pcVar4;
  }
  return iVar3;
}


/* ===== 0x1d796 FUN_1000_d796  callers=['FUN_1000_d6e1'] strings=[] */

void __cdecl16near FUN_1000_d796(void)

{
  code *pcVar1;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1000_d348();
  }
  return;
}


/* ===== 0x1d7b0 FUN_1000_d7b0  callers=['FUN_1000_c689'] strings=[] */

undefined2 __cdecl16near FUN_1000_d7b0(undefined2 param_1,undefined2 param_2)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    FUN_1000_d348(uVar2);
  }
  else {
    param_2 = 0xffff;
  }
  return param_2;
}


/* ===== 0x1d7cc FUN_1000_d7cc  callers=['FUN_1000_066b', 'FUN_1000_1312', 'FUN_1000_5d39', 'FUN_1000_5dae', 'FUN_1000_6854', 'FUN_1000_69a0', 'FUN_1000_6edd', 'FUN_1000_6f20', 'FUN_1000_7b0a', 'FUN_1000_8ce4', 'FUN_1000_9ce9', 'FUN_1000_9e83'] strings=[] */

ulong __cdecl16near FUN_1000_d7cc(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined2 in_AX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  
  iVar3 = -1;
  pcVar6 = param_1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = 0xffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
  } while (*pcVar1 != '\0');
  uVar4 = ~uVar4;
  param_2 = param_2 + -uVar4;
  pcVar7 = pcVar6 + -1;
  if (((uint)param_2 & 1) != 0) {
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    pcVar6[-1] = *pcVar1;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6;
  }
  for (uVar5 = uVar4 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar2 = pcVar7;
    pcVar7 = pcVar7 + 2;
    pcVar1 = param_2;
    param_2 = param_2 + 2;
    *(undefined2 *)pcVar2 = *(undefined2 *)pcVar1;
  }
  if ((uVar4 & 1) != 0) {
    *pcVar7 = *param_2;
  }
  return (ulong)CONCAT22(in_AX,param_1) & 0xff00ffff;
}


/* ===== 0x1d805 FUN_1000_d805  callers=['FUN_1000_1312'] strings=[] */

int __cdecl16near FUN_1000_d805(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  uVar3 = ~uVar3;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar2 = param_2;
    param_2 = param_2 + 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 == *pcVar2);
  return (uint)(byte)param_1[-1] - (uint)(byte)param_2[-1];
}


/* ===== 0x1d834 FUN_1000_d834  callers=['FUN_1000_066b', 'FUN_1000_1312', 'FUN_1000_5d39', 'FUN_1000_5dae', 'FUN_1000_6854', 'FUN_1000_69a0', 'FUN_1000_6edd', 'FUN_1000_6f20', 'FUN_1000_7b0a', 'FUN_1000_8ce4'] strings=[] */

char * __cdecl16near FUN_1000_d834(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar3 = 0xffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar1 = pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar1 != '\0');
  pcVar4 = param_1;
  for (uVar3 = ~uVar3; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar2 = pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar1 = param_2;
    param_2 = param_2 + 1;
    *pcVar2 = *pcVar1;
  }
  return param_1;
}


/* ===== 0x1d858 FUN_1000_d858  callers=['FUN_1000_0e76', 'FUN_1000_666d', 'FUN_1000_668f', 'FUN_1000_835e', 'FUN_1000_9aa1', 'FUN_1000_cc3d'] strings=[] */

int __cdecl16near FUN_1000_d858(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}


/* ===== 0x1d872 FUN_1000_d872  callers=['FUN_1000_1312'] strings=[] */

char * __cdecl16near FUN_1000_d872(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined2 in_AX;
  undefined1 uVar3;
  char *pcVar4;
  
  pcVar2 = param_1;
  while( true ) {
    pcVar4 = pcVar2;
    cVar1 = *pcVar4;
    uVar3 = (undefined1)((uint)in_AX >> 8);
    if (cVar1 == '\0') break;
    in_AX = CONCAT11(uVar3,cVar1 + 0x9fU);
    pcVar2 = pcVar4 + 1;
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      in_AX = CONCAT11(uVar3,cVar1 + -0x20);
      *pcVar4 = cVar1 + -0x20;
    }
  }
  return (char *)CONCAT22(CONCAT11(uVar3,cVar1),param_1);
}


/* ===== 0x1d892 FUN_1000_d892  callers=['FUN_1000_d90a'] strings=[] */

void FUN_1000_d892(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte extraout_AH;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  
  FUN_1000_d899();
  FUN_1000_d8a2();
  bVar2 = extraout_AH + 0x90;
  in_AF = 9 < (bVar2 & 0xf) | in_AF;
  bVar1 = 0x99 < bVar2 || 0x6f < extraout_AH;
  bVar3 = bVar2 + in_AF * '\x06' + bVar1 * '`';
  bVar2 = bVar3 + 0x40;
  bVar4 = bVar2 + bVar1;
  *unaff_DI = bVar4 + (9 < (bVar4 & 0xf) | in_AF) * '\x06' +
              (0x99 < bVar4 || (0xbf < bVar3 || CARRY1(bVar2,bVar1))) * '`';
  return;
}


/* ===== 0x1d899 FUN_1000_d899  callers=['FUN_1000_d892'] strings=[] */

void FUN_1000_d899(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte extraout_AH;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  
  FUN_1000_d8a2();
  bVar2 = extraout_AH + 0x90;
  in_AF = 9 < (bVar2 & 0xf) | in_AF;
  bVar1 = 0x99 < bVar2 || 0x6f < extraout_AH;
  bVar3 = bVar2 + in_AF * '\x06' + bVar1 * '`';
  bVar2 = bVar3 + 0x40;
  bVar4 = bVar2 + bVar1;
  *unaff_DI = bVar4 + (9 < (bVar4 & 0xf) | in_AF) * '\x06' +
              (0x99 < bVar4 || (0xbf < bVar3 || CARRY1(bVar2,bVar1))) * '`';
  return;
}


/* ===== 0x1d8a2 FUN_1000_d8a2  callers=['FUN_1000_d899'] strings=[] */

void __cdecl16near FUN_1000_d8a2(void)

{
  byte bVar1;
  byte in_AL;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char *unaff_DI;
  undefined2 unaff_ES;
  byte in_AF;
  bool bVar2;
  
  bVar3 = in_AL + 0x90;
  bVar1 = 9 < (bVar3 & 0xf) | in_AF;
  bVar2 = 0x99 < bVar3 || 0x6f < in_AL;
  bVar4 = bVar3 + bVar1 * '\x06' + bVar2 * '`';
  bVar3 = bVar4 + 0x40;
  bVar5 = bVar3 + bVar2;
  *unaff_DI = bVar5 + (9 < (bVar5 & 0xf) | bVar1) * '\x06' +
              (0x99 < bVar5 || (0xbf < bVar4 || CARRY1(bVar3,bVar2))) * '`';
  return;
}


/* ===== 0x1d8aa FUN_1000_d8aa  callers=['FUN_1000_c9c4'] strings=[] */

void FUN_1000_d8aa(void)

{
  undefined2 unaff_SI;
  
  FUN_1000_d90a(unaff_SI);
  return;
}


/* ===== 0x1d8c4 FUN_1000_d8c4  callers=['FUN_1000_d90a'] strings=[] */

void __cdecl16near FUN_1000_d8c4(void)

{
  char *pcVar1;
  int iVar2;
  char *unaff_DI;
  undefined2 unaff_ES;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) {
      return;
    }
    iVar2 = iVar2 + -1;
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
  } while (*pcVar1 != '\0');
  return;
}


/* ===== 0x1d8d1 FUN_1000_d8d1  callers=['FUN_1000_d90a'] strings=[] */

void __cdecl16near FUN_1000_d8d1(void)

{
  char *pcVar1;
  char cVar2;
  undefined1 in_AL;
  int iVar3;
  int unaff_BP;
  undefined1 *unaff_DI;
  undefined2 unaff_SS;
  
  *unaff_DI = in_AL;
  pcVar1 = (char *)(unaff_BP + -0x14);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  if (*pcVar1 != '\0' && SBORROW1(cVar2,'\x01') == *pcVar1 < '\0') {
    iVar3 = (*(code *)*(undefined2 *)(unaff_BP + 10))
                      (*(undefined2 *)(unaff_BP + 8),unaff_DI + (1 - (unaff_BP + -0x96)),
                       unaff_BP + -0x96);
    if (iVar3 == 0) {
      *(undefined2 *)(unaff_BP + -0x16) = 1;
    }
    *(undefined2 *)(unaff_BP + -0x14) = 0x50;
    *(int *)(unaff_BP + -0x12) =
         (int)(unaff_DI + (1 - (unaff_BP + -0x96)) + *(int *)(unaff_BP + -0x12));
  }
  return;
}


/* ===== 0x1d8da FUN_1000_d8da  callers=['FUN_1000_d90a'] strings=[] */

void __cdecl16near FUN_1000_d8da(void)

{
  int iVar1;
  int unaff_BP;
  int unaff_DI;
  int iVar2;
  undefined2 unaff_SS;
  
  iVar2 = unaff_DI - (unaff_BP + -0x96);
  iVar1 = (*(code *)*(undefined2 *)(unaff_BP + 10))
                    (*(undefined2 *)(unaff_BP + 8),iVar2,unaff_BP + -0x96);
  if (iVar1 == 0) {
    *(undefined2 *)(unaff_BP + -0x16) = 1;
  }
  *(undefined2 *)(unaff_BP + -0x14) = 0x50;
  *(int *)(unaff_BP + -0x12) = *(int *)(unaff_BP + -0x12) + iVar2;
  return;
}


/* ===== 0x1d90a FUN_1000_d90a  callers=['FUN_1000_d8aa'] strings=['3. Keen Must Die!     $15\n\n', '3. Keen Must Die!     $15\n\n', '3. Keen Must Die!     $15\n\n'] */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined2 FUN_1000_d90a(void)

{
  char *pcVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  int *piVar6;
  char cVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  byte bVar13;
  int iVar11;
  int iVar12;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  char cVar14;
  int iVar15;
  int unaff_BP;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  int *piVar19;
  undefined1 *puVar20;
  uint *puVar21;
  int *piVar22;
  int iVar23;
  int unaff_SS;
  bool bVar24;
  
  *(int *)(unaff_BP + -4) = unaff_BP + -0x96;
LAB_1000_d913:
  pcVar18 = (char *)*(undefined2 *)(unaff_BP + -4);
LAB_1000_d916:
  pcVar16 = (char *)*(undefined2 *)(unaff_BP + 6);
LAB_1000_d919:
  pcVar17 = pcVar16 + 1;
  cVar7 = *pcVar16;
  if (cVar7 == '\0') goto LAB_1000_dd1e;
  if (cVar7 == '%') {
    *(int *)(unaff_BP + -0x10) = (int)pcVar17;
    pcVar1 = pcVar17;
    pcVar17 = pcVar16 + 2;
    cVar7 = *pcVar1;
    if (cVar7 != '%') goto code_r0x0001d93b;
  }
  *pcVar18 = cVar7;
  pcVar18 = pcVar18 + 1;
  pcVar1 = (char *)(unaff_BP + -0x14);
  cVar7 = *pcVar1;
  *pcVar1 = *pcVar1 + -1;
  pcVar16 = pcVar17;
  if (*pcVar1 == '\0' || SBORROW1(cVar7,'\x01') != *pcVar1 < '\0') {
    FUN_1000_d8da();
  }
  goto LAB_1000_d919;
code_r0x0001d93b:
  *(undefined2 *)(unaff_BP + -4) = pcVar18;
  uVar10 = 0;
  *(undefined2 *)(unaff_BP + -0xe) = 0;
  *(undefined2 *)(unaff_BP + -2) = 0;
  *(undefined1 *)(unaff_BP + -0xb) = 0;
  *(undefined2 *)(unaff_BP + -8) = 0xffff;
  *(undefined2 *)(unaff_BP + -10) = 0xffff;
  do {
    if (0x5f < (byte)(cVar7 - 0x20U)) goto switchD_1000_d972_caseD_13;
    cVar14 = ((char *)0x53f7)[(byte)(cVar7 - 0x20U)] * '\x02';
    bVar13 = (byte)(uVar10 >> 8);
    iVar23 = unaff_SS;
    switch(((char *)0x53f7)[(byte)(cVar7 - 0x20U)]) {
    case '\0':
      if (bVar13 != 0) goto switchD_1000_d972_caseD_13;
      if (*(char *)(unaff_BP + -0xb) != '+') {
        *(char *)(unaff_BP + -0xb) = cVar7;
      }
      break;
    case '\x01':
      if (bVar13 != 0) goto switchD_1000_d972_caseD_13;
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 1;
      break;
    case '\x02':
      iVar23 = *(int *)*(undefined2 *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
      if (bVar13 < 2) {
        if (iVar23 < 0) {
          iVar23 = -iVar23;
          *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 2;
        }
        *(int *)(unaff_BP + -8) = iVar23;
        uVar10 = 0x300;
      }
      else {
        if (bVar13 != 4) goto switchD_1000_d972_caseD_13;
        *(int *)(unaff_BP + -10) = iVar23;
        uVar10 = 0x500;
      }
      break;
    case '\x03':
      if (bVar13 != 0) goto switchD_1000_d972_caseD_13;
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 2;
      break;
    case '\x04':
      if (3 < bVar13) goto switchD_1000_d972_caseD_13;
      uVar10 = 0x400;
      break;
    case '\x05':
switchD_1000_d972_caseD_5:
      if (bVar13 < 3) {
        uVar10 = 0x200;
        LOCK();
        iVar23 = *(int *)(unaff_BP + -8);
        *(int *)(unaff_BP + -8) = (int)(char)(cVar7 + -0x30);
        UNLOCK();
        if (-1 < iVar23) {
          *(int *)(unaff_BP + -8) = *(int *)(unaff_BP + -8) + iVar23 * 10;
        }
      }
      else {
        if (bVar13 != 4) {
switchD_1000_d972_caseD_13:
          pcVar18 = (char *)*(undefined2 *)(unaff_BP + -0x10);
          do {
            FUN_1000_d8d1();
            pcVar1 = pcVar18;
            pcVar18 = pcVar18 + 1;
          } while (*pcVar1 != '\0');
LAB_1000_dd1e:
          if (*(char *)(unaff_BP + -0x14) < 'P') {
            FUN_1000_d8da();
          }
          if (*(int *)(unaff_BP + -0x16) == 0) {
            uVar9 = *(undefined2 *)(unaff_BP + -0x12);
          }
          else {
            uVar9 = 0xffff;
          }
          return uVar9;
        }
        LOCK();
        iVar23 = *(int *)(unaff_BP + -10);
        *(int *)(unaff_BP + -10) = (int)(char)(cVar7 + -0x30);
        UNLOCK();
        if (-1 < iVar23) {
          *(int *)(unaff_BP + -10) = *(int *)(unaff_BP + -10) + iVar23 * 10;
        }
      }
      break;
    case '\x06':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x10;
      goto LAB_1000_d9aa;
    case '\a':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x100;
    case '\b':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xffef;
      goto LAB_1000_d9aa;
    case '\t':
      if (bVar13 != 0) goto switchD_1000_d972_caseD_5;
      if ((*(uint *)(unaff_BP + -2) & 2) == 0) {
        *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 8;
        uVar10 = 0x100;
      }
      break;
    case '\n':
      goto switchD_1000_d972_caseD_a;
    case '\v':
      uVar9 = CONCAT11(8,cVar14);
      goto LAB_1000_da5c;
    case '\f':
      uVar9 = CONCAT11(10,cVar14);
      goto LAB_1000_da60;
    case '\r':
      uVar9 = CONCAT11(0x10,cVar7 + -0x17);
LAB_1000_da5c:
      *(undefined1 *)(unaff_BP + -0xb) = 0;
LAB_1000_da60:
      *(char *)(unaff_BP + -5) = cVar7;
      iVar11 = 0;
      *(undefined1 *)(unaff_BP + -6) = 0;
      piVar22 = (int *)*(undefined2 *)(unaff_BP + 4);
      iVar15 = *piVar22;
      goto LAB_1000_da80;
    case '\x0e':
      *(char *)(unaff_BP + -5) = cVar7;
      *(undefined2 *)(unaff_BP + 6) = pcVar17;
      puVar20 = (undefined1 *)(unaff_BP + -0x46);
      puVar4 = (undefined2 *)*(int *)(unaff_BP + 4);
      uVar9 = *puVar4;
      *(undefined2 *)(unaff_BP + 4) = puVar4 + 1;
      if ((*(uint *)(unaff_BP + -2) & 0x20) != 0) {
        *(undefined2 *)(unaff_BP + 4) = puVar4 + 2;
        FUN_1000_d892(uVar9);
        puVar3 = puVar20;
        puVar20 = (undefined1 *)(unaff_BP + -0x45);
        *puVar3 = 0x3a;
      }
      FUN_1000_d892();
      *puVar20 = 0;
      *(undefined1 *)(unaff_BP + -6) = 0;
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xfffb;
      puVar21 = (uint *)(unaff_BP + -0x46);
      uVar10 = (int)puVar20 - (int)puVar21;
      goto LAB_1000_dbda;
    case '\x0f':
      *(undefined2 *)(unaff_BP + 6) = pcVar17;
      *(char *)(unaff_BP + -5) = cVar7;
      uVar9 = *(undefined2 *)(unaff_BP + 4);
      uVar10 = *(uint *)(unaff_BP + -10);
      if ((int)uVar10 < 0) {
        uVar10 = 6;
      }
      uVar5 = *(uint *)(unaff_BP + -2);
      if ((*(uint *)(unaff_BP + -2) & 0x100) == 0) {
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 8;
        uVar8 = 6;
      }
      else {
        uVar8 = 8;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 10;
      }
      FUN_1000_e69b(uVar8,uVar5 & 1,cVar7,unaff_BP + -0x45,uVar10,uVar9);
      puVar21 = (uint *)(unaff_BP + -0x45);
      goto LAB_1000_dbda;
    case '\x10':
      *(undefined2 *)(unaff_BP + 6) = pcVar17;
      *(char *)(unaff_BP + -5) = cVar7;
      uVar10 = *(uint *)*(undefined2 *)(unaff_BP + 4);
      *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
      puVar21 = (uint *)(unaff_BP + -0x45);
      *puVar21 = uVar10 & 0xff;
      uVar10 = 1;
      goto LAB_1000_dc15;
    case '\x11':
      *(undefined2 *)(unaff_BP + 6) = pcVar17;
      *(char *)(unaff_BP + -5) = cVar7;
      if ((*(uint *)(unaff_BP + -2) & 0x20) == 0) {
        puVar21 = *(uint **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
        iVar23 = 0x2315;
        bVar24 = puVar21 == (uint *)0x0;
      }
      else {
        puVar2 = (uint *)*(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        iVar23 = (int)((ulong)puVar2 >> 0x10);
        puVar21 = (uint *)puVar2;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 4;
        bVar24 = iVar23 == 0 && puVar21 == (uint *)0x0;
      }
      if (bVar24) {
        iVar23 = 0x2315;
        puVar21 = (uint *)((char *)0x53f0/*"(null)"*/);
      }
      FUN_1000_d8c4();
      if (*(uint *)(unaff_BP + -10) < uVar10) {
        uVar10 = *(uint *)(unaff_BP + -10);
      }
      goto LAB_1000_dc15;
    case '\x12':
      *(undefined2 *)(unaff_BP + 6) = pcVar17;
      if ((*(uint *)(unaff_BP + -2) & 0x20) == 0) {
        piVar22 = *(int **)(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 2;
        uVar9 = 0x2315;
      }
      else {
        piVar6 = (int *)*(undefined4 *)*(undefined2 *)(unaff_BP + 4);
        uVar9 = (undefined2)((ulong)piVar6 >> 0x10);
        piVar22 = (int *)piVar6;
        *(int *)(unaff_BP + 4) = *(int *)(unaff_BP + 4) + 4;
      }
      *piVar22 = (uint)(byte)(0x50 - *(char *)(unaff_BP + -0x14)) + *(int *)(unaff_BP + -0x12);
      if ((*(uint *)(unaff_BP + -2) & 0x10) != 0) {
        piVar22[1] = 0;
      }
      goto LAB_1000_d913;
    default:
      goto switchD_1000_d972_caseD_13;
    case '\x16':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) & 0xffdf;
      goto LAB_1000_d9aa;
    case '\x17':
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x20;
LAB_1000_d9aa:
      uVar10 = 0x500;
    }
    pcVar1 = pcVar17;
    pcVar17 = pcVar17 + 1;
    cVar7 = *pcVar1;
  } while( true );
switchD_1000_d972_caseD_a:
  uVar9 = CONCAT11(10,cVar14);
  *(undefined1 *)(unaff_BP + -6) = 1;
  *(char *)(unaff_BP + -5) = cVar7;
  piVar22 = (int *)*(undefined2 *)(unaff_BP + 4);
  iVar15 = *piVar22;
  iVar11 = iVar15 >> 0xf;
LAB_1000_da80:
  piVar19 = piVar22 + 1;
  *(undefined2 *)(unaff_BP + 6) = pcVar17;
  if ((*(uint *)(unaff_BP + -2) & 0x10) != 0) {
    iVar11 = *piVar19;
    piVar19 = piVar22 + 2;
  }
  *(undefined2 *)(unaff_BP + 4) = piVar19;
  puVar21 = (uint *)(unaff_BP + -0x45);
  if ((iVar15 == 0) && (iVar11 == 0)) {
    if (*(int *)(unaff_BP + -10) == 0) {
      pcVar18 = (char *)*(undefined2 *)(unaff_BP + -4);
      iVar23 = *(int *)(unaff_BP + -8);
      if ((iVar23 != 0) && (iVar23 != -1)) {
        do {
          FUN_1000_d8d1();
          iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
      }
      goto LAB_1000_d916;
    }
  }
  else {
    *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 4;
  }
  FUN_1000_d3bf(uVar9,*(undefined1 *)(unaff_BP + -6),(char)((uint)uVar9 >> 8),puVar21,iVar15,iVar11)
  ;
  if (*(int *)(unaff_BP + -10) < 1) {
LAB_1000_dbda:
    if (((*(uint *)(unaff_BP + -2) & 8) == 0) || (*(int *)(unaff_BP + -8) < 1)) goto LAB_1000_dbf9;
  }
  FUN_1000_d8c4();
  if ((char)*puVar21 == '-') {
    uVar10 = uVar10 - 1;
  }
  if (extraout_DX - uVar10 != 0 && (int)uVar10 <= extraout_DX) {
    *(int *)(unaff_BP + -0xe) = extraout_DX - uVar10;
  }
LAB_1000_dbf9:
  cVar7 = *(char *)(unaff_BP + -0xb);
  if ((cVar7 != '\0') && ((char)*puVar21 != '-')) {
    piVar6 = (int *)(unaff_BP + -0xe);
    iVar15 = *piVar6;
    *piVar6 = *piVar6 + -1;
    *(int *)(unaff_BP + -0xe) = *(int *)(unaff_BP + -0xe) + (uint)(iVar15 == 0);
    puVar21 = (uint *)((int)puVar21 + -1);
    *(char *)puVar21 = cVar7;
  }
  FUN_1000_d8c4();
LAB_1000_dc15:
  pcVar18 = (char *)*(undefined2 *)(unaff_BP + -4);
  iVar15 = *(int *)(unaff_BP + -8);
  if ((*(uint *)(unaff_BP + -2) & 5) == 5) {
    cVar7 = *(char *)(unaff_BP + -5);
    if (cVar7 == 'o') {
      if (*(int *)(unaff_BP + -0xe) < 1) {
        *(undefined2 *)(unaff_BP + -0xe) = 1;
      }
    }
    else if ((cVar7 == 'x') || (cVar7 == 'X')) {
      *(uint *)(unaff_BP + -2) = *(uint *)(unaff_BP + -2) | 0x40;
      iVar15 = iVar15 + -2;
      piVar6 = (int *)(unaff_BP + -0xe);
      iVar11 = *piVar6;
      *piVar6 = *piVar6 + -2;
      if (SBORROW2(iVar11,2) != *piVar6 < 0) {
        *(undefined2 *)(unaff_BP + -0xe) = 0;
      }
    }
  }
  iVar11 = uVar10 + *(int *)(unaff_BP + -0xe);
  if ((*(uint *)(unaff_BP + -2) & 2) == 0) {
    for (; iVar11 < iVar15; iVar15 = iVar15 + -1) {
      FUN_1000_d8d1();
    }
  }
  if ((*(uint *)(unaff_BP + -2) & 0x40) != 0) {
    FUN_1000_d8d1();
    FUN_1000_d8d1();
  }
  iVar12 = *(int *)(unaff_BP + -0xe);
  if (0 < iVar12) {
    iVar11 = iVar11 - iVar12;
    iVar15 = iVar15 - iVar12;
    cVar7 = (char)*puVar21;
    if (((cVar7 == '-') || (cVar7 == ' ')) || (cVar7 == '+')) {
      puVar21 = (uint *)((int)puVar21 + 1);
      FUN_1000_d8d1();
      iVar11 = iVar11 + -1;
      iVar15 = iVar15 + -1;
      iVar12 = extraout_DX_00;
    }
    for (; iVar12 != 0; iVar12 = iVar12 + -1) {
      FUN_1000_d8d1();
      iVar11 = extraout_DX_01;
    }
  }
  if (iVar11 != 0) {
    iVar15 = iVar15 - iVar11;
    do {
      puVar2 = puVar21;
      puVar21 = (uint *)((int)puVar21 + 1);
      *pcVar18 = (char)*puVar2;
      pcVar18 = pcVar18 + 1;
      pcVar1 = (char *)(unaff_BP + -0x14);
      cVar7 = *pcVar1;
      *pcVar1 = *pcVar1 + -1;
      if (*pcVar1 == '\0' || SBORROW1(cVar7,'\x01') != *pcVar1 < '\0') {
        FUN_1000_d8da();
      }
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (0 < iVar15) {
    do {
      FUN_1000_d8d1();
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  goto LAB_1000_d916;
}


/* ===== 0x1dd6e FUN_1000_dd6e  callers=['FUN_1000_c9f5', 'FUN_1000_cb0b', 'FUN_1000_cdf1'] strings=[] */

undefined2 __cdecl16near FUN_1000_dd6e(int param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  int aiStack_a [4];
  
  bVar3 = (*(uint *)((char *)0x5346 + param_1 * 2) & 0x800) != 0;
  if (bVar3) {
    aiStack_a[3] = 2;
    aiStack_a[2] = 0;
    aiStack_a[1] = 0;
    aiStack_a[0] = param_1;
    FUN_1000_d396();
  }
  bVar3 = bVar3 && (undefined1 *)0xfff7 < aiStack_a;
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if (bVar3) {
    uVar2 = FUN_1000_d348();
  }
  else {
    *(uint *)((char *)0x5346 + param_1 * 2) =
         *(uint *)((char *)0x5346 + param_1 * 2) | 0x1000;
  }
  return uVar2;
}


/* ===== 0x1ddcc FUN_1000_ddcc  callers=['FUN_1000_defe'] strings=[] */

int __cdecl16near FUN_1000_ddcc(void)

{
  int in_DX;
  undefined2 uVar1;
  int iStack_2;
  
  if (in_DX == DAT_1000_ddc0) {
LAB_1000_de0a:
    DAT_1000_ddc0 = 0;
    DAT_1000_ddc2 = 0;
    DAT_1000_ddc4 = 0;
  }
  else {
    iStack_2 = *(int *)&g_0002;
    DAT_1000_ddc2 = iStack_2;
    if (*(int *)&g_0002 == 0) {
      in_DX = DAT_1000_ddc0;
      if (iStack_2 != DAT_1000_ddc0) {
        DAT_1000_ddc2 = *(int *)0x8;
        uVar1 = 0;
        FUN_1000_de9f(0);
        goto LAB_1000_de28;
      }
      goto LAB_1000_de0a;
    }
  }
  uVar1 = 0;
  iStack_2 = in_DX;
LAB_1000_de28:
  FUN_1000_c707(uVar1);
  return iStack_2;
}


/* ===== 0x1de2e FUN_1000_de2e  callers=['FUN_1000_defe'] strings=[] */

void __cdecl16near FUN_1000_de2e(void)

{
  undefined2 uVar1;
  int in_DX;
  int iVar2;
  int iStack_2;
  
  iStack_2 = *(int *)&g_0002;
  *(undefined2 *)&g_0002 = 0;
  *(int *)0x8 = iStack_2;
  if ((in_DX == DAT_1000_ddc0) || (*(int *)&g_0002 != 0)) {
    FUN_1000_dec8();
    iStack_2 = in_DX;
  }
  else {
    iVar2 = *(int *)0x0;
    *(int *)0x0 = *(int *)0x0 + iVar2;
    iVar2 = in_DX + iVar2;
    if (*(int *)&g_0002 == 0) {
      *(int *)0x8 = iStack_2;
    }
    else {
      *(int *)&g_0002 = iStack_2;
    }
  }
  iVar2 = iStack_2 + *(int *)0x0;
  if (*(int *)&g_0002 != 0) {
    return;
  }
  *(int *)0x0 = *(int *)0x0 + *(int *)0x0;
  *(int *)&g_0002 = iStack_2;
  if (iVar2 != *(int *)&g_0006) {
    uVar1 = *(undefined2 *)&g_0006;
    DAT_1000_ddc4 = *(undefined2 *)&g_0004;
    *(undefined2 *)&g_0006 = uVar1;
    *(undefined2 *)&g_0004 = DAT_1000_ddc4;
    return;
  }
  DAT_1000_ddc4 = 0;
  return;
}


/* ===== 0x1de5a FUN_1000_de5a  callers=['FUN_1e7c_0962'] strings=[] */

void __cdecl16near FUN_1000_de5a(void)

{
  undefined2 uVar1;
  int in_AX;
  undefined2 in_CX;
  int in_DX;
  int iVar2;
  int in_stack_00000000;
  
  iVar2 = in_DX + in_AX;
  if (*(int *)&g_0002 == 0) {
    *(undefined2 *)0x8 = in_CX;
  }
  else {
    *(undefined2 *)&g_0002 = in_CX;
  }
  iVar2 = in_stack_00000000 + *(int *)0x0;
  if (*(int *)&g_0002 != 0) {
    return;
  }
  *(int *)0x0 = *(int *)0x0 + *(int *)0x0;
  *(int *)&g_0002 = in_stack_00000000;
  if (iVar2 != *(int *)&g_0006) {
    uVar1 = *(undefined2 *)&g_0006;
    DAT_1000_ddc4 = *(undefined2 *)&g_0004;
    *(undefined2 *)&g_0006 = uVar1;
    *(undefined2 *)&g_0004 = DAT_1000_ddc4;
    return;
  }
  DAT_1000_ddc4 = 0;
  return;
}


/* ===== 0x1de9f FUN_1000_de9f  callers=['FUN_1000_ddcc', 'FUN_1000_dfe4'] strings=[] */

void __cdecl16near FUN_1000_de9f(void)

{
  int iVar1;
  
  iVar1 = g_0006;
  DAT_1000_ddc4 = g_0004;
  if (g_0006 != 0x2315) {
    *(int *)&g_0006 = g_0006;
    *(undefined2 *)&g_0004 = DAT_1000_ddc4;
    return;
  }
  DAT_1000_ddc4 = 0;
  return;
}


/* ===== 0x1dec8 FUN_1000_dec8  callers=[] strings=[] */

void __cdecl16near FUN_1000_dec8(void)

{
  g_0004 = DAT_1000_ddc4;
  if (DAT_1000_ddc4 != 0) {
    g_0006 = *(undefined2 *)&g_0006;
    *(undefined2 *)&g_0006 = 0x2315;
    *(undefined2 *)&g_0004 = 0x2315;
    return;
  }
  DAT_1000_ddc4 = 0x2315;
  g_0004 = 0x2315;
  g_0006 = 0x2315;
  return;
}


/* ===== 0x1defe FUN_1000_defe  callers=['FUN_1000_6a7b', 'FUN_1000_6f20', 'FUN_1000_e061', 'FUN_1000_e0d9', 'FUN_1000_e13a'] strings=[] */

void __cdecl16near FUN_1000_defe(undefined2 param_1,int param_2)

{
  DAT_1000_ddc6 = 0x2315;
  if (param_2 != 0) {
    if (param_2 == DAT_1000_ddc2) {
      FUN_1000_ddcc();
    }
    else {
      FUN_1000_de2e();
    }
  }
  return;
}


/* ===== 0x1df27 FUN_1000_df27  callers=['FUN_1000_dfe4'] strings=[] */

undefined2 __cdecl16near FUN_1000_df27(void)

{
  uint in_AX;
  uint uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_1000_c746(0,0);
  if ((uVar1 & 0xf) != 0) {
    FUN_1000_c746(0x10 - (uVar1 & 0xf),0);
  }
  uVar3 = FUN_1000_c746(in_AX << 4,in_AX >> 0xc);
  uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
  if ((int)uVar3 != -1) {
    DAT_1000_ddc0 = uVar2;
    DAT_1000_ddc2 = uVar2;
    *(uint *)0x0 = in_AX;
    *(undefined2 *)&g_0002 = uVar2;
    return 4;
  }
  return 0;
}


/* ===== 0x1df88 FUN_1000_df88  callers=['FUN_1000_dfe4'] strings=[] */

undefined2 __cdecl16near FUN_1000_df88(void)

{
  undefined2 uVar1;
  uint in_AX;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_1000_c746(in_AX << 4,in_AX >> 0xc);
  uVar1 = DAT_1000_ddc2;
  uVar2 = (undefined2)((ulong)uVar3 >> 0x10);
  if ((int)uVar3 != -1) {
    DAT_1000_ddc2 = uVar2;
    *(uint *)0x0 = in_AX;
    *(undefined2 *)&g_0002 = uVar1;
    return 4;
  }
  return 0;
}


/* ===== 0x1dfc1 FUN_1000_dfc1  callers=['FUN_1000_dfe4'] strings=[] */

undefined2 __cdecl16near FUN_1000_dfc1(void)

{
  int in_AX;
  int in_DX;
  int iVar1;
  
  g_0000 = g_0000 - in_AX;
  iVar1 = in_DX + g_0000;
  *(int *)0x0 = in_AX;
  *(int *)&g_0002 = in_DX;
  *(int *)&g_0002 = iVar1;
  return 4;
}


/* ===== 0x1dfe4 FUN_1000_dfe4  callers=['FUN_1000_5e52', 'FUN_1000_6a7b', 'FUN_1000_e061', 'FUN_1000_e13a'] strings=[] */

uint __cdecl16near FUN_1000_dfe4(uint param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  DAT_1000_ddc6 = 0x2315;
  if (param_1 != 0 || param_2 != 0) {
    uVar2 = param_2 + (0xffec < param_1);
    if ((CARRY2(param_2,(uint)(0xffec < param_1))) || ((uVar2 & 0xfff0) != 0)) {
      param_1 = 0;
    }
    else {
      uVar2 = CONCAT11((byte)(param_1 + 0x13 >> 0xc) | (char)uVar2 * '\x10',
                       (char)(param_1 + 0x13 >> 4));
      if (DAT_1000_ddc0 == 0) {
        param_1 = FUN_1000_df27();
      }
      else {
        iVar3 = DAT_1000_ddc4;
        if (DAT_1000_ddc4 != 0) {
          do {
            if (uVar2 <= *(uint *)0x0) {
              if (*(uint *)0x0 <= uVar2) {
                FUN_1000_de9f();
                *(undefined2 *)&g_0002 = *(undefined2 *)0x8;
                return 4;
              }
              uVar2 = FUN_1000_dfc1();
              return uVar2;
            }
            piVar1 = (int *)&g_0006;
            iVar3 = *piVar1;
          } while (*piVar1 != DAT_1000_ddc4);
        }
        param_1 = FUN_1000_df88();
      }
    }
  }
  return param_1;
}


/* ===== 0x1e061 FUN_1000_e061  callers=['FUN_1000_e13a'] strings=[] */

ulong __cdecl16near FUN_1000_e061(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int in_BX;
  undefined2 *puVar9;
  undefined2 *puVar10;
  bool bVar11;
  ulong uVar12;
  undefined2 uVar13;
  
  uVar13 = DAT_1000_ddc8;
  uVar12 = FUN_1000_dfe4(DAT_1000_ddca,DAT_1000_ddc8);
  iVar7 = (int)(uVar12 >> 0x10);
  if (iVar7 == 0) {
    return uVar12 & 0xffff;
  }
  uVar8 = *(int *)0x0 - 1;
  puVar10 = (undefined2 *)&g_0004;
  puVar9 = (undefined2 *)&g_0004;
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar10;
    puVar10 = puVar10 + 1;
    puVar1 = puVar9;
    puVar9 = puVar9 + 1;
    *puVar2 = *puVar1;
  }
  if (uVar8 != 0) {
    iVar4 = iVar7 + 1;
    iVar3 = in_BX + 1;
    while( true ) {
      puVar10 = (undefined2 *)0x0;
      puVar9 = (undefined2 *)0x0;
      uVar5 = uVar8;
      if (0x1000 < uVar8) {
        uVar5 = 0x1000;
      }
      for (iVar6 = uVar5 << 3; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2 = puVar10;
        puVar10 = puVar10 + 1;
        puVar1 = puVar9;
        puVar9 = puVar9 + 1;
        *puVar2 = *puVar1;
      }
      bVar11 = uVar8 < 0x1000;
      uVar8 = uVar8 - 0x1000;
      if (bVar11 || uVar8 == 0) break;
      iVar4 = iVar4 + 0x1000;
      iVar3 = iVar3 + 0x1000;
    }
  }
  FUN_1000_defe(uVar13,in_BX);
  return CONCAT22(iVar7,4);
}


/* ===== 0x1e0d9 FUN_1000_e0d9  callers=['FUN_1000_e13a'] strings=[] */

undefined4 __cdecl16near FUN_1000_e0d9(void)

{
  int in_AX;
  int in_CX;
  int iVar1;
  int in_BX;
  int iVar2;
  
  if (in_BX != DAT_1000_ddc2) {
    iVar2 = in_BX + in_AX;
    *(int *)0x0 = in_CX - in_AX;
    *(int *)&g_0002 = in_BX;
    *(int *)0x0 = in_AX;
    iVar1 = in_BX + in_CX;
    if (*(int *)&g_0002 == 0) {
      *(int *)0x8 = iVar2;
    }
    else {
      *(int *)&g_0002 = iVar2;
    }
    FUN_1000_defe();
    return CONCAT22(in_BX,4);
  }
  *(int *)0x0 = in_AX;
  FUN_1000_c707(0,in_BX + in_AX);
  return CONCAT22(in_BX,4);
}


/* ===== 0x1e13a FUN_1000_e13a  callers=[] strings=[] */

undefined2 __cdecl16near FUN_1000_e13a(undefined2 param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined2 uVar2;
  
  DAT_1000_ddc6 = 0x2315;
  DAT_1000_ddc8 = param_4;
  DAT_1000_ddca = param_3;
  if (param_2 == 0) {
    uVar2 = FUN_1000_dfe4(param_3,param_4);
  }
  else if (param_3 == 0 && param_4 == 0) {
    uVar2 = FUN_1000_defe(param_3,param_2);
  }
  else {
    uVar1 = CONCAT11((byte)(param_3 + 0x13 >> 0xc) | ((char)param_4 + (0xffec < param_3)) * '\x10',
                     (char)(param_3 + 0x13 >> 4));
    if (*(uint *)0x0 < uVar1) {
      uVar2 = FUN_1000_e061();
    }
    else if (*(uint *)0x0 == uVar1) {
      uVar2 = 4;
    }
    else {
      uVar2 = FUN_1000_e0d9();
    }
  }
  return uVar2;
}


/* ===== 0x1e1a3 FUN_1000_e1a3  callers=['FUN_1000_02c5', 'FUN_1000_0501', 'FUN_1000_08dd', 'FUN_1000_0d8e', 'FUN_1000_3248', 'FUN_1000_6f20', 'FUN_1000_7985', 'FUN_1000_7a78', 'FUN_1000_7dfb', 'FUN_1000_8b1e', 'FUN_1000_9aa1', 'FUN_1000_a79d'] strings=[] */

void FUN_1000_e1a3(void)

{
  FUN_1000_e1c0();
  return;
}


/* ===== 0x1e1b2 FUN_1000_e1b2  callers=['FUN_1000_08dd', 'FUN_1000_2aa6', 'FUN_1000_2b54', 'FUN_1000_2d02', 'FUN_1000_a79d'] strings=[] */

void FUN_1000_e1b2(void)

{
  FUN_1000_e1c0();
  return;
}


/* ===== 0x1e1c0 FUN_1000_e1c0  callers=['FUN_1000_e1a3', 'FUN_1000_e1b2'] strings=[] */

undefined4 __stdcall16far FUN_1000_e1c0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulong uVar1;
  uint uVar2;
  uint in_CX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if ((param_4 == 0) && ((param_2 == 0 || (param_3 == 0)))) {
    uVar2 = (uint)(CONCAT22(param_2,param_1) / (ulong)param_3);
    if ((in_CX & 2) != 0) {
      uVar2 = (uint)(CONCAT22(param_2,param_1) % (ulong)param_3);
    }
    param_2 = 0;
  }
  else {
    if ((in_CX & 1) == 0) {
      if ((int)param_2 < 0) {
        bVar6 = param_1 != 0;
        param_1 = -param_1;
        param_2 = -(uint)bVar6 - param_2;
        in_CX = in_CX | 0xc;
      }
      if ((int)param_4 < 0) {
        bVar6 = param_3 != 0;
        param_3 = -param_3;
        param_4 = -(uint)bVar6 - param_4;
        in_CX = in_CX ^ 4;
      }
    }
    iVar3 = 0x20;
    uVar5 = 0;
    uVar4 = 0;
    do {
      bVar6 = (int)param_1 < 0;
      param_1 = param_1 * 2;
      uVar1 = (ulong)CONCAT12(bVar6,param_2) << 1;
      param_2 = (uint)uVar1 | (uint)bVar6;
      bVar6 = (uVar1 & 0x10000) != 0;
      uVar1 = (ulong)CONCAT12(bVar6,uVar4) << 1;
      uVar4 = (uint)uVar1 | (uint)bVar6;
      uVar5 = uVar5 << 1 | (uint)((uVar1 & 0x10000) != 0);
      if ((param_4 <= uVar5) && ((param_4 < uVar5 || (param_3 <= uVar4)))) {
        bVar6 = uVar4 < param_3;
        uVar4 = uVar4 - param_3;
        uVar5 = (uVar5 - param_4) - (uint)bVar6;
        param_1 = param_1 + 1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar2 = param_1;
    if ((in_CX & 2) != 0) {
      in_CX = in_CX >> 1;
      uVar2 = uVar4;
      param_2 = uVar5;
    }
    if ((in_CX & 4) != 0) {
      bVar6 = uVar2 != 0;
      uVar2 = -uVar2;
      param_2 = -(uint)bVar6 - param_2;
    }
  }
  return CONCAT22(param_2,uVar2);
}


/* ===== 0x1e251 FUN_1000_e251  callers=['FUN_1000_02c5', 'FUN_1000_066b', 'FUN_1000_1656', 'FUN_1000_177e', 'FUN_1000_17e2', 'FUN_1000_1840', 'FUN_1000_18ae', 'FUN_1000_18eb', 'FUN_1000_194e', 'FUN_1000_20b5', 'FUN_1000_2863', 'FUN_1000_2aa6'] strings=[] */

int __cdecl16far FUN_1000_e251(void)

{
  int in_AX;
  byte in_CL;
  
  if (in_CL < 0x10) {
    return in_AX << (in_CL & 0x1f);
  }
  return 0;
}


/* ===== 0x1e272 FUN_1000_e272  callers=['FUN_1000_2326', 'FUN_1000_2aa6', 'FUN_1000_2b54', 'FUN_1000_2d02', 'FUN_1000_3301', 'FUN_1000_38f0', 'FUN_1000_4373', 'FUN_1000_49a7', 'FUN_1000_4c32', 'FUN_1000_ac1c'] strings=[] */

uint __cdecl16far FUN_1000_e272(void)

{
  uint in_AX;
  byte in_CL;
  int in_DX;
  
  if (in_CL < 0x10) {
    return in_AX >> (in_CL & 0x1f) | in_DX << (0x10 - in_CL & 0x1f);
  }
  return in_DX >> (in_CL - 0x10 & 0x1f);
}


/* ===== 0x1e292 FUN_1000_e292  callers=['FUN_1000_6dcb'] strings=[] */

uint __cdecl16far FUN_1000_e292(void)

{
  uint in_AX;
  byte in_CL;
  uint in_DX;
  
  if (in_CL < 0x10) {
    return in_AX >> (in_CL & 0x1f) | in_DX << (0x10 - in_CL & 0x1f);
  }
  return in_DX >> (in_CL - 0x10 & 0x1f);
}


/* ===== 0x1e2b3 FUN_1000_e2b3  callers=['FUN_1000_08dd', 'FUN_1000_6c27', 'FUN_1000_6dcb'] strings=[] */

void __cdecl16far FUN_1000_e2b3(void)

{
  uint uVar1;
  uint *in_AX;
  uint uVar2;
  int in_CX;
  undefined2 in_DX;
  uint uVar3;
  uint in_BX;
  uint uVar4;
  
  uVar3 = in_AX[1];
  uVar1 = *in_AX;
  if (in_CX < 0) {
    uVar2 = ~in_BX + 1;
    uVar4 = uVar1 - uVar2;
    if (uVar1 < uVar2) {
      uVar3 = uVar3 - 0x1000;
    }
    *in_AX = uVar4 & 0xf;
    in_AX[1] = uVar3 + (uint)(byte)((~(byte)in_CX + (0xfffe < ~in_BX)) * '\x10') * -0x100 +
               (uVar4 >> 4);
    return;
  }
  if (CARRY2(uVar1,in_BX)) {
    uVar3 = uVar3 + 0x1000;
  }
  *in_AX = uVar1 + in_BX & 0xf;
  in_AX[1] = uVar3 + (uint)(byte)((byte)in_CX << 4) * 0x100 + (uVar1 + in_BX >> 4);
  return;
}


/* ===== 0x1e33b FUN_1000_e33b  callers=['FUN_1000_02c5', 'FUN_1000_2aa6', 'FUN_1000_2b54', 'FUN_1000_6c27', 'FUN_1000_6d59', 'FUN_1000_6f20', 'FUN_1000_b3cb', 'FUN_1000_b4ec', 'FUN_1000_b667', 'FUN_1000_c746'] strings=[] */

byte __cdecl16far FUN_1000_e33b(void)

{
  char in_AL;
  int in_CX;
  byte in_BL;
  
  if (in_CX < 0) {
    return in_AL - (~in_BL + 1) & 0xf;
  }
  return in_AL + in_BL & 0xf;
}


/* ===== 0x1e39b FUN_1000_e39b  callers=['FUN_1000_02c5', 'FUN_1000_1312', 'FUN_1000_2aa6', 'FUN_1000_2b54', 'FUN_1000_30a7', 'FUN_1000_3248', 'FUN_1000_3f51', 'FUN_1000_4c32', 'FUN_1000_5074', 'FUN_1000_5776', 'FUN_1000_58c0', 'FUN_1000_5a94'] strings=[] */

void __stdcall16far FUN_1000_e39b(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint in_CX;
  uint uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 *in_stack_00000002;
  
  uVar7 = (undefined2)((ulong)in_stack_00000002 >> 0x10);
  puVar4 = (undefined2 *)in_stack_00000002;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (undefined2 *)param_1;
  for (uVar3 = in_CX >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = puVar5 + 1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 1;
    *puVar2 = *puVar1;
  }
  for (uVar3 = (uint)((in_CX & 1) != 0); uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar2 = puVar5;
    puVar5 = (undefined2 *)((int)puVar5 + 1);
    puVar1 = puVar4;
    puVar4 = (undefined2 *)((int)puVar4 + 1);
    *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
  }
  return;
}


/* ===== 0x1e3ba FUN_1000_e3ba  callers=['FUN_1000_7dfb'] strings=[] */

/* WARNING: Unable to track spacebase fully for stack */

undefined2 * __cdecl16far FUN_1000_e3ba(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *in_AX;
  uint in_CX;
  uint uVar4;
  undefined2 in_DX;
  undefined2 unaff_DI;
  undefined2 *puVar5;
  undefined2 unaff_SS;
  undefined2 in_stack_00000000;
  undefined2 auStack_6 [3];
  
  iVar3 = -in_CX;
  puVar5 = (undefined2 *)(&stack0x0000 + iVar3);
  *(undefined2 *)(&stack0x0000 + iVar3) = 0x1000;
  *(undefined2 *)((int)auStack_6 + iVar3 + 4) = in_stack_00000000;
  *(undefined2 *)((int)auStack_6 + iVar3 + 2) = unaff_DI;
  *(undefined2 *)((int)auStack_6 + iVar3) = 0x2315;
  for (uVar4 = in_CX >> 1; puVar5 = puVar5 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar1 = in_AX;
    in_AX = in_AX + 1;
    *puVar5 = *puVar1;
  }
  for (uVar4 = (uint)((in_CX & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
    puVar2 = puVar5;
    puVar5 = (undefined2 *)((int)puVar5 + 1);
    puVar1 = in_AX;
    in_AX = (undefined2 *)((int)in_AX + 1);
    *(undefined1 *)puVar2 = *(undefined1 *)puVar1;
  }
  return in_AX;
}


/* ===== 0x1e3f0 FUN_1000_e3f0  callers=['FUN_1000_cce1'] strings=['  * The special "cheat mode" password\n'] */

void __cdecl16near FUN_1000_e3f0(uint param_1)

{
  if (3 < param_1) {
    if (param_1 - 4 == g_545a) {
      FUN_1000_e40d();
    }
    else {
      FUN_1000_e447();
    }
  }
  return;
}


/* ===== 0x1e40d FUN_1000_e40d  callers=['FUN_1000_e3f0'] strings=['  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n'] */

void __cdecl16near FUN_1000_e40d(void)

{
  byte *in_BX;
  byte *pbVar1;
  
  pbVar1 = in_BX;
  if ((byte *)g_5458 != in_BX) {
    pbVar1 = *(byte **)(in_BX + 2);
    if ((*pbVar1 & 1) != 0) goto LAB_1000_e441;
    if (pbVar1 != (byte *)g_5458) {
      FUN_1000_e480();
      in_BX = pbVar1;
      pbVar1 = (byte *)*(undefined2 *)(pbVar1 + 2);
      goto LAB_1000_e441;
    }
  }
  gb_5458 = '\0';
  gb_5459 = '\0';
  gb_545a = '\0';
  gb_545b = '\0';
  gb_545c = '\0';
  gb_545d = '\0';
  in_BX = pbVar1;
  pbVar1 = (byte *)g_545a;
LAB_1000_e441:
  g_545a = pbVar1;
  FUN_1000_cfb0(in_BX);
  return;
}


/* ===== 0x1e447 FUN_1000_e447  callers=['FUN_1000_e3f0'] strings=['  * The special "cheat mode" password\n'] */

void __cdecl16near FUN_1000_e447(void)

{
  uint uVar1;
  uint *puVar2;
  uint *in_BX;
  uint *puVar3;
  
  *in_BX = *in_BX - 1;
  if (in_BX != (uint *)g_5458) {
    puVar3 = (uint *)in_BX[1];
    if ((*puVar3 & 1) == 0) {
      *puVar3 = *puVar3 + *in_BX;
      *(undefined2 *)((int)in_BX + *in_BX + 2) = puVar3;
      in_BX = puVar3;
      goto LAB_1000_e46a;
    }
  }
  FUN_1000_e49c();
LAB_1000_e46a:
  puVar3 = (uint *)(*in_BX + (int)in_BX);
  uVar1 = *puVar3;
  if ((uVar1 & 1) != 0) {
    return;
  }
  *in_BX = *in_BX + uVar1;
  *(undefined2 *)((int)puVar3 + uVar1 + 2) = in_BX;
  puVar2 = (uint *)puVar3[3];
  if (puVar3 != puVar2) {
    uVar1 = puVar3[2];
    g_545c = puVar2;
    puVar2[2] = uVar1;
    *(undefined2 *)(uVar1 + 6) = puVar2;
    return;
  }
  gb_545c = '\0';
  gb_545d = '\0';
  return;
}


/* ===== 0x1e480 FUN_1000_e480  callers=['FUN_1000_e40d', 'FUN_1000_e4bf'] strings=['  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n'] */

void __cdecl16near FUN_1000_e480(void)

{
  int iVar1;
  int iVar2;
  int in_BX;
  
  iVar1 = *(int *)(in_BX + 6);
  if (in_BX != iVar1) {
    iVar2 = *(int *)(in_BX + 4);
    g_545c = iVar1;
    *(int *)(iVar1 + 4) = iVar2;
    *(int *)(iVar2 + 6) = iVar1;
    return;
  }
  gb_545c = '\0';
  gb_545d = '\0';
  return;
}


/* ===== 0x1e49c FUN_1000_e49c  callers=['FUN_1000_e447'] strings=['  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n'] */

void __cdecl16near FUN_1000_e49c(void)

{
  int iVar1;
  undefined2 uVar2;
  int in_BX;
  
  uVar2 = g_545c;
  if (g_545c != 0) {
    iVar1 = *(int *)(g_545c + 6);
    *(int *)(g_545c + 6) = in_BX;
    *(int *)(iVar1 + 4) = in_BX;
    *(int *)(in_BX + 6) = iVar1;
    *(undefined2 *)(char *)(in_BX + 4) = uVar2;
    return;
  }
  g_545c = in_BX;
  *(int *)(in_BX + 4) = in_BX;
  *(int *)(in_BX + 6) = in_BX;
  return;
}


/* ===== 0x1e4bf FUN_1000_e4bf  callers=['FUN_1000_cce1'] strings=['  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n'] */

uint * __cdecl16near FUN_1000_e4bf(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xfffb) {
      uVar2 = param_1 + 5 & 0xfffe;
      if (uVar2 < 8) {
        uVar2 = 8;
      }
      if (g_5458 == 0) {
        puVar3 = (uint *)FUN_1000_e51f();
      }
      else {
        puVar3 = (uint *)g_545c;
        if (g_545c != 0) {
          do {
            if (uVar2 <= *puVar3) {
              if (*puVar3 < uVar2 + 8) {
                FUN_1000_e480();
                *puVar3 = *puVar3 + 1;
                return puVar3 + 2;
              }
              puVar3 = (uint *)FUN_1000_e588();
              return puVar3;
            }
            puVar1 = puVar3 + 3;
            puVar3 = (uint *)*puVar1;
          } while ((uint *)*puVar1 != (uint *)g_545c);
        }
        puVar3 = (uint *)FUN_1000_e55f();
      }
    }
    else {
      puVar3 = (uint *)0x0;
    }
  }
  return puVar3;
}


/* ===== 0x1e51f FUN_1000_e51f  callers=['FUN_1000_e4bf'] strings=['  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n'] */

int * __cdecl16near FUN_1000_e51f(void)

{
  int in_AX;
  uint uVar1;
  int *piVar2;
  
  uVar1 = FUN_1000_cfd2(0,0);
  if ((uVar1 & 1) != 0) {
    FUN_1000_cfd2(uVar1 & 1,0);
  }
  piVar2 = (int *)FUN_1000_cfd2(in_AX,0);
  if (piVar2 != (int *)0xffff) {
    g_5458 = piVar2;
    g_545a = piVar2;
    *piVar2 = in_AX + 1;
    return piVar2 + 2;
  }
  return (int *)0x0;
}


/* ===== 0x1e55f FUN_1000_e55f  callers=['FUN_1000_e4bf'] strings=['  * The special "cheat mode" password\n', '  * The special "cheat mode" password\n'] */

int * __cdecl16near FUN_1000_e55f(void)

{
  int in_AX;
  int *piVar1;
  
  piVar1 = (int *)FUN_1000_cfd2();
  if (piVar1 != (int *)0xffff) {
    piVar1[1] = g_545a;
    g_545a = piVar1;
    *piVar1 = in_AX + 1;
    return piVar1 + 2;
  }
  return (int *)0x0;
}


/* ===== 0x1e588 FUN_1000_e588  callers=['FUN_1000_e4bf'] strings=[] */

int * __cdecl16near FUN_1000_e588(void)

{
  int in_AX;
  int *in_BX;
  int *piVar1;
  
  *in_BX = *in_BX - in_AX;
  piVar1 = (int *)((int)in_BX + *in_BX);
  *piVar1 = in_AX + 1;
  piVar1[1] = (int)in_BX;
  *(undefined2 *)((int)piVar1 + in_AX + 2) = piVar1;
  return piVar1 + 2;
}


/* ===== 0x1e663 FUN_1000_e663  callers=['FUN_1000_0d8e', 'FUN_1000_23d4', 'FUN_1000_49a7', 'FUN_1000_4b54', 'FUN_1000_4bc3', 'FUN_1000_6f20'] strings=[] */

undefined4 __cdecl16near FUN_1000_e663(void)

{
  uint in_AX;
  int iVar1;
  int in_CX;
  int in_DX;
  uint in_BX;
  
  iVar1 = 0;
  if (in_DX != 0) {
    iVar1 = in_DX * in_BX;
  }
  if (in_CX != 0) {
    iVar1 = in_CX * in_AX + iVar1;
  }
  return CONCAT22((int)((ulong)in_AX * (ulong)in_BX >> 0x10) + iVar1,
                  (int)((ulong)in_AX * (ulong)in_BX));
}


/* ===== 0x1e67a FUN_1000_e67a  callers=['FUN_1000_5e52', 'FUN_1000_6a7b', 'FUN_1000_b4ec', 'FUN_1000_c707', 'FUN_1000_c746'] strings=[] */

uint __cdecl16near FUN_1000_e67a(void)

{
  uint in_AX;
  
  return in_AX & 0xf;
}


/* ===== 0x1e69b FUN_1000_e69b  callers=['FUN_1000_d90a'] strings=['  * The special "cheat mode" password\n'] */

void __cdecl16near FUN_1000_e69b(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001e69b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)g_546c)();
  return;
}


/* ===== 0x1e7c0 FUN_1e7c_0000  callers=['FUN_1e7c_004d', 'FUN_1e7c_0289', 'FUN_1e7c_0532', 'FUN_1e7c_0559'] strings=[] */

void __cdecl16near FUN_1e7c_0000(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int in_DX;
  undefined1 *unaff_SI;
  undefined1 *unaff_DI;
  undefined1 *puVar3;
  
  uVar2 = g_7d60;
  uVar1 = g_34ee;
  *unaff_DI = *unaff_SI;
  unaff_DI[1] = unaff_SI[1];
  puVar3 = unaff_DI + in_DX + 2;
  *puVar3 = unaff_SI[2];
  puVar3[1] = unaff_SI[3];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[4];
  puVar3[1] = unaff_SI[5];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[6];
  puVar3[1] = unaff_SI[7];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[8];
  puVar3[1] = unaff_SI[9];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[10];
  puVar3[1] = unaff_SI[0xb];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[0xc];
  puVar3[1] = unaff_SI[0xd];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[0xe];
  puVar3[1] = unaff_SI[0xf];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[0x10];
  puVar3[1] = unaff_SI[0x11];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[0x12];
  puVar3[1] = unaff_SI[0x13];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[0x14];
  puVar3[1] = unaff_SI[0x15];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[0x16];
  puVar3[1] = unaff_SI[0x17];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[0x18];
  puVar3[1] = unaff_SI[0x19];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[0x1a];
  puVar3[1] = unaff_SI[0x1b];
  puVar3 = puVar3 + in_DX + 2;
  *puVar3 = unaff_SI[0x1c];
  puVar3[1] = unaff_SI[0x1d];
  puVar3[in_DX + 2] = unaff_SI[0x1e];
  (puVar3 + in_DX + 2)[1] = unaff_SI[0x1f];
  return;
}


/* ===== 0x1e80d FUN_1e7c_004d  callers=['FUN_1000_b8d8'] strings=['  * The latest version of each game\n'] */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1e7c_004d(void)

{
  int iVar1;
  uint uVar2;
  undefined1 in_AL;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 *puVar7;
  undefined2 *extraout_DX;
  undefined2 *extraout_DX_00;
  undefined2 *extraout_DX_01;
  undefined2 *extraout_DX_02;
  undefined2 *extraout_DX_03;
  undefined2 *extraout_DX_04;
  undefined2 *extraout_DX_05;
  undefined2 *extraout_DX_06;
  undefined2 *extraout_DX_07;
  undefined2 *extraout_DX_08;
  undefined2 *extraout_DX_09;
  undefined2 *extraout_DX_10;
  undefined2 *extraout_DX_11;
  undefined2 *extraout_DX_12;
  undefined2 *extraout_DX_13;
  undefined2 *extraout_DX_14;
  undefined2 *extraout_DX_15;
  undefined2 *extraout_DX_16;
  undefined2 *extraout_DX_17;
  undefined2 *extraout_DX_18;
  undefined2 *extraout_DX_19;
  undefined2 *extraout_DX_20;
  undefined2 *extraout_DX_21;
  undefined2 *extraout_DX_22;
  undefined2 *extraout_DX_23;
  undefined2 *extraout_DX_24;
  undefined2 *extraout_DX_25;
  undefined2 *extraout_DX_26;
  undefined2 *extraout_DX_27;
  undefined2 *extraout_DX_28;
  undefined2 *extraout_DX_29;
  undefined2 *extraout_DX_30;
  undefined2 *extraout_DX_31;
  undefined2 *extraout_DX_32;
  undefined2 *extraout_DX_33;
  undefined2 *extraout_DX_34;
  undefined2 *extraout_DX_35;
  undefined2 *extraout_DX_36;
  undefined2 *extraout_DX_37;
  undefined2 extraout_DX_38;
  undefined2 uVar8;
  int *in_BX;
  int iVar9;
  byte bVar10;
  uint *puVar11;
  int unaff_BP;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  byte in_AF;
  byte bVar12;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  undefined4 uVar13;
  
  puVar7 = (undefined2 *)0x2e;
  iVar1 = *(int *)(unaff_BP + *in_BX * 2);
  if (iVar1 != g_5944) {
    unaff_DI = 0x604;
    g_5944 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[1] * 2);
  if (iVar1 != g_5946) {
    unaff_DI = 0x606;
    g_5946 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_00;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[2] * 2);
  if (iVar1 != g_5948) {
    unaff_DI = 0x608;
    g_5948 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_01;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[3] * 2);
  if (iVar1 != g_594a) {
    unaff_DI = 0x60a;
    g_594a = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_02;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[4] * 2);
  if (iVar1 != g_594c) {
    unaff_DI = 0x60c;
    g_594c = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_03;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[5] * 2);
  if (iVar1 != g_594e) {
    unaff_DI = 0x60e;
    g_594e = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_04;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[6] * 2);
  if (iVar1 != g_5950) {
    unaff_DI = 0x610;
    g_5950 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_05;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[7] * 2);
  if (iVar1 != g_5952) {
    unaff_DI = 0x612;
    g_5952 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_06;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[8] * 2);
  if (iVar1 != g_5954) {
    unaff_DI = 0x614;
    g_5954 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_07;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[9] * 2);
  if (iVar1 != g_5956) {
    unaff_DI = 0x616;
    g_5956 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_08;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[10] * 2);
  if (iVar1 != g_5958) {
    unaff_DI = 0x618;
    g_5958 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_09;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[0xb] * 2);
  if (iVar1 != g_595a) {
    unaff_DI = 0x61a;
    g_595a = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_10;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[0xc] * 2);
  if (iVar1 != g_595c) {
    unaff_DI = 0x61c;
    g_595c = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_11;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[0xd] * 2);
  if (iVar1 != g_595e) {
    unaff_DI = 0x61e;
    g_595e = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_12;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[0xe] * 2);
  if (iVar1 != g_5960) {
    unaff_DI = 0x620;
    g_5960 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_13;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[0xf] * 2);
  if (iVar1 != g_5962) {
    unaff_DI = 0x622;
    g_5962 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_14;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[0x10] * 2);
  if (iVar1 != g_5964) {
    unaff_DI = 0x624;
    g_5964 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_15;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[0x11] * 2);
  if (iVar1 != g_5966) {
    unaff_DI = 0x626;
    g_5966 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_16;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[0x12] * 2);
  if (iVar1 != g_5968) {
    unaff_DI = 0x628;
    g_5968 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_17;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[0x13] * 2);
  if (iVar1 != g_596a) {
    unaff_DI = 0x62a;
    g_596a = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_18;
  }
  iVar1 = *(int *)(unaff_BP + in_BX[0x14] * 2);
  if (iVar1 != g_596c) {
    unaff_DI = 0x62c;
    g_596c = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_19;
  }
  iVar9 = (int)in_BX + g_5482;
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x2a) * 2);
  if (iVar1 != g_596e) {
    unaff_DI = 0x904;
    g_596e = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_20;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x2c) * 2);
  if (iVar1 != g_5970) {
    unaff_DI = 0x906;
    g_5970 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_21;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x2e) * 2);
  if (iVar1 != g_5972) {
    unaff_DI = 0x908;
    g_5972 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_22;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x30) * 2);
  if (iVar1 != g_5974) {
    unaff_DI = 0x90a;
    g_5974 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_23;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x32) * 2);
  if (iVar1 != g_5976) {
    unaff_DI = 0x90c;
    g_5976 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_24;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x34) * 2);
  if (iVar1 != g_5978) {
    unaff_DI = 0x90e;
    g_5978 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_25;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x36) * 2);
  if (iVar1 != g_597a) {
    unaff_DI = 0x910;
    g_597a = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_26;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x38) * 2);
  if (iVar1 != g_597c) {
    unaff_DI = 0x912;
    g_597c = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_27;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x3a) * 2);
  if (iVar1 != g_597e) {
    unaff_DI = 0x914;
    g_597e = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_28;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x3c) * 2);
  if (iVar1 != g_5980) {
    unaff_DI = 0x916;
    g_5980 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_29;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x3e) * 2);
  if (iVar1 != g_5982) {
    unaff_DI = 0x918;
    g_5982 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_30;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x40) * 2);
  if (iVar1 != g_5984) {
    unaff_DI = 0x91a;
    g_5984 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_31;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x42) * 2);
  if (iVar1 != g_5986) {
    unaff_DI = 0x91c;
    g_5986 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_32;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x44) * 2);
  if (iVar1 != g_5988) {
    unaff_DI = 0x91e;
    g_5988 = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_33;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x46) * 2);
  if (iVar1 != g_596a) {
    unaff_DI = 0x920;
    g_596a = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_34;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x48) * 2);
  if (iVar1 != g_598c) {
    unaff_DI = 0x922;
    g_598c = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_35;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x4a) * 2);
  if (iVar1 != g_598e) {
    unaff_DI = 0x924;
    g_598e = iVar1;
    in_AL = FUN_1e7c_0000();
    puVar7 = extraout_DX_36;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(iVar9 + 0x4c) * 2);
  if (iVar1 != g_5994) {
    unaff_DI = 0x926;
    g_5994 = iVar1;
    in_AL = func_0x000133c0();
    puVar7 = extraout_DX_37;
  }
  out(0x8b,in_AL);
  bVar10 = (byte)((uint)iVar9 >> 8) ^ *(byte *)(unaff_BP + unaff_DI);
  iVar9 = CONCAT11(bVar10,(char)iVar9);
  if (bVar10 != 0) {
    unaff_DI = 0x928;
    g_5992 = iVar1 << 1;
    puVar7 = (undefined2 *)FUN_1e7c_0000();
  }
  uVar8 = *(undefined2 *)(iVar9 + iVar1 * 4 + -0x2f);
  out(0x8b,(char)puVar7);
  bVar10 = (byte)((uint)iVar9 >> 8) ^ *(byte *)(unaff_BP + unaff_DI);
  iVar9 = CONCAT11(bVar10,(char)iVar9);
  uVar3 = 2;
  uVar6 = *puVar7;
  if (bVar10 != 0) {
    g_5994 = iVar1 * 4;
    *puVar7 = 0xebed;
    uVar3 = FUN_1e7c_0000();
    uVar8 = extraout_DX_38;
  }
  out(0x8b,uVar3);
  *puVar7 = uVar8;
  iVar1 = *(int *)(unaff_BP + iVar1 * 8);
  if (iVar1 != g_5996) {
    g_5996 = iVar1;
    puVar7[-1] = 0xec05;
    FUN_1e7c_0000();
  }
  iVar9 = iVar9 + g_5482;
  uVar8 = *(undefined2 *)(iVar9 + 0x54);
  puVar7[-1] = puVar7;
  puVar7[-2] = 0xec21;
  uVar3 = FUN_1e7c_0000();
  out(0x8b,uVar3);
  puVar7[-2] = uVar8;
  iVar1 = *(int *)(iVar9 + 0x54);
  puVar7[-3] = 0x1e7c;
  puVar11 = puVar7 + -4;
  puVar7[-4] = 0xec36;
  func_0x00018494();
  puVar11[-1] = 0xec39;
  uVar3 = FUN_1e7c_0000();
  out(0x8b,uVar3);
  uVar5 = *(uint *)(unaff_BP + iVar1 * 2);
  uVar2 = uVar5 - g_549c;
  *puVar11 = (uint)(in_NT & 1) * 0x4000 |
             (uint)SBORROW2(uVar5,g_549c) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)uVar2 < 0) * 0x80 |
             (uint)(uVar2 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
             (uint)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
             (uint)(uVar5 < (uint)g_549c);
  puVar11[-1] = (uint)puVar11;
  puVar11[-2] = 0xec51;
  uVar5 = FUN_1e7c_0000();
  out(0x8b,(char)uVar5);
  bVar12 = (uVar5 & 0x1000) != 0;
  puVar11[-1] = (uint)puVar11;
  puVar11[-2] = 0xec69;
  uVar3 = FUN_1e7c_0000();
  out(0x8b,uVar3);
  puVar7 = (undefined2 *)puVar11[-1];
  puVar7[-1] = 0xec81;
  uVar13 = FUN_1e7c_0000();
  bVar10 = (byte)uVar13;
  out(0x8b,bVar10);
  uVar8 = *(undefined2 *)(iVar9 + 0x54);
  g_bf54 = bVar10;
  *puVar7 = 0xc54;
  bVar10 = bVar10 | 0xe8;
  cVar4 = bVar10 + (9 < (bVar10 & 0xf) | bVar12) * '\x06' + (0x99 < bVar10) * '`';
  out(0x8b,cVar4);
  puVar7[-1] = CONCAT11((char)((ulong)uVar13 >> 8),cVar4);
  puVar7[-2] = uVar6;
  puVar7[-3] = (int)((ulong)uVar13 >> 0x10);
  puVar7[-4] = iVar9;
  puVar7[-5] = puVar7;
  puVar7[-6] = unaff_BP;
  puVar7[-7] = uVar8;
  puVar7[-8] = 0xc0a;
  *(undefined1 *)0xc0a = *(undefined1 *)*(undefined2 *)(iVar9 + 0x54);
  puVar7[-9] = puVar7 + -8;
  puVar7[-10] = 0xecb1;
  uVar3 = FUN_1e7c_0000();
  out(0x8b,uVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x1ea49 FUN_1e7c_0289  callers=['FUN_1e7c_0704'] strings=['  * The latest version of each game\n', '  * SEVERAL FREE BONUS GAMES!\n\n'] */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1e7c_0289(void)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined1 in_AL;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 *in_DX;
  undefined2 *extraout_DX;
  undefined2 *extraout_DX_00;
  undefined2 *extraout_DX_01;
  undefined2 *extraout_DX_02;
  undefined2 *extraout_DX_03;
  undefined2 *extraout_DX_04;
  undefined2 *extraout_DX_05;
  undefined2 *extraout_DX_06;
  undefined2 *extraout_DX_07;
  undefined2 *extraout_DX_08;
  undefined2 *extraout_DX_09;
  undefined2 *extraout_DX_10;
  undefined2 *extraout_DX_11;
  undefined2 *extraout_DX_12;
  undefined2 *extraout_DX_13;
  undefined2 *extraout_DX_14;
  undefined2 extraout_DX_15;
  undefined2 uVar8;
  int in_BX;
  byte bVar10;
  int iVar9;
  uint *puVar11;
  int unaff_BP;
  undefined2 unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  byte in_AF;
  byte bVar12;
  bool in_ZF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  undefined4 uVar13;
  
  if (!in_ZF) {
    unaff_DI = 0x908;
    g_5972 = unaff_SI;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x30) * 2);
  if (iVar1 != g_5974) {
    unaff_DI = 0x90a;
    g_5974 = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_00;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x32) * 2);
  if (iVar1 != g_5976) {
    unaff_DI = 0x90c;
    g_5976 = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_01;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x34) * 2);
  if (iVar1 != g_5978) {
    unaff_DI = 0x90e;
    g_5978 = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_02;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x36) * 2);
  if (iVar1 != g_597a) {
    unaff_DI = 0x910;
    g_597a = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_03;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x38) * 2);
  if (iVar1 != g_597c) {
    unaff_DI = 0x912;
    g_597c = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_04;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x3a) * 2);
  if (iVar1 != g_597e) {
    unaff_DI = 0x914;
    g_597e = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_05;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x3c) * 2);
  if (iVar1 != g_5980) {
    unaff_DI = 0x916;
    g_5980 = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_06;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x3e) * 2);
  if (iVar1 != g_5982) {
    unaff_DI = 0x918;
    g_5982 = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_07;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x40) * 2);
  if (iVar1 != g_5984) {
    unaff_DI = 0x91a;
    g_5984 = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_08;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x42) * 2);
  if (iVar1 != g_5986) {
    unaff_DI = 0x91c;
    g_5986 = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_09;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x44) * 2);
  if (iVar1 != g_5988) {
    unaff_DI = 0x91e;
    g_5988 = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_10;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x46) * 2);
  if (iVar1 != g_596a) {
    unaff_DI = 0x920;
    g_596a = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_11;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x48) * 2);
  if (iVar1 != g_598c) {
    unaff_DI = 0x922;
    g_598c = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_12;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x4a) * 2);
  if (iVar1 != g_598e) {
    unaff_DI = 0x924;
    g_598e = iVar1;
    in_AL = FUN_1e7c_0000();
    in_DX = extraout_DX_13;
  }
  iVar1 = *(int *)(unaff_BP + *(int *)(in_BX + 0x4c) * 2);
  if (iVar1 != g_5994) {
    unaff_DI = 0x926;
    g_5994 = iVar1;
    in_AL = func_0x000133c0();
    in_DX = extraout_DX_14;
  }
  out(0x8b,in_AL);
  bVar10 = (byte)((uint)in_BX >> 8) ^ *(byte *)(unaff_BP + unaff_DI);
  iVar9 = CONCAT11(bVar10,(char)in_BX);
  if (bVar10 != 0) {
    unaff_DI = 0x928;
    g_5992 = iVar1 << 1;
    in_DX = (undefined2 *)FUN_1e7c_0000();
  }
  uVar8 = *(undefined2 *)(iVar9 + iVar1 * 4 + -0x2f);
  out(0x8b,(char)in_DX);
  bVar10 = (byte)((uint)iVar9 >> 8) ^ *(byte *)(unaff_BP + unaff_DI);
  iVar9 = CONCAT11(bVar10,(char)iVar9);
  uVar4 = 2;
  uVar7 = *in_DX;
  if (bVar10 != 0) {
    g_5994 = iVar1 * 4;
    *in_DX = 0xebed;
    uVar4 = FUN_1e7c_0000();
    uVar8 = extraout_DX_15;
  }
  out(0x8b,uVar4);
  *in_DX = uVar8;
  iVar1 = *(int *)(unaff_BP + iVar1 * 8);
  if (iVar1 != g_5996) {
    g_5996 = iVar1;
    in_DX[-1] = 0xec05;
    FUN_1e7c_0000();
  }
  iVar9 = iVar9 + g_5482;
  uVar8 = *(undefined2 *)(iVar9 + 0x54);
  in_DX[-1] = in_DX;
  in_DX[-2] = 0xec21;
  uVar4 = FUN_1e7c_0000();
  out(0x8b,uVar4);
  in_DX[-2] = uVar8;
  iVar1 = *(int *)(iVar9 + 0x54);
  in_DX[-3] = 0x1e7c;
  puVar11 = in_DX + -4;
  in_DX[-4] = 0xec36;
  func_0x00018494();
  puVar11[-1] = 0xec39;
  uVar4 = FUN_1e7c_0000();
  out(0x8b,uVar4);
  uVar6 = *(uint *)(unaff_BP + iVar1 * 2);
  uVar2 = uVar6 - g_549c;
  *puVar11 = (uint)(in_NT & 1) * 0x4000 |
             (uint)SBORROW2(uVar6,g_549c) * 0x800 |
             (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)uVar2 < 0) * 0x80 |
             (uint)(uVar2 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
             (uint)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 |
             (uint)(uVar6 < (uint)g_549c);
  puVar11[-1] = (uint)puVar11;
  puVar11[-2] = 0xec51;
  uVar6 = FUN_1e7c_0000();
  out(0x8b,(char)uVar6);
  bVar12 = (uVar6 & 0x1000) != 0;
  puVar11[-1] = (uint)puVar11;
  puVar11[-2] = 0xec69;
  uVar4 = FUN_1e7c_0000();
  out(0x8b,uVar4);
  puVar3 = (undefined2 *)puVar11[-1];
  puVar3[-1] = 0xec81;
  uVar13 = FUN_1e7c_0000();
  bVar10 = (byte)uVar13;
  out(0x8b,bVar10);
  uVar8 = *(undefined2 *)(iVar9 + 0x54);
  g_bf54 = bVar10;
  *puVar3 = 0xc54;
  bVar10 = bVar10 | 0xe8;
  cVar5 = bVar10 + (9 < (bVar10 & 0xf) | bVar12) * '\x06' + (0x99 < bVar10) * '`';
  out(0x8b,cVar5);
  puVar3[-1] = CONCAT11((char)((ulong)uVar13 >> 8),cVar5);
  puVar3[-2] = uVar7;
  puVar3[-3] = (int)((ulong)uVar13 >> 0x10);
  puVar3[-4] = iVar9;
  puVar3[-5] = puVar3;
  puVar3[-6] = unaff_BP;
  puVar3[-7] = uVar8;
  puVar3[-8] = 0xc0a;
  *(undefined1 *)0xc0a = *(undefined1 *)*(undefined2 *)(iVar9 + 0x54);
  puVar3[-9] = puVar3 + -8;
  puVar3[-10] = 0xecb1;
  uVar4 = FUN_1e7c_0000();
  out(0x8b,uVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x1ecf2 FUN_1e7c_0532  callers=['FUN_1e7c_0bfc'] strings=[] */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1e7c_0532(void)

{
  undefined1 uVar1;
  undefined2 extraout_DX;
  undefined2 unaff_ES;
  undefined1 *puStack_6;
  undefined1 *puStack_4;
  
  puStack_4 = (undefined1 *)0xecf9;
  uVar1 = FUN_1e7c_0000();
  out(0x8b,uVar1);
  puStack_4 = (undefined1 *)0xddc6;
  puStack_6 = (undefined1 *)0xed02;
  func_0x0001eb2e();
  puStack_6 = (undefined1 *)0xed11;
  puStack_4 = &stack0xfffe;
  uVar1 = FUN_1e7c_0000();
  out(0x8b,uVar1);
  puStack_6 = (undefined1 *)&puStack_4;
  uVar1 = FUN_1e7c_0000(&puStack_6);
  out(0x8b,uVar1);
  uVar1 = in(extraout_DX);
  *(undefined1 *)0xc1a = uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x1ed19 FUN_1e7c_0559  callers=['FUN_1e7c_0962'] strings=[] */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1e7c_0559(void)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined2 extraout_DX;
  int unaff_BP;
  int unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  pcVar1 = (char *)(unaff_BP + unaff_SI + -0x52);
  *pcVar1 = *pcVar1 + '\x01';
  uVar2 = FUN_1e7c_0000(&stack0xfffe);
  out(0x8b,uVar2);
  uVar2 = in(extraout_DX);
  *(undefined1 *)0xc1a = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x1eec4 FUN_1e7c_0704  callers=['FUN_1e7c_0962'] strings=['  * SEVERAL FREE BONUS GAMES!\n\n', '  * SEVERAL FREE BONUS GAMES!\n\n', '  * SEVERAL FREE BONUS GAMES!\n\n', '  * SEVERAL FREE BONUS GAMES!\n\n'] */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1e7c_0704(void)

{
  undefined2 uVar1;
  undefined1 in_AL;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  undefined2 in_CX;
  int in_BX;
  int iVar5;
  undefined2 *puVar7;
  int unaff_BP;
  int unaff_SI;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  bool bVar8;
  byte in_AF;
  byte bVar9;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  undefined4 uVar10;
  undefined1 *puStack_6;
  undefined1 *local_4;
  uint uStack_2;
  byte bVar6;
  
  uVar1 = *(undefined2 *)(in_BX + unaff_SI + -0x2f);
  out(0x8b,in_AL);
  bVar6 = (byte)((uint)uVar1 >> 8) ^ *(byte *)(unaff_BP + unaff_DI);
  iVar5 = CONCAT11(bVar6,(char)uVar1);
  bVar8 = (POPCOUNT(bVar6) & 1U) == 0;
  uStack_2 = (uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
             (uint)((char)bVar6 < '\0') * 0x80 | (uint)(bVar6 == 0) * 0x40 |
             (uint)(in_AF & 1) * 0x10 | (uint)bVar8 * 4;
  local_4 = (undefined1 *)&uStack_2;
  puStack_6 = (undefined1 *)
              ((uint)(in_NT & 1) * 0x4000 | (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
               (uint)((char)bVar6 < '\0') * 0x80 | (uint)(bVar6 == 0) * 0x40 |
               (uint)(in_AF & 1) * 0x10 | (uint)bVar8 * 4);
  uVar4 = FUN_1e7c_0289(&puStack_6);
  out(0x8b,(char)uVar4);
  puStack_6 = (undefined1 *)&local_4;
  bVar9 = (uVar4 & 0x1000) != 0;
  uVar2 = FUN_1e7c_0289();
  out(0x8b,uVar2);
  puVar7 = (undefined2 *)(local_4 + -2);
  *(undefined2 *)(local_4 + -2) = 0xef0a;
  uVar10 = FUN_1e7c_0289();
  bVar6 = (byte)uVar10;
  out(0x8b,bVar6);
  uVar1 = *(undefined2 *)(iVar5 + 0x54);
  g_bf54 = bVar6;
  *puVar7 = 0x1e7c;
  bVar6 = bVar6 | 0xe8;
  cVar3 = bVar6 + (9 < (bVar6 & 0xf) | bVar9) * '\x06' + (0x99 < bVar6) * '`';
  out(0x8b,cVar3);
  puVar7[-1] = CONCAT11((char)((ulong)uVar10 >> 8),cVar3);
  puVar7[-2] = in_CX;
  puVar7[-3] = (int)((ulong)uVar10 >> 0x10);
  puVar7[-4] = iVar5;
  puVar7[-5] = puVar7;
  puVar7[-6] = unaff_BP;
  puVar7[-7] = uVar1;
  puVar7[-8] = 0xc0a;
  *(undefined1 *)0xc0a = *(undefined1 *)*(undefined2 *)(iVar5 + 0x54);
  puVar7[-9] = puVar7 + -8;
  puVar7[-10] = 0xef3a;
  uVar2 = FUN_1e7c_0289();
  out(0x8b,uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x1f10a FUN_1e7c_094a  callers=[] strings=[] */

undefined4 __cdecl16near FUN_1e7c_094a(undefined2 param_1,undefined2 param_2)

{
  out(param_1,param_2);
  return CONCAT22(param_1,param_2);
}


/* ===== 0x1f116 FUN_1e7c_0956  callers=[] strings=[] */

undefined1 __cdecl16near FUN_1e7c_0956(undefined2 param_1,undefined1 param_2)

{
  out(param_1,param_2);
  return param_2;
}


/* ===== 0x1f122 FUN_1e7c_0962  callers=[] strings=[] */

/* WARNING: Instruction at (ram,0x0001f236) overlaps instruction at (ram,0x0001f235)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_1e7c_0962(int param_1,char *param_2,char *param_3,undefined1 *param_4)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  char *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined2 extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar7;
  char extraout_DH;
  char extraout_DH_00;
  char extraout_DH_01;
  char extraout_DH_02;
  char extraout_DH_03;
  char extraout_DH_04;
  char extraout_DH_05;
  char extraout_DH_06;
  char extraout_DH_07;
  char cVar8;
  char *in_BX;
  byte bVar9;
  char *unaff_SI;
  char *pcVar10;
  char *unaff_DI;
  char *pcVar11;
  char *unaff_ES;
  undefined2 unaff_SS;
  char cVar12;
  undefined8 in_MM4;
  undefined4 uVar13;
  char *pcVar14;
  undefined2 uVar15;
  char local_5;
  int local_4;
  
  pcVar10 = unaff_ES;
  if (((char *)&g_0002 <= param_3 + 1) &&
     (in_BX = (char *)(param_1 * 2), (*(uint *)(in_BX + 0x5346) & 0x200) == 0)) {
    do {
      pcVar14 = param_3;
                    /* WARNING: Call to offcut address within same function */
      uVar13 = func_0x0001f1d7(param_1,param_2,param_3);
      local_4 = (int)uVar13;
      pcVar10 = unaff_ES;
      if ((local_4 + 1U < 2) ||
         (in_BX = (char *)(param_1 * 2), (*(uint *)(in_BX + 0x5346) & 0x8000) != 0))
      goto code_r0x0001f1d2;
      unaff_ES = (char *)0x2315;
      iVar6 = local_4;
      pcVar10 = param_2;
      pcVar4 = param_2;
      do {
        while( true ) {
          pcVar11 = pcVar4;
          unaff_SI = pcVar10 + 1;
          cVar8 = *pcVar10;
          if (cVar8 == '\x1a') {
            uVar15 = 1;
            out((int)((ulong)uVar13 >> 0x10),1);
            if ((POPCOUNT(-iVar6 & 0xff) & 1U) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (iVar6 == 0 && -iVar6 != 0) goto code_r0x0001f227;
            goto code_r0x0001f1ed;
          }
          pcVar10 = unaff_SI;
          if (cVar8 == '\r') break;
          *pcVar11 = cVar8;
          iVar6 = iVar6 + -1;
          in_BX = param_2;
          pcVar4 = pcVar11 + 1;
          if (iVar6 == 0) goto LAB_1e7c_09e6;
        }
        iVar6 = iVar6 + -1;
        pcVar4 = pcVar11;
      } while (iVar6 != 0);
      unaff_ES = (char *)((int)(undefined2 *)&g_0000 + 1);
      in_BX = &local_5;
      pcVar14 = param_2;
                    /* WARNING: Call to offcut address within same function */
      func_0x0001f1d7(param_1,in_BX,1,param_2,0x2315);
      *pcVar11 = local_5;
LAB_1e7c_09e6:
      unaff_DI = pcVar11 + 1;
    } while (unaff_DI == in_BX);
    (in_BX + (int)unaff_SI)[0] = -0x15;
    (in_BX + (int)unaff_SI)[1] = '\x06';
    pcVar10 = pcVar14;
  }
code_r0x0001f1d2:
  uVar15 = 0x1e7c;
  uVar5 = FUN_1000_7dbe(pcVar10,0x1e7c);
  cVar8 = (char)in_BX;
  bVar9 = (byte)((uint)in_BX >> 8) ^ (&stack0xfffe)[(int)unaff_DI];
  param_2 = (char *)CONCAT11(bVar9,cVar8);
  if ((char)bVar9 < '\x01') {
    out(0x8b,uVar5);
    bVar1 = (&stack0xfffe)[(int)unaff_DI];
    LOCK();
    cVar12 = unaff_DI[CONCAT11(bVar9 ^ bVar1,cVar8) + 0x74];
    unaff_DI[CONCAT11(bVar9 ^ bVar1,cVar8) + 0x74] = cVar8;
    param_2 = (char *)CONCAT11(bVar9 ^ bVar1,cVar12);
    UNLOCK();
  }
  else {
    uVar7 = extraout_DX;
    if (bVar9 != 0) {
      g_597e = unaff_SI;
      FUN_1e7c_0704();
      uVar7 = extraout_DX_00;
    }
    uVar13 = CONCAT22(uVar7,local_4);
    unaff_SI = *(char **)(param_2 + 0x3c);
code_r0x0001f1ed:
    local_4 = (int)uVar13;
    cVar8 = (char)((ulong)uVar13 >> 0x18);
    if (*(int *)(&stack0xfffe + (int)unaff_SI * 2) != g_5980) {
      g_5980 = *(int *)(&stack0xfffe + (int)unaff_SI * 2);
      FUN_1e7c_0704(uVar15);
      cVar8 = extraout_DH;
    }
    if (*(int *)(&stack0xfffe + *(int *)(param_2 + 0x3e) * 2) != g_5982) {
      g_5982 = *(int *)(&stack0xfffe + *(int *)(param_2 + 0x3e) * 2);
      FUN_1e7c_0704(uVar15);
      cVar8 = extraout_DH_00;
    }
    unaff_SI = *(char **)(&stack0xfffe + *(int *)(param_2 + 0x40) * 2);
    if (unaff_SI != g_5984) {
code_r0x0001f227:
      g_5984 = unaff_SI;
      FUN_1e7c_0704(uVar15);
      cVar8 = extraout_DH_01;
    }
    unaff_SI = *(char **)(&stack0xfffe + *(int *)(param_2 + 0x42) * 2);
    if (unaff_SI == g_5986) goto LAB_1e7c_0a89;
  }
  g_5986 = unaff_SI;
  FUN_1e7c_0704(uVar15);
  cVar8 = extraout_DH_02;
LAB_1e7c_0a89:
  if (*(int *)(&stack0xfffe + *(int *)(param_2 + 0x44) * 2) != g_5988) {
    g_5988 = *(int *)(&stack0xfffe + *(int *)(param_2 + 0x44) * 2);
    FUN_1e7c_0704(uVar15);
    cVar8 = extraout_DH_03;
  }
  if (*(int *)(&stack0xfffe + *(int *)(param_2 + 0x46) * 2) != g_596a) {
    g_596a = *(int *)(&stack0xfffe + *(int *)(param_2 + 0x46) * 2);
    FUN_1e7c_0704();
    cVar8 = extraout_DH_04;
  }
  if (*(int *)(&stack0xfffe + *(int *)(param_2 + 0x48) * 2) != g_598c) {
    g_598c = *(int *)(&stack0xfffe + *(int *)(param_2 + 0x48) * 2);
    FUN_1e7c_0704();
    cVar8 = extraout_DH_05;
  }
  if (*(int *)(&stack0xfffe + *(int *)(param_2 + 0x4a) * 2) != g_598e) {
    g_598e = *(int *)(&stack0xfffe + *(int *)(param_2 + 0x4a) * 2);
    FUN_1e7c_0704();
    cVar8 = extraout_DH_06;
  }
  uVar2 = *(uint *)(&stack0xfffe + *(int *)(param_2 + 0x4c) * 2);
  cVar12 = uVar2 < g_5994;
  if (uVar2 != g_5994) {
    g_5994 = uVar2;
    FUN_1000_de5a();
    cVar8 = extraout_DH_07;
  }
  param_2[-0xc] = param_2[-0xc] + cVar8 + cVar12;
  uVar5 = FUN_1e7c_0559();
  out(0x8b,uVar5);
  iVar6 = *(int *)(uVar2 * 2 + -0x2f);
  *(int *)(iVar6 + -2) = uVar2 * 2;
  *(undefined2 *)(iVar6 + -4) = param_4;
  *(undefined2 *)(iVar6 + -6) = 0x2315;
  *param_4 = uVar5;
  *(int *)(iVar6 + -8) = iVar6 + -6;
  psubsb(in_MM4,*(undefined8 *)(param_4 + iVar6 + -0x3cc8));
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* ===== 0x1f305 FUN_1e7c_0b45  callers=[] strings=[] */

ulong __cdecl16near FUN_1e7c_0b45(void)

{
  code *pcVar1;
  ulong uVar2;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  return uVar2 & 0xffff0080;
}


/* ===== 0x1f316 FUN_1e7c_0b56  callers=[] strings=[] */

void __cdecl16near FUN_1e7c_0b56(int param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = false;
  *(uint *)((char *)0x5346 + param_1 * 2) =
       *(uint *)((char *)0x5346 + param_1 * 2) & 0xfdff;
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (bVar2) {
    func_0x0001f2c8();
  }
  return;
}


/* ===== 0x1f33f FUN_1e7c_0b7f  callers=[] strings=[] */

char * FUN_1e7c_0b7f(char param_1,char param_2,uint param_3,char *param_4,uint param_5,uint param_6)

{
  char *pcVar1;
  byte bVar2;
  ulong uVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  byte local_24 [34];
  
  pcVar7 = param_4;
  if ((param_3 < 0x25) && (1 < (byte)param_3)) {
    if (((int)param_6 < 0) && (param_2 != '\0')) {
      *param_4 = '-';
      pcVar7 = param_4 + 1;
      bVar8 = param_5 != 0;
      param_5 = -param_5;
      param_6 = -(uint)bVar8 - param_6;
    }
    pbVar6 = local_24;
    if (param_6 == 0) goto LAB_1e7c_0bc9;
    do {
      uVar3 = (ulong)param_6;
      param_6 = param_6 / param_3;
      uVar3 = uVar3 % (ulong)param_3 << 0x10 | (ulong)param_5;
      param_5 = (uint)(uVar3 / param_3);
      *pbVar6 = (byte)(uVar3 % (ulong)param_3);
      pbVar6 = pbVar6 + 1;
    } while (param_6 != 0);
    while (param_5 != 0) {
LAB_1e7c_0bc9:
      *pbVar6 = (byte)(param_5 % param_3);
      pbVar6 = pbVar6 + 1;
      param_5 = param_5 / param_3;
    }
    iVar5 = (int)pbVar6 - (int)local_24;
    do {
      pbVar6 = pbVar6 + -1;
      bVar2 = *pbVar6;
      if (bVar2 < 10) {
        cVar4 = bVar2 + 0x30;
      }
      else {
        cVar4 = (bVar2 - 10) + param_1;
      }
      pcVar1 = pcVar7;
      pcVar7 = pcVar7 + 1;
      *pcVar1 = cVar4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *pcVar7 = '\0';
  return param_4;
}


/* ===== 0x1f392 FUN_1e7c_0bd2  callers=['FUN_1e7c_0e9f'] strings=[] */

undefined2 FUN_1e7c_0bd2(void)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint in_AX;
  int iVar4;
  uint in_BX;
  int unaff_BP;
  byte *unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined1 in_ZF;
  
  while (!(bool)in_ZF) {
    *unaff_SI = (byte)(in_AX % in_BX);
    unaff_SI = unaff_SI + 1;
    in_ZF = in_AX / in_BX == 0;
    in_AX = in_AX / in_BX;
  }
  iVar4 = (int)unaff_SI - (unaff_BP + -0x22);
  do {
    unaff_SI = unaff_SI + -1;
    bVar2 = *unaff_SI;
    if (bVar2 < 10) {
      cVar3 = bVar2 + 0x30;
    }
    else {
      cVar3 = (bVar2 - 10) + *(char *)(unaff_BP + 4);
    }
    pcVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar1 = cVar3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *unaff_DI = '\0';
  return *(undefined2 *)(unaff_BP + 10);
}


/* ===== 0x1f3bc FUN_1e7c_0bfc  callers=[] strings=[] */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001f3c6) overlaps instruction at (ram,0x0001f3c5)
    */
/* WARNING: Removing unreachable block (ram,0x0001f3c6) */

void FUN_1e7c_0bfc(int param_1,undefined2 param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  int in_CX;
  uint uVar8;
  int in_BX;
  int unaff_SI;
  uint unaff_DI;
  undefined2 unaff_SS;
  bool bVar9;
  uint uVar3;
  
  if (param_3 == 10) {
    uVar8 = param_1 >> 0xf;
  }
  else {
    uVar8 = 0;
  }
  uVar4 = (undefined1)((uint)param_1 >> 8);
  iVar5 = CONCAT11(uVar4,1);
  ((char *)0x5001)[in_BX + unaff_SI] =
       ((char *)0x5001)[in_BX + unaff_SI] | (byte)(uVar8 >> 8);
  puVar1 = (uint *)(in_BX + unaff_SI + 10);
  uVar2 = *puVar1;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar8;
  iVar6 = iVar5;
  if (CARRY2(uVar2,uVar8)) {
    iVar6 = CONCAT11(uVar4,0x8e);
  }
  bVar9 = !CARRY2(uVar2,uVar8) && SCARRY2(uVar3,uVar8);
  if (in_CX == 0) {
    uVar4 = in(uVar8);
    if ((unaff_DI & 0x36) != 0) {
      iVar5 = CONCAT11((char)((uint)unaff_SI >> 8),(char)unaff_SI + -0x33);
      g_5996 = CONCAT11((char)((uint)iVar6 >> 8),uVar4);
    }
    FUN_1e7c_0532();
    if (0 < iVar5) {
      FUN_1e7c_0d5b();
      return;
    }
    FUN_1e7c_0d4d();
    return;
  }
  uVar7 = func_0x000f24e6(0x1e7c,iVar5,param_3,param_2,param_1,uVar8);
  (&stack0xfffe)[unaff_DI] = !bVar9;
  out(0xfd,uVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x1f3f7 FUN_1e7c_0c37  callers=[] strings=[] */

void FUN_1e7c_0c37(void)

{
  undefined2 in_AX;
  uint unaff_DI;
  undefined2 uStack_c;
  
  if ((unaff_DI & 0x36) != 0) {
    g_5996 = in_AX;
  }
  FUN_1e7c_0532();
  if (uStack_c < 1) {
    FUN_1e7c_0d4d();
    return;
  }
  FUN_1e7c_0d5b();
  return;
}


/* ===== 0x1f501 FUN_1e7c_0d41  callers=['FUN_1e7c_0e9f', 'FUN_1e7c_11a2', 'FUN_1e7c_1219'] strings=[] */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1e7c_0d41(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x1f50d FUN_1e7c_0d4d  callers=['FUN_1e7c_0bfc'] strings=[] */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1e7c_0d4d(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x1f51b FUN_1e7c_0d5b  callers=['FUN_1e7c_0bfc'] strings=[] */

ulong __cdecl16near FUN_1e7c_0d5b(void)

{
  byte bVar1;
  int in_CX;
  int iVar2;
  int unaff_BP;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = *(int *)(unaff_BP + 8) + 1U < 0x873f;
  iVar2 = in_CX + 1;
  uVar4 = iVar2 == 0;
LAB_1e7c_0d6d:
  bVar1 = FUN_1e7c_0d89();
  if (bVar3 || (bool)uVar4) {
    do {
      if (bVar3) {
        *unaff_DI = bVar1 + 2;
        out(0x8c,unaff_DI);
        out(0xfd,unaff_DI);
        return (ulong)CONCAT22(*(undefined2 *)(iVar2 + 0x56),unaff_DI) | 6;
      }
      bVar1 = FUN_1e7c_0d89();
    } while (!bVar3 && !(bool)uVar4);
  }
  if ((bVar1 != 0x20) && (bVar1 != 0xd)) goto code_r0x0001f541;
  goto LAB_1e7c_0d85;
code_r0x0001f541:
  bVar3 = bVar1 < 9;
  uVar4 = false;
  if (bVar1 == 9) {
LAB_1e7c_0d85:
    bVar3 = false;
    uVar4 = true;
  }
  goto LAB_1e7c_0d6d;
}


/* ===== 0x1f549 FUN_1e7c_0d89  callers=['FUN_1e7c_0d5b'] strings=[] */

/* WARNING: Instruction at (ram,0x0001f566) overlaps instruction at (ram,0x0001f565)
    */

ulong FUN_1e7c_0d89(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined2 uVar3;
  int in_AX;
  int in_DX;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  char *unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  if (in_AX != 0) {
    in_DX = in_DX + 1;
    pcVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar2 = (char)in_AX;
    if ((char)in_AX == '\0') {
      in_BX = in_BX + 1;
    }
  }
  do {
    puVar1 = (undefined1 *)(in_BX + unaff_SI + 0x575);
    *puVar1 = *puVar1;
    uVar3 = *(undefined2 *)(unaff_BP + -2);
    unaff_SI = *(int *)(in_BX + 0x54);
    pcVar2 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *pcVar2 = (char)uVar3;
  } while ((char)uVar3 != '\0');
  out(0x8a,uVar3);
  out(0x2c,uVar3);
  pcVar2 = (char *)(unaff_BP + *(int *)(unaff_BP + -0x19) + -0x56);
  *pcVar2 = *pcVar2 + '\x01';
  out(0x8c,in_DX);
  out(0xfd,in_DX);
  return CONCAT22(*(undefined2 *)(in_BX + 0x56),in_DX) | 6;
}


/* ===== 0x1f647 FUN_1e7c_0e87  callers=[] strings=[] */

undefined4 __cdecl16near FUN_1e7c_0e87(undefined2 param_1,undefined2 param_2)

{
  out(param_1,param_2);
  return CONCAT22(param_1,param_2);
}


/* ===== 0x1f653 FUN_1e7c_0e93  callers=[] strings=[] */

undefined1 __cdecl16near FUN_1e7c_0e93(undefined2 param_1,undefined1 param_2)

{
  out(param_1,param_2);
  return param_2;
}


/* ===== 0x1f65f FUN_1e7c_0e9f  callers=[] strings=['  * The latest version of each game\n', '  * SEVERAL FREE BONUS GAMES!\n\n', '  * SEVERAL FREE BONUS GAMES!\n\n', '  * SEVERAL FREE BONUS GAMES!\n\n', '  * SEVERAL FREE BONUS GAMES!\n\n', '  * SEVERAL FREE BONUS GAMES!\n\n', '  * SEVERAL FREE BONUS GAMES!\n\n'] */

/* WARNING: Instruction at (ram,0x0001f6b3) overlaps instruction at (ram,0x0001f6b2)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1e7c_0e9f(int param_1,undefined2 param_2,int param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int in_CX;
  undefined2 uVar10;
  int in_DX;
  undefined2 *extraout_DX;
  undefined2 extraout_DX_00;
  undefined2 uVar11;
  int *piVar12;
  uint in_BX;
  byte bVar14;
  int iVar13;
  char cVar15;
  undefined2 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint *puVar22;
  int *piVar23;
  undefined2 *puVar24;
  int unaff_SI;
  int iVar25;
  int iVar26;
  undefined2 unaff_ES;
  undefined2 uVar27;
  undefined2 unaff_SS;
  bool bVar28;
  byte in_AF;
  bool bVar29;
  byte in_TF;
  byte bVar30;
  byte in_NT;
  undefined2 *puVar31;
  undefined4 uVar32;
  byte in_stack_0000612a;
  byte in_stack_0000d112;
  char acStack_2a [18];
  undefined1 auStack_18 [10];
  undefined2 uStack_e;
  undefined1 *puStack_c;
  
  uVar6 = param_3 + 1;
  if (1 < uVar6) {
    in_BX = param_1 << 1;
  }
  do {
    out(0x8c,uVar6);
    out(0xbf,uVar6);
    acStack_2a[unaff_SI] = acStack_2a[unaff_SI] + (char)((uint)in_DX >> 8);
    uVar7 = uVar6 | 0xe7;
    out(0x43,uVar7);
    puStack_c = (undefined1 *)0x4;
    in_CX = CONCAT11((char)((uint)in_CX >> 8),0xd2);
    out(0x43,uVar7);
    out(0x8b,(char)uVar7);
    bVar14 = (byte)(in_BX >> 8) ^ in_stack_0000d112;
    out(0x90,uVar7);
    out(0xfd,uVar7);
    uVar6 = CONCAT11((char)(uVar6 >> 8),(char)uVar7) & 0xff8b;
    iVar25 = CONCAT11((char)(uVar6 >> 8),(char)uVar6 + -0x4f);
    bVar30 = 0;
    in_BX = CONCAT11(bVar14,((char *)0x53f7)
                            [CONCAT11(bVar14,(char)in_BX)]);
    bVar28 = in_BX < 0x17;
    bVar29 = in_BX == 0x17;
    while (uVar4 = (undefined1)((uint)iVar25 >> 8), !bVar28 && !bVar29) {
      uVar3 = in(param_1);
      iVar25 = CONCAT11(uVar4,uVar3);
      in_BX = param_1 << 1;
      unaff_SI = unaff_SI + 1;
      bVar28 = false;
      if (iVar25 == 0) {
        uStack_e = 0xf6d2;
        puVar31 = (undefined2 *)FUN_1e7c_0d41();
        if (*(int *)(&stack0xfffe + *(int *)(in_BX + 0x20) * 2) != g_5964) {
          puStack_c = (undefined1 *)0xf6ea;
          g_5964 = *(int *)(&stack0xfffe + *(int *)(in_BX + 0x20) * 2);
          puVar31 = (undefined2 *)FUN_1e7c_0d41();
        }
        if (*(int *)(&stack0xfffe + *(int *)(in_BX + 0x22) * 2) != g_5966) {
          puStack_c = (undefined1 *)0xf702;
          g_5966 = *(int *)(&stack0xfffe + *(int *)(in_BX + 0x22) * 2);
          puVar31 = (undefined2 *)FUN_1e7c_0d41();
        }
        if (*(int *)(&stack0xfffe + *(int *)(in_BX + 0x24) * 2) != g_5968) {
          puStack_c = (undefined1 *)0xf71a;
          g_5968 = *(int *)(&stack0xfffe + *(int *)(in_BX + 0x24) * 2);
          puVar31 = (undefined2 *)FUN_1e7c_0d41();
        }
        if (*(int *)(&stack0xfffe + *(int *)(in_BX + 0x26) * 2) != g_596a) {
          puStack_c = (undefined1 *)0xf732;
          g_596a = *(int *)(&stack0xfffe + *(int *)(in_BX + 0x26) * 2);
          puVar31 = (undefined2 *)FUN_1e7c_0d41();
        }
        if (*(int *)(&stack0xfffe + *(int *)(in_BX + 0x28) * 2) != g_596c) {
          puStack_c = (undefined1 *)0xf74a;
          g_596c = *(int *)(&stack0xfffe + *(int *)(in_BX + 0x28) * 2);
          puVar31 = (undefined2 *)FUN_1e7c_0d41();
        }
        puVar8 = (undefined2 *)puVar31;
        iVar13 = in_BX + g_5482;
        iVar25 = *(int *)(&stack0xfffe + *(int *)(iVar13 + 0x2a) * 2);
        if (iVar25 != g_596e) {
          g_596e = iVar25;
        }
        puStack_c = &stack0xfff6;
        in((int)((ulong)puVar31 >> 0x10));
        uVar4 = SUB21(&stack0xfff6,0);
        iVar26 = 0x612c;
        iVar25 = iVar25 + 1;
        out(0xfa,puVar8);
        cVar5 = (char)puVar31;
        out(0x8b,cVar5);
        puVar9 = (undefined2 *)
                 CONCAT11((char)((ulong)puVar31 >> 0x18),
                          (byte)((ulong)puVar31 >> 0x10) ^ *(byte *)(iVar13 + iVar25 + -0x741a));
        uVar3 = (undefined1)iVar13;
        bVar14 = (byte)((uint)iVar13 >> 8) ^ in_stack_0000612a;
        if (bVar14 != 0) {
          iVar26 = 0x926;
          g_5994 = iVar25;
          *puVar8 = 0xf78f;
          uVar4 = FUN_1000_3f92();
          puVar9 = extraout_DX;
        }
        out(0x8b,uVar4);
        iVar13 = CONCAT11(bVar14 ^ (&stack0xfffe)[iVar26],uVar3);
        cVar15 = cVar5 + '\x04';
        if ((bVar14 ^ (&stack0xfffe)[iVar26]) != 0) {
          iVar26 = 0x928;
          g_5992 = iVar25 * 2;
          puVar8[1] = 0xf7a7;
          puVar9 = (undefined2 *)FUN_1e7c_0bd2();
          cVar15 = cVar5 + '\x10';
        }
        uVar27 = *(undefined2 *)(iVar13 + iVar25 * 4 + -0x2f);
        out(0x8b,(char)puVar9);
        bVar14 = (byte)((uint)iVar13 >> 8) ^ (&stack0xfffe)[iVar26];
        iVar13 = CONCAT11(bVar14,(char)iVar13);
        puVar16 = puVar9 + 1;
        if (bVar14 != 0) {
          g_5994 = iVar25 * 4;
          *puVar9 = 0xf7bf;
          cVar15 = FUN_1e7c_0bd2();
          puVar16 = puVar9 + 7;
          uVar27 = extraout_DX_00;
        }
        out(0x8b,cVar15);
        puVar17 = (undefined1 *)((int)puVar16 + -2);
        *(undefined2 *)((int)puVar16 + -2) = uVar27;
        *(undefined2 *)((int)puVar16 + -4) = 0xf7ce;
        FUN_1000_3300();
        *(undefined2 *)((int)puVar16 + -4) = 0xf7d3;
        FUN_1000_1a92();
        pcVar2 = (code *)swi(0x50);
        (*pcVar2)();
        *(int *)(puVar17 + -2) = param_1;
        puVar18 = puVar17 + -4;
        *(undefined2 *)(puVar17 + -4) = 0xf7dc;
        func_0x0001f26a();
        uVar10 = *(undefined2 *)(puVar18 + 2);
        puVar19 = puVar18 + 2;
        *(undefined2 *)(puVar18 + 2) = 0xf7e1;
        func_0x00014e6c();
        iVar25 = *(int *)(iVar13 + 0x54);
        *(undefined2 *)(puVar19 + -2) = 0x1e7c;
        puVar20 = puVar19 + -4;
        *(undefined2 *)(puVar19 + -4) = 0xf7f2;
        func_0x00018494();
        puVar21 = (uint *)(puVar20 + -2);
        *(undefined2 *)(puVar20 + -2) = 0xf7f5;
        uVar4 = func_0x0001f37c();
        out(0x8b,uVar4);
        uVar6 = *(uint *)(&stack0xfffe + iVar25 * 2);
        uVar7 = uVar6 - g_549c;
        *puVar21 = (uint)(in_NT & 1) * 0x4000 |
                   (uint)SBORROW2(uVar6,g_549c) * 0x800 |
                   0x400 | (uint)(bVar30 & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 |
                   (uint)((int)uVar7 < 0) * 0x80 | (uint)(uVar7 == 0) * 0x40 |
                   (uint)(in_AF & 1) * 0x10 | (uint)((POPCOUNT(uVar7 & 0xff) & 1U) == 0) * 4 |
                   (uint)(uVar6 < (uint)g_549c);
        puVar21[-1] = (uint)puVar21;
        puVar22 = puVar21 + -2;
        puVar21[-2] = 0xf80d;
        uVar6 = func_0x0001f37c();
        out(0x8b,(char)uVar6);
        bVar30 = (uVar6 & 0x1000) != 0;
        *puVar22 = (uint)((int)puVar22 + 2);
        piVar23 = (int *)((int)puVar22 + -2);
        *(undefined2 *)((int)puVar22 + -2) = 0xf825;
        uVar4 = func_0x0001f37c();
        out(0x8b,uVar4);
        puVar24 = (undefined2 *)(*piVar23 + -2);
        *(undefined2 *)(*piVar23 + -2) = 0xf83d;
        uVar32 = func_0x0001f37c();
        uVar11 = (undefined2)((ulong)uVar32 >> 0x10);
        bVar14 = (byte)uVar32;
        out(0x8b,bVar14);
        uVar27 = *(undefined2 *)(iVar13 + 0x54);
        g_bf54 = bVar14;
        *puVar24 = 0xc54;
        bVar14 = bVar14 | 0xe8;
        cVar5 = bVar14 + (9 < (bVar14 & 0xf) | bVar30) * '\x06' + (0x99 < bVar14) * '`';
        out(0x8b,cVar5);
        puVar24[-1] = CONCAT11((char)((ulong)uVar32 >> 8),cVar5);
        puVar24[-2] = uVar10;
        puVar24[-3] = uVar11;
        puVar24[-4] = iVar13;
        puVar24[-5] = puVar24;
        puVar24[-6] = &stack0xfffe;
        puVar24[-7] = uVar27;
        puVar24[-8] = 0xc0a;
        uVar27 = puVar24[-8];
        puVar24[-8] = puVar24 + -7;
        puVar1 = (undefined1 *)*(undefined2 *)(iVar13 + 0x54);
        g_0a09 = g_0c54;
        *(undefined1 *)0xc0a = *puVar1;
        *(undefined2 *)0xc08 = puVar1 + -1;
        *(undefined2 *)0xc06 = 0x4ec;
        g_04ec = param_3 + 1;
        *(undefined2 *)0xc04 = unaff_SS;
        uVar4 = in(uVar11);
        *(undefined1 *)(undefined2 *)&g_04ec = uVar4;
        iVar25 = (int)g_6cf8 + param_3 + 1;
        *(undefined2 *)0xc02 = uVar11;
        *(int *)0xc00 = iVar25;
        *(int *)0xbfe = (int)auStack_18;
        *(undefined2 *)0xbfc = 0x71e;
        FUN_1000_5eb2();
        *(undefined2 *)0xc02 = g_6cfa;
        *(undefined2 *)0xc00 = g_6cf8;
        *(undefined2 *)0xbfe = uVar11;
        *(int *)0xbfc = iVar25;
        *(undefined2 *)0xbfa = 0x732;
        FUN_1000_7a78();
        iVar25 = 0;
        while( true ) {
          uVar27 = (undefined2)((ulong)_g_6cf8 >> 0x10);
          piVar12 = (int *)_g_6cf8;
          if (piVar12[2] <= iVar25) break;
          iVar13 = piVar12[7];
          *(undefined2 *)0xc02 = uVar27;
          *(int *)0xc00 = (int)piVar12 + iVar13 * iVar25 + 0x20;
          *(undefined2 *)((undefined4 *)&g_6a76 + iVar25) = *(undefined2 *)0xc00;
          *(undefined2 *)((int)(undefined4 *)&g_6a76 + iVar25 * 4 + 2) = *(undefined2 *)0xc02
          ;
          iVar25 = iVar25 + 1;
        }
        g_6a36 = *_g_6cf8;
        g_6a86 = piVar12[1];
        g_6a34 = g_6a36 * 2;
        g_5482 = g_6a34 + -0x2a;
        gb_5478 = '\0';
        gb_5479 = ' ';
        gb_547a = '\0';
        gb_547b = '\0';
        gb_547c = '\0';
        gb_547d = ' ';
        gb_547e = '\0';
        gb_547f = '\0';
        iVar25 = *_g_6cf8 + -0x16 >> 0xf;
        *(undefined2 *)0xc02 = 0x7a8;
        g_79b6 = FUN_1000_e251();
        iVar13 = *_g_6cf8 + -2 >> 0xf;
        g_79b8 = iVar25;
        *(undefined2 *)0xc04 = 0x7bf;
        g_5470 = FUN_1000_e251();
        iVar25 = ((int *)_g_6cf8)[1] >> 0xf;
        g_5472 = iVar13;
        *(undefined2 *)0xc06 = 0x7d4;
        g_5474 = FUN_1000_e251();
        iVar13 = ((int *)_g_6cf8)[1] + -0xf >> 0xf;
        g_5476 = iVar25;
        *(undefined2 *)0xc08 = 0x7ec;
        uVar6 = FUN_1000_e251();
        g_79ba = uVar6 + 0x800;
        g_79bc = iVar13 + (uint)(0xf7ff < uVar6);
        iVar25 = *_g_6cf8 + -3 >> 0xf;
        *(undefined2 *)0xc0a = 0x809;
        g_5bda = FUN_1000_e251();
        iVar13 = ((int *)_g_6cf8)[1] >> 0xf;
        g_5bdc = iVar25;
        *(undefined2 *)0xc0c = 0x81e;
        g_5bde = FUN_1000_e251();
        g_5be0 = iVar13;
        return;
      }
      bVar29 = false;
      if (in_CX != 0) {
        return;
      }
    }
    uVar6 = CONCAT11(uVar4,(char)iVar25 + -0x2f + bVar28);
    in_DX = param_1;
  } while( true );
}


/* ===== 0x1f94a FUN_1e7c_118a  callers=[] strings=[] */

undefined4 __cdecl16near FUN_1e7c_118a(undefined2 param_1,undefined2 param_2)

{
  out(param_1,param_2);
  return CONCAT22(param_1,param_2);
}


/* ===== 0x1f956 FUN_1e7c_1196  callers=[] strings=[] */

undefined1 __cdecl16near FUN_1e7c_1196(undefined2 param_1,undefined1 param_2)

{
  out(param_1,param_2);
  return param_2;
}


/* ===== 0x1f962 FUN_1e7c_11a2  callers=[] strings=['  * SEVERAL FREE BONUS GAMES!\n\n'] */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1e7c_11a2(undefined2 param_1,undefined2 param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined2 in_CX;
  undefined2 uVar4;
  undefined2 in_DX;
  undefined2 extraout_DX;
  int iVar5;
  int unaff_SI;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  byte in_AF;
  undefined1 in_stack_0000b768;
  byte in_stack_0000d112;
  char acStack_2a [10];
  undefined2 uStack_20;
  undefined1 *puStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined1 *puStack_18;
  undefined1 *puStack_16;
  int iStack_14;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_c;
  
  uVar3 = param_3 + 1;
  out(0x8c,uVar3);
  out(0xbf,uVar3);
  acStack_2a[unaff_SI] = acStack_2a[unaff_SI] + (char)((uint)in_DX >> 8);
  uVar3 = uVar3 | 0xe7;
  out(0x43,uVar3);
  uStack_c = 4;
  out(0x43,uVar3);
  out(0x8b,(byte)uVar3);
  out(0x90,uVar3);
  out(0xfd,uVar3);
  uVar4 = CONCAT11((char)((uint)in_CX >> 8),in_stack_0000b768);
  out(0x8b,((byte)uVar3 & 0x8b) + 0xb1);
  iVar5 = CONCAT11((byte)((uint)*(undefined2 *)(unaff_SI + -0x2f) >> 8) ^ in_stack_0000d112,
                   (char)*(undefined2 *)(unaff_SI + -0x2f));
  uStack_10 = 0xf9c2;
  g_bf54 = FUN_1e7c_0d41();
  out(0x8b,g_bf54);
  uStack_1a = *(undefined2 *)(iVar5 + 0x54);
  uStack_c = 0x1e7c;
  bVar1 = g_bf54 | 0xe8;
  out(0x8b,bVar1 + (9 < (bVar1 & 0xf) | in_AF) * '\x06' + (0x99 < bVar1) * '`');
  puStack_1e = (undefined1 *)&uStack_1c;
  uStack_1c = 0xd114;
  *(undefined1 *)0xd114 = *(undefined1 *)*(undefined2 *)(iVar5 + 0x54);
  uStack_20 = 0xf9f2;
  puStack_18 = &stack0xfffe;
  puStack_16 = (undefined1 *)&uStack_c;
  iStack_14 = iVar5;
  uStack_12 = extraout_DX;
  uStack_10 = uVar4;
  uVar2 = FUN_1e7c_0d41();
  out(0x8b,uVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x1f9d9 FUN_1e7c_1219  callers=['FUN_1e7c_1732'] strings=['  * SEVERAL FREE BONUS GAMES!\n\n'] */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1e7c_1219(void)

{
  undefined1 in_AL;
  undefined1 uVar1;
  int in_BX;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  
  out(0x8b,in_AL);
  *unaff_DI = *(undefined1 *)*(undefined2 *)(in_BX + 0x54);
  uVar1 = FUN_1e7c_0d41(&stack0xfff0);
  out(0x8b,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x1fc5c FUN_1e7c_149c  callers=[] strings=[] */

undefined4 __cdecl16near FUN_1e7c_149c(void)

{
  byte in_AL;
  undefined2 uVar1;
  undefined2 local_8;
  
  uVar1 = CONCAT11(in_AL / 0xc,in_AL % 0xc + 0x8b);
  out(local_8,uVar1);
  return CONCAT22(local_8,uVar1);
}


/* ===== 0x1fef2 FUN_1e7c_1732  callers=['FUN_1e7c_17c6'] strings=[] */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1e7c_1732(void)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1e7c_1219();
  out(0x8b,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x1ff86 FUN_1e7c_17c6  callers=[] strings=[] */

/* WARNING: Instruction at (ram,0x00020026) overlaps instruction at (ram,0x00020025)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1e7c_17c6(void)

{
  byte *pbVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  char cVar11;
  undefined2 uVar12;
  int in_BX;
  int unaff_BP;
  undefined1 *puVar13;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined4 in_FPUDataPointer;
  undefined4 in_FPUInstructionPointer;
  unkbyte10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined4 uVar17;
  byte bVar4;
  
  bVar16 = 0;
  puVar13 = (undefined1 *)0x60a;
  uVar17 = FUN_1e7c_1732();
  uVar12 = (undefined2)((ulong)uVar17 >> 0x10);
  uVar17 = CONCAT22(extraout_var,(int)uVar17);
  if (*(int *)(&stack0xfffe + *(int *)(in_BX + 8) * 2) != g_594c) {
    puVar13 = (undefined1 *)0x60c;
    g_594c = *(int *)(&stack0xfffe + *(int *)(in_BX + 8) * 2);
    uVar17 = FUN_1e7c_1732();
    uVar12 = (undefined2)((ulong)uVar17 >> 0x10);
    uVar17 = CONCAT22(extraout_var_00,(int)uVar17);
  }
  if (*(int *)(&stack0xfffe + *(int *)(in_BX + 10) * 2) != g_594e) {
    puVar13 = (undefined1 *)0x60e;
    g_594e = *(int *)(&stack0xfffe + *(int *)(in_BX + 10) * 2);
    uVar17 = FUN_1e7c_1732();
    uVar12 = (undefined2)((ulong)uVar17 >> 0x10);
    uVar17 = CONCAT22(extraout_var_01,(int)uVar17);
  }
  cVar11 = (char)((uint)unaff_BP >> 8);
  if (*(int *)(&stack0xfffe + *(int *)(in_BX + 0xc) * 2) == g_5950) goto LAB_1e7c_182b;
  puVar13 = (undefined1 *)0x610;
  g_5950 = *(int *)(&stack0xfffe + *(int *)(in_BX + 0xc) * 2);
code_r0x0001ffe8:
  cVar11 = (char)((uint)unaff_BP >> 8);
  uVar17 = FUN_1e7c_1732();
  uVar12 = (undefined2)((ulong)uVar17 >> 0x10);
  uVar17 = CONCAT22(extraout_var_02,(int)uVar17);
LAB_1e7c_182b:
  if (*(int *)(&stack0xfffe + *(int *)(in_BX + 0xe) * 2) != g_5952) {
    puVar13 = (undefined1 *)0x612;
    g_5952 = *(int *)(&stack0xfffe + *(int *)(in_BX + 0xe) * 2);
    uVar17 = func_0x0002fef2();
    uVar12 = (undefined2)((ulong)uVar17 >> 0x10);
    uVar17 = CONCAT22(extraout_var_03,(int)uVar17);
  }
  puVar8 = (undefined1 *)*(undefined2 *)(in_BX + *(int *)(in_BX + 0x10) * 2);
  uVar10 = (undefined2)uVar17;
  out(0xae,uVar10);
  out(0xe7,uVar10);
  bVar9 = (byte)uVar17;
  puVar8[in_BX] = puVar8[in_BX] + bVar9;
  pbVar1 = puVar8 + in_BX;
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar9;
  bVar4 = *pbVar1;
  uVar7 = (uint)bVar16;
  uVar6 = (uint)bVar16;
  *puVar13 = *puVar8;
  out(0x47,uVar17);
  out(0xc0,uVar10);
  bVar16 = 1;
  if ((!CARRY1(bVar3,bVar9)) && (bVar4 == 0)) {
    LOCK();
    puVar2 = puVar13 + uVar7 * -2 + 1 + in_BX;
    uVar5 = *puVar2;
    *puVar2 = (char)((ulong)uVar17 >> 8);
    UNLOCK();
    out(0x86,CONCAT11(uVar5,bVar9));
    LOCK();
    *(undefined1 *)(in_BX + ((uint)(puVar13 + uVar7 * -2 + 1) & (uint)&stack0x0002)) = uVar5;
    UNLOCK();
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined1 *)0xc = puVar8[uVar6 * -2 + 1];
  out(0x47,uVar17);
  unaff_BP = (uint)(byte)(cVar11 >> 0x12) << 8;
  do {
    uVar6 = (uint)unaff_BP >> 8;
    unaff_BP = (uint)(byte)(in_BX >> 0xf) << 8;
    in_BX = CONCAT11((char)uVar6,(char)in_BX);
    g_7790 = in_FPUControlWord;
    g_7794 = in_FPUStatusWord;
    g_7798 = in_FPUTagWord;
    g_77a2 = in_FPULastInstructionOpcode;
    g_77a4 = in_FPUDataPointer;
    g_779c = in_FPUInstructionPointer;
    do {
      bVar14 = false;
      bVar15 = &stack0x0000 == (undefined1 *)0x0;
      puVar13 = (undefined1 *)0x778b;
      in_FPUControlWord = 0x37f;
      in_FPUStatusWord = 0;
      in_FPUTagWord = 0xffff;
      in_FPUDataPointer = 0;
      in_FPUInstructionPointer = 0;
      in_FPULastInstructionOpcode = 0;
      _g_77ac = in_ST0;
      _g_77b6 = in_ST1;
      _g_77c0 = in_ST2;
      _g_77ca = in_ST3;
      _g_77d4 = in_ST4;
      _g_77de = in_ST5;
      _g_77e8 = in_ST6;
      _g_77f2 = in_ST7;
      func_0x0002fefe();
      unaff_ES = uVar12;
      if (bVar14) goto code_r0x0001ffe8;
      g_7790 = in_FPUControlWord;
      g_7794 = in_FPUStatusWord;
      g_7798 = in_FPUTagWord;
      g_77a2 = in_FPULastInstructionOpcode;
      g_77a4 = in_FPUDataPointer;
      g_779c = in_FPUInstructionPointer;
    } while (!bVar15);
  } while( true );
}


/* ===== 0x20075 FUN_1e7c_18b5  callers=[] strings=[] */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined2 FUN_1e7c_18b5(void)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined2 in_AX;
  uint uVar5;
  char cVar6;
  undefined2 in_CX;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_ESP;
  ulong uVar11;
  undefined2 unaff_BP;
  int unaff_SI;
  byte *pbVar12;
  char *pcVar13;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  ulong uVar10;
  
  iVar9 = (int)in_ESP;
  uVar10 = CONCAT22((int)((ulong)in_ESP >> 0x10),iVar9 + -2);
  *(undefined2 *)(iVar9 + -2) = unaff_BP;
  uVar2 = *(undefined2 *)(iVar9 + -8);
  cVar6 = (char)in_CX + *(char *)(iVar9 + 0x16ef);
  uVar11 = uVar10;
  if (cVar6 == '\0' || SCARRY1((char)in_CX,*(char *)(iVar9 + 0x16ef)) != cVar6 < '\0') {
    g_86e8 = g_86e8 | (byte)in_AX;
    uVar11 = (ulong)(iVar9 - 6);
    *(ulong *)(iVar9 + -6) = uVar10;
  }
  puVar3 = g_bf5f;
  g_b54f = 0x2315;
  bVar4 = (byte)in_AX | g_32e8;
  iVar8 = CONCAT11((char)((uint)in_AX >> 8),bVar4);
  g_7e1e = g_7e1e | bVar4;
  *(undefined2 *)((int)uVar11 + -2) = unaff_ES;
  *(char *)(unaff_SI + 0xb) = *(char *)(unaff_SI + 0xb) + (char)((uint)uVar2 >> 8);
  *puVar3 = 0x2d;
  pcVar13 = puVar3 + 1;
  uVar5 = -iVar8;
  uVar7 = -(uint)(iVar8 != 0) - CONCAT11((char)((uint)in_CX >> 8),cVar6);
  pbVar12 = (byte *)(iVar9 + -0x24);
  if (uVar7 == 0) goto LAB_1e7c_1906;
  do {
    uVar11 = (ulong)uVar7;
    uVar7 = uVar7 / 0xbf59;
    uVar11 = uVar11 % 0xbf59 << 0x10 | (ulong)uVar5;
    uVar5 = (uint)(uVar11 / 0xbf59);
    *pbVar12 = (byte)(uVar11 % 0xbf59);
    pbVar12 = pbVar12 + 1;
  } while (uVar7 != 0);
  for (; uVar5 != 0; uVar5 = uVar5 / 0xbf59) {
LAB_1e7c_1906:
    *pbVar12 = (byte)((ulong)uVar5 % 0xbf59);
    pbVar12 = pbVar12 + 1;
  }
  iVar8 = (int)pbVar12 - (iVar9 + -0x24);
  do {
    pbVar12 = pbVar12 + -1;
    bVar4 = *pbVar12;
    if (bVar4 < 10) {
      cVar6 = bVar4 + 0x30;
    }
    else {
      cVar6 = (bVar4 - 10) + *(char *)(iVar9 + 2);
    }
    pcVar1 = pcVar13;
    pcVar13 = pcVar13 + 1;
    *pcVar1 = cVar6;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  *pcVar13 = '\0';
  return *(undefined2 *)(iVar9 + 8);
}


/* ===== 0x2007b FUN_1e7c_18bb  callers=['FUN_1e7c_1939'] strings=[] */

/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

undefined2 FUN_1e7c_18bb(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined2 in_AX;
  uint uVar4;
  char cVar5;
  undefined2 in_CX;
  uint uVar6;
  int iVar7;
  undefined2 in_DX;
  ulong in_ESP;
  ulong uVar8;
  int unaff_BP;
  int unaff_SI;
  byte *pbVar9;
  char *pcVar10;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  
  cVar5 = (char)in_CX + *(char *)(unaff_BP + 0x16f1);
  uVar8 = in_ESP;
  if (cVar5 == '\0' || SCARRY1((char)in_CX,*(char *)(unaff_BP + 0x16f1)) != cVar5 < '\0') {
    g_86e8 = g_86e8 | (byte)in_AX;
    uVar8 = (ulong)((int)in_ESP - 4);
    *(ulong *)((int)in_ESP + -4) = in_ESP;
  }
  puVar2 = g_bf5f;
  g_b54f = 0x2315;
  bVar3 = (byte)in_AX | g_32e8;
  iVar7 = CONCAT11((char)((uint)in_AX >> 8),bVar3);
  g_7e1e = g_7e1e | bVar3;
  *(undefined2 *)((int)uVar8 + -2) = unaff_ES;
  *(char *)(unaff_SI + 0xb) = *(char *)(unaff_SI + 0xb) + (char)((uint)in_DX >> 8);
  *puVar2 = 0x2d;
  pcVar10 = puVar2 + 1;
  uVar4 = -iVar7;
  uVar6 = -(uint)(iVar7 != 0) - CONCAT11((char)((uint)in_CX >> 8),cVar5);
  pbVar9 = (byte *)(unaff_BP + -0x22);
  if (uVar6 == 0) goto LAB_1e7c_1906;
  do {
    uVar8 = (ulong)uVar6;
    uVar6 = uVar6 / 0xbf59;
    uVar8 = uVar8 % 0xbf59 << 0x10 | (ulong)uVar4;
    uVar4 = (uint)(uVar8 / 0xbf59);
    *pbVar9 = (byte)(uVar8 % 0xbf59);
    pbVar9 = pbVar9 + 1;
  } while (uVar6 != 0);
  for (; uVar4 != 0; uVar4 = uVar4 / 0xbf59) {
LAB_1e7c_1906:
    *pbVar9 = (byte)((ulong)uVar4 % 0xbf59);
    pbVar9 = pbVar9 + 1;
  }
  iVar7 = (int)pbVar9 - (unaff_BP + -0x22);
  do {
    pbVar9 = pbVar9 + -1;
    bVar3 = *pbVar9;
    if (bVar3 < 10) {
      cVar5 = bVar3 + 0x30;
    }
    else {
      cVar5 = (bVar3 - 10) + *(char *)(unaff_BP + 4);
    }
    pcVar1 = pcVar10;
    pcVar10 = pcVar10 + 1;
    *pcVar1 = cVar5;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  *pcVar10 = '\0';
  return *(undefined2 *)(unaff_BP + 10);
}


/* ===== 0x200f9 FUN_1e7c_1939  callers=[] strings=[] */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00020103) overlaps instruction at (ram,0x00020102)
    */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00020103) */

undefined4 __cdecl16near FUN_1e7c_1939(int param_1,undefined2 param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined2 uVar11;
  char cVar12;
  int in_CX;
  uint uVar13;
  uint *in_BX;
  byte bVar14;
  int *piVar15;
  undefined1 *puVar16;
  int unaff_SI;
  uint unaff_DI;
  undefined1 *puVar17;
  int iVar18;
  int unaff_SS;
  char cVar19;
  bool bVar20;
  undefined4 uVar21;
  undefined2 auStack_7a [52];
  undefined2 uStack_12;
  int local_c;
  int iStack_a;
  undefined2 local_8;
  int iStack_6;
  uint uStack_4;
  
  if (param_3 == 10) {
    uStack_4 = param_1 >> 0xf;
  }
  else {
    uStack_4 = 0;
  }
  iStack_6 = param_1;
  local_8 = param_2;
  iStack_a = param_3;
  uVar5 = (undefined1)((uint)param_1 >> 8);
  local_c = CONCAT11(uVar5,1);
  pbVar1 = (byte *)((int)in_BX + (int)((char *)0x5001 + unaff_SI));
  *pbVar1 = *pbVar1 | (byte)(uStack_4 >> 8);
  puVar2 = (uint *)((int)in_BX + unaff_SI + 10);
  uVar9 = *puVar2;
  uVar13 = *puVar2;
  *puVar2 = *puVar2 + uStack_4;
  iVar8 = local_c;
  if (CARRY2(uVar9,uStack_4)) {
    iVar8 = CONCAT11(uVar5,0x8e);
  }
  bVar20 = !CARRY2(uVar9,uStack_4) && SCARRY2(uVar13,uStack_4);
  if (in_CX != 0) {
    uVar7 = func_0x000f24e6();
    (&stack0xfffe)[unaff_DI] = !bVar20;
    out(0xfd,uVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = in(uStack_4);
  puVar17 = (undefined1 *)(unaff_DI & 0x36);
  if (puVar17 != (undefined1 *)0x0) {
    local_c = CONCAT11((char)((uint)unaff_SI >> 8),(char)unaff_SI + -0x33);
    g_5996 = CONCAT11((char)((uint)iVar8 >> 8),uVar5);
  }
  uStack_12 = 0x14d;
  iVar8 = func_0x0002fa2f();
  if (local_c < 1) {
    *(uint **)(puVar17 + iVar8 + -0x1d7b) = in_BX;
    puVar17 = puVar17 + (iVar8 + -0x1d7d) * 2;
  }
  uVar9 = func_0x0002fcf2();
  out(0x8b,uVar9 | 0xef);
  piVar10 = (int *)(CONCAT11((char)(uVar9 >> 8),(char)(uVar9 | 0xef)) | 0xfa);
  (&stack0x36d7)[(int)puVar17] = (&stack0x36d7)[(int)puVar17] + -1;
  iVar8 = *piVar10;
  *puVar17 = (char)&iStack_a;
  *piVar10 = unaff_SS;
  iVar18 = *piVar10;
  out(0xd0,&iStack_a);
  *in_BX = *in_BX - piVar10[1];
  out(0xfd,&iStack_a);
  bVar6 = (byte)((uint)&iStack_a >> 8);
  bVar14 = (byte)((uint)in_BX >> 8);
  cVar19 = bVar6 < bVar14;
  piVar10[1] = (int)in_BX;
  *piVar10 = CONCAT11(bVar6 - bVar14,(char)&iStack_a);
  piVar15 = piVar10 + -1;
  piVar10[-1] = 0x281;
  bVar6 = FUN_2315_baf3();
  *(int **)(undefined1 *)((int)piVar15 + -2) = piVar15;
  out(0x77,CONCAT11(bVar6 / 0x77,bVar6 % 0x77));
  *(undefined1 **)(undefined1 *)((int)piVar15 + -4) = (undefined1 *)((int)piVar15 + -2);
  out(0x30,bVar6 % 0x77);
  puVar17[1] = puVar17[1];
  *(char *)((int)in_BX + (int)(puVar17 + 2)) =
       *(char *)((int)in_BX + (int)(puVar17 + 2)) + (char)in_BX + cVar19;
  pbVar1 = (byte *)((int)in_BX + (int)(puVar17 + 2));
  *pbVar1 = *pbVar1 >> 1;
  uVar7 = *(undefined2 *)((int)piVar15 + -4);
  *(undefined2 *)((int)piVar15 + -4) = 0x294;
  uVar21 = FUN_1e7c_18bb();
  uVar13 = (uint)((ulong)uVar21 >> 0x10);
  bVar6 = (byte)uVar21 | 0xe7;
  uVar9 = (uint)uVar21 | 0xe7;
  if (iVar8 == 1 || bVar6 == 0) {
    out(0xfa,uVar9);
    cVar12 = '+';
    uVar3 = *(undefined2 *)(&stack0xff84 + (int)(puVar17 + 2));
    out(0xea,uVar9);
    cVar19 = bVar6 - (char)((ulong)uVar21 >> 0x10);
    uVar11 = CONCAT11((char)((ulong)uVar21 >> 8),cVar19);
    puVar2 = in_BX;
    uVar9 = *puVar2;
    *puVar2 = *puVar2 - uVar13;
    if (uVar13 <= uVar9 && *puVar2 != 0) {
      if (*puVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      out(0x8b,cVar19);
      uVar4 = *(undefined2 *)((int)piVar15 + 9);
      if (piVar15 != (int *)0xfff7) {
        *(undefined2 *)((int)piVar15 + 9) = uVar3;
        out(0x66,uVar11);
        out(0xfd,uVar11);
        out(0xfa,uVar11);
        return CONCAT22(CONCAT11(0xf9,'2' - CARRY1((byte)in_BX,(byte)((uint)uVar4 >> 8))),uVar11);
      }
      out(0xfd,uVar11);
      out(0xd1,uVar11);
      return CONCAT22(0xf92b,uVar11);
    }
    *(undefined1 **)(undefined1 *)((int)piVar15 + 8) = (undefined1 *)((int)piVar15 + 10);
    puVar16 = (undefined1 *)((int)piVar15 + 6);
    *(undefined2 *)((int)piVar15 + 6) = 0x2b4;
    func_0x0002fdab();
    *(uint *)(puVar17 + -0x40a9) = *(uint *)(puVar17 + -0x40a9) & (uint)puVar16;
    puVar17[3] = puVar17[3] + cVar12;
    *(undefined2 *)(puVar16 + -2) = 0x2bd;
    func_0x0002fdcc();
    g_0c12 = 0x2d;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x20134 FUN_1e7c_1974  callers=[] strings=[] */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_1e7c_1974(void)

{
  byte *pbVar1;
  uint *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  byte bVar5;
  undefined2 in_AX;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined2 uVar9;
  char cVar10;
  uint uVar11;
  uint *in_BX;
  byte bVar12;
  int *piVar13;
  undefined1 *puVar14;
  uint unaff_DI;
  undefined1 *puVar15;
  int iVar16;
  int unaff_SS;
  undefined2 uVar17;
  char cVar18;
  undefined4 uVar19;
  undefined2 in_stack_00000000;
  undefined2 auStack_7a [55];
  int iStack_c;
  undefined2 uStack_6;
  
  puVar15 = (undefined1 *)(unaff_DI & 0x36);
  if (puVar15 != (undefined1 *)0x0) {
    g_5996 = in_AX;
  }
  uStack_6 = 0x14d;
  iVar6 = func_0x0002fa2f();
  if (iStack_c < 1) {
    *(uint **)(puVar15 + iVar6 + -0x1d7b) = in_BX;
    puVar15 = puVar15 + (iVar6 + -0x1d7d) * 2;
  }
  uVar7 = func_0x0002fcf2();
  out(0x8b,uVar7 | 0xef);
  piVar8 = (int *)(CONCAT11((char)(uVar7 >> 8),(char)(uVar7 | 0xef)) | 0xfa);
  (&stack0x36d7)[(int)puVar15] = (&stack0x36d7)[(int)puVar15] + -1;
  iVar6 = *piVar8;
  *puVar15 = (char)&stack0x0002;
  *piVar8 = unaff_SS;
  iVar16 = *piVar8;
  out(0xd0,&stack0x0002);
  *in_BX = *in_BX - piVar8[1];
  out(0xfd,&stack0x0002);
  bVar5 = (byte)((uint)&stack0x0002 >> 8);
  bVar12 = (byte)((uint)in_BX >> 8);
  cVar18 = bVar5 < bVar12;
  piVar8[1] = (int)in_BX;
  *piVar8 = CONCAT11(bVar5 - bVar12,(char)&stack0x0002);
  piVar13 = piVar8 + -1;
  piVar8[-1] = 0x281;
  bVar5 = FUN_2315_baf3();
  *(int **)(undefined1 *)((int)piVar13 + -2) = piVar13;
  out(0x77,CONCAT11(bVar5 / 0x77,bVar5 % 0x77));
  *(undefined1 **)(undefined1 *)((int)piVar13 + -4) = (undefined1 *)((int)piVar13 + -2);
  out(0x30,bVar5 % 0x77);
  puVar15[1] = puVar15[1];
  *(char *)((int)in_BX + (int)(puVar15 + 2)) =
       *(char *)((int)in_BX + (int)(puVar15 + 2)) + (char)in_BX + cVar18;
  pbVar1 = (byte *)((int)in_BX + (int)(puVar15 + 2));
  *pbVar1 = *pbVar1 >> 1;
  uVar17 = *(undefined2 *)((int)piVar13 + -4);
  *(undefined2 *)((int)piVar13 + -4) = 0x294;
  uVar19 = FUN_1e7c_18bb();
  uVar11 = (uint)((ulong)uVar19 >> 0x10);
  bVar5 = (byte)uVar19 | 0xe7;
  uVar7 = (uint)uVar19 | 0xe7;
  if (iVar6 == 1 || bVar5 == 0) {
    out(0xfa,uVar7);
    cVar10 = '+';
    uVar3 = *(undefined2 *)(&stack0xff84 + (int)(puVar15 + 2));
    out(0xea,uVar7);
    cVar18 = bVar5 - (char)((ulong)uVar19 >> 0x10);
    uVar9 = CONCAT11((char)((ulong)uVar19 >> 8),cVar18);
    puVar2 = in_BX;
    uVar7 = *puVar2;
    *puVar2 = *puVar2 - uVar11;
    if (uVar11 <= uVar7 && *puVar2 != 0) {
      if (*puVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      out(0x8b,cVar18);
      uVar4 = *(undefined2 *)((int)piVar13 + 9);
      if (piVar13 == (int *)0xfff7) {
        out(0xfd,uVar9);
        out(0xd1,uVar9);
        return CONCAT22(0xf92b,uVar9);
      }
      *(undefined2 *)((int)piVar13 + 9) = uVar3;
      out(0x66,uVar9);
      out(0xfd,uVar9);
      out(0xfa,uVar9);
      return CONCAT22(CONCAT11(0xf9,'2' - CARRY1((byte)in_BX,(byte)((uint)uVar4 >> 8))),uVar9);
    }
    *(undefined1 **)(undefined1 *)((int)piVar13 + 8) = (undefined1 *)((int)piVar13 + 10);
    puVar14 = (undefined1 *)((int)piVar13 + 6);
    *(undefined2 *)((int)piVar13 + 6) = 0x2b4;
    func_0x0002fdab();
    *(uint *)(puVar15 + -0x40a9) = *(uint *)(puVar15 + -0x40a9) & (uint)puVar14;
    puVar15[3] = puVar15[3] + cVar10;
    *(undefined2 *)(puVar14 + -2) = 0x2bd;
    func_0x0002fdcc();
    g_0c12 = 0x2d;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x20320 FUN_1e7c_1b60  callers=[] strings=[] */

void __cdecl16near FUN_1e7c_1b60(void)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined2 in_AX;
  undefined2 uVar3;
  undefined2 in_CX;
  int in_BX;
  uint unaff_DI;
  
  out(0xfd,in_AX);
  out(0x77,in_AX);
  LOCK();
  uVar2 = *(undefined1 *)(in_BX + unaff_DI);
  *(undefined1 *)(in_BX + unaff_DI) = (char)((uint)in_AX >> 8);
  uVar3 = CONCAT11(uVar2,(char)in_AX);
  UNLOCK();
  out(0x86,uVar3);
  out(0xe7,uVar3);
  out(0xe7,uVar3);
  pcVar1 = (char *)(CONCAT11((char)((uint)in_CX >> 8),(char)in_BX) + (unaff_DI & (uint)&stack0x0000)
                   );
  *pcVar1 = *pcVar1 - (char)((uint)in_BX >> 8);
  out(0xd1,uVar3);
  return;
}


/* ===== 0x20348 FUN_1e7c_1b88  callers=[] strings=[] */

void __cdecl16near FUN_1e7c_1b88(void)

{
  undefined2 in_AX;
  undefined2 uVar1;
  int in_BX;
  undefined1 *unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  
  out(0xfd,in_AX);
  g_5946 = unaff_SI + 1;
  *unaff_DI = *unaff_SI;
  g_5946[in_BX] = g_5946[in_BX] + (char)in_BX;
  unaff_DI[in_BX + 1] = (byte)unaff_DI[in_BX + 1] >> 1;
  out(10,in_AX);
  uVar1 = FUN_2315_7c38();
  out(0xbf,uVar1);
  out(0xfd,uVar1);
  out(0xd1,uVar1);
  return;
}


/* ===== 0x203d8 FUN_1e7c_1c18  callers=['FUN_1e7c_1d00'] strings=[] */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1e7c_1c18(void)

{
  undefined1 uVar1;
  
  uVar1 = func_0x0002fec3();
  out(0x8b,uVar1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x204c0 FUN_1e7c_1d00  callers=['FUN_1000_b8d8'] strings=[] */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0002053e) overlaps instruction at (ram,0x0002053c)
    */

void FUN_1e7c_1d00(undefined3 param_1,int param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined3 uVar4;
  byte bVar5;
  uint uVar6;
  uint in_CX;
  int iVar7;
  byte bVar9;
  int iVar8;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 *unaff_BP;
  undefined1 *puVar14;
  uint *unaff_SI;
  uint *puVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  undefined2 unaff_SS;
  bool bVar19;
  undefined4 uVar20;
  
  uVar20 = FUN_1e7c_1c18();
  uVar4 = param_1;
  uVar17 = (uint)uVar20;
  uVar12 = (uint)param_1;
  puVar14 = (undefined1 *)((int)&param_1 + 2);
  if (uVar17 == 0) {
    bVar5 = in((int)((ulong)uVar20 >> 0x10));
    uVar17 = (uint)bVar5;
  }
  else {
    param_1 = CONCAT12(param_1._2_1_,0x2315);
    in_CX = *unaff_SI;
    puVar1 = (uint *)(uVar12 + 0xe79d);
    uVar6 = *puVar1;
    *puVar1 = (int)&param_1 + *puVar1 + 2;
    g_a908 = (g_a908 - uVar17) - (uint)CARRY2(uVar6,(int)&param_1 + 2);
    in_CX = in_CX >> 1;
    out(0xfd,uVar17);
    unaff_SI = (uint *)((int)unaff_SI + 1);
    if (unaff_SI == (uint *)0x0) {
      out(0xc,uVar17);
      unaff_SI = (uint *)0x0;
      puVar14 = unaff_BP;
      goto code_r0x0002050a;
    }
  }
  iVar11 = CONCAT11((char)((uint3)uVar4 >> 8),(char)uVar17);
  param_1 = CONCAT12((char)((uint3)param_1 >> 0x10),iVar11);
  uVar17 = 0xe70a;
  do {
    FUN_2315_16d5();
    bVar5 = func_0x0002ff7b();
    param_1 = CONCAT12(param_1._2_1_,iVar11);
    out(0x8b,(bVar5 | 0xf7) ^ 0xd1);
    LOCK();
    uVar2 = puVar14[uVar17 - 0x15];
    puVar14[uVar17 - 0x15] = (char)iVar11;
    uVar12 = CONCAT11((char)((uint)iVar11 >> 8),uVar2);
    UNLOCK();
code_r0x0002050a:
    *unaff_SI = (uint)puVar14;
    iVar10 = uVar12 + 1;
    uVar20 = func_0x0002ff94(0x2315);
    iVar7 = (int)((ulong)uVar20 >> 0x10) + -1;
    out(0xfa,(uint)uVar20);
    uVar17 = 0x340e;
    XACQUIRE();
    LOCK();
    uVar2 = puVar14[0x33f9];
    puVar14[0x33f9] = (char)(iVar10 << 1);
    iVar11 = CONCAT11((char)((uint)(iVar10 << 1) >> 8),uVar2);
    UNLOCK();
    puVar14[0x3809] = puVar14[0x3809] | (byte)in_CX;
    bVar19 = false;
    uVar6 = (uint)uVar20;
    while( true ) {
      do {
        *unaff_SI = (uint)puVar14;
        iVar11 = iVar11 + 1;
      } while (&stack0x0000 != (undefined1 *)0xfffa && 0 < (int)&param_2);
      param_1 = CONCAT21(iVar11,(undefined1)param_1);
      param_2 = iVar10;
      if (&stack0x0000 != (undefined1 *)0xfffe && 0 < (int)&param_1 + 1) break;
      puVar1 = unaff_SI;
      uVar12 = *puVar1;
      bVar9 = (byte)((uint)(iVar7 + -1) >> 8);
      bVar5 = (byte)*puVar1 + bVar9;
      *(byte *)puVar1 = bVar5 + bVar19;
      iVar7 = (int)(CONCAT12(CARRY1((byte)uVar12,bVar9) || CARRY1(bVar5,bVar19),iVar7 + -1) >> 1);
      XACQUIRE();
      LOCK();
      uVar2 = puVar14[uVar17 - 0x15];
      puVar14[uVar17 - 0x15] = (char)iVar11;
      uVar12 = CONCAT11((char)((uint)iVar11 >> 8),uVar2);
      UNLOCK();
      in_CX = CONCAT11((char)(in_CX >> 8),(byte)in_CX | puVar14[uVar17 + 0x3fb]);
      bVar19 = false;
      while( true ) {
        do {
          puVar15 = unaff_SI;
          *puVar15 = (uint)puVar14;
          uVar12 = uVar12 + 1;
          puVar16 = (uint *)((int)puVar15 + -1);
          unaff_SI = puVar16;
        } while (puVar16 != (uint *)0x0 && 0 < (int)puVar15);
        unaff_SI = puVar15 + -1;
        if (unaff_SI != (uint *)0x0 && 0 < (int)puVar16) goto code_r0x0002050a;
        iVar8 = CONCAT11((char)((uint)(iVar7 + -1) >> 8) + (byte)*unaff_SI + bVar19,
                         (char)(iVar7 + -1));
        in_CX = in_CX << 1 | (uint)((int)in_CX < 0);
        XACQUIRE();
        LOCK();
        uVar2 = puVar14[uVar17 - 0x15];
        puVar14[uVar17 - 0x15] = (char)uVar12;
        uVar3 = uVar12 >> 8;
        UNLOCK();
        uVar12 = uVar6 | 0x8b;
        uVar18 = uVar17 + uVar12;
        iVar11 = CONCAT11((char)uVar3,uVar2);
        do {
          iVar13 = iVar11;
          *unaff_SI = (uint)puVar14;
          iVar11 = iVar13 + 1;
        } while (iVar11 != 0 && -2 < iVar13);
        param_1 = CONCAT12(param_1._2_1_,iVar11);
        iVar7 = iVar8 + -1;
        if (iVar7 != 0 && 0 < iVar8) break;
        uVar6 = CONCAT11((char)(uVar6 >> 8),(char)uVar12 + '4' + CARRY2(uVar17,uVar12));
        puVar1 = (uint *)((int)unaff_SI + iVar13 + -0x790d);
        uVar17 = *puVar1;
        *puVar1 = *puVar1 >> 1;
        if (*puVar1 == 0 || (int)uVar17 < 0 != (int)*puVar1 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar19 = CARRY2(uVar18,uVar6);
        uVar17 = uVar18 + uVar6;
      }
      bVar19 = CARRY2(uVar18,uVar12);
      uVar17 = uVar18 + uVar12;
      uVar6 = uVar12;
    }
  } while( true );
}


/* ===== 0x21089 FUN_1e7c_28c9  callers=[] strings=[] */

void __cdecl16near FUN_1e7c_28c9(void)

{
  undefined2 in_AX;
  undefined2 uVar1;
  int in_BX;
  undefined1 *unaff_SI;
  undefined1 *unaff_DI;
  undefined2 unaff_ES;
  
  out(0xfd,in_AX);
  g_5946 = unaff_SI + 1;
  *unaff_DI = *unaff_SI;
  g_5946[in_BX] = g_5946[in_BX] + (char)in_BX;
  unaff_DI[in_BX + 1] = (byte)unaff_DI[in_BX + 1] >> 1;
  out(10,in_AX);
  uVar1 = FUN_2315_8979();
  out(0xbf,uVar1);
  out(0xfd,uVar1);
  out(0xd1,uVar1);
  return;
}


/* ===== 0x24825 FUN_2315_16d5  callers=['FUN_1e7c_1d00'] strings=[] */

void FUN_2315_16d5(void)

{
  code *pcVar1;
  char in_AL;
  char in_CL;
  char *in_BX;
  
  if (in_AL == *in_BX) {
    *in_BX = in_CL;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* ===== 0x2ad88 FUN_2315_7c38  callers=['FUN_1e7c_1b88'] strings=[] */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2315_7c38(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x2bac9 FUN_2315_8979  callers=['FUN_1e7c_28c9'] strings=[] */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2315_8979(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


/* ===== 0x2ec43 FUN_2315_baf3  callers=['FUN_1e7c_1939'] strings=[] */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2315_baf3(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


