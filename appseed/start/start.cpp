#include "framework.h"


#ifndef CUBE


#ifdef METROWIN
[Session::MTAThread]
#endif
BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{

   UNREFERENCED_PARAMETER(hInstance);
   UNREFERENCED_PARAMETER(lpReserved);


   if (dwReason == DLL_PROCESS_ATTACH)
   {

      ::OutputDebugStringW(L"app_love_as_a_service_start.dll :: initializing!\n");
      
   }
   else if (dwReason == DLL_PROCESS_DETACH)
   {

      ::OutputDebugStringW(L"app_love_as_a_service_start.dll :: terminating!\n");

   }

   return 1;

}


#endif



