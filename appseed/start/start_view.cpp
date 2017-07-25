#include "framework.h"
#include <math.h>


namespace start
{


   view::view(::aura::application * papp) :
      ::object(papp)
   {


   }


   view::~view()
   {

   }


   void view::assert_valid() const
   {

      ::user::impact::assert_valid();

   }


   void view::dump(dump_context & dumpcontext) const
   {

      ::user::impact::dump(dumpcontext);

   }


   void view::install_message_handling(::message::dispatch * pdispatch)
   {

      ::user::impact::install_message_handling(pdispatch);

      IGUI_WIN_MSG_LINK(WM_CREATE,pdispatch,this,&view::_001OnCreate);

   }

   
   void view::_001OnCreate(signal_details * pobj)
   {

      SCAST_PTR(::message::create,pcreate,pobj);

      pcreate->previous();

      if(pcreate->m_bRet)
         return;

   }


   void view::on_update(::user::impact * pSender, LPARAM lHint, object* phint)
   {

      UNREFERENCED_PARAMETER(pSender);
      UNREFERENCED_PARAMETER(lHint);
      UNREFERENCED_PARAMETER(phint);

   }


   void view::_001OnDraw(::draw2d::graphics * pgraphics)
   {

      pgraphics->text_out(100, 100, "app: love as a service start");

   }



} // namespace start



