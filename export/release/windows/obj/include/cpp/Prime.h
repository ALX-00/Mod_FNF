// Generated by Haxe 4.1.5
#ifndef INCLUDED_cpp_Prime
#define INCLUDED_cpp_Prime

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(cpp,Prime)

namespace cpp{


class HXCPP_CLASS_ATTRIBUTES Prime_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Prime_obj OBJ_;
		Prime_obj();

	public:
		enum { _hx_ClassId = 0x3aea0524 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="cpp.Prime")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"cpp.Prime"); }

		inline static ::hx::ObjectPtr< Prime_obj > __new() {
			::hx::ObjectPtr< Prime_obj > __this = new Prime_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Prime_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Prime_obj *__this = (Prime_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Prime_obj), false, "cpp.Prime"));
			*(void **)__this = Prime_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Prime_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Prime",1f,c7,b8,5b); }

		static  ::Dynamic _loadPrime(::String lib,::String prim,::String signature,::hx::Null< bool >  quietFail);
		static ::Dynamic _loadPrime_dyn();

};

} // end namespace cpp

#endif /* INCLUDED_cpp_Prime */ 
