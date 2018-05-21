#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <iomanip>

#include <stdint.h>

#include "SceSblGcAuthMgr.h"
#include "SceSysroot.h"
#include "SceSdif.h"

#include "initialize_crypt_engine.h"

#include "SceSblSsMgrDmac5Layer.h"

#include "SceAppMgr.h"

int test_cmd56()
{
   SceSdif_module_start_935cd196();

   SceSblGcAuthMgr_InitializeContext();
   SceSysroot_InitializeContext();

   int arg0 = 0x10000;
   int res = sub_CA919C(&arg0);

   if(res == 0)
      std::cout << "Initialization succeeded" << std::endl;
   else
      std::cout << "Initialization failed: " << std::hex << std::setfill('0') << std::setw(8) << res << std::endl;
   
	return 0;
}

int test_pfs()
{
   #ifdef USE_PSVDMAC5
   if(initialize_dmac5_context() < 0)
      return -1;
   #endif

   CryptEngineWorkCtx work_ctx;
   crypt_engine_init(&work_ctx);

   ScePfsCryptEngineThread_work_219BF20(&work_ctx);

   std::ofstream out("icon0.png", std::ios::out | std::ios::binary);
   out.write((char*)work_ctx.subctx->work_buffer1, work_ctx.subctx->tail_size);
   out.close();

   #ifdef USE_PSVDMAC5
   deinitialize_dmac5_context();
   #endif

   return 0;
}



