#include "framework.h"


namespace start
{


   application::application()
   {

      m_strAppName               = "app-love-as-a-service/start";
      m_strBaseSupportId         = "app-love-as-a-service/start";
      m_bLicense                 = false;
      m_pdocumenttemplateStart   = NULL;
      m_pdocumenttemplateFirst   = NULL;

   }


   application::~application()
   {

   }


   bool application::initialize_application()
   {

      System.factory().creatable_small < ::start::pane_view >();
      System.factory().creatable_small < ::start::document >();
      System.factory().creatable_small < ::start::frame >();
      System.factory().creatable_small < ::start::view >();
      System.factory().creatable_small < ::start::second_view >();

      if(!::core::application::initialize_application())
         return false;

      m_dataid += ".local://";

	   ::user::single_document_template* pdocumenttemplate;

      pdocumenttemplate = new ::user::single_document_template(
         this,
		   "main",
         System.type_info < ::start::document >(),
		   System.type_info < ::start::frame > (),       // top level SDI frame::user::interaction_impl
		   System.type_info < ::start::pane_view > ());

      add_document_template(pdocumenttemplate);

      m_pdocumenttemplateMain = pdocumenttemplate;

      pdocumenttemplate = new ::user::single_document_template(
         this,
		   "main",
         System.type_info < ::start::document > (),
		   System.type_info < ::start::frame > (),       // top level SDI frame::user::interaction_impl
		   System.type_info < ::start::view > ());

      add_document_template(pdocumenttemplate);

      m_pdocumenttemplateStart = pdocumenttemplate;

      pdocumenttemplate = new ::user::single_document_template(
         this,
         "main",
         System.type_info < ::start::document >(),
         System.type_info < ::start::frame >(),       // top level SDI frame::user::interaction_impl
         System.type_info < ::start::second_view >());

      add_document_template(pdocumenttemplate);

      m_pdocumenttemplateFirst = pdocumenttemplate;

      return true;

   }


   int32_t application::exit_application()
   {

      return ::core::application::exit_application();

   }


   void application::on_request(::create * pcreate)
   {

      if(pcreate->m_spCommandLine->m_varQuery.has_property("client_only"))
      {

         m_pdocumenttemplateStart->request_create(pcreate);

      }
      else 
      {

         m_pdocumenttemplateMain->request_create(pcreate);

      }

   }


} // namespace start




extern "C"
::aura::library * app_love_as_a_service_start_get_new_library(::aura::application * papp)
{

   return new ::aura::single_application_library < ::start::application >(papp, "app-love-as-a-service/start");

}


