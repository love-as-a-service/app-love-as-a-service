#pragma once


namespace start
{


   class CLASS_DECL_APP_CORE_START application :
      public ::core::application
   {
   public:
      
      
      ::user::impact_system *       m_pdocumenttemplateMain;
      ::user::impact_system *       m_pdocumenttemplateStart;
      ::user::impact_system *       m_pdocumenttemplateFirst;


      application();
      virtual ~application();


      virtual bool initialize_application();
      virtual int32_t exit_application() override;

      virtual void on_request(::create * pcreate);


   };



} // namespace start





