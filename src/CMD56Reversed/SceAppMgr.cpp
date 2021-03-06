#include "SceAppMgr.h"

#include "Constants.h"

#include "SceThreadmgr.h"
#include "SceSysmem.h"
#include "SceSysmemGlobalVariables.h"
#include "SceIofilemgr.h"
#include "SceSblACMgr.h"
#include "SceSblSsMgr.h"
#include "SceProcessmgr.h"
#include "ScePfsMgr.h"

#include <string>
#include <cstdint>
#include <iostream>
#include <sstream>
#include <iomanip>

//==============================

int loc_23D5220()
{
   /*
   MOV             R0, R5
   BL              sub_23EFA40
   MOVS            R0, #0
   BLX             SceAppMgr.SceKernelSuspendForDriver._imp_2bb92967
   LDR             R2, [SP,#0x88+var_2C]
   MOV             R0, R4
   LDR.W           R3, [R10]
   CMP             R2, R3
   */

   //return r0 or stack fail

   return 0;
}

int loc_23D52BC()
{
   //MOVS            R4, 0x80800034
   return loc_23D5220();
}

int loc_23D518E()
{
   //  more code

   return 0;
}

int loc_23D50A0()
{
   /*
   ADD.W           R8, SP, #0x88+var_78
   ADD             R7, SP, #0x88+var_70
   ADD.W           R9, SP, #0x88+var_68
   MOVW            R1, #(aCategory_0 AND 0xFFFF) ; "CATEGORY"
   MOV             R2, R8
   MOV             R3, R7
   STR.W           R9, [SP,#0x88+arg_0]
   MOVT.W          R1, #high16(aCategory_0) ; "CATEGORY"
   MOV             R0, R5
   BL              sub_23EF8DC
   SUBS            R4, R0, #0
   */

   //if(r4 < 0)
   //{
   //   return loc_23D5220();
   //}
   //else
   //{
      /*
      LDR             R3, [SP,#0x88+var_70]
      */

      //if(r3 <= 2)
      //{
      //   return loc_23D52BC();
      //}
      //else
      //{
         /*
         LDR             R4, [SP,#0x88+var_68]
         */

         //if(r4 != 4)
         //{
         //   return loc_23D52BC();
         //}
         //else
         //{
            /*
            LDR             R3, [SP,#0x88+var_78]
            MOV             R1, dword_24047E0 ; 024047E0 data reference 00007067
            MOV             R2, R4
            MOV             R0, R3
            STR             R3, [SP,#0x88+var_7C]
            BLX             SceAppMgr.SceSysclibForDriver._imp_strncmp_12cee649
            */

            //if(r0 == 0)
            //{
               /*
               LDR.W           R2, [R6,#0x160]
               LSLS            R3, R2, #0x1F
               */

               //if(!true) //NOT BPL
               //{
                  /*
                  MOVW            R1, #(dword_24047E4 AND 0xFFFF) ; 024047E4 data reference 00006467
                  MOV             R2, R4
                  MOVT.W          R1, #high16(dword_24047E4) ; 024047E4 data reference 00006467
                  ADD.W           R0, R6, #0x298
                  BLX             SceAppMgr.SceSysclibForDriver._imp_6d286146
                  */
               //}
            //}
            //else
            //{
               /*
               MOVW            R1, #(aGpc AND 0xFFFF) ; "gpc"
               LDR             R0, [SP,#0x88+var_7C]
               MOVT.W          R1, #high16(aGpc) ; "gpc"
               MOV             R2, R4
               BLX             SceAppMgr.SceSysclibForDriver._imp_strncmp_12cee649
               */

               //if(r0 != 0)
               //{
                  /*
                  MOVW            R1, #(aGpd AND 0xFFFF)
                  LDR             R0, [SP,#0x88+var_7C]
                  MOVT.W          R1, #high16(aGpd) ; "gpd"
                  MOV             R2, R4
                  BLX             SceAppMgr.SceSysclibForDriver._imp_strncmp_12cee649
                  */

                  //if(r0 != 0)
                  //{
                     /*
                     LDR             R1, [SP,#0x88+var_7C]
                     MOV             R2, R4
                     ADD.W           R0, R6, #0x298
                     BLX             SceAppMgr.SceSysclibForDriver._imp_6d286146
                     MOVS            R3, #0
                     STRB.W          R3, [R6,#0x29B]
                     */
                  //}
                  //else
                  //{
                     /*
                     LDR.W           R3, [R6,#0x160]
                     LSLS            R0, R3, #0x1F
                     */

                     //if(!true) //NOT BPL
                     //{
                        /*
                        MOV             R3, aGdd ; "gdd"
                        LDR             R0, [R3]
                        STR.W           R0, [R6,#0x298]
                        */
                     //}
                  //}
               //}
               //else
               //{
                  /*
                  LDR.W           R3, [R6,#0x160]
                  LSLS            R4, R3, #0x1F
                  */

                  //if(true) //BMI
                  //{
                     /*
                     MOV             R3, aGdc ; "gdc"
                     LDR             R0, [R3]
                     STR.W           R0, [R6,#0x298]
                     */
                  //}
               //}
            //}

            //loc_23D5110:

            /*
            MOVW            R1, #(aTitle_id AND 0xFFFF) ; "TITLE_ID"
            STR.W           R9, [SP,#0x88+arg_0]
            MOVT.W          R1, #high16(aTitle_id) ; "TITLE_ID"
            MOV             R0, R5
            MOV             R2, R8
            MOV             R3, R7
            BL              sub_23EF8DC
            SUBS            R4, R0, #0
            */

            //if(r4 < 0)
            //{
               //return loc_23D5220();
            //}
            //else
            //{
               /*
               LDR             R3, [SP,#0x88+var_70]
               */

               //if(r3 <= 9)
               //{
                  //return  loc_23D52BC();
               //}
               //else
               //{
                  /*
                  LDR             R3, [SP,#0x88+var_68]
                  */
                  //if(r3 != 0x0C)
                  //{
                     //return loc_23D52BC();
                  //}
                  //else
                  //{
                     /*
                     ADD.W           R4, R6, #0x378
                     LDR             R1, [SP,#0x88+var_78]
                     MOVS            R2, #0xA
                     MOV             R0, R4
                     BLX             SceAppMgr.SceSysclibForDriver._imp_6d286146
                     MOVS            R3, #0
                     LDR.W           LR, [R6,#0x37C]
                     STRB.W          R3, [R6,#0x381]
                     LDR.W           R1, [R6,#0x384]
                     LDR.W           R0, [R6,#0x380]
                     LDR.W           R12, [R6,#0x378]
                     STR.W           LR, [R6,#0x38C]
                     STR.W           R0, [R6,#0x390]
                     STR.W           R1, [R6,#0x394]
                     LDR.W           LR, [R6,#0x378]
                     LDR.W           R0, [R6,#0x37C]
                     LDR.W           R1, [R6,#0x380]
                     LDR.W           R2, [R6,#0x384]
                     STR.W           R12, [R6,#0x388]
                     STR.W           LR, [R6,#0x498]
                     STR.W           R0, [R6,#0x49C]
                     STR.W           R1, [R6,#0x4A0]
                     STR.W           R2, [R6,#0x4A4]
                     */

                     //return loc_23D518E();
                  //}
               //}
            //}
         //}
      //}
   //}

   return 0;
}

int proc_parse_param_sfo_23D5028(SceUID pid, char *param_sfo_path, int ignore_overlay, phys_ctx_t *gdat_ctx)
{
   /*
   MOV             R10, 0x9EA004
   MOVS            R4, #0
   MOV             R5, R0  ; arg0
   MOVW            R0, #0x4780 ; 023D5038 : external reference: 022D4780
   LDR.W           R7, [R10]
   SUB             SP, SP, #0x64
   MOV             R8, R1  ; arg1
   MOV             R11, R2 ; arg2
   MOV             R1, R4
   MOVT.W          R0, #0x22D ; 023D5048 : external reference: 022D4780
   MOV.W           R2, #0x124
   MOV             R6, R3  ; arg3
   STR             R7, [SP,#0x88+var_2C]
   STRD.W          R4, R4, [SP,#0x30]
   STR             R4, [SP,#0x88+var_50]
   STR             R4, [SP,#0x88+var_78]
   STR             R4, [SP,#0x88+var_70]
   STR             R4, [SP,#0x88+var_68]
   BLX             SceAppMgr.SceSysclibForDriver._imp_memset_0ab9bf5c
   */

   //if(r5 == 0)
   //{
      //BLX             SceAppMgr.SceThreadmgrForDriver._imp_sceKernelGetProcessId_9dcb4b7a
      //MOV             R5, R0
   //}
   
   /*
   MOVS            R0, #0
   BLX             SceAppMgr.SceKernelSuspendForDriver._imp_4df40893
   */

   //if(r11 == 0)
   //{
      /*
      MOVS            R0, #0x80
      BLX             SceAppMgr.SceThreadmgrForDriver._imp_02eedf17
      MOV.W           R1, #0x124
      MOVW            R3, #0x4780 ; 023D524A : external reference: 022D4780
      MOV             R7, R0
      MOV             R2, R8  ; unk2
      MOV             R0, R5  ; unk0
      STR             R1, [SP,#0x88+arg_0] ; arg_0
      MOVT.W          R3, #0x22D ; 023D5256 : external reference: 022D4780
      MOV             R1, R11 ; unk1
      BLX             SceAppMgr.SceFios2KernelForDriver._imp_sceFiosKernelOverlayResolveSyncForDriver_0f456345
      MOV             R4, R0
      MOV             R0, R7
      BLX             SceAppMgr.SceThreadmgrForDriver._imp_02eedf17
      ADD             R5, SP, #0x88+var_58
      */
      //if(r4 != 0)
      //{
         //return loc_23D5220();
      //}
      //else
      //{
         /*
         MOVW            R0, #0x4780 ; 023D526E : external reference: 022D4780
         MOV             R1, R5
         MOVT.W          R0, #0x22D ; 023D5274 : external reference: 022D4780
         BL              sub_23EF934
         SUBS            R4, R0, #0
         */
         //if(r4 < 0)
         //{
            //return loc_23D5220();
         //}
         //else
         //{
            /*
            LDR.W           R3, [R6,#0x160]
            LSLS            R2, R3, #0x1F
            */
            //if(true) //BMI
            //{
               //return loc_23D50A0();
            //}
            //else
            //{
               /*
               ADD.W           R8, SP, #0x88+var_78
               ADD             R7, SP, #0x88+var_70
               ADD.W           R9, SP, #0x88+var_68
               */

               //return loc_23D518E();
            //}
         //}
      //}
   //}
   //else
   //{
      /*
      MOVW            R0, #0x4780 ; 023D5078 : external reference: 022D4780
      MOV             R1, R8
      MOV.W           R2, #0x124
      MOVT.W          R0, #0x22D ; 023D5082 : external reference: 022D4780
      BLX             SceAppMgr.SceSysclibForDriver._imp_6d286146
      ADD             R5, SP, #0x88+var_58
      MOVW            R0, #0x4780 ; 023D508C : external reference: 022D4780
      MOV             R1, R5
      MOVT.W          R0, #0x22D ; 023D5092 : external reference: 022D4780
      BL              sub_23EF934
      SUBS            R4, R0, #0
      */
      //if(r4 < 0)
      //{
         //return loc_23D5220();
      //}
      //else
      //{
         //return loc_23D50A0();
      //}
   //}

   return 0;
}

SceUID SceAppMgrMount_pool_22A0008;

SceUID SceAppMgrMount_mutex_22A000C;

char* PD_str_2404BBC = "PD";

pfs_mount_t* mount_point_entries_22D470C;

//this function tries to OverlayResolveSync input path
//then checks that it is not a PD path (temp mount point probably aquired by PFS)
//then takes beginning of path until symbol ":"
//then tries to do a lookup by that path copy in mount_point_entries_22D470C item array
//if item is found then path from mount_point_entries_22D470C item is copied to result
//in any other case OverlayResolveSync result path is copied to result

int iofilemgr_path_mapping_callback_23DDE64(const char *path, SceUID pid, char *result_path, int size)
{
   int result = 0;

   int cookie = var_009EA004;
  
   //clear path copy

   char path_copy[33];
   memset(path_copy,0, 0x21); 
 
   int mutex_res = SceThreadmgrForDriver_ksceKernelLockMutex_16AC80C5(SceAppMgrMount_mutex_22A000C, 1, 0);

   if (mutex_res >= 0)
   {
      //allocate buffer for overlay path

      ctx_49D4DD9B alloc_ctx;
      alloc_ctx.unk4 = 0;
      alloc_ctx.unkC = 0;
      alloc_ctx.unk10 = 0;
      alloc_ctx.unk0 = 0x14;
      alloc_ctx.unk8 = 0x20;

      char* overlay_resolve_sync_path = (char*)SceSysmemForDriver_sceKernelAllocHeapMemory3ForDriver_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x124u, &alloc_ctx);
    
      if ( overlay_resolve_sync_path )
      {
         //get pid if not specified

         SceUID pid_local = pid;
         if (!pid_local)
            pid_local = SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a();

         //overlay resolve sync - input path

         int prev_perm = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80); //set permission
         int overlay_res = SceFios2KernelForDriver_sceFiosKernelOverlayResolveSyncForDriver_0f456345(pid_local, 0, path, overlay_resolve_sync_path, 0x124);
         SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm); //restore permission

         if (overlay_res >= 0 )
         {
            //limit max size

            unsigned int size_local = size;
            if (size >= 0x124 )
               size_local = 0x124;

            //compare to PD string (PFS temp mount point)

            int pd_cmp_result = strncmp(overlay_resolve_sync_path,PD_str_2404BBC, 2u);
            if (pd_cmp_result)
            {
               // copy path from heap to result path

               strncpy(result_path, overlay_resolve_sync_path, size_local);
               result_path[size_local - 1] = 0;// terminate with 0

               //cleanup

               SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, overlay_resolve_sync_path);

               SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);

               if(var_009EA004 == cookie)
                  return 0;
               else
                  return STACK_CHECK_FAIL;
            }

            //clear path copy

            memset(path_copy, 0x21, 0);

            int str_index = 0;

            //copy path till ":"
            while ( 1 )
            {
               char str_symbol = overlay_resolve_sync_path[str_index];
               path_copy[str_index] = str_symbol;
               
               //check end symbol
               if ( str_symbol == ':' )
                  break;

               //check max length
               if (++str_index == 0x21 )
               {
                  // copy path from heap to result path

                  strncpy(result_path, overlay_resolve_sync_path, size_local);
                  result_path[size_local - 1] = 0;// terminate with 0

                  //cleanup

                  SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, overlay_resolve_sync_path);

                  SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);

                  if(var_009EA004 == cookie)
                     return 0;
                  else
                     return STACK_CHECK_FAIL;
               }
            }

            //terminate path with 0
            path_copy[15] = 0;

            pfs_mount_t *global_buffer = mount_point_entries_22D470C;

            // if global item is set
            if (global_buffer)
            {
               // do path lookup while strings are not equal
               while (strncmp(global_buffer->pfs_rnd_drive_id, path_copy, 0x10u) )
               {
                  global_buffer = global_buffer->next; // get pointer to next item
                  if (!global_buffer)
                  {
                     //when there is no next item

                     // copy path from heap to result path

                     strncpy(result_path, overlay_resolve_sync_path, size_local);
                     result_path[size_local - 1] = 0;// terminate with 0

                     //cleanup

                     SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, overlay_resolve_sync_path);

                     SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);

                     if(var_009EA004 == cookie)
                        return 0;
                     else
                        return STACK_CHECK_FAIL;
                  }
               }

               // copy path from global to result path

               strncpy(result_path, global_buffer->path, size_local);
               result = 0;
               result_path[size_local - 1] = 0;// terminate with 0
            }
            else
            {
               // copy path from heap to result path

               strncpy(result_path, overlay_resolve_sync_path, size_local);
               result = 0;
               result_path[size_local - 1] = 0;// terminate with 0
            }
         }
         
         SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, overlay_resolve_sync_path);
      }
      else
      {
         result = 0x80801006;
      }

      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
   }
  
   //check cookie and return result

   if(var_009EA004 == cookie)
      return result;
   else
      return STACK_CHECK_FAIL;
}

int proc_generate_random_path_23D4FBC(char *prefix, char *result_path)
{   
   int result;
   char random_buffer[8]; // [sp+18h] [bp-28h]

   result = SceSblSsMgrForDriver_sceKernelGetRandomNumberForDriver_4f9bfbe5(random_buffer, 8);
   if(result < 0)
      return result;

   _snprintf(result_path, 0x10u, "%s%02x%02x%02x%02x%02x%02xd", prefix, random_buffer[0], random_buffer[1], random_buffer[2], random_buffer[3], random_buffer[4], random_buffer[5]);
   return 0;
}

int AppMgr_decrypt_str_constant_23D59D4(char* input, char* output)
{
   if(output == 0)
      return 0x80800001;

   if(input == 0)
      return 0x80800001;

   memset(output, 0, 0x20);

   int index = 0;

   while(input[index])
   {
      output[index] = ~input[index];
      if (++index == 0x20)
         return 0x80800001;
   }
  
   output[index] = 0;
   return 0;
}

