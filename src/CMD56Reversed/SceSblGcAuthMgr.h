#pragma once

//===================================
//Base addresses used in current run
//SceSblGcAuthMgr : 0x00ca0000
//SceSblSsMgr : 0x00b98000
//SceSdif : 0x00c68000
//SceSysmem : 0x009c0000
//SceKernelDmacMgr : 0x00992000
//===================================

int sub_CA919C(int* argument0);

int SceSblGcAuthMgrDrmBBForDriver_clear_sensitive_data_bb451e83();

void SceSblGcAuthMgr_InitializeContext();

int SceSblGcAuthMgrDrmBBForDriver_bb70ddc0(char* dest);