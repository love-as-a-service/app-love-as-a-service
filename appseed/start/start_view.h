#pragma once


namespace start
{

   
   class document;

   
   class CLASS_DECL_APP_CORE_START view :
      public ::user::impact
   {
   public:


      view(::aura::application * papp);
	   virtual ~view();

	   virtual void assert_valid() const;
	   virtual void dump(dump_context & dumpcontext) const;


      virtual void install_message_handling(::message::dispatch * pdispatch);

      virtual void on_update(::user::impact * pSender, LPARAM lHint, object* pHint);

      DECL_GEN_SIGNAL(_001OnCreate);

      virtual void _001OnDraw(::draw2d::graphics * pgraphics);

   };

   
} // namespace start




