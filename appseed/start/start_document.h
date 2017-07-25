#pragma once

namespace start
{

   class CLASS_DECL_APP_CORE_START document :
      public ::user::document
   {
   public:


      document(::aura::application * papp);
	   virtual ~document();

      
   #ifdef DEBUG
	   virtual void assert_valid() const;
	   virtual void dump(dump_context & dumpcontext) const;
   #endif

      virtual bool on_new_document();
      virtual bool on_open_document(var varFile);

   };

} // namespace start