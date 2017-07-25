#pragma once


namespace start
{

   
   enum e_view
   {
      
      view_none,
      view_start,
      view_first,

   };


   class CLASS_DECL_APP_CORE_START pane_view_update_hint :
      public object  
   {
   public:


      enum e_type
      {
         
         type_none,

      };


      e_view         m_eview;
      e_type         m_etype;


	   pane_view_update_hint();
	   virtual ~pane_view_update_hint();


      void set_type(e_type e_type);
      bool is_type_of(e_type e_type);


   };

} // namespace start
