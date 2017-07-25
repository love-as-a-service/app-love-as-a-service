#pragma once


namespace start
{


   class CLASS_DECL_APP_CORE_START second_view:
      virtual public ::user::impact
   {
   public:


      second_view(::aura::application * papp);
      virtual ~second_view();


      virtual void assert_valid() const;
      virtual void dump(dump_context & dumpcontext) const;


      virtual void on_update(::user::impact * pSender,LPARAM lHint,object* pHint);


      virtual void _001OnDraw(::draw2d::graphics * pgraphics);

   };


} // namespace start




