// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_net__URLLoaderDataFormat_URLLoaderDataFormat_Impl_
#define INCLUDED_openfl_net__URLLoaderDataFormat_URLLoaderDataFormat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,net,_URLLoaderDataFormat,URLLoaderDataFormat_Impl_)

namespace openfl{
namespace net{
namespace _URLLoaderDataFormat{


class HXCPP_CLASS_ATTRIBUTES URLLoaderDataFormat_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef URLLoaderDataFormat_Impl__obj OBJ_;
		URLLoaderDataFormat_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6b90aef2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_"); }

		inline static ::hx::ObjectPtr< URLLoaderDataFormat_Impl__obj > __new() {
			::hx::ObjectPtr< URLLoaderDataFormat_Impl__obj > __this = new URLLoaderDataFormat_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< URLLoaderDataFormat_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			URLLoaderDataFormat_Impl__obj *__this = (URLLoaderDataFormat_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(URLLoaderDataFormat_Impl__obj), false, "openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_"));
			*(void **)__this = URLLoaderDataFormat_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~URLLoaderDataFormat_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("URLLoaderDataFormat_Impl_",43,31,80,7f); }

		static void __boot();
		static  ::Dynamic BINARY;
		static  ::Dynamic TEXT;
		static  ::Dynamic VARIABLES;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace net
} // end namespace _URLLoaderDataFormat

#endif /* INCLUDED_openfl_net__URLLoaderDataFormat_URLLoaderDataFormat_Impl_ */ 