int AppMgr_decrypt_str_constant_23D5998(char *input, char *output)
{
  if(output == 0)
     return 0x80800001;

  if(input == 0)
     return 0x80800001;

  memset(output, 0, 0x40u);

  int index = 0;

  while (input[index])
  {
    output[index] = ~input[index];
    if (++index == 0x40)
      return 0x80800001;
  }
  
  output[index] = 0;
  return 0;
}

global_ctx_item *__cdecl get_global_ctx_item_23C2DE0(ctx_23C2960 *ctx, SceUID pid)
{
   return 0;
}

int verify_copy_23D5A10(const char *src, char *dst)
{
   return 0;
}

//----------------

int w_unmount_23D5F44(SceUID pid, pfs_mount_t *mnt_entry, int umountArg)
{
   return 0;
}

int read_sealedkey_23D6EA0(const char *mountpoint, char *secret)
{
   return 0;
}

//redirect appmgr mount to pfs mount
int proc_fios2kernel_overlay_add_for_process_23D4DDC(SceUID pid, appmgr_mount_t *mctx)
{
   //initialize overlay

   SceFiosOverlay overlay_local;
  
   memset(&overlay_local, 0, sizeof(SceFiosOverlay));

   //assign pid to overlay

   overlay_local.pid = pid != 0 ? pid : SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a();

   //assign type and order of overlay

   if (mctx->this_pfs_mount->mount_id != 0x3E9 && mctx->this_pfs_mount->mount_id != 0x3EB) //not patch and addcont (ux0:, grw0:)
   {
      //makes sense for app and addcont (gro0:, ux0:, grw0:)

      overlay_local.order = 0x81;
      overlay_local.type = SceFiosOverlayType::SCE_FIOS_OVERLAY_TYPE_OPAQUE; //src replaces dest, access to dest is redirected to src
   }
   else
   {
      //makes sense for patch

      overlay_local.order = 0x82;
      overlay_local.type = SceFiosOverlayType::SCE_FIOS_OVERLAY_TYPE_TRANSLUCENT; //src merges with dest, first src, then dest, write is redirected to dst
   }

   //construct source path

   if (mctx->this_pfs_mount->pfs_rnd_drive_id[0] != 0)
   {
      //src overlay path will be pfs random drive

      int len = strnlen(mctx->this_pfs_mount->pfs_rnd_drive_id, 0x10);
      strncpy(overlay_local.src, mctx->this_pfs_mount->pfs_rnd_drive_id, 0x124u);
      overlay_local.src_len = len + 2;

      overlay_local.src[len] = '0';
      overlay_local.src[len + 1] = ':';
      overlay_local.src[len + 2] = 0;
   }
   else
   {
      if (mctx->this_pfs_mount->mount_id == 0x258)
      {
         //src overlay path will be lma0: (for loopback drive)

         overlay_local.src_len = strnlen("lma0:", 292);
         strncpy(overlay_local.src, "lma0:", 0x124u);
      }
      else
      {
         //src will be physical path to app like ux0:app/<TITLEID>

         overlay_local.src_len = strnlen(mctx->this_pfs_mount->path, 292);
         strncpy(overlay_local.src, mctx->this_pfs_mount->path, 0x124u);
      }
   }
   
   overlay_local.src[291] = 0;

   //construct dest path

   if ((mctx->this_pfs_mount->mount_id & 0xFFFFFFFD) != 0x3E9) //not patch (since this is a mask this means not 0x3E9 or not 0x3EB!)
   {
      //app mgr random drive will be dst path

      overlay_local.dst_len = strnlen(mctx->appmgr_rnd_drive_id, 0x10);
      strncpy(overlay_local.dst, mctx->appmgr_rnd_drive_id, 0x124u);
   }
   else
   {
      if (mctx->prev_pfs_mount->pfs_rnd_drive_id[0] != 0)
      {
         //src overlay path will be pfs random drive

         int len = strnlen(mctx->prev_pfs_mount->pfs_rnd_drive_id, 0x10);
         strncpy(overlay_local.dst, mctx->prev_pfs_mount->pfs_rnd_drive_id, 0x124u);
         overlay_local.dst_len = len + 2;

         overlay_local.dst[len] = '0';
         overlay_local.dst[len + 1] = ':';
         overlay_local.dst[len + 2] = 0;  
      }
      else
      {
         //src will be physical path to app like ux0:app/<TITLEID>

         overlay_local.dst_len = strnlen(mctx->prev_pfs_mount->path, 0x10);
         strncpy(overlay_local.dst, mctx->prev_pfs_mount->path, 0x124u);
      }
   }

   overlay_local.dst[0x123] = 0;

   //create overlay

   int prev_perm = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(128);
   int result = SceFios2KernelForDriver_sceFiosKernelOverlayAddForProcessForDriver_17e65a1c(overlay_local.pid, &overlay_local, &mctx->overlay_id);
   SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm);

   return result;
}

int clearsign_exists_23D9A4C(const char *mountpoint)
{
   return 0;
}

//----------------

int generate_mount_drive(unsigned int mount_id, char* mount_drive)
{
   if(mount_id <= 0x70)
   {
      #pragma region
      int res = proc_generate_random_path_23D4FBC("ad", mount_drive);
      if (res)
         return res;

      mount_drive[14] = ':';
      mount_drive[15] = 0;
      return 0;
      #pragma endregion
   }
   else if((mount_id > 0x70) && (mount_id < 0xC8))
   {
      return 0x80800001;
   }
   else if((mount_id >= 0xC8) && (mount_id <= 0xCF))
   {
      #pragma region
      switch(mount_id)
      {
      case 0xC8:
      case 0xC9:
         {
            int res = proc_generate_random_path_23D4FBC("td", mount_drive);
            if (res)
               return res;

            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      case 0xCA:
         {
            if (SceSblACMgrForDriver_sceSblACMgrCheckAuthIdForDriver_0b6e6cd7(0))
            {
               strcpy(mount_drive, "ms0:");
               return 0;
            }
            else
            {
               int res = proc_generate_random_path_23D4FBC("ms", mount_drive);
               if (res)
                  return res;
               
               mount_drive[14] = ':';
               mount_drive[15] = 0;
               return 0;
            }
         }
      case 0xCB:
      case 0xCC:
         {
            int res = proc_generate_random_path_23D4FBC("td", mount_drive);
            if (res)
               return res;
            
            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      case 0xCD:
         strcpy(mount_drive, "cache0:");
         return 0;
      case 0xCE:
      case 0xCF:
         {
            int res = proc_generate_random_path_23D4FBC("td", mount_drive);
            if (res)
               return res;

            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      }
      #pragma endregion
   }
   else if((mount_id > 0xCF) && (mount_id < 0x12E)) //these mounts still should be allowed but mount_drive have to be provided explicitly
   {
      return 0x80800001;
   }
   else if((mount_id >= 0x12E) && (mount_id <= 0x130))
   {
      #pragma region
      switch(mount_id)
      {
      case 0x12E:
         strcpy(mount_drive, "trophy_sys0:");
         return 0;
      case 0x12F:
         strcpy(mount_drive, "trophy_dat0:");
         return 0;
      case 0x130:
         strcpy(mount_drive, "trophy_dbk0:");
         return 0;
      }
      #pragma endregion
   }
   else if((mount_id > 0x130) && (mount_id < 0x190))
   {
      return 0x80800001;
   }
   else if((mount_id >= 0x190) && (mount_id <= 0x192))
   {
      #pragma region
      switch(mount_id)
      {
      case 0x190:
      case 0x191:
      case 0x192:
         {
            int res = proc_generate_random_path_23D4FBC("ad", mount_drive);
            if (res)
               return res;
            
            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      }
      #pragma endregion
   }
   else if((mount_id >= 0x193) && (mount_id <= 0x1F5))
   {
      #pragma region
      int res = proc_generate_random_path_23D4FBC("ad", mount_drive);
      if (res)
         return res;

      mount_drive[14] = ':';
      mount_drive[15] = 0;
      return 0;
      #pragma endregion
   }
   else if((mount_id > 0x1F5) && (mount_id < 0x1F8))
   {
      return 0x80800001;
   }
   else if((mount_id >= 0x1F8) && (mount_id <= 0x1F9))
   {
      #pragma region
      switch(mount_id)
      {
      case 0x1F8:
         strcpy(mount_drive, "sdimport0:");
         return 0;
      case 0x1F9:
         strcpy(mount_drive, "sdimport_tmp0:");
         return 0;
      }
      #pragma endregion
   }
   else if ((mount_id > 0x1F9) && (mount_id < 0x258))
   {
      return 0x80800001;
   }
   else if(mount_id == 0x258)
   {
      #pragma region
      int res = proc_generate_random_path_23D4FBC("lm", mount_drive);
      if (res)
         return res;
      
      mount_drive[14] = ':';
      mount_drive[15] = 0;
      return 0;
      #pragma endregion
   }
   else if ((mount_id > 0x258) && (mount_id < 0x3E8))
   {
      return 0x80800001;
   }
   else if((mount_id >= 0x3E8) && (mount_id <= 0x3EB))
   {
      #pragma region
      switch(mount_id)
      {
      case 0x3E8:
      case 0x3E9:
         _snprintf(mount_drive, 0x10u, "app%1u:", 0);
         return 0;
      case 0x3EA:
      case 0x3EB:
         _snprintf(mount_drive, 0x10u, "addcont%1u:", 0);
         return 0;
      }
      #pragma endregion
   }
   else if(mount_id == 0x3EC) //these mounts still should be allowed but mount_drive have to be provided explicitly
   {
      return 0x80800001;
   }
   else if((mount_id >= 0x3ED) && (mount_id <= 0x3F1))
   {
      #pragma region
      switch(mount_id)
      { 
      case 0x3ED:
      case 0x3EE:
         _snprintf(mount_drive, 0x10u, "savedata%1u:", 0);
         return 0;
      case 0x3EF:
      case 0x3F0:
         {
            int res = proc_generate_random_path_23D4FBC("sd", mount_drive);
            if (res)
               return res;
            
            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      case 0x3F1:
         {
            int res = proc_generate_random_path_23D4FBC("ud", mount_drive);
            if (res)
               return res;

            mount_drive[14] = ':';
            mount_drive[15] = 0;
            return 0;
         }
      }
      #pragma endregion
   }
   else if(mount_id > 0x3F1)
   {
      return 0x80800001;
   }
}

//======================

bool maybe_find_mount(SceUID pid, const appmgr_mount_holder_t *mount_ctx_holder, unsigned int mount_id, const char *mount_drive, const char* mount_drive_input, char *gen_mount_point, int& error_code)
{  
   //try to find mount ctx with mount_id and copy current_mount->mountDrive to gen_mount_point

   if (mount_id >= 0x3E8)
   {
      #pragma region
      appmgr_mount_t* current_mount = mount_ctx_holder->first_virt_mount;

      while (1)
      {
         if (mount_id == current_mount->this_pfs_mount->mount_id)
         {
            if (strncmp(current_mount->appmgr_rnd_drive_id, mount_drive_input, 0x10u) == 0)
               break;
         }

         current_mount = current_mount->next;

         if (current_mount == 0)
         {
            error_code = 0;
            return true;
         }
      }

      memcpy(gen_mount_point, current_mount->appmgr_rnd_drive_id, 0x10);
      #pragma endregion
   }
   else
   {
      #pragma region
      appmgr_mount_t* current_mount = mount_ctx_holder->first_virt_mount;

      while (1)
      {
         if(mount_id == current_mount->this_pfs_mount->mount_id)
            break;

         current_mount = current_mount->next;

         if (current_mount == 0)
         {
            error_code = 0;
            return true;
         }
      }

      memcpy(gen_mount_point, current_mount->appmgr_rnd_drive_id, 0x10);
      #pragma endregion
   }

   //----

   pfs_mount_t *mpd_entry0;

   if (mount_drive)
   {
      #pragma region

      appmgr_mount_t *mount_ctx_local1 = mount_ctx_holder->first_virt_mount;

      if (!mount_ctx_local1)
      {
         error_code = 0x80800002; 
         return false;
      }

      while (1)
      {
         mpd_entry0 = mount_ctx_local1->this_pfs_mount;

         if (mount_ctx_local1->this_pfs_mount)
         {
            if (mount_id == mpd_entry0->mount_id && !strncmp(mount_ctx_local1->appmgr_rnd_drive_id, mount_drive_input, 0x10u))
               break;
         }

         mount_ctx_local1 = mount_ctx_local1->next;

         if (mount_ctx_local1 == 0)
         {
            error_code = 0x80800002;
            return false;
         }
      }

      #pragma endregion
   }
   else
   {
      #pragma region

      appmgr_mount_t *mount_ctx_local2 = mount_ctx_holder->first_virt_mount;

      if (!mount_ctx_local2)
      {
         error_code = 0x80800002;
         return false;
      }

      while (1)
      {
         mpd_entry0 = mount_ctx_local2->this_pfs_mount;

         if (mount_ctx_local2->this_pfs_mount)
         {
            if (mount_id == mpd_entry0->mount_id)
               break;
         }

         mount_ctx_local2 = mount_ctx_local2->next;

         if (mount_ctx_local2 == 0)
         {
            error_code = 0x80800002;
            return false;
         }
      }

      #pragma endregion
   }

   if(mpd_entry0->pfs_rnd_drive_id[0] == 0)
   {
      error_code = 0x80800003;
      return false;
   }

   SceSelfAuthInfo auth_ctx;

   int res1 = SceProcessmgrForKernel_sceKernelGetSelfAuthInfoForKernel_e4c83b0d(pid, &auth_ctx);
   if(res1 < 0)
   {
      error_code = res1;
      return false;
   }

   int res2 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(mpd_entry0->pfs_rnd_drive_id, auth_ctx.auth_id);
   if(res2 == 0x80010011 || res2 >= 0)
   {
      error_code = 0x80800003;
      return false;
   }
   else
   {
      error_code = res2;
      return false;
   }   
}

int label_21_cleanup(SceUID pid, const appmgr_mount_t* virt_mount, const void* mem, int error_code)
{
   //remove overlay

   if (virt_mount->overlay_id)
   {
      SceUID pid0 = pid != 0 ? pid : SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a();
      int prev_perm0 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80);
      SceFios2KernelForDriver_sceFiosKernelOverlayRemoveForProcessForDriver_23247efb(pid0, virt_mount->overlay_id);
      SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm0);
   }

   //unmount

   if (virt_mount->this_pfs_mount)
   {
      w_unmount_23D5F44(pid, virt_mount->this_pfs_mount, 1);
   }

   //dealloc memory

   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, virt_mount);

   if (mem)
   {
      SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, mem);
   }

   return error_code;
}

int select_index(const pfs_mount_t* glb_mpd_entry0)
{
   if (glb_mpd_entry0->auth_ids[0] == 0)
      return 0;
   else if (glb_mpd_entry0->auth_ids[1] == 0)
      return 1;
   else if (glb_mpd_entry0->auth_ids[2] == 0)
      return 2;
   else if (glb_mpd_entry0->auth_ids[3] == 0)
      return 3;
   else if (glb_mpd_entry0->auth_ids[4] == 0)
      return 4;
   else if (glb_mpd_entry0->auth_ids[5] == 0)
      return 5;
   else if (glb_mpd_entry0->auth_ids[6] == 0)
      return 6;
   else if (glb_mpd_entry0->auth_ids[7] == 0)
      return 7;
   else if (glb_mpd_entry0->auth_ids[8] == 0)
      return 8;
   else if (glb_mpd_entry0->auth_ids[9] == 0)
      return 9;
   else if (glb_mpd_entry0->auth_ids[10] == 0)
      return 10;
   else if (glb_mpd_entry0->auth_ids[11] == 0)
      return 11;
   else if (glb_mpd_entry0->auth_ids[12] == 0)
      return 12;
   else if (glb_mpd_entry0->auth_ids[13] == 0)
      return 13;
   else if (glb_mpd_entry0->auth_ids[14] == 0)
      return 14;
   else if (glb_mpd_entry0->auth_ids[15] == 0)
      return 15;
   else
      return -1;
}

int clear_authid(pfs_mount_t* glb_mpd_entry0, SceUInt64 auth_id)
{
   if (auth_id == glb_mpd_entry0->auth_ids[0])
      glb_mpd_entry0->auth_ids[0] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[1])
      glb_mpd_entry0->auth_ids[1] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[2])
      glb_mpd_entry0->auth_ids[2] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[3])
      glb_mpd_entry0->auth_ids[3] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[4])
      glb_mpd_entry0->auth_ids[4] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[5])
      glb_mpd_entry0->auth_ids[5] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[6])
      glb_mpd_entry0->auth_ids[6] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[7])
      glb_mpd_entry0->auth_ids[7] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[8])
      glb_mpd_entry0->auth_ids[8] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[9])
      glb_mpd_entry0->auth_ids[9] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[10])
      glb_mpd_entry0->auth_ids[10] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[11])
      glb_mpd_entry0->auth_ids[11] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[12])
      glb_mpd_entry0->auth_ids[12] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[13])
      glb_mpd_entry0->auth_ids[13] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[14])
      glb_mpd_entry0->auth_ids[14] = 0LL;
   else if (auth_id == glb_mpd_entry0->auth_ids[15])
      glb_mpd_entry0->auth_ids[15] = 0LL;

   return 0;
}

