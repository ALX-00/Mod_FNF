// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_EndFillView_Impl_
#define INCLUDED_openfl_display__internal__DrawCommandReader_EndFillView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_internal,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,display,_internal,_DrawCommandReader,EndFillView_Impl_)

namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES EndFillView_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EndFillView_Impl__obj OBJ_;
		EndFillView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x718fbe2a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal._DrawCommandReader.EndFillView_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal._DrawCommandReader.EndFillView_Impl_"); }

		inline static ::hx::ObjectPtr< EndFillView_Impl__obj > __new() {
			::hx::ObjectPtr< EndFillView_Impl__obj > __this = new EndFillView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EndFillView_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			EndFillView_Impl__obj *__this = (EndFillView_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EndFillView_Impl__obj), false, "openfl.display._internal._DrawCommandReader.EndFillView_Impl_"));
			*(void **)__this = EndFillView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EndFillView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EndFillView_Impl_",43,3e,96,56); }

		static  ::openfl::display::_internal::DrawCommandReader _new( ::openfl::display::_internal::DrawCommandReader d);
		static ::Dynamic _new_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl_display__internal__DrawCommandReader_EndFillView_Impl_ */ 
