#include "framework.h"


namespace start
{


   second_view::second_view(::aura::application * papp):
      ::object(papp)
   {

   }


   second_view::~second_view()
   {

   }


   void second_view::assert_valid() const
   {

      ::user::impact::assert_valid();

   }


   void second_view::dump(dump_context & dumpcontext) const
   {

      ::user::impact::dump(dumpcontext);

   }


   void second_view::on_update(::user::impact * pSender,LPARAM lHint,object* phint)
   {
       
      ::user::impact::on_update(pSender,lHint,phint);

   }


   void second_view::_001OnDraw(::draw2d::graphics * pgraphics)
   {

      pgraphics->text_out(100, 200, "app: love as a service, first");

   }


} // namespace start