//this function adds an overlay
//copies virt_mount->mountDrive to mount_point_result
//links virt_mount with mount_ctx_holder
int label_115_cleanup(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, char *mount_point_result)
{
   //create overlay

   int result2 = proc_fios2kernel_overlay_add_for_process_23D4DDC(pid, virt_mount);
   if (result2 != 0)
      return label_21_cleanup(pid, virt_mount, 0, result2);

   //get first appmgr mount

   appmgr_mount_t* current_appmgr_mount = mount_ctx_holder->first_virt_mount;
   
   if (current_appmgr_mount)
   {
      //if starting node is initialized

      //if starting node is the same as current node - there is nothing to do

      if (virt_mount == current_appmgr_mount)
         return label_21_cleanup(pid, virt_mount, 0, 0x80800003);

      while (1)
      {
         if (current_appmgr_mount->next == 0)
         {
            current_appmgr_mount->next = virt_mount;

            virt_mount->prev = current_appmgr_mount;
            virt_mount->next = 0;

            //copy appmgr mount point appmgr_rnd_drive_id to result

            memcpy(mount_point_result, virt_mount->appmgr_rnd_drive_id, 0x10);

            return 0;
         }

         if (virt_mount == current_appmgr_mount)
            break;

         current_appmgr_mount = current_appmgr_mount->next;
      }
         
      return label_21_cleanup(pid, virt_mount, 0, 0x80800003);
   }
   else
   {
      //if there is no starting node - assign current appmgr mount point

      mount_ctx_holder->first_virt_mount = virt_mount;

      virt_mount->prev = 0;
      virt_mount->next = 0;

      //copy appmgr mount point appmgr_rnd_drive_id to result

      memcpy(mount_point_result, virt_mount->appmgr_rnd_drive_id, 0x10);
   
      return 0;
   }
}

int special_cleanup(SceUID pid, unsigned int mount_id, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, char *mount_point_result)
{
   //get first appmgr mount

   appmgr_mount_t * appmgr_mount_current = mount_ctx_holder->first_virt_mount;

   if (appmgr_mount_current)
   {
      pfs_mount_t * pfs_mount_current;

      while (1)
      {
         pfs_mount_current = appmgr_mount_current->this_pfs_mount;

         if (pfs_mount_current)
         {
            if (pfs_mount_current->mount_id == mount_id && !strncmp(appmgr_mount_current->appmgr_rnd_drive_id, virt_mount->appmgr_rnd_drive_id, 0x10u))
               break;
         }

         appmgr_mount_current = appmgr_mount_current->next;

         if (!appmgr_mount_current)
            return label_21_cleanup(pid, virt_mount, 0, 0x80800002);
      }

      virt_mount->prev_pfs_mount = pfs_mount_current;

      return label_115_cleanup(pid, mount_ctx_holder, virt_mount, mount_point_result);
   }
   else
   {
      return label_21_cleanup(pid, virt_mount, 0, 0x80800002);
   }
}

int label_113_cleanup(SceUID pid, unsigned int mount_id, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, const char *physical_path, char *mount_point_result)
{
   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, physical_path);

   if (mount_id != 0x3E9) //patch
   {
      if (mount_id != 0x3EB) //addcont (ux0:, grw0:)
      {
         return label_115_cleanup(pid, mount_ctx_holder, virt_mount, mount_point_result);
      }
      else
      {
         return special_cleanup(pid, 0x3EA, mount_ctx_holder, virt_mount, mount_point_result); //addcont (gro0:, ux0:, grw0:)
      }
   }
   else
   {
      return special_cleanup(pid, 0x3E8, mount_ctx_holder, virt_mount, mount_point_result);  //app
   }  
}

int label_113_cleanup2(SceUID pid, pfs_mount_t *pfs_mount, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, const char *physical_path, char *mount_point_result)
{
   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, physical_path);

   if (pfs_mount->mount_id != 0x3E9) //patch
   {
      if (pfs_mount->mount_id != 0x3EB) //addcont
      {
         return label_115_cleanup(pid, mount_ctx_holder, virt_mount, mount_point_result);
      }
      else
      {
         return special_cleanup(pid, 0x3EA, mount_ctx_holder, virt_mount, mount_point_result);
      }
   }
   else
   {
      return special_cleanup(pid, 0x3E8, mount_ctx_holder, virt_mount, mount_point_result);  
   } 
}

bool entries_stuff(SceUID pid, unsigned int mount_id, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, const char *physical_path, char *mount_point_result, SceUInt64 auth_id, int& error_code)
{
   //search

   pfs_mount_t* glb_mpd_entry0 = mount_point_entries_22D470C;

   while (mount_id != glb_mpd_entry0->mount_id || strncmp(glb_mpd_entry0->path, physical_path, 0x124u) != 0)
   {
      glb_mpd_entry0 = glb_mpd_entry0->next;
      if (glb_mpd_entry0 == 0)
      {
         error_code = 0;
         return true;
      }
   }

   //select index

   int initialized_global_item_index = select_index(glb_mpd_entry0);
   if(initialized_global_item_index < 0)
   {
      error_code = label_21_cleanup(pid, virt_mount, physical_path, 0x8080001E);
      return false;
   }

   //assign authid
   
   glb_mpd_entry0->auth_ids[initialized_global_item_index] = auth_id;

   //other checks

   if(glb_mpd_entry0->pfs_rnd_drive_id[0] == 0)
   {
      virt_mount->this_pfs_mount = glb_mpd_entry0;
      error_code = label_113_cleanup(pid, mount_id, mount_ctx_holder, virt_mount, physical_path, mount_point_result);
      return false;
   }

   SceSelfAuthInfo auth_ctx;

   int res0 = SceProcessmgrForKernel_sceKernelGetSelfAuthInfoForKernel_e4c83b0d(pid, &auth_ctx);
   if(res0 >= 0)
   {
      res0 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(glb_mpd_entry0->pfs_rnd_drive_id, auth_ctx.auth_id);

      if(res0 == 0x80010011 || res0 >= 0)
      {
         virt_mount->this_pfs_mount = glb_mpd_entry0;
         error_code = label_113_cleanup(pid, mount_id, mount_ctx_holder, virt_mount, physical_path, mount_point_result);
         return false;
      }
   }

   clear_authid(glb_mpd_entry0, auth_id);

   if (res0 == 0x80800003)
   {
      error_code = label_113_cleanup(pid, mount_id, mount_ctx_holder, virt_mount, physical_path, mount_point_result);
      return false;
   }
   else
   {
      error_code = label_21_cleanup(pid, virt_mount, physical_path, res0);
      return false;
   }
}

int mpd_cleanup(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, pfs_mount_t* pfs_mount, const char *physical_path, char *mount_point_result, bool check0, int result)
{
   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, pfs_mount);

   virt_mount->this_pfs_mount = 0;

   if (check0)
      return label_21_cleanup(pid, virt_mount, physical_path, result);
   else
      return label_113_cleanup2(pid, pfs_mount, mount_ctx_holder, virt_mount, physical_path, mount_point_result);
}

int label_154_cleanup(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, pfs_mount_t *pfs_mount, const char *physical_path, char *mount_point_result, bool check0, int result)
{
   int prev_perm = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(128);
   if (pfs_mount->mount_id == 0x258)
   {
      SceIofilemgrForDriver_sceIoUmountForDriver_20574100(0x10000, 0, 0, 0);
   }
   else
   {
      ScePfsMgrForKernel_unmount_680bc384(pfs_mount->pfs_rnd_drive_id);
   }
   SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm);

   return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, check0, result);
}

int select_index_136(pfs_mount_t *pfs_mount)
{
   if (pfs_mount->auth_ids[0] == 0)
      return 0;
   else if (pfs_mount->auth_ids[1] == 0)
      return 1;
   else if (pfs_mount->auth_ids[2] == 0)
      return 2; 
   else if (pfs_mount->auth_ids[3] == 0)
      return 3;
   else if (pfs_mount->auth_ids[4] == 0)
      return 4;
   else if (pfs_mount->auth_ids[5] == 0)
      return 5;
   else if (pfs_mount->auth_ids[6] == 0)
      return 6;
   else if (pfs_mount->auth_ids[7] == 0)
      return 7;
   else if (pfs_mount->auth_ids[8] == 0)
      return 8;
   else if (pfs_mount->auth_ids[9] == 0)
      return 9;
   else if (pfs_mount->auth_ids[10] == 0)
      return 10;
   else if (pfs_mount->auth_ids[11] == 0)
      return 11;
   else if (pfs_mount->auth_ids[12] == 0)
      return 12;
   else if (pfs_mount->auth_ids[13] == 0)
      return 13;
   else if (pfs_mount->auth_ids[14] == 0)
      return 14;
   else if (pfs_mount->auth_ids[15] == 0)
      return 15;
   else 
      return -1;
}

//this function adds pfs mount mount to a list
int label_136_cleanup(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, pfs_mount_t *pfs_mount, const char *physical_path, char *mount_point_result, SceUInt64 auth_id)
{
   int initialized_allocated_item_index = select_index_136(pfs_mount);
   if(initialized_allocated_item_index < 0)
   {
      return label_154_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, 1, 0x8080001E);
   }
   else
   {
      pfs_mount_t *current_pfs_mount = (pfs_mount_t *)mount_point_entries_22D470C;
      pfs_mount->auth_ids[initialized_allocated_item_index] = auth_id;

      if (current_pfs_mount)
      {
         //if pointers are same - there is no need to rearrange global list
         if (pfs_mount == current_pfs_mount)
            return label_154_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, 0, 0x80800003);

         //insert new pfs_mount at the end
         pfs_mount_t * next_pfs_mount;
         while (true)
         {
            next_pfs_mount = current_pfs_mount->next;
            if(next_pfs_mount == 0)
               break;

            if (pfs_mount == current_pfs_mount)
               return label_154_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, 0, 0x80800003);

            current_pfs_mount = current_pfs_mount->next;
         }

         current_pfs_mount->next = pfs_mount;

         pfs_mount->prev = current_pfs_mount;
         pfs_mount->next = next_pfs_mount;
      }
      else
      {
         //if mount_point_entries_22D470C was not initialized
         //assign current pfs_mount
         mount_point_entries_22D470C = pfs_mount;

         pfs_mount->prev = 0;
         pfs_mount->next = 0;
      }

      //assign pfs_mount to virtual mount
      virt_mount->this_pfs_mount = pfs_mount;

      return label_113_cleanup2(pid, pfs_mount, mount_ctx_holder, virt_mount, physical_path, mount_point_result);
   }
}

//======================

int create_loopback_mount(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, pfs_mount_t *pfs_mount, const char *physical_path, char *mount_point_result, SceUInt64 auth_id)
{
   pfs_mount->pfs_rnd_drive_id[0] = 0;
   int prev_perm1 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80);
   int mount_res = SceIofilemgrForDriver_sceIoMountForDriver_d070bc48(0x10000, physical_path, 0, 0, 0, 0);

   if(mount_res >= 0)
   {
      int mkdir_res0 = SceIofilemgrForDriver_sceIoMkdirForDriver_7f710b25("lma0:MPE_ROOT", 0x186);
      if(mkdir_res0 == 0x80010011 || mkdir_res0 >= 0)
      {
         SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm1);
         return label_136_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, auth_id);
      }
   }

   SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm1);

   bool check0 = mount_res != 0x80800003;
   return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, check0, mount_res);
}

int create_pfs_mount_raw(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, pfs_mount_t *pfs_mount, const char *physical_path, char *mount_point_result, SceUInt64 auth_id, char* klicensee0, std::uint16_t mode_index)
{
   if (pfs_mount->pfs_rnd_drive_id[0] == 0)
      return label_136_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, auth_id);

   //===============

   //pfs mount

   SceSelfAuthInfo auth_ctx0;

   int prev_perm2 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80);
   int auth_res = SceProcessmgrForKernel_sceKernelGetSelfAuthInfoForKernel_e4c83b0d(pid, &auth_ctx0);
   if (auth_res < 0)
      return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, auth_res != 0x80800003, auth_res);

   char* klicensee1 = 0;

   if (klicensee0[0] || klicensee0[1] || klicensee0[2] || klicensee0[3] || klicensee0[4] || klicensee0[5] || klicensee0[6] || klicensee0[7] || 
       klicensee0[8] || klicensee0[9] || klicensee0[10] || klicensee0[11] || klicensee0[12] || klicensee0[13] || klicensee0[14])
   {
      klicensee1 = klicensee0;
   }
   else
   {
      klicensee1 = klicensee0[15] ? klicensee0 : 0;
   }

   int mnt_res = ScePfsMgrForKernel_mount_a772209c(pfs_mount->path, pfs_mount->pfs_rnd_drive_id, auth_ctx0.auth_id, klicensee1, mode_index);
   SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm2);
   if (mnt_res)
      return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, mnt_res != 0x80800003, mnt_res);

   //===============

   //check authid

   int check_res0 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(pfs_mount->pfs_rnd_drive_id, 0x2800000000000001); // SceShell
   if (check_res0 != 0x80010011)
   {
      if (check_res0 < 0)
      {
         ScePfsMgrForKernel_unmount_680bc384(pfs_mount->pfs_rnd_drive_id);
         return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, check_res0 != 0x80800003, check_res0);
      }
   }

   //===============

   //check authid
   
   int check_res1 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(pfs_mount->pfs_rnd_drive_id, 0x2800000000007001);
   if(check_res1 != 0x80010011)
   {
      if (check_res1 < 0)
      {
         ScePfsMgrForKernel_unmount_680bc384(pfs_mount->pfs_rnd_drive_id);
         return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, check_res1 != 0x80800003, check_res1);
      }
   }
   
   //===============

   //check authid
   
   int check_res2 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(pfs_mount->pfs_rnd_drive_id, 0x280000000000002D); // SceContentManager
   if (check_res2 != 0x80010011)
   {
      if (check_res2 < 0)
      {
         ScePfsMgrForKernel_unmount_680bc384(pfs_mount->pfs_rnd_drive_id);
         return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, check_res2 != 0x80800003, check_res2);
      }
   }
   
   //===============

   //check authid

   if (mode_index == 0x04)
   {
      int check_res3 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(pfs_mount->pfs_rnd_drive_id, 0x2800000000000010); // SceSettings
      if (check_res3 != 0x80010011)
      {
         if (check_res3 < 0)
         {
            ScePfsMgrForKernel_unmount_680bc384(pfs_mount->pfs_rnd_drive_id);
            return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, check_res3 != 0x80800003, check_res3);
         }
      }
   }
   else
   {
      if (mode_index == 0x05)
      {
         int check_res4 = ScePfsMgrForKernel_find_pmi_check_auth_id_d8d0fee5(pfs_mount->pfs_rnd_drive_id, 0x2800000000000039); // SceDailyCheckerBg
         if (check_res4 != 0x80010011)
         {
            if (check_res4 < 0)
            {
               ScePfsMgrForKernel_unmount_680bc384(pfs_mount->pfs_rnd_drive_id);
               return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, check_res4 != 0x80800003, check_res4);
            }
         }
      }
   }

   //===============

   return label_136_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, auth_id);
}

//======================

int create_mount_with_klicensee(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, const char *physical_path, pfs_mount_t *pfs_mount, SceUInt64 auth_id, const char* klicensee, std::uint16_t mode_index, char *mount_point_result)
{
   char klicensee0[16];
   memcpy(klicensee0, klicensee, 0x10);
   return create_pfs_mount_raw(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, auth_id, klicensee0, mode_index);
}

int create_mount_with_empty_klicensee(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, const char *physical_path, pfs_mount_t *pfs_mount, SceUInt64 auth_id, std::uint16_t mode_index, char *mount_point_result)
{
   char klicensee0[16] = {0};
   return create_pfs_mount_raw(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, auth_id, klicensee0, mode_index);
}

int create_mount_from_sealedkey(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, const char *physical_path, pfs_mount_t *pfs_mount, SceUInt64 auth_id, std::uint16_t mode_index, char *mount_point_result)
{
   char klicensee0[16] = {0}; 

   int sk_read_res = read_sealedkey_23D6EA0(pfs_mount->path, klicensee0);
   if (!sk_read_res)
   {
      return create_pfs_mount_raw(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, auth_id, klicensee0, mode_index);
   }
   else
   {
      return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, sk_read_res != 0x80800003, sk_read_res);
   }
}

