#include "framework.h"

namespace start
{

   pane_view::pane_view(::aura::application * papp) :
      ::object(papp),
      ::user::tab(papp),
      
      ::user::tab_view(papp),
      ::userex::pane_tab_view(papp),
      place_holder_container(papp)
   {


   }

   pane_view::~pane_view()
   {
   }


#ifdef DEBUG

   void pane_view::assert_valid() const
   {

	   ::user::impact::assert_valid();

   }

   void pane_view::dump(dump_context & dumpcontext) const
   {

	   ::user::impact::dump(dumpcontext);

   }

#endif // DEBUG


   void pane_view::install_message_handling(::message::dispatch * pinterface)
   {
      ::userex::pane_tab_view::install_message_handling(pinterface);

	   IGUI_WIN_MSG_LINK(WM_CREATE, pinterface, this, &pane_view::_001OnCreate);

   }


   void pane_view::_001OnCreate(signal_details * pobj)
   {
      
      if(pobj->previous())
         return;

      set_tab("start", ::start::view_start);
      set_tab("first", ::start::view_first);
      set_tab("File Manager", "file_manager");

      set_cur_tab_by_id(::start::view_start);

   }


   void pane_view::on_create_view(::user::view_creator_data * pcreatordata)
   {

      switch(pcreatordata->m_id)
      {
      case view_start:
      {

         Application.m_pdocumenttemplateStart->open_document_file(NULL, true, pcreatordata->m_pholder);
            
         pcreatordata->m_eflag.signalize(::user::view_creator_data::flag_hide_all_others_on_show);

      }
      break;
      case view_first:
      {

         Application.m_pdocumenttemplateFirst->open_document_file(NULL, true, pcreatordata->m_pholder);

         pcreatordata->m_eflag.signalize(::user::view_creator_data::flag_hide_all_others_on_show);

      }
      break;
      default:
         break;
      }

      ::userex::pane_tab_view::on_create_view(pcreatordata);

   }


} // namespace start
