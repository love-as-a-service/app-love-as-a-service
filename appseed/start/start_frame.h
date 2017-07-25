#pragma once


namespace start
{


   class CLASS_DECL_APP_CORE_START frame :
      public simple_frame_window
   {
   public:


      frame(::aura::application * papp);
      virtual ~frame();


	   virtual void assert_valid() const;
	   virtual void dump(dump_context & dumpcontext) const;


      virtual bool get_translucency(::user::ETranslucency & etranslucency);
      virtual sp(::user::wndfrm::frame::frame) create_frame_schema();

      virtual bool has_pending_graphical_update() override;


   };


} // namespace start