int create_mount_from_klicensee_or_sealedkey(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, const char *physical_path, pfs_mount_t *pfs_mount, SceUInt64 auth_id, const char* klicensee, std::uint16_t mode_index, char *mount_point_result)
{
   char klicensee0[16] = {0};
   
   if (klicensee)
   {
      memcpy(klicensee0, klicensee, 0x10);
      return create_pfs_mount_raw(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, auth_id, klicensee0, mode_index);
   }
   else
   {
      int sk_read_res = read_sealedkey_23D6EA0(pfs_mount->path, klicensee0);
      if (!sk_read_res)
      {
         return create_pfs_mount_raw(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, auth_id, klicensee0, mode_index);
      }
      else
      {
         return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, sk_read_res != 0x80800003, sk_read_res);
      }
   }
}

//===================

int create_mountpoint_core(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, appmgr_mount_t *virt_mount, pfs_mount_t *pfs_mount, const char *physical_path, SceUInt64 auth_id, const char* klicensee, char *mount_point_result)
{   
   if ((pfs_mount->mount_id < 0x64))
   {
      return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, 1, 0x80800001);
   }
   else if((pfs_mount->mount_id >= 0x64) && (pfs_mount->mount_id <= 0x6A))
   {
      return create_mount_with_empty_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x16, mount_point_result); //fake / redirect
   }
   else if ((pfs_mount->mount_id >= 0x6B) && (pfs_mount->mount_id <= 0x6C))
   {
      return create_mount_with_empty_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x15, mount_point_result); //fake / redirect
   }
   else if (pfs_mount->mount_id == 0x6D)
   {
      return create_mount_with_empty_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x16, mount_point_result); //fake / redirect
   }
   else if (pfs_mount->mount_id == 0x6E)
   {
      return create_mount_from_klicensee_or_sealedkey(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, klicensee, 0x05, mount_point_result); //savedata like
   }
   else if((pfs_mount->mount_id >= 0x6F) && (pfs_mount->mount_id <= 0x70))
   {
      return create_mount_with_empty_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x15, mount_point_result); //fake / redirect
   }
   else if((pfs_mount->mount_id > 0x70) && (pfs_mount->mount_id < 0xC8))
   {
      return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, 1, 0x80800001);
   }
   else if((pfs_mount->mount_id >= 0xC8) && (pfs_mount->mount_id <= 0xCF))
   {
      return create_mount_with_empty_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x15, mount_point_result); //fake / redirect
   }
   else if((pfs_mount->mount_id > 0xCF) && (pfs_mount->mount_id <= 0x130))
   {
      return create_mount_from_sealedkey(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x06, mount_point_result); //savedata like
   }
   else if ((pfs_mount->mount_id) > 0x130 && (pfs_mount->mount_id < 0x190))
   {
      return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, 1, 0x80800001);
   }
   else if ((pfs_mount->mount_id >= 0x190) && (pfs_mount->mount_id <= 0x192))
   {
      return create_mount_with_empty_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x16, mount_point_result); //fake / redirect
   }
   else if ((pfs_mount->mount_id >= 0x193) && (pfs_mount->mount_id <= 0x1F5))
   {
      return create_mount_from_sealedkey(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x04, mount_point_result); //ac
   }
   else if((pfs_mount->mount_id > 0x1F5) && (pfs_mount->mount_id < 0x1F8))
   {
      return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, 1, 0x80800001);
   }
   else if((pfs_mount->mount_id >= 0x1F8) && (pfs_mount->mount_id <= 0x1F9))
   {
      return create_mount_from_sealedkey(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x06, mount_point_result); //savedata like
   }
   else if ((pfs_mount->mount_id > 0x1F9) && (pfs_mount->mount_id < 0x3E8))
   {
      return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, 1, 0x80800001);
   }
   else if (pfs_mount->mount_id >= 0x3E8)
   {
      switch(pfs_mount->mount_id)
      {
      case 0x3E8:
      case 0x3E9:
         {
            if (clearsign_exists_23D9A4C(pfs_mount->path))
            {
               return create_mount_with_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, klicensee, 0x02, mount_point_result); //game
            }
            else
            {
               return create_mount_with_empty_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x14, mount_point_result); //fake / redirect
            }
         }
      case 0x3EA:
      case 0x3EB:
         {
            std::uint16_t mode_index = strncmp(pfs_mount->path, "gro0:", 5u) ? 0x04 : 0x0C; //ac / ac
            return create_mount_from_sealedkey(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, mode_index, mount_point_result);
         }
      case 0x3EC:
         return create_mount_with_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, klicensee, 0x0D, mount_point_result); //game
      case 0x3ED:
         return create_mount_from_klicensee_or_sealedkey(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, klicensee, 0x05, mount_point_result); //savedata like
      case 0x3EE:
         return create_mount_with_empty_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x15, mount_point_result); //fake / redirect
      case 0x3EF:
         return create_mount_with_empty_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x14, mount_point_result); //fake / redirect
      case 0x3F0:
         return create_mount_with_empty_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x14, mount_point_result); //fake / redirect
      case 0x3F1:
         return create_mount_with_empty_klicensee(pid, mount_ctx_holder, virt_mount, physical_path, pfs_mount, auth_id, 0x15, mount_point_result); //fake / redirect
      default:
         return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path, mount_point_result, 1, 0x80800001);
      }
   }
}

int create_mountpoint_base_23D9B50(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, unsigned int mount_id, const char *title_id, const char *physical_path, const char *mount_drive, const char *klicensee, char *mount_point_result)
{
   if (!mount_point_result)
      return 0x80800001;

   char mount_drive_input[16];
   memset(mount_drive_input, 0, 0x10);

   if (mount_drive)
   {
      memcpy(mount_drive_input, mount_drive, 0x10);
   }
   else
   {
      int gen_res = generate_mount_drive(mount_id, mount_drive_input);
      if(gen_res)
         return gen_res;
   }

   //===========================================

   //this may find mountpoint and return with result in mount_point_result

   if (mount_ctx_holder->first_virt_mount)
   {
      int error_code = 0;
      if(!maybe_find_mount(pid, mount_ctx_holder, mount_id, mount_drive, mount_drive_input, mount_point_result, error_code))
         return error_code;
   }

   //===========================================

   //allocate and initialize appmgr_mount

   ctx_49D4DD9B alloc_ctx00;
   alloc_ctx00.unk0 = 0x14;
   alloc_ctx00.unk4 = 0;
   alloc_ctx00.unk8 = 0x20;
   alloc_ctx00.unkC = 0;
   alloc_ctx00.unk10 = 0;

   appmgr_mount_t * virt_mount = (appmgr_mount_t *)SceSysmemForDriver_sceKernelAllocHeapMemory3ForKernel_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x24u, &alloc_ctx00);
   if (virt_mount == 0)
      return 0x80801006;

   memset(virt_mount, 0, 0x24u);

   // copy generated drive to virt_mount

   memcpy(virt_mount->appmgr_rnd_drive_id, mount_drive_input, 0x10); 

   //=========================================== 

   //allocate and initialize physical path copy
   
   ctx_49D4DD9B alloc_ctx01;
   alloc_ctx01.unk0 = 0x14;
   alloc_ctx01.unk4 = 0;
   alloc_ctx01.unk8 = 0x20;
   alloc_ctx01.unkC = 0;
   alloc_ctx01.unk10 = 0;

   char *physical_path_local = (char *)SceSysmemForDriver_sceKernelAllocHeapMemory3ForKernel_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x124u, &alloc_ctx01);
   if (physical_path_local == 0)
      return label_21_cleanup(pid, virt_mount, physical_path_local, 0x80801006);

   memset(physical_path_local, 0, 0x124u);

   int res0 = verify_copy_23D5A10(physical_path, physical_path_local);
   if (res0 > 0)
      return label_21_cleanup(pid, virt_mount, physical_path_local, res0);

   if (strnlen(physical_path_local, 0x124) >= 0x124)
      return label_21_cleanup(pid, virt_mount, physical_path_local, 0x80800001);

   //===========================================

   SceSelfAuthInfo auth_ctx0;

   int res1 = SceProcessmgrForKernel_sceKernelGetSelfAuthInfoForKernel_e4c83b0d(pid, &auth_ctx0);
   if (res1 < 0)
   {
      if (res1 != 0x80800003)
         return label_21_cleanup(pid, virt_mount, physical_path_local, res1);
      else
         return label_113_cleanup(pid, mount_id, mount_ctx_holder, virt_mount, physical_path_local, mount_point_result);
   }

   SceUInt64 auth_id = auth_ctx0.auth_id;

   //=========================================== 

   if (mount_point_entries_22D470C)
   {
      int error_code = 0;
      if(!entries_stuff(pid, mount_id, mount_ctx_holder, virt_mount, physical_path_local, mount_point_result, auth_id, error_code))
         return error_code;
   }
   
   //=========================================== 

   //allocate and init pfs_mount_t

   ctx_49D4DD9B alloc_ctx02;
   alloc_ctx02.unk4 = 0;
   alloc_ctx02.unkC = 0;
   alloc_ctx02.unk10 = 0;
   alloc_ctx02.unk0 = 20;
   alloc_ctx02.unk8 = 32;

   pfs_mount_t *pfs_mount = (pfs_mount_t *)SceSysmemForDriver_sceKernelAllocHeapMemory3ForKernel_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x1D0u, &alloc_ctx02);
   if (!pfs_mount)
   {
      virt_mount->this_pfs_mount = 0;
      return label_21_cleanup(pid, virt_mount, physical_path_local, 0x80801006);
   }

   memset(pfs_mount, 0, 0x1D0u);

   pfs_mount->mount_id = mount_id;
   strncpy(pfs_mount->path, physical_path_local, 0x123u); //copy physical path to pfs_mount_t
   memcpy(pfs_mount->title_id, title_id, 0x10);

   //===========================================

   if (mount_id == 0x258)
      return create_loopback_mount(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path_local, mount_point_result, auth_id);
   
   //===========================================   

   int result2 = proc_generate_random_path_23D4FBC(PD_str_2404BBC, pfs_mount->pfs_rnd_drive_id);
   if (result2 < 0)
      return mpd_cleanup(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path_local, mount_point_result, result2 != 0x80800003, result2);

   if (strncmp(pfs_mount->path, "host0:", 6u) == 0)
      pfs_mount->pfs_rnd_drive_id[0] = 0;

   //===========================================

   return create_mountpoint_core(pid, mount_ctx_holder, virt_mount, pfs_mount, physical_path_local, auth_id, klicensee, mount_point_result);
}

//===================

void * alloc_mem_23DDFF8(SceSize size)
{
   return 0;
}

int get_klicensee_23D642C(char *rif_file_path, rif_info *rif_info_arg)
{
   return 0;
}

int sceAppMgrCheckRifGD_base_23D9704(char *path, char *titleid, void *dest_with_klicensee)
{
   return 0;
}

int check_package_bin_and_clearsign_23D6314(char *physical_path, int *unk1)
{
   return 0;
}

int get_patch_path_23D6A48(char *path, char *titleId, int some_flag, char *prefix, char *result_path)
{
   return 0;
}

int w_unmount_23D8E80(SceUID pid, appmgr_mount_holder_t *mount_ctx_holder, char *gen_mount_point, int umountArg)
{
   return 0;
}

ctx_23C2960 global_contexts_22A0500[20];

int w_SceAppMgrForDriver_sceAppMgrGameDataMountForDriver_ce356b2d(char *app_path, char *patch_path, char *rif_file_path, char *mount_point, char* physical_path_copy, char* alloc_buffer, phys_ctx_t *gdat_ctx)
{
   char md_mount_drive[16];
   char md_mount_point[16];

   memset(md_mount_drive, 0, 0x10);
   memset(md_mount_point, 0, 0x10);

   int last_error;

   global_ctx_item *gctxi = get_global_ctx_item_23C2DE0(global_contexts_22A0500, SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a());

   if (!gctxi)
      return 0x80801002;

   //not sure what this lookup is supposed to do

   last_error = verify_copy_23D5A10(app_path, physical_path_copy);
   if(last_error < 0)
   {
      if (last_error != 0x80800002 )
      {
         //weird check - last_error is already < 0
         if (!last_error)
            return 0x80800017;
         else
            return last_error;
      }
   }
   else
   {
      pfs_mount_t *mpe = mount_point_entries_22D470C;
      if (mpe)
      {
         bool mpe_found = false;

         // lookup first mpe entry that has id not 0x384 and path not equal to physical path
         while (mpe->mount_id != 0x384 || strncmp(mpe->path, physical_path_copy, 0x124u))
         {
            mpe = mpe->next;
            if (!mpe)
            {
               mpe_found = true;
               break;
            }
         }

         if(!mpe_found)
            return 0x80800017;
      }
   }

   // read and parse param sfo first time - ignore overlay

   char* param_sfo_path = alloc_buffer;
   _snprintf(param_sfo_path, 0x124u, "%s/%s", app_path, "sce_sys/param.sfo");
   
   int prev_perm = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80);
   last_error = proc_parse_param_sfo_23D5028(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), param_sfo_path, 1, gdat_ctx);
   SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm);

   if (last_error < 0)
   {
      if (last_error == 0x80010002)
         last_error = 0x8080000D;

      return last_error;
   }

   // check if clearsign exists

   int prev_perm2 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(0x80);
   int clearsign_exists = clearsign_exists_23D9A4C(app_path);
   SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm2);

   // retrieve klicensee if clearsign exists

   if (clearsign_exists)                       
   {
      if (rif_file_path)
      {
         last_error = get_klicensee_23D642C(rif_file_path, &gdat_ctx->rif);
         if (last_error < 0)
            return last_error;
      }
      else
      {
         last_error = sceAppMgrCheckRifGD_base_23D9704(app_path, gdat_ctx->titleId_378, &gdat_ctx->rif);
         if (last_error < 0)
            return last_error;
      }

      //check package - maybe drm free check? (since zeroes dec_rif_key below)

      int package_check_flag = 1;

      int prev_perm3 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(128);
      last_error = check_package_bin_and_clearsign_23D6314(app_path, &package_check_flag);
      SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm3);
      
      if(last_error < 0)
         return last_error;

      if(package_check_flag)
      {
         memset(gdat_ctx->rif.dec_rif_key, 0, 0x10u);
      }
   }

   // generate random mount drive

   last_error = proc_generate_random_path_23D4FBC("gp", md_mount_drive);
   if (last_error < 0)
      return last_error;

   // if generation was successful

   md_mount_drive[13] = 'd';
   md_mount_drive[14] = ':';
   md_mount_drive[15] = 0;
       
   // mount physical path (probably XX0:app/ variants)

   last_error = create_mountpoint_base_23D9B50(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), 
                                               &gctxi->unk_558.mctx_hldr_28, 
                                               0x3E8, 
                                               gdat_ctx->titleId_378, 
                                               app_path, 
                                               md_mount_drive, 
                                               gdat_ctx->rif.dec_rif_key, 
                                               md_mount_point);

   if(last_error < 0)
      return last_error;

   // read and parse param sfo second time - do not ignore overlay

   last_error = proc_parse_param_sfo_23D5028(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), param_sfo_path, 0, gdat_ctx);
   if(last_error < 0)
   {
      w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, md_mount_point, 0);
      return last_error;
   }

   // finally copy temp mount point to result

   memcpy(mount_point, md_mount_point, 0x10);

   //try to mount patch directory

   char* patch_path_copy = alloc_buffer;

   //if path is provided or not

   if(patch_path)
   {
      strncpy(patch_path_copy, patch_path, 0x124u);
      patch_path_copy[291] = 0;

      // simple check that dir exists

      SceIoStat stat;
      int prev_perm4 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(128);
      int stat_res0 = SceIofilemgrForDriver_sceIoGetstatForDriver_75c96d25(patch_path_copy, &stat);
      SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm4);
      
      //try to mount if directory exists

      if(stat_res0 >= 0)
      {
         last_error = create_mountpoint_base_23D9B50(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), 
                                                     &gctxi->unk_558.mctx_hldr_28, 
                                                     0x3E9, 
                                                     gdat_ctx->titleId_378, 
                                                     patch_path_copy, 
                                                     md_mount_drive, 
                                                     gdat_ctx->rif.dec_rif_key, 
                                                     md_mount_point);

         if(last_error < 0)
         {
            //unmount previous app_path if patch directory mount has failed - this is an error

            w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, md_mount_point, 0);
            return last_error;
         }
         else
         {
            //copy new temp mount point - this is success

            memcpy(mount_point, md_mount_point, 0x10);
            return last_error;
         }
      }
      else
      {
         //not sure what is this check for invalid - maybe you can set an argument as invalid?

         int cmp_res = strncmp(patch_path_copy, "invalid:", 9u);
         if (cmp_res)
         {
            //unmount previous app_path if patch directory was invalid

            w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, md_mount_point, 0);
            return 0x8080000F;
         }
         else
         {
            //do not unmount previous mount of app_path if patch directory did not exist - this is still a success

            return 0;
         }
      }
   }
   else
   {
      //if path is not provided - try to constuct it

      int get_patch_res = get_patch_path_23D6A48(app_path, gdat_ctx->titleid_388, gdat_ctx->flag_29C, gdat_ctx->prefix_298, patch_path_copy);
      if (get_patch_res >= 0)
      {
         // simple check that dir exists

         SceIoStat stat;
         int prev_perm5 = SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(128);
         int stat_res1 = SceIofilemgrForDriver_sceIoGetstatForDriver_75c96d25(patch_path_copy, &stat);
         SceThreadmgrForDriver_ksceKernelSetPermission_02eedf17(prev_perm5);
         
         if (stat_res1 >= 0)
         {
            last_error = create_mountpoint_base_23D9B50(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), 
                                                        &gctxi->unk_558.mctx_hldr_28, 
                                                        0x3E9, 
                                                        gdat_ctx->titleId_378, 
                                                        patch_path_copy, 
                                                        md_mount_drive, 
                                                        gdat_ctx->rif.dec_rif_key, 
                                                        md_mount_point);
            if (last_error < 0)
            {
               //unmount previous app_path if patch directory mount has failed - this is an error

               w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, md_mount_point, 0);
               return last_error;
            }
            else
            {
               //copy new temp mount point - this is success

               memcpy(mount_point, md_mount_point, 0x10);
               return last_error;
            }
         }
         else
         {
            //do not unmount previous mount of app_path if patch directory did not exist - this is still a success

            return 0;
         }
      }
      else
      {
         //do not unmount previous mount of app_path if unable to construct path to patch directory - this is still a success

         return 0;
      }
   }
}