int dec_app_mgr_strings()
{
   /*
   char input[0x20] = {0x8A, 0x87, 0xCF, 0xC5, 0x9E, 0x8F, 0x8F, 0x92, 0x9A, 0x8B, 0x9E, 0xFF, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output);
   */

   /*
   char input[0x20] = {0x8A, 0x87, 0xCF, 0xC5, 0x8B, 0x97, 0x9A, 0x92, 0x9A, 0, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output);
   */

   /*
   char input[0x20] = {0x8A, 0x87, 0xCF, 0xC5, 0x93, 0x96, 0x9C, 0x9A, 0x91, 0x8C, 0x9A, 0xD0, 0x8B, 0x97, 0x9A, 0x92, 0x9A, 0, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output);
   */

   /*
   char input[0x20] = {0x8A, 0x8D, 0xCF, 0xC5, 0x8A, 0x8C, 0x9A, 0x8D, 0, 0, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output);
   */

   /*
   char input[0x20] = {0x8B, 0x8D, 0x90, 0x8F, 0x97, 0x86, 0xD0, 0x9B, 0x9E, 0x8B, 0x9E, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */
   
   /*
   char input[0x20] = {0x91, 0x9A, 0x9E, 0x8D, 0xD0, 0x9B, 0x9E, 0x8B, 0x9E, 0xD0, 0x98, 0x96, 0x99, 0x8B, 0xD0, 0x8D, 0x9A, 0x9C, 0x9A, 0x96, 0x89, 0x9A, 0x9B, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */
   
   /*
   char input[0x20] = {0x8F, 0x8C, 0x91, 0x99, 0x8D, 0x96, 0x9A, 0x91, 0x9B, 0, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x8B, 0x8D, 0x90, 0x8F, 0x97, 0x86, 0xD0, 0x9B, 0x9E, 0x8B, 0x9E, 0xD0, 0x8C, 0x9C, 0x9A, 0xA0, 0x8B, 0x8D, 0x90, 0x8F, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x8F, 0x8C, 0x91, 0x92, 0x8C, 0x98, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x91, 0x9A, 0x9E, 0x8D, 0xD0, 0x9B, 0x9E, 0x8B, 0x9E, 0xA0, 0x8C, 0x86, 0x8C, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x93, 0x96, 0x9C, 0x9A, 0x91, 0x8C, 0x9A, 0xD0, 0x9E, 0x9B, 0x9B, 0x9C, 0x90, 0x91, 0x8B, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x8C, 0x9E, 0x89, 0x9A, 0x9B, 0x9E, 0x8B, 0x9E, 0xA0, 0x8F, 0x93, 0x8A, 0x8C, 0xD0, 0x88, 0x90, 0x8D, 0x94, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x8A, 0x87, 0xCF, 0xC5, 0x9D, 0x90, 0x90, 0x94, 0, 0, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x8A, 0x8D, 0xCF, 0xC5, 0x8B, 0x9A, 0x92, 0x8F, 0xD0, 0x8C, 0x8E, 0x93, 0x96, 0x8B, 0x9A, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */
   
   /*
   char input[0x20] = {0x8C, 0x9E, 0x89, 0x9A, 0x9B, 0x9E, 0x8B, 0x9E, 0, 0, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x8A, 0x8D, 0xCF, 0xC5, 0x8B, 0x9A, 0x92, 0x8F, 0xD0, 0x98, 0x8D, 0x96, 0x9A, 0x99, 0xA0, 0x8D, 0x9A, 0x8F, 0x90, 0x8D, 0x8B, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x8A, 0x87, 0xCF, 0xC5, 0x8F, 0x8C, 0x8F, 0x9A, 0x92, 0x8A, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x89, 0x8C, 0xCF, 0xC5, 0x9B, 0x9E, 0x8B, 0x9E, 0xD0, 0x9A, 0x87, 0x8B, 0x9A, 0x8D, 0x91, 0x9E, 0x93, 0, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x8A, 0x8D, 0xCF, 0xC5, 0x8B, 0x9A, 0x92, 0x8F, 0xD0, 0x9E, 0x8B, 0x8B, 0x9E, 0x9C, 0x97, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x8A, 0x8D, 0xCF, 0xC5, 0x8B, 0x9A, 0x92, 0x8F, 0xD0, 0x88, 0x9A, 0x9D, 0x9D, 0x8D, 0x90, 0x88, 0x8C, 0x9A, 0x8D, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */
   
   /*
   char input[0x20] = {0x8A, 0x87, 0xCF, 0xC5, 0x9B, 0x9E, 0x8B, 0x9E, 0xD0, 0x8A, 0x8C, 0x9A, 0x8D, 0x9B, 0x9E, 0x8B, 0x9E, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */
   
   /*
   char input[0x20] = {0x98, 0x8D, 0x90, 0xCF, 0xC5, 0x9E, 0x9C, 0x96, 0x91, 0x8C, 0x8B, 0xFF, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x8A, 0x8D, 0xCF, 0xC5, 0x8B, 0x9A, 0x92, 0x8F, 0xD0, 0x9C, 0x97, 0x9A, 0x9C, 0x94, 0x90, 0x8A, 0x8B, 0, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */
   
   /*
   char input[0x20] = {0x8A, 0x87, 0xCF, 0xC5, 0x8F, 0x96, 0x9C, 0x8B, 0x8A, 0x8D, 0x9A, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   /*
   char input[0x20] = {0x89, 0x8C, 0xCF, 0xC5, 0x8C, 0x86, 0x8C, 0xD0, 0x9A, 0x87, 0x8B, 0x9A, 0x8D, 0x91, 0x9E, 0x93, 0, 0, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output); 
   */

   char input[0x20] = {0x8F, 0xD7, 0xA8, 0xEB, 0x6A, 0xD4, 0x45, 0x9C, 0x9F, 0xDA, 0xBB, 0xF9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   char output[0x20] = {0};
   AppMgr_decrypt_str_constant_23D59D4(input, output);   

   /*
   char input[0x40] = {0x8C, 0x9C, 0x9A, 0xA0, 0x8C, 0x86, 0x8C, 0xD0, 0x8F, 0x9E, 0x8D, 0x9E, 0x92, 0xD1, 0x8C, 0x99, 0x90, 0xFF, 0, 0, 0, 0, 0, 0};
   char output[0x40] = {0};
   AppMgr_decrypt_str_constant_23D5998(input, output); 
   */

   /*
   char input[0x40] = {0x8A, 0x87, 0xCF, 0xC5, 0x92, 0x92, 0x8C, 0xD0, 0x8F, 0x97, 0x90, 0x8B, 0x90, 0, 0, 0};
   char output[0x40] = {0};
   AppMgr_decrypt_str_constant_23D5998(input, output); 
   */

   /*
   char input[0x40] = {0x8B, 0x92, 0xCF, 0xC5, 0x91, 0x8F, 0x97, 0x90, 0x92, 0x9A, 0, 0, 0, 0, 0, 0};
   char output[0x40] = {0};
   AppMgr_decrypt_str_constant_23D5998(input, output); 
   */

   /*
   char input[0x40] = {0x8A, 0x87, 0xCF, 0xC5, 0x92, 0x92, 0x8C, 0xD0, 0x89, 0x96, 0x9B, 0x9A, 0x90, 0, 0, 0};
   char output[0x40] = {0};
   AppMgr_decrypt_str_constant_23D5998(input, output); 
   */

   /*
   char input[0x40] = {0x8A, 0x87, 0xCF, 0xC5, 0x92, 0x92, 0x8C, 0xD0, 0x92, 0x8A, 0x8C, 0x96, 0x9C, 0, 0, 0};
   char output[0x40] = {0};
   AppMgr_decrypt_str_constant_23D5998(input, output); 
   */

   /*
   char input[0x40] = {0x8A, 0x87, 0xCF, 0xC5, 0x92, 0x8A, 0x8C, 0x96, 0x9C, 0, 0, 0, 0, 0, 0, 0};
   char output[0x40] = {0};
   AppMgr_decrypt_str_constant_23D5998(input, output); 
   */

   /*
   char input[0x40] = {0x8A, 0x87, 0xCF, 0xC5, 0x89, 0x96, 0x9B, 0x9A, 0x90, 0, 0, 0, 0, 0, 0, 0};
   char output[0x40] = {0};
   AppMgr_decrypt_str_constant_23D5998(input, output); 
   */

   /*
   char input[0x40] = {0x8A, 0x87, 0xCF, 0xC5, 0x9C, 0x9E, 0x93, 0x9A, 0x91, 0x9B, 0x9E, 0x8D, 0, 0, 0, 0};
   char output[0x40] = {0};
   AppMgr_decrypt_str_constant_23D5998(input, output); 
   */

   /*
   char input[0x40] = {0x8A, 0x87, 0xCF, 0xC5, 0x8A, 0x92, 0x9E, 0x8C, 0x8C, 0, 0, 0, 0, 0, 0, 0};
   char output[0x40] = {0};
   AppMgr_decrypt_str_constant_23D5998(input, output); 
   */

   

   return 0;
}

int test_data_mount()
{
   for(int i = 0x64; i <= 0x70; i++)
   {
      //SceAppMgrForDriver_sceAppMgrAppDataMountForDriver_b1d3c287(i, 0);
   }

   return 0;
}

int main(int argc, char* argv[])
{
   test_data_mount();

   //test_cmd56();

   //test_pfs();

   dec_app_mgr_strings();

   return 0;
}