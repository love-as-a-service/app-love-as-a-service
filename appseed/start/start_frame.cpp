#include "framework.h"
#include <math.h>


namespace start
{


   frame::frame(::aura::application * papp) :
      ::object(papp),
      simple_frame_window(papp)
   {

      WfiEnableFullScreen();

      m_bWindowFrame = !Application.command()->m_varTopicQuery.has_property("client_only");

   }


   frame::~frame()
   {

   }


   void frame::assert_valid() const
   {

	   simple_frame_window::assert_valid();

   }


   void frame::dump(dump_context & dumpcontext) const
   {

	   simple_frame_window::dump(dumpcontext);

   }


   sp(::user::wndfrm::frame::frame) frame::create_frame_schema()
   {

      sp(::user::wndfrm::frame::frame) pschema = Application.wndfrm().get_frame_schema(NULL, "001");

      pschema->set_style("StyleLightBlue");

      return pschema;

   }


   bool frame::get_translucency(::user::ETranslucency & etranslucency)
   {

      etranslucency = ::user::TranslucencyPresent;

      return true;

   }


   bool frame::has_pending_graphical_update()
   {

      return true;

   }


} // namespace start