//a user probably have to setup an overlay with fios2 prior to calling this function
//if he wants to use a patch_path argument

int SceAppMgrForDriver_sceAppMgrGameDataMountForDriver_ce356b2d(char *app_path, char *patch_path, char *rif_file_path, char *mount_point)
{ 
   int cookie = var_009EA004;

   //check args

   if (mount_point == 0 || app_path == 0)
      return var_009EA004 == cookie ? 0x80800001 : STACK_CHECK_FAIL;

   //lock mutex

   int lock_res = SceThreadmgrForDriver_ksceKernelLockMutex_16AC80C5(SceAppMgrMount_mutex_22A000C, 1, 0);
   if (lock_res < 0)
      return var_009EA004 == cookie ? lock_res : STACK_CHECK_FAIL;

   //allocate buffer

   ctx_49D4DD9B alloc_ctx0;
   alloc_ctx0.unk0 = 0x14;
   alloc_ctx0.unk4 = 0;
   alloc_ctx0.unkC = 0;
   alloc_ctx0.unk10 = 0;
   alloc_ctx0.unk8 = 0x20;

   char* physical_path_copy = (char*)SceSysmemForDriver_sceKernelAllocHeapMemory3ForDriver_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x124u, &alloc_ctx0);
   if (!physical_path_copy)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return var_009EA004 == cookie ? 0x80801006 : STACK_CHECK_FAIL;
   }

   //allocate buffer

   ctx_49D4DD9B alloc_ctx1;
   alloc_ctx1.unk0 = 20;
   alloc_ctx1.unk4 = 0;
   alloc_ctx1.unk8 = 32;
   alloc_ctx1.unkC = 0;
   alloc_ctx1.unk10 = 0;
   
   char* alloc_buffer = (char *)SceSysmemForDriver_sceKernelAllocHeapMemory3ForDriver_49D4DD9B(SceAppMgrMount_pool_22A0008, 0x124u, &alloc_ctx1);
   if (!alloc_buffer)
   {
      SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, physical_path_copy);

      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return var_009EA004 == cookie ? 0x80801006 : STACK_CHECK_FAIL;
   }

   //allocate object

   phys_ctx_t *gdat_ctx = (phys_ctx_t *)alloc_mem_23DDFF8(0x508u);
   if(!gdat_ctx)
   {
      SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, physical_path_copy);
      SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, alloc_buffer);

      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return var_009EA004 == cookie ? 0x80801006 : STACK_CHECK_FAIL;
   }

   memset(gdat_ctx, 0, 0x508u);

   int result = w_SceAppMgrForDriver_sceAppMgrGameDataMountForDriver_ce356b2d(app_path, patch_path, rif_file_path, mount_point, physical_path_copy, alloc_buffer, gdat_ctx);

   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, physical_path_copy);
   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, alloc_buffer);
   SceSysmemForDriver_ksceKernelMemPoolFree_3ebce343(SceAppMgrMount_pool_22A0008, gdat_ctx);

   SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
   return var_009EA004 == cookie ? result : STACK_CHECK_FAIL;
}

//===============================================

int set_accoutNo_global_23D58B4(char* accountNo)
{
   /*
   var_22D4778[0] = 0;
   var_22D4778[1] = 0;
   var_22D4778[2] = 0;
   */
   return 0;
}

int check_privileges_23D5D54(unsigned int mountId)
{
   return 0;
}

int read_keystone_23D6664(SceUID pid, const char *gen_mount_point, char *keystone_data)
{
   return 0;
}

int create_pfs_directory_23DFEAC(int mount_id, const char *physical_path, const char *keystone_data)
{
   return 0;
}

int get_fake_no_memory_card_23E5660()
{
   return 0;
}

int normalize_path_select_mode_create_dir_23D9354(const char *physical_path, int some_flag)
{
   return 0;
}

int check_flags_23D4CE0(int mountId, int flag)
{
   return 0;
}

//=======================

int check_long_titleId(const char * titleId)
{
   if (titleId == 0
      || (unsigned int)titleId[0] - 0x41 > 0x19 //alpha
      || (unsigned int)titleId[1] - 0x41 > 0x19 //alpha
      || (unsigned int)titleId[2] - 0x41 > 0x19 //alpha
      || (unsigned int)titleId[3] - 0x41 > 0x19 //alpha
      || (unsigned int)titleId[4] - 0x30 > 9 //number
      || (unsigned int)titleId[5] - 0x30 > 9 //number
      || (unsigned int)titleId[6] - 0x30 > 9 //number
      || (unsigned int)titleId[7] - 0x30 > 9 //number
      || (unsigned int)titleId[8] - 0x30 > 9 //number
      || (unsigned int)titleId[9] != '_' //underline
      || (unsigned int)titleId[10] - 0x30 > 9 //number
      || (unsigned int)titleId[11] - 0x30 > 9 //number
      || (unsigned int)titleId[12] != 0 ) //terminated
   {
      return false;
   }

   return true;
}

int check_short_titleId(const char * titleId)
{
   if (titleId == 0
      || (unsigned int)titleId[0] - 0x41 > 0x19 //alpha
      || (unsigned int)titleId[1] - 0x41 > 0x19 //alpha
      || (unsigned int)titleId[2] - 0x41 > 0x19 //alpha
      || (unsigned int)titleId[3] - 0x41 > 0x19 //alpha
      || (unsigned int)titleId[4] - 0x30 > 9 //number
      || (unsigned int)titleId[5] - 0x30 > 9 //number
      || (unsigned int)titleId[6] - 0x30 > 9 //number
      || (unsigned int)titleId[7] - 0x30 > 9 //number
      || (unsigned int)titleId[8] - 0x30 > 9 //number
      || (unsigned int)titleId[9] != 0 ) //terminated
   {
      return false;
   }

   return true;
}

//=======================

int cleanup_23E1014(int mountId, global_ctx_item* gctxi)
{
   if (gctxi->unk_558.phys_ctx_30.flag_160 & 0x30)
   {
      switch (mountId)
      {
      case 0x64u:
         gctxi->unk_558.phys_ctx_30.flag_160 = gctxi->unk_558.phys_ctx_30.flag_160 | 0x2000000;
         break;
      case 0x69u:
         gctxi->unk_558.phys_ctx_30.flag_160 = gctxi->unk_558.phys_ctx_30.flag_160 | 0x4000000;
         break;
      case 0x6Du:
         gctxi->unk_558.phys_ctx_30.flag_160 = gctxi->unk_558.phys_ctx_30.flag_160 | 0x8000000;
         break;
      }
   }

   SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
   return 0;
}

int sub_23E1014_label_87(int mountId_local, global_ctx_item* gctxi0_copy, const char* title_id_or_drive, const char* physical_path, const char* mount_drive, char* mountPoint_local)
{
   int mnt_create_res = create_mountpoint_base_23D9B50(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi0_copy->unk_558.mctx_hldr_28, mountId_local, title_id_or_drive, physical_path, mount_drive, 0, mountPoint_local);
   if (mnt_create_res > 0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return mnt_create_res;
   }

   if (mountId_local - 0x1F4 > 1)
   {
      return cleanup_23E1014(mountId_local, gctxi0_copy);
   }

   char keystone_data_expected[0x60];
   int ks_read_res = read_keystone_23D6664(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), mountPoint_local, keystone_data_expected);
   if (ks_read_res >= 0)
   {
      if (memcmp(0, keystone_data_expected, 0x60) == 0)
      {
         return cleanup_23E1014(mountId_local, gctxi0_copy);
      }
      else
      {
         if (mountPoint_local[0] != 0)
            w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi0_copy->unk_558.mctx_hldr_28, mountPoint_local, 0);

         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return 0x80800006;
      }
   }
   else
   {
      if (mountPoint_local[0] != 0)
         w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi0_copy->unk_558.mctx_hldr_28, mountPoint_local, 0);

      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return ks_read_res;
   }
}

int sub_23E1014_label_147(int mountId_local, global_ctx_item* gctxi0_copy, const char* title_id_or_drive, const char* physical_path, const char* mount_drive, char* mountPoint_local)
{
   if (gctxi0_copy->unk_558.phys_ctx_30.flag_160 & 0x10)
   {
      bool check5 = (mountId_local == 0x64) ? true : ((mountId_local & 0xFFFFFFFB) == 0x69);
      if (check5)
      {
         if (get_fake_no_memory_card_23E5660())
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            return 0x80010013;
         }
      }
   }

   int norm_res = normalize_path_select_mode_create_dir_23D9354(physical_path, 1);
   if (norm_res > 0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return norm_res;
   }

   return sub_23E1014_label_87(mountId_local, gctxi0_copy, title_id_or_drive, physical_path, mount_drive, mountPoint_local);
}

int sub_23E1014_label_144(int mountId_local, global_ctx_item* gctxi0_copy, const char* title_id_or_drive, const char* physical_path, const char* mount_drive, char* mountPoint_local)
{
   int create_res = create_pfs_directory_23DFEAC(mountId_local, physical_path, 0);
   if (create_res > 0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return create_res;
   }

   return sub_23E1014_label_87(mountId_local, gctxi0_copy, title_id_or_drive, physical_path, mount_drive, mountPoint_local);
}

int sub_23E1014_label_78(SceUID pid_local, int mountId_local, const char* physical_path, const char* mount_drive, char* mountPoint_local)
{
   global_ctx_item* gctxi0 = get_global_ctx_item_23C2DE0((ctx_23C2960 *)0x22A0500, SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a());
   
   if (gctxi0 > 0)
   {
      char title_id_or_drive[16];

      strncpy(title_id_or_drive, gctxi0->unk_558.titleId, 0xAu);

      if ( gctxi0->unk_558.phys_ctx_30.flag_160 & 0x30 )
      {
         if (!check_flags_23D4CE0(mountId_local, gctxi0->unk_558.phys_ctx_30.flag_160))
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            return 0x80800048;
         }
      }

      if (mountId_local == 0xCD)
      {
         char buffer[0x20];
         _snprintf(buffer, 0x20u, "ux0:cache/%s", gctxi0->unk_558.phys_ctx_30.unk498);
         return sub_23E1014_label_147(mountId_local, gctxi0, title_id_or_drive, buffer, mount_drive, mountPoint_local);
      }

      if (mountId_local != 0x12C)
      {
         if (mountId_local < 0x1F6)
         {
            if (mountId_local >= 0x1F4
               || mountId_local == 0x6E
               || mountId_local >= 0x6E && mountId_local - 0x12E <= 2)
            {
               return sub_23E1014_label_144(mountId_local, gctxi0, title_id_or_drive, physical_path, mount_drive, mountPoint_local);
            }
         }
         else if (mountId_local >= 0x1F8)
         {
            if (mountId_local >= 0x1FA)
            {
               if (mountId_local == 0x258)
               {
                  return sub_23E1014_label_87(mountId_local, gctxi0, title_id_or_drive, physical_path, mount_drive, mountPoint_local);
               }

               return sub_23E1014_label_147(mountId_local, gctxi0, title_id_or_drive, physical_path, mount_drive, mountPoint_local);
            }

            return sub_23E1014_label_144(mountId_local, gctxi0, title_id_or_drive, physical_path, mount_drive, mountPoint_local);
         }

         return sub_23E1014_label_147(mountId_local, gctxi0, title_id_or_drive, physical_path, mount_drive, mountPoint_local);
      }

      global_ctx_item* gctxi1 = get_global_ctx_item_23C2DE0((ctx_23C2960 *)0x22A0500, pid_local);
      if (gctxi1 > 0)
      {
         int mnt_res = special_mount_0x12C_23D8908(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), gctxi1->unk_558.titleId, &gctxi1->unk_558.mctx_hldr_28, &gctxi0->unk_558.mctx_hldr_28, mountPoint_local);
         if (mnt_res)
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            return mnt_res;
         }

         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return 0;
      }
   }
   
   SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
   return 0x80801002;
}

bool sub_23E1014_check_mountId(int mountId_local, int& error_code)
{
   if(mountId_local == 0xCF)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      error_code = 0x80800001;
      return false;
   }

   if (mountId_local > 0xCF)
   {
      if (mountId_local >= 0x1F8)
      {
         if (mountId_local == 0x258)
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            error_code = 0x80800001;
            return false;
         }
      }
      else if (mountId_local >= 0x1F4 || mountId_local - 0x12F <= 1)
      {
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         error_code = 0x80800001;
         return false;
      }
   }
   else if (mountId_local > 0x6B)
   {
      if (mountId_local == 0x6E || mountId_local == 0xCD)
      {
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         error_code = 0x80800001;
         return false;
      }
   }
   else if (mountId_local >= 0x6A || mountId_local == 0x68)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      error_code = 0x80800001;
      return false;
   }

   error_code = 0;
   return true;
}

//--

int sub_23E1014_mount_0x64(SceUID pid_local, int mountId_local, char* mountPoint_local)
{                  
   return sub_23E1014_label_78(pid_local, mountId_local, "ux0:picture", "photo0:", mountPoint_local);
}

