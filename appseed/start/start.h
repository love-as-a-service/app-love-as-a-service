#pragma once


#include "core/core/core/core.h"
#include "core/user/user/user.h"
#include "core/user/simple/simple.h"
#include "core/user/userex/userex.h"


#ifdef _APP_CORE_START_LIBRARY
    #define CLASS_DECL_APP_CORE_START  CLASS_DECL_EXPORT
#else
    #define CLASS_DECL_APP_CORE_START  CLASS_DECL_IMPORT
#endif


#define HI_LOGIN 1
#define HI_SHUTDOWN_JUST_AFTER_FIRST_MAIN_TASK 0

namespace start
{

   class application;
   class main_view;

} // namespace flag

#undef App
#define App(pbaseapp) (pbaseapp->m_pcoreapp->cast_app < ::start::application > ())

#include "start_document.h"
#include "start_view.h"
#include "start_second_view.h"
#include "start_frame.h"
#include "start_pane_view_update_hint.h"
#include "start_pane_view.h"

#include "start_application.h"