int sub_23E1014_mount_0x65(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   char buffer[0x40];

   if (_snprintf(buffer, 0x40, "%s/%s/%s", "ur0:user", accountNo, "psnfriend") > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x66(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   char buffer[0x40];

   if (_snprintf(buffer, 0x40u, "%s/%s/%s", "ur0:user", accountNo, "psnmsg") > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x67(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   char buffer[0x40];
   
   if (_snprintf(buffer, 0x40, "%s/%s/%s", "ur0:user", accountNo, "near/data_sys") > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x68(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   char buffer[0x40];

   if (_snprintf(buffer, 0x40u, "%s/%s/%s/%s", "ur0:user", accountNo, "near/data/gift/received", 0) > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   
   return sub_23E1014_label_78(pid_local, mountId_local, buffer, "gift0:", mountPoint_local);
}

int sub_23E1014_mount_0x69(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ux0:music", "music0:", mountPoint_local);
}

int sub_23E1014_mount_0x6A(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char buffer[0x20];

   _snprintf(buffer, 0x20, "ux0:psm/%s/RO", 0); //not sure why, but zero is indeed passed
   
   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x6B(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char buffer[0x20];

   _snprintf(buffer, 0x20, "ux0:psm/%s/RW", 0); //not sure why, but zero is indeed passed
   
   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x6C(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local,  mountId_local, "ux0:calendar", 0, mountPoint_local);
}

int sub_23E1014_mount_0x6D(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ux0:video", "video0:", mountPoint_local);
}

int sub_23E1014_mount_0x6E(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char buffer[0x40];

   if (_snprintf(buffer, 0x40, "%s/%s", "ux0:appmeta", 0) > 0x3F) //not sure why, but zero is indeed passed
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x6F(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "tm0:nphome", 0, mountPoint_local);
}

int sub_23E1014_mount_0x70(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ux0:book", 0, mountPoint_local);
}


int sub_23E1014_mount_0xC8(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ur0:temp/sqlite", 0, mountPoint_local);
}

int sub_23E1014_mount_0xC9(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ur0:temp/attach", 0, mountPoint_local);
}

int sub_23E1014_mount_0xCA(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ux0:pspemu", 0, mountPoint_local);
}

int sub_23E1014_mount_0xCB(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ur0:temp/grief_report", 0, mountPoint_local);
}

int sub_23E1014_mount_0xCC(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ur0:temp/checkout", 0, mountPoint_local);
}

int sub_23E1014_mount_0xCD(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char buffer[0x20];

   _snprintf(buffer, 0x20, "ux0:cache/%s", 0); //not sure why, but zero is indeed passed
   
   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0xCE(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ur0:temp/webbrowser", 0, mountPoint_local);
}

int sub_23E1014_mount_0xCF(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char buffer[0x20];

   _snprintf(buffer, 0x20, "ux0:temp/app_work/%s/rec", 0); //not sure why, but zero is indeed passed
   
   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}


int sub_23E1014_mount_0x12C(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, 0, 0, mountPoint_local);
}

int sub_23E1014_mount_0x12E(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   char buffer[0x40];

   if (_snprintf(buffer, 0x40, "%s/%s/%s", "ur0:user", accountNo, "trophy/data/sce_trop") > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x12F(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   char buffer[0x40];

   if (_snprintf(buffer, 0x40u, "%s/%s/%s/%s", "ur0:user", accountNo, "trophy/data", 0) > 0x3F) //not sure why, but zero is indeed passed
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x130(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   char buffer[0x40];

   if (_snprintf(buffer, 0x40u, "%s/%s/%s/%s_BK", "ur0:user", accountNo, "trophy/data", 0) > 0x3F) //not sure why, but zero is indeed passed
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}


int sub_23E1014_mount_0x190(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ux0:mms/photo", 0, mountPoint_local);
}

int sub_23E1014_mount_0x191(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ux0:mms/music", 0, mountPoint_local);
}

int sub_23E1014_mount_0x192(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "ux0:mms/video", 0, mountPoint_local);
}


int sub_23E1014_mount_0x1F4(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char buffer[0x20];

   _snprintf(buffer, 0x20, "grw0:addcont/%s", 0); //not sure why, but zero is indeed passed

   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x1F5(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char buffer[0x20];

   _snprintf(buffer, 0x20u, "ux0:addcont/%s", 0); //not sure why, but zero is indeed passed

   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x1F6(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char buffer[0x20];

   _snprintf(buffer, 0x20, "%spatch/%s", "grw0:", 0); //not sure why, but zero is indeed passed

   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x1F7(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char buffer[0x20];

   _snprintf(buffer, 0x20, "%spatch/%s", "ux0:", 0); //not sure why, but zero is indeed passed
   
   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x1F8(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   char buffer[0x20];
   
   _snprintf(buffer, 0x20, "ux0:user/%s/savedata_vc", accountNo);
   
   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}

int sub_23E1014_mount_0x1F9(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   char buffer[0x20];

   _snprintf(buffer, 0x20, "ux0:user/%s/_temp_savedata_vc", accountNo);
   
   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}


int sub_23E1014_mount_0x258(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   char buffer[0x20];

   _snprintf(buffer, 0x40u, "ux0:umass/%s.img", 0); //not sure why, but zero is indeed passed
                        
   return sub_23E1014_label_78(pid_local, mountId_local, buffer, 0, mountPoint_local);
}


int sub_23E1014_mount_0x3EF(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "vs0:sys/external", 0, mountPoint_local);
}

int sub_23E1014_mount_0x3F0(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   return sub_23E1014_label_78(pid_local, mountId_local, "vs0:data/external", 0, mountPoint_local);
}

int sub_23E1014_mount_0x3F1(SceUID pid_local, int mountId_local, char* mountPoint_local)
{                           
   return sub_23E1014_label_78(pid_local, mountId_local, "ux0:data/userdata", 0, mountPoint_local);
}

//--

int sub_23E1014_label_8(SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   if (mountPoint_local == 0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   int error_code = 0;
   if(!sub_23E1014_check_mountId(mountId_local, error_code))
      return error_code;
  
   if (mountId_local < 0x64)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if(mountId_local >= 0x64 && mountId_local <= 0x70)
   {
      #pragma region

      switch(mountId_local)
      {
      case 0x64:
         return sub_23E1014_mount_0x64(pid_local, mountId_local, mountPoint_local);
      case 0x65:
         return sub_23E1014_mount_0x65(pid_local, mountId_local, mountPoint_local);
      case 0x66:
         return sub_23E1014_mount_0x66(pid_local, mountId_local, mountPoint_local);
      case 0x67:
         return sub_23E1014_mount_0x67(pid_local, mountId_local, mountPoint_local);
      case 0x68:
         return sub_23E1014_mount_0x68(pid_local, mountId_local, mountPoint_local);
      case 0x69:
         return sub_23E1014_mount_0x69(pid_local, mountId_local, mountPoint_local);
      case 0x6A:
         return sub_23E1014_mount_0x6A(pid_local, mountId_local, mountPoint_local);
      case 0x6B:
         return sub_23E1014_mount_0x6B(pid_local, mountId_local, mountPoint_local);
      case 0x6C:
         return sub_23E1014_mount_0x6C(pid_local, mountId_local, mountPoint_local);
      case 0x6D:
         return sub_23E1014_mount_0x6D(pid_local, mountId_local, mountPoint_local);
      case 0x6E:
         return sub_23E1014_mount_0x6E(pid_local, mountId_local, mountPoint_local);
      case 0x6F:
         return sub_23E1014_mount_0x6F(pid_local, mountId_local, mountPoint_local);
      case 0x70:
         return sub_23E1014_mount_0x70(pid_local, mountId_local, mountPoint_local);
      }

      #pragma endregion
   }
   else if(mountId_local > 0x70 && mountId_local < 0xC8)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if(mountId_local >= 0xC8 && mountId_local <= 0xCF)
   {
      #pragma region

      switch(mountId_local)
      {
      case 0xC8:
         return sub_23E1014_mount_0xC8(pid_local, mountId_local, mountPoint_local);
      case 0xC9:
         return sub_23E1014_mount_0xC9(pid_local, mountId_local, mountPoint_local);
      case 0xCA:
         return sub_23E1014_mount_0xCA(pid_local, mountId_local, mountPoint_local);
      case 0xCB:
         return sub_23E1014_mount_0xCB(pid_local, mountId_local, mountPoint_local);
      case 0xCC:
         return sub_23E1014_mount_0xCC(pid_local, mountId_local, mountPoint_local);
      case 0xCD:
         return sub_23E1014_mount_0xCD(pid_local, mountId_local, mountPoint_local);
      case 0xCE:
         return sub_23E1014_mount_0xCE(pid_local, mountId_local, mountPoint_local);
      case 0xCF:
         return sub_23E1014_mount_0xCF(pid_local, mountId_local, mountPoint_local);
      }

      #pragma endregion
   }
   else if(mountId_local > 0xCF && mountId_local < 0x12C)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if(mountId_local >= 0x12C && mountId_local <= 0x130)
   {
      #pragma region

      switch(mountId_local)
      {
      case 0x12C:
         return sub_23E1014_mount_0x12C(pid_local, mountId_local, mountPoint_local);
      case 0x12D:
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            return 0x80800001;
         }
      case 0x12E:
         return sub_23E1014_mount_0x12E(pid_local, mountId_local, mountPoint_local);
      case 0x12F:
         return sub_23E1014_mount_0x12F(pid_local, mountId_local, mountPoint_local);
      case 0x130:
         return sub_23E1014_mount_0x130(pid_local, mountId_local, mountPoint_local);
      }

      #pragma endregion
   }
   else if(mountId_local > 0x130 && mountId_local < 0x190)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if (mountId_local >= 0x190 && mountId_local <= 0x192)
   {
      #pragma region

      switch (mountId_local)
      {
      case 0x190:
         return sub_23E1014_mount_0x190(pid_local, mountId_local, mountPoint_local);
      case 0x191:
         return sub_23E1014_mount_0x191(pid_local, mountId_local, mountPoint_local);
      case 0x192:
         return sub_23E1014_mount_0x192(pid_local, mountId_local, mountPoint_local);
      }

      #pragma endregion
   }
   else if(mountId_local > 0x192 && mountId_local < 0x1F4)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if (mountId_local >= 0x1F4 && mountId_local <= 0x1F9)
   {
      #pragma region

      switch(mountId_local)
      {
      case 0x1F4:
         return sub_23E1014_mount_0x1F4(pid_local, mountId_local, mountPoint_local);
      case 0x1F5:
         return sub_23E1014_mount_0x1F5(pid_local, mountId_local, mountPoint_local);
      case 0x1F6:
         return sub_23E1014_mount_0x1F6(pid_local, mountId_local, mountPoint_local);
      case 0x1F7:
         return sub_23E1014_mount_0x1F7(pid_local, mountId_local, mountPoint_local);
      case 0x1F8:
         return sub_23E1014_mount_0x1F8(pid_local, mountId_local, mountPoint_local);
      case 0x1F9:
         return sub_23E1014_mount_0x1F9(pid_local, mountId_local, mountPoint_local);
      }

      #pragma endregion
   }
   else if (mountId_local > 0x1F9 && mountId_local < 0x258)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if(mountId_local == 0x258)
   {
      return sub_23E1014_mount_0x258(pid_local, mountId_local, mountPoint_local);
   }
   else if(mountId_local > 0x258 && mountId_local < 0x3EF)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if (mountId_local >= 0x3EF && mountId_local <= 0x3F1)
   {
      #pragma region

      switch(mountId_local)
      {
      case 0x3EF:
         return sub_23E1014_mount_0x3EF(pid_local, mountId_local, mountPoint_local);
      case 0x3F0:
         return sub_23E1014_mount_0x3F0(pid_local, mountId_local, mountPoint_local);
      case 0x3F1:
         return sub_23E1014_mount_0x3F1(pid_local, mountId_local, mountPoint_local);
      }

      #pragma endregion
   }
   else
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
}

int sub_23E1014_label_100(SceSelfAuthInfo& auth_ctx, SceUID pid_local, int mountId_local, char* mountPoint_local)
{
   if(auth_ctx.auth_id == 0x2800000000000001)
   {
      return sub_23E1014_label_8(pid_local, mountId_local, mountPoint_local);
   }
   else
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800009;
   }
}

//need to reverse this
int w_sceAppMgrDataMount_generic_23E1014(SceUID pid, int mountId, char *mountPoint)
{
   //vars
   /*
   unsigned int v6; // r11
   signed int lock_res0; // r7
   int result; // r0
   int authid_check_res0; // r0
   int index0; // r10
   int index1; // r3
   char *symbol0; // r2
   char check0; // zf
   const char *phys_path0; // r2
   SceUID pid0; // r0
   global_ctx_item *gctxi0; // r0
   global_ctx_item *gctxi0_copy; // r10
   int flag0; // r1
   SceUID pid1; // r0
   int flag1; // r3
   char check1; // zf
   char check2; // zf
   char v23; // r0
   char check3; // zf
   int check4; // r0
   const char *format0; // r2
   char check5; // zf
   int index3; // r3
   global_ctx_item *gctxi1; // r0
   global_ctx_item *gctxi1_copy; // r5
   SceUID pid2; // r0
   char *phys_drive0; // r3
   signed int dec_res0; // r0
   const char *phys_path1; // r2
   unsigned int bytes_printed0; // r0
   char *symbol1; // r3
   int index4; // r7
   SceUID pid3; // r0
   SceUID pid4; // r0
   char *dec_str_src0; // r0
   char *physical_path; // [sp+14h] [bp-11Ch]
   char *mount_drive; // [sp+18h] [bp-118h]
    // [sp+20h] [bp-110h]
   process_auth_id_ctx auth_ctx; // [sp+30h] [bp-100h]
   char dec_buffer0[64]; // [sp+C4h] [bp-6Ch]
   char v47; // [sp+108h] [bp-28h]
   */

   char* mountPoint_local = mountPoint;
   unsigned int mountId_local = mountId;
   SceUID pid_local = pid;

   char title_id_or_drive[16];

   memset(title_id_or_drive, 0, 0x10);

   int lock_res0 = SceThreadmgrForDriver_ksceKernelLockMutex_16AC80C5(SceAppMgrMount_mutex_22A000C, 1, 0);
   if (lock_res0 < 0)
      return lock_res0;

   if (mountId > 0x130)
   {
      if (mountId == 0x258)
      {
         #pragma region no fall through

         authid_check_res0 = SceSblACMgrForDriver_check_auth_id_4db7f512(0);
         
         if ( authid_check_res0 )
         {
            return sub_23E1014_label_8();
         }
         else
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            return 0x80800009;
         }

         #pragma endregion
      }

      if (mountId > 0x258)
      {
         if (mountId - 0x384 > 1)
         {
            return sub_23E1014_label_8();
         }
      }
      else if (mountId - 0x1F4 > 5)
      {
         return sub_23E1014_label_8();
      }
   }
   else if (mountId < 0x12E)
   {
      if (mountId > 0x70)
      {
         #pragma region no fall through

         if (mountId != 0xCD)
         {
            return sub_23E1014_label_8();
         }
         else
         {
            #pragma region no fall through

            authid_check_res0 = SceSblACMgrForDriver_check_auth_id_456da7ac(0);
         
            if (authid_check_res0)
            {
               return sub_23E1014_label_8();
            }
            else
            {
               SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
               return 0x80800009;
            }

            #pragma endregion
         }

         #pragma endregion
      }
      else if (mountId < 0x6E)
      {
         #pragma region no fall through

         if (mountId - 106 <= 1
            && !SceSblACMgrForDriver_check_auth_id_c98d82ee(0)
            && !SceSblACMgrForDriver_sceSblACMgrIsShell_8612b243(0))
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            return 0x80800009;
         }
         else
         {
            return sub_23E1014_label_8();
         }

         #pragma endregion
      }
   }

   if (SceProcessmgrForKernel_sceKernelGetSelfAuthInfoForKernel_e4c83b0d(0, (SceSelfAuthInfo *)&auth_ctx) < 0 )
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800009;
   }

   if (mountId == 0x70)
   {
      #pragma region no fall through

      authid_check_res0 = SceSblACMgrForDriver_sceSblACMgrIsNonGameProgram_6c5ab07f(0);
      if ( authid_check_res0 )
      {
         return sub_23E1014_label_8();
      }
      else
      {
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return 0x80800009;
      }

      #pragma endregion
   }
   if (mountId > 0x70)
   {
      #pragma region no fall through

      if (mountId - 0x384 > 1)
      {
         return sub_23E1014_label_100();
      }
      else
      {
         #pragma region no fall through

         if(auth_ctx.auth_id == 0x2808000000000001)
         {
            authid_check_res0 = 1
         }
         else
         {
            authid_check_res0 = 0;
         }

         if (authid_check_res0)
         {
            return sub_23E1014_label_8();
         }
         else
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            return 0x80800009;
         }

         #pragma endregion
      }

      #pragma endregion
   }
   else
   {
      #pragma region no fall through

      if (mountId != 0x6E)
      {
         #pragma region no fall through
         if (mountId == 0x6F)
         {
            #pragma region no fall through
            authid_check_res0 = SceSblACMgrForDriver_sceSblACMgrIsSomething_f5ae24ac(0) != 0; 
            if ( authid_check_res0 )
            {
               return sub_23E1014_label_8();
            }
            else
            {
               SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
               return 0x80800009;
            }
            #pragma endregion
         }
         else
         {
            return sub_23E1014_label_100();
         }
         #pragma endregion
      }
      else
      {
         #pragma region no fall through

         if(auth_ctx.auth_id == 0x2800000000000001)
         {
            v23 = 0;
         }
         else
         {
            v23 = 1;
         }

         if(auth_ctx.auth_id == 0x280000000000002D)
         {
            check4 = 0;
         }
         else
         {
            check4 = v23 & 1;
         }
      
         authid_check_res0 = check4 ^ 1;

         if (authid_check_res0)
         {
            return sub_23E1014_label_8();
         }
         else
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            return 0x80800009;
         }

         #pragma endregion
      }

      #pragma endregion
   }
}

int SceAppMgrForDriver_sceAppMgrAppDataMountForDriver_b1d3c287(int mountId, char *mountPoint)
{
   if(mountId < 0x64 || mountId > 0x70)
      return 0x80800001;

   switch(mountId)
   {
      case 0x64:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x69:
      case 0x6C:
      case 0x6D:
      case 0x6F:
      case 0x70:
         return w_sceAppMgrDataMount_generic_23E1014(0, mountId, mountPoint);
      default:
         return 0x80800001;
   }
}

int SceAppMgrForDriver_sceAppMgrWorkDirMountForDriver_3a0a9b82(int mountId, char *mountPoint)
{
   if (mountId != 0xCA)
   {
      if(mountId < 0xC8 || mountId > 0xCE)
         return 0x80800001;

      switch(mountId)
      {
         case 0xC8:
         case 0xC9:
         case 0xCB:
         case 0xCC:
         case 0xCE:
            return w_sceAppMgrDataMount_generic_23E1014(0, mountId, mountPoint);
         default:
            return 0x80800001;
      }
   }
   else
   {
      if (SceSblACMgrForDriver_sceSblACMgrCheckAuthIdForDriver_0b6e6cd7(0))
         return w_sceAppMgrDataMount_generic_23E1014(0, mountId, mountPoint);
      return 0x80800009;
   }
}

//=======================

int mount_base_5e311f71(int mountId, const char* physical_path, const char* mount_drive, char* mountPoint)
{
   global_ctx_item * gctxi = get_global_ctx_item_23C2DE0(global_contexts_22A0500, SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a());

   if (gctxi == 0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80801002;
   }

   if (gctxi->unk_558.phys_ctx_30.flag_160 & 0x30)
   {
      if (check_flags_23D4CE0(mountId, gctxi->unk_558.phys_ctx_30.flag_160) == 0)
      {
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return 0x80800048;
      }
   }

   if (mountId == 0x6E)
   {
      int create_res = create_pfs_directory_23DFEAC(0x6E, physical_path, 0);
      if (create_res)
      {
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return create_res;
      }
   }
   else
   {
      if (gctxi->unk_558.phys_ctx_30.flag_160 & 0x10)
      {
         if ((mountId & 0xFFFFFFFB) == 0x69)
         {
            if (get_fake_no_memory_card_23E5660())
            {
               SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
               return 0x80010013;
            }
         }
      }

      int norm_res = normalize_path_select_mode_create_dir_23D9354(physical_path, 1);
      if (norm_res)
      {
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return norm_res;
      }
   }

   int mnt_res = create_mountpoint_base_23D9B50(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, mountId, gctxi->unk_558.titleId, physical_path, mount_drive, 0, mountPoint);

   if (mnt_res != 0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return mnt_res;
   }

   if (gctxi->unk_558.phys_ctx_30.flag_160 & 0x30)
   {
      if (mountId == 0x69)
      {
         gctxi->unk_558.phys_ctx_30.flag_160 = gctxi->unk_558.phys_ctx_30.flag_160 | 0x4000000;

         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return mnt_res;
      }
      else if (mountId == 0x6D)
      {
         gctxi->unk_558.phys_ctx_30.flag_160 = gctxi->unk_558.phys_ctx_30.flag_160 | 0x8000000;
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);

         return mnt_res;
      }
      else
      {
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return mnt_res;
      }
   }
   else
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return mnt_res;
   }
}

int sub_5e311f71_mount_0x68(int mountId, const char* titleId, char* mountPoint)
{
   char dec_output[0x40];

   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   if (_snprintf(dec_output, 0x40u, "%s/%s/%s/%s", "ur0:user", accountNo, "near/data/gift/received", titleId) > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return mount_base_5e311f71(mountId, dec_output, "gift0:", mountPoint);
}

int sub_5e311f71_mount_0x69(int mountId, char* mountPoint)
{  
   return mount_base_5e311f71(mountId, "ux0:music", "music0:", mountPoint);
}

int sub_5e311f71_mount_0x6A(int mountId, const char* titleId, char* mountPoint)
{
   char buffer[0x20];

   _snprintf(buffer, 0x20u, "ux0:psm/%s/RO", titleId);
   
   return mount_base_5e311f71(mountId, buffer, 0, mountPoint);
}

int sub_5e311f71_mount_0x6B(int mountId, const char* titleId, char* mountPoint)
{
   char buffer[0x20];

   _snprintf(buffer, 0x20u, "ux0:psm/%s/RW", titleId);

   return mount_base_5e311f71(mountId, buffer, 0, mountPoint);
}

int sub_5e311f71_mount_0x6C(int mountId, char* mountPoint)
{
   return mount_base_5e311f71(mountId, "ux0:calendar", 0, mountPoint);
}

int sub_5e311f71_mount_0x6D(int mountId, char* mountPoint)
{
   return mount_base_5e311f71(mountId, "ux0:video", "video0:", mountPoint);
}

int sub_5e311f71_mount_0x6E(int mountId, const char* titleId, char* mountPoint)
{
   char dec_output[0x40];

   if (_snprintf(dec_output, 0x40u, "%s/%s", "ux0:appmeta", titleId) > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   
   return mount_base_5e311f71(mountId, dec_output, 0, mountPoint);
}

int check_titleid_5e311f71(int mountId, const char* titleId, int& error_code)
{
   if(mountId < 0x68 || mountId > 0x6E)
   {
      error_code = 0;
      return true;
   }

   switch ((mountId - 0x68))
   {
   case 0x68:
      {
         if(!check_long_titleId(titleId))
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            error_code = 0x80800001;
            return false;
         }
      }
      break;
   case 0x6A:
   case 0x6B:
      {
         if(!check_short_titleId(titleId))
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            error_code = 0x80800001;
            return false;
         }
      }
      break;
   case 0x6E:
      {
         if (titleId == 0)
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            error_code = 0x80800001;
            return false;
         }
      }
      break;
   default:
      break;
   }
   
   error_code = 0;
   return true;
}

int w_sceAppMgrAppDataMountByIdForDriver_5e311f71(int mountId, const char *titleId, char *mountPoint)
{
   int lock_res0 = SceThreadmgrForDriver_ksceKernelLockMutex_16AC80C5(SceAppMgrMount_mutex_22A000C, 1, 0);
   if (lock_res0 < 0)
      return lock_res0;

   if (check_privileges_23D5D54(mountId) == 0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800009;
   }

   if (!mountPoint)
   {
      lock_res0 = 0x80800001;
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return lock_res0;
   }

   int error_code = 0;
   if(!check_titleid_5e311f71(mountId, titleId, error_code))
      return error_code;

   switch (mountId)
   {
   case 0x68:
      return sub_5e311f71_mount_0x68(mountId, titleId, mountPoint);
   case 0x69:
      return sub_5e311f71_mount_0x69(mountId, mountPoint);
   case 0x6A:
      return sub_5e311f71_mount_0x6A(mountId, titleId, mountPoint);
   case 0x6B:
      return sub_5e311f71_mount_0x6B(mountId, titleId, mountPoint);
   case 0x6C:
      return sub_5e311f71_mount_0x6C(mountId, mountPoint);
   case 0x6D:
      return sub_5e311f71_mount_0x6D(mountId, mountPoint);
   case 0x6E:
      return sub_5e311f71_mount_0x6E(mountId, titleId, mountPoint);
   default:
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
}

//it is strange that function does not allow all mountIds that it can handle
//does not mount: music0: ux0:calendar video0:
int SceAppMgrForDriver_sceAppMgrAppDataMountByIdForDriver_5e311f71(int mountId, char *titleId, char *mountPoint)
{
   if(mountId < 0x68 || mountId > 0x6E)
      return 0x80800001;

   switch(mountId)
   {
   case 0x68: //gift0:
   case 0x6A: //ux0:psm/%s/RO
   case 0x6B: //ux0:psm/%s/RW
   case 0x6E: //ux0:appmeta
      return w_sceAppMgrAppDataMountByIdForDriver_5e311f71(mountId, titleId, mountPoint);
   default:
      return 0x80800001;
   }
}

//===============================================

bool check_title_id_23E00B8(int mountId, const char * titleId, int& error_code)
{
   if (mountId != 0xCF)
   {
      #pragma region does not fall through

      if (mountId > 0xCF)
      {
         #pragma region does not fall through

         if (mountId >= 0x1F8)
         {
            #pragma region does not fall through

            if (mountId == 0x258)
            {
               #pragma region does not fall through

               if (titleId == 0)
               {
                  error_code = 0x80800001;
                  SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
                  return false;
               }

               int index0 = 0;

               do
               {
                  #pragma region

                  int symbol0 = (unsigned __int8)titleId[index0];
                  unsigned int symbol_diff0 = symbol0 - 0x41;
                  unsigned int symbol_diff1 = symbol0 - 0x30;
                  char check1 = symbol_diff0 >= 5;
                  char check2 = symbol_diff0 == 5;

                  if (symbol_diff0 > 5)
                  {
                     check1 = symbol_diff1 >= 9;
                     check2 = symbol_diff1 == 9;
                  }

                  if (!check2 & (unsigned __int8)check1)
                  {
                     error_code = 0x80800001;
                     SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
                     return false;
                  }

                  ++index0;

                  #pragma endregion
               }
               while (index0 != 0x20);

               if (titleId[0x20] != 0)
               {
                  error_code = 0x80800001;
                  SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
                  return false;
               }
               else
               {
                  error_code = 0;
                  return true;
               }

               #pragma endregion
            }
            else
            {
               #pragma region does not fall through

               error_code = 0;
               return true;

               #pragma endregion
            }

            #pragma endregion
         }
         else if (mountId < 0x1F4)
         {
            #pragma region does not fall through

            if (mountId - 0x12F > 1)
            {
               error_code = 0;
               return true;
            }
            else
            {
               #pragma region does not fall through

               if(!check_long_titleId(titleId))
               {
                  error_code = 0x80800001;
                  SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
                  return false;
               }
               else
               {
                  error_code = 0;
                  return true;
               }

               #pragma endregion
            }

            #pragma endregion
         }
         else
         {
            #pragma region does not fall through

            if(!check_short_titleId(titleId))
            {
               error_code = 0x80800001;
               SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
               return false;
            }
            else
            {
               error_code = 0;
               return true;
            }

            #pragma endregion
         }

         #pragma endregion
      }
      else
      {
         #pragma region does not fall through

         if (mountId > 0x6B)
         {
            #pragma region does not fall through

            if (mountId == 0x6E)
            {
               #pragma region does not fall through

               if (titleId == 0)
               {
                  error_code = 0x80800001;
                  SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
                  return false;
               }
               else
               {
                  error_code = 0;
                  return true;
               }

               #pragma endregion
            }
            else
            {
               #pragma region does not fall through

               if (mountId != 0xCD)
               {
                  error_code = 0;
                  return true;
               }
               else
               {
                  #pragma region does not fall through

                  if(!check_short_titleId(titleId))
                  {
                     error_code = 0x80800001;
                     SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
                     return false;
                  }
                  else
                  {
                     error_code = 0;
                     return true;
                  }

                  #pragma endregion
               }

               #pragma endregion
            }

            #pragma endregion
         }
         else if (mountId < 0x6A)
         {
            #pragma region does not fall through

            if (mountId != 0x68)
            {
               error_code = 0;
               return true;
            }
            else
            {
               #pragma region does not fall through

               if(!check_long_titleId(titleId))
               {
                  error_code = 0x80800001;
                  SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
                  return false;
               }
               else
               {
                  error_code = 0;
                  return true;
               }

               #pragma endregion
            }

            #pragma endregion
         }
         else
         {
            #pragma region does not fall through

            if(!check_short_titleId(titleId))
            {
               error_code = 0x80800001;
               SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
               return false;
            }
            else
            {
               error_code = 0;
               return true;
            }

            #pragma endregion
         }

         #pragma endregion
      }

      #pragma endregion
   }
   else
   {
      #pragma region does not fall through

      if(!check_short_titleId(titleId))
      {
         error_code = 0x80800001;
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return false;
      }
      else
      {
         error_code = 0;
         return true;
      }

      #pragma endregion
   }
}

//--------------------------

int cleanup_23E00B8(int mountId, global_ctx_item *gctxi)
{
   if (gctxi->unk_558.phys_ctx_30.flag_160 & 0x30)
   {
      switch (mountId)
      {
      case 0x64u:
         gctxi->unk_558.phys_ctx_30.flag_160 = gctxi->unk_558.phys_ctx_30.flag_160 | 0x2000000;
         break;
      case 0x69u:
         gctxi->unk_558.phys_ctx_30.flag_160 = gctxi->unk_558.phys_ctx_30.flag_160 | 0x4000000;
         break;
      case 0x6Du:
         gctxi->unk_558.phys_ctx_30.flag_160 = gctxi->unk_558.phys_ctx_30.flag_160 | 0x8000000;
         break;
      }
   }

   SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
   return 0;
}

//--------------------------

int special_mount_0x12C_23D8908(SceUID pid, const char *titleId, appmgr_mount_holder_t *appmgr_holder_other_proces, appmgr_mount_holder_t *appmgr_holder_current_process, char *mountPoint)
{
   return 0;
}

int mount_base_23E00B8(int mountId, const char *keystone_data, global_ctx_item *gctxi, const char* titleId, const char* physical_path, const char* mount_drive, char* mountPoint)
{
   int create_res = create_mountpoint_base_23D9B50(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, mountId, titleId, physical_path, mount_drive, 0, mountPoint);
   if (create_res != 0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return create_res;
   }

   //check if mountId requires keystone check

   if (mountId >= 0x1F6)
   {
      //successfull return
      return cleanup_23E00B8(mountId, gctxi);
   }
   else
   {
      //if mount was successfull - read keystone file
      char keystone_data_expected[0x60];
      int read_res = read_keystone_23D6664(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), mountPoint, keystone_data_expected);
      if(read_res < 0)
      {
         if (mountPoint[0] != 0)
            w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, mountPoint, 0);

         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return 0x80800006;
      }

      //compare keystone file
      if (memcmp(keystone_data, keystone_data_expected, 0x60) != 0)
      {
         if (mountPoint[0] != 0)
            w_unmount_23D8E80(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), &gctxi->unk_558.mctx_hldr_28, mountPoint, 0);

         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return 0x80800006;
      }

      //successfull return
      return cleanup_23E00B8(mountId, gctxi);
   }
}

int mount_with_fake_no_memory_card_23E00B8(int mountId, const char *keystone_data, global_ctx_item *gctxi, const char* titleId, const char* physical_path, const char* mount_drive, char* mountPoint)
{
   if (gctxi->unk_558.phys_ctx_30.flag_160 & 0x10)
   {
      bool check3 = (mountId == 0x64) ? true : ((mountId & 0xFFFFFFFB) == 0x69);
      if (check3)
      {
         if (get_fake_no_memory_card_23E5660())
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            return 0x80010013;
         }
      }
   }

   int lock_res0 = normalize_path_select_mode_create_dir_23D9354(physical_path, 1);
   if (lock_res0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return lock_res0;
   }

   return mount_base_23E00B8(mountId, keystone_data, gctxi, titleId, physical_path, mount_drive, mountPoint);
}

int mount_with_create_dir_23E00B8(int mountId, const char *keystone_data, global_ctx_item *gctxi, const char* titleId, const char* physical_path, const char* mount_drive, char* mountPoint)
{
   int lock_res0 = create_pfs_directory_23DFEAC(mountId, physical_path, keystone_data);
   if (lock_res0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return lock_res0;
   }

   return mount_base_23E00B8(mountId, keystone_data, gctxi, titleId, physical_path, mount_drive, mountPoint);
}

//--------------------------

int work_dir_mount_23E00B8(SceUID pid, int mountId, const char *keystone_data, const char* physical_path, const char* mount_drive, char* mountPoint)
{
   global_ctx_item * gctxi0 = get_global_ctx_item_23C2DE0(global_contexts_22A0500, SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a());
   if (gctxi0 == 0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80801002;
   }

   if (gctxi0->unk_558.phys_ctx_30.flag_160 & 0x30)
   {
      if (check_flags_23D4CE0(mountId, gctxi0->unk_558.phys_ctx_30.flag_160) == 0)
      {
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return 0x80800048;
      }
   }

   if (mountId == 0xCD)
   {
      char buffer[0x20];
      memset(buffer, 0, 0x20);

      _snprintf(buffer, 0x20u, "ux0:cache/%s", gctxi0->unk_558.phys_ctx_30.unk498);

      return mount_with_fake_no_memory_card_23E00B8(mountId, keystone_data, gctxi0, gctxi0->unk_558.titleId, buffer, mount_drive, mountPoint);
   }
   else if(mountId == 0x12C)
   {
      global_ctx_item * gctxi1 = get_global_ctx_item_23C2DE0(global_contexts_22A0500, pid);

      if (gctxi1 == 0)
      {
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return 0x80801002;
      }

      int lock_res0 = special_mount_0x12C_23D8908(SceThreadmgrForDriver_ksceKernelGetProcessId_9dcb4b7a(), gctxi1->unk_558.titleId, &gctxi1->unk_558.mctx_hldr_28, &gctxi0->unk_558.mctx_hldr_28, mountPoint);
      if (lock_res0)
      {
         SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
         return lock_res0;
      }

      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0;
   }
   else
   {
      if (mountId < 0x1F6)
      {
         if (mountId >= 0x1F4 || mountId == 0x6E || mountId >= 0x6E && mountId - 0x12E <= 2 )
         {
            return mount_with_create_dir_23E00B8(mountId, keystone_data, gctxi0, gctxi0->unk_558.titleId, physical_path, mount_drive, mountPoint);
         }
         else
         {
            return mount_with_fake_no_memory_card_23E00B8(mountId, keystone_data, gctxi0, gctxi0->unk_558.titleId, physical_path, mount_drive, mountPoint);
         }
      }
      else if (mountId >= 0x1F8)
      {
         if (mountId >= 0x1FA)
         {
            if (mountId == 0x258)
            {
               return mount_base_23E00B8(mountId, keystone_data, gctxi0, gctxi0->unk_558.titleId, physical_path, mount_drive, mountPoint);
            }
            else
            {
               return mount_with_fake_no_memory_card_23E00B8(mountId, keystone_data, gctxi0, gctxi0->unk_558.titleId, physical_path, mount_drive, mountPoint);
            }
         }
         else
         {
            return mount_with_create_dir_23E00B8(mountId, keystone_data, gctxi0, gctxi0->unk_558.titleId, physical_path, mount_drive, mountPoint);
         }
      }
      else
      {
         return mount_with_fake_no_memory_card_23E00B8(mountId, keystone_data, gctxi0, gctxi0->unk_558.titleId, physical_path, mount_drive, mountPoint);
      }
   }
}

//--------------------------

//for mount subroutines - mount_drive is optional. if not specified, it will be generated by base mount function

int sub_23E00B8_mount_0x64(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ux0:picture", "photo0:", mountPoint);
}

int sub_23E00B8_mount_0x65(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   char dec_buffer0[0x40];
   memset(dec_buffer0, 0, 0x40);

   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);
  
   if(_snprintf(dec_buffer0, 0x40u, "%s/%s/%s", "ur0:user", accountNo, "psnfriend") > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, dec_buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x66(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   char dec_buffer0[0x40];
   memset(dec_buffer0, 0, 0x40);

   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   if (_snprintf(dec_buffer0, 0x40u, "%s/%s/%s", "ur0:user", accountNo, "psnmsg") > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, dec_buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x67(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   char dec_buffer0[0x40];
   memset(dec_buffer0, 0, 0x40);

   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   if (_snprintf(dec_buffer0, 0x40u, "%s/%s/%s", "ur0:user", accountNo, "near/data_sys") > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, dec_buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x68(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char dec_buffer0[0x40];
   memset(dec_buffer0, 0, 0x40);

   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   if (_snprintf(dec_buffer0, 0x40u, "%s/%s/%s/%s", "ur0:user", accountNo, "near/data/gift/received", titleId) > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, dec_buffer0, "gift0:", mountPoint);
}

int sub_23E00B8_mount_0x69(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   char dec_buffer0[0x40];
   memset(dec_buffer0, 0, 0x40);

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ux0:music", "music0:", mountPoint);
}

int sub_23E00B8_mount_0x6A(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char buffer[0x20];
   memset(buffer, 0, 0x20);
   
   _snprintf(buffer, 0x20u, "ux0:psm/%s/RO", titleId);
   
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, buffer, 0, mountPoint);  
}

int sub_23E00B8_mount_0x6B(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char buffer[0x20];
   memset(buffer, 0, 0x20);
   
   _snprintf(buffer, 0x20u, "ux0:psm/%s/RW", titleId);

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, buffer, 0, mountPoint);
}

int sub_23E00B8_mount_0x6C(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ux0:calendar", 0, mountPoint);
}

int sub_23E00B8_mount_0x6D(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ux0:video", "video0:", mountPoint);
}

int sub_23E00B8_mount_0x6E(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char dec_buffer0[0x40];
   memset(dec_buffer0, 0, 0x40);

   if(_snprintf(dec_buffer0, 0x40u, "%s/%s", "ux0:appmeta", titleId) > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, dec_buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x6F(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "tm0:nphome", 0, mountPoint);
}

int sub_23E00B8_mount_0x70(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ux0:book", 0, mountPoint);
}


int sub_23E00B8_mount_0xC8(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ur0:temp/sqlite", 0, mountPoint);
}

int sub_23E00B8_mount_0xC9(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ur0:temp/attach", 0, mountPoint);
}

int sub_23E00B8_mount_0xCA(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ux0:pspemu", 0, mountPoint);
}

int sub_23E00B8_mount_0xCB(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ur0:temp/grief_report", 0, mountPoint);
}

int sub_23E00B8_mount_0xCC(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ur0:temp/checkout", 0, mountPoint);
}

int sub_23E00B8_mount_0xCD(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char buffer0[0x20];
   memset(buffer0, 0, 0x20);

   _snprintf(buffer0, 0x20u, "ux0:cache/%s", titleId);

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0xCE(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ur0:temp/webbrowser", 0, mountPoint);
}

int sub_23E00B8_mount_0xCF(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char buffer0[0x20];
   memset(buffer0, 0, 0x20);
   
   _snprintf(buffer0, 0x20u, "ux0:temp/app_work/%s/rec", titleId);
   
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x12C(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, 0, 0, mountPoint);
}

int sub_23E00B8_mount_0x12E(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   char dec_buffer0[0x40];
   memset(dec_buffer0, 0, 0x40);

   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   if (_snprintf(dec_buffer0, 0x40u, "%s/%s/%s", "ur0:user", accountNo, "trophy/data/sce_trop") > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, dec_buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x12F(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char dec_buffer0[0x40];
   memset(dec_buffer0, 0, 0x40);

   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   if (_snprintf(dec_buffer0, 0x40u, "%s/%s/%s/%s", "ur0:user", accountNo, "trophy/data", titleId) > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, dec_buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x130(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char dec_buffer0[0x40];
   memset(dec_buffer0, 0, 0x40);

   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);
    
   if (_snprintf(dec_buffer0, 0x40u, "%s/%s/%s/%s_BK", "ur0:user", accountNo, "trophy/data", titleId) > 0x3F)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, dec_buffer0, 0, mountPoint);
}


int sub_23E00B8_mount_0x190(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ux0:mms/photo", 0, mountPoint);
}

int sub_23E00B8_mount_0x191(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ux0:mms/music", 0, mountPoint);
}

int sub_23E00B8_mount_0x192(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ux0:mms/video", 0, mountPoint);
}

int sub_23E00B8_mount_0x1F4(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char buffer0[0x20];
   memset(buffer0, 0, 0x20);

   _snprintf(buffer0, 0x20u, "grw0:addcont/%s", titleId);
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x1F5(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char buffer0[0x20];
   memset(buffer0, 0, 0x20);

   _snprintf(buffer0, 0x20u, "ux0:addcont/%s", titleId);
   
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x1F6(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char buffer0[0x20];
   memset(buffer0, 0, 0x20);

   _snprintf(buffer0, 0x20u, "%spatch/%s", "grw0:", titleId);
   
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x1F7(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char buffer0[0x20];
   memset(buffer0, 0, 0x20);

   _snprintf(buffer0, 0x20u, "%spatch/%s", "ux0:", titleId);
   
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x1F8(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   char buffer0[0x20];
   memset(buffer0, 0, 0x20);

   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   _snprintf(buffer0, 0x20u, "ux0:user/%s/savedata_vc", accountNo);

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, buffer0, 0, mountPoint);
}

int sub_23E00B8_mount_0x1F9(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   char buffer0[0x20];
   memset(buffer0, 0, 0x20);

   char accountNo[3];
   memset(accountNo, 0, 3);

   set_accoutNo_global_23D58B4(accountNo);

   _snprintf(buffer0, 0x20u, "ux0:user/%s/_temp_savedata_vc", accountNo);

   return work_dir_mount_23E00B8(pid, mountId, keystone_data, buffer0, 0, mountPoint);
}


int sub_23E00B8_mount_0x258(SceUID pid, int mountId, const char * titleId, const char *keystone_data, char* mountPoint)
{
   char dec_buffer0[0x40];
   memset(dec_buffer0, 0, 0x40);

   _snprintf(dec_buffer0, 0x40u, "ux0:umass/%s.img", titleId);
   
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, dec_buffer0, 0, mountPoint);
}


int sub_23E00B8_mount_0x3EF(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "vs0:sys/external", 0, mountPoint);
}

int sub_23E00B8_mount_0x3F0(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "vs0:data/external", 0, mountPoint);
}

int sub_23E00B8_mount_0x3F1(SceUID pid, int mountId, const char *keystone_data, char* mountPoint)
{
   return work_dir_mount_23E00B8(pid, mountId, keystone_data, "ux0:data/userdata", 0, mountPoint);
}

//--------------------------

int w_sceAppMgrWorkDirMountByIdForKernel_23E00B8(SceUID pid, unsigned int mountId, const char *titleId, const char *keystone_data, char *mountPoint)
{
   int lock_res = SceThreadmgrForDriver_ksceKernelLockMutex_16AC80C5(SceAppMgrMount_mutex_22A000C, 1, 0);
   if (lock_res < 0)
      return lock_res;
       
   if (check_privileges_23D5D54(mountId) == 0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800009;
   }

   if (mountPoint == 0)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }

   int error_code0 = 0;
   if(!check_title_id_23E00B8(mountId, titleId, error_code0))
      return error_code0;
    
   if (mountId < 0x64)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if(mountId >= 0x64 && mountId <= 0x70)
   {
      #pragma region

      switch(mountId)
      {
      case 0x64:
         return sub_23E00B8_mount_0x64(pid, mountId, keystone_data, mountPoint);
      case 0x65:
         return sub_23E00B8_mount_0x65(pid, mountId, keystone_data, mountPoint);
      case 0x66:
         return sub_23E00B8_mount_0x66(pid, mountId, keystone_data, mountPoint);
      case 0x67:
         return sub_23E00B8_mount_0x67(pid, mountId, keystone_data, mountPoint);
      case 0x68:
         return sub_23E00B8_mount_0x68(pid, mountId, titleId, keystone_data, mountPoint);
      case 0x69:
         return sub_23E00B8_mount_0x69(pid, mountId, keystone_data, mountPoint);
      case 0x6A:
         return sub_23E00B8_mount_0x6A(pid, mountId, titleId, keystone_data, mountPoint);
      case 0x6B:
         return sub_23E00B8_mount_0x6B(pid, mountId, titleId, keystone_data, mountPoint);
      case 0x6C:
         return sub_23E00B8_mount_0x6C(pid, mountId, keystone_data, mountPoint);
      case 0x6D:
         return sub_23E00B8_mount_0x6D(pid, mountId, keystone_data, mountPoint);
      case 0x6E:
         return sub_23E00B8_mount_0x6E(pid, mountId, titleId, keystone_data, mountPoint);
      case 0x6F:
         return sub_23E00B8_mount_0x6F(pid, mountId, keystone_data, mountPoint);
      case 0x70:
         return sub_23E00B8_mount_0x70(pid, mountId, keystone_data, mountPoint);
      }

      #pragma endregion
   }
   else if (mountId > 0x70 && mountId < 0xC8)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if (mountId >= 0xC8 && mountId <= 0xCF)
   {
      #pragma region

      switch(mountId)
      {
      case 0xC8:
         return sub_23E00B8_mount_0xC8(pid, mountId, keystone_data, mountPoint);
      case 0xC9:
         return sub_23E00B8_mount_0xC9(pid, mountId, keystone_data, mountPoint);
      case 0xCA:
         return sub_23E00B8_mount_0xCA(pid, mountId, keystone_data, mountPoint);
      case 0xCB:
         return sub_23E00B8_mount_0xCB(pid, mountId, keystone_data, mountPoint);
      case 0xCC:
         return sub_23E00B8_mount_0xCC(pid, mountId, keystone_data, mountPoint);
      case 0xCD:
         return sub_23E00B8_mount_0xCD(pid, mountId, titleId, keystone_data, mountPoint);
      case 0xCE:
         return sub_23E00B8_mount_0xCE(pid, mountId, keystone_data, mountPoint);
      case 0xCF:
         return sub_23E00B8_mount_0xCF(pid, mountId, titleId, keystone_data, mountPoint);
      }

      #pragma endregion
   }
   else if(mountId > 0xCF && mountId < 0x12C)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if(mountId >= 0x12C && mountId <= 0x130)
   {
      #pragma region

      switch(mountId)
      {
      case 0x12C:
         return sub_23E00B8_mount_0x12C(pid, mountId, keystone_data, mountPoint);
      case 0x12D:
         {
            SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
            return 0x80800001;
         }
      case 0x12E:
         return sub_23E00B8_mount_0x12E(pid, mountId, keystone_data, mountPoint);
      case 0x12F:
         return sub_23E00B8_mount_0x12F(pid, mountId, titleId, keystone_data, mountPoint);
      case 0x130:
         return sub_23E00B8_mount_0x130(pid, mountId, titleId, keystone_data, mountPoint);
      }

      #pragma endregion
   }
   else if(mountId > 0x130 && mountId < 0x190)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if(mountId >= 0x190 && mountId <= 0x192)
   {
      #pragma region

      switch (mountId)
      {
      case 0x191:
         return sub_23E00B8_mount_0x191(pid, mountId, keystone_data, mountPoint);
      case 0x192:
         return sub_23E00B8_mount_0x192(pid, mountId, keystone_data, mountPoint);
      case 0x190:
         return sub_23E00B8_mount_0x190(pid, mountId, keystone_data, mountPoint);
      }

      #pragma endregion
   }
   else if(mountId > 0x192 && mountId < 0x1F4)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if(mountId >= 0x1F4 && mountId <= 0x1F9)
   {
      #pragma region

      switch(mountId)
      {
      case 0x1F4:
         return sub_23E00B8_mount_0x1F4(pid, mountId, titleId, keystone_data, mountPoint);
      case 0x1F5:
         return sub_23E00B8_mount_0x1F5(pid, mountId, titleId, keystone_data, mountPoint);
      case 0x1F6:
         return sub_23E00B8_mount_0x1F6(pid, mountId, titleId, keystone_data, mountPoint);
      case 0x1F7:
         return sub_23E00B8_mount_0x1F7(pid, mountId, titleId, keystone_data, mountPoint);
      case 0x1F8:
         return sub_23E00B8_mount_0x1F8(pid, mountId, keystone_data, mountPoint);
      case 0x1F9:
         return sub_23E00B8_mount_0x1F9(pid, mountId, keystone_data, mountPoint);
      }

      #pragma endregion
   }
   else if(mountId > 0x1F9 && mountId < 0x258)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if (mountId == 0x258)
   {
      return sub_23E00B8_mount_0x258(pid, mountId, titleId, keystone_data, mountPoint);
   }
   else if(mountId > 0x258 && mountId < 0x3EF)
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
   else if(mountId >= 0x3EF && mountId <= 0x3F1)
   {
      #pragma region

      switch(mountId)
      {
      case 0x3EF:
         return sub_23E00B8_mount_0x3EF(pid, mountId, keystone_data, mountPoint);
      case 0x3F0:
         return sub_23E00B8_mount_0x3F0(pid, mountId, keystone_data, mountPoint);
      case 0x3F1:
         return sub_23E00B8_mount_0x3F1(pid, mountId, keystone_data, mountPoint);
      }

      #pragma endregion
   }
   else
   {
      SceThreadmgrForDriver_ksceKernelUnlockMutex_1e82e5d0(SceAppMgrMount_mutex_22A000C, 1);
      return 0x80800001;
   }
}

int w_sceAppMgrWorkDirMountByIdForKernel_23E0F90(int mount_id, char *titleid, char *mount_point)
{
   if (mount_id != 0xCD && mount_id != 0xCF)
   return 0x80800001;
   
   return w_sceAppMgrWorkDirMountByIdForKernel_23E00B8(0, mount_id, titleid, 0, mount_point);
}

int w_sceAppMgrWorkDirMountByIdForKernel_23F214C(int mount_id, char *titleid, char *mountPoint)
{
   return w_sceAppMgrWorkDirMountByIdForKernel_23E0F90(mount_id, titleid, mountPoint);
}

int SceAppMgr_sceAppMgrWorkDirMountById_58e4cc90(int mountId, generic_mount_ctx *data, char *mountPoint, sceAppMgrWorkDirMountByIdOpt *opt)
{
   sceAppMgrWorkDirMountByIdOpt opt_local;
   int result0 = SceSysmemForDriver_sceKernelMemcpyUserToKernel_bc996a7a(&opt_local, (uintptr_t)opt, 8u);
   if(result0 < 0)
      return result0;

   if (data == 0)
   {
      generic_mount_ctx * data_kernel_copy = 0;

      if (mountPoint == 0)
      {
         return w_sceAppMgrWorkDirMountByIdForKernel_23F214C(mountId, data_kernel_copy->titleId, 0);
      }
      else
      {
         char mountPoint_kernel[16];
         memset(mountPoint_kernel, 0, 0x10);

         int mount_res = w_sceAppMgrWorkDirMountByIdForKernel_23F214C(mountId, data_kernel_copy->titleId, mountPoint_kernel);
         int copy_res = SceSysmemForDriver_sceKernelMemcpyKernelToUser_6d88ef8a((uintptr_t)mountPoint, mountPoint_kernel, 0x10u);
         int result1 = copy_res < 0;
         int result2 = copy_res & (copy_res >> 32);

         if (result1 != 0)
            return result2;
         
         return mount_res;
      }
   }
   else
   {
      generic_mount_ctx data_kernel;

      int result0 = SceSysmemForDriver_sceKernelStrncpyUserToKernel_db3ec244(&data_kernel, (uintptr_t)data, 0x40u);
      if (result0 < 0)
         return result0;

      if (result0 == 0x40 && data_kernel.mountDrive[15])
         return 0x8002710B;

      if (mountPoint == 0)
      {
         return w_sceAppMgrWorkDirMountByIdForKernel_23F214C(mountId, data_kernel.titleId, 0);
      }
      else
      {
         char mountPoint_kernel[16];
         memset(mountPoint_kernel, 0, 0x10);

         int mount_res = w_sceAppMgrWorkDirMountByIdForKernel_23F214C(mountId, data_kernel.titleId, mountPoint_kernel);
         int copy_res = SceSysmemForDriver_sceKernelMemcpyKernelToUser_6d88ef8a((uintptr_t)mountPoint, mountPoint_kernel, 0x10u);
         int result1 = copy_res < 0;
         int result2 = copy_res & (copy_res >> 32);

         if (result1 != 0)
            return result2;
      
         return mount_res;
      }
   }
}