// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_standard_derivatives
#define INCLUDED_lime_graphics_opengl_ext_OES_standard_derivatives

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_20db0725ba88843e_7_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_standard_derivatives)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_standard_derivatives_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_standard_derivatives_obj OBJ_;
		OES_standard_derivatives_obj();

	public:
		enum { _hx_ClassId = 0x72fdac0a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_standard_derivatives")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_standard_derivatives"); }

		inline static ::hx::ObjectPtr< OES_standard_derivatives_obj > __new() {
			::hx::ObjectPtr< OES_standard_derivatives_obj > __this = new OES_standard_derivatives_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_standard_derivatives_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_standard_derivatives_obj *__this = (OES_standard_derivatives_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_standard_derivatives_obj), false, "lime.graphics.opengl.ext.OES_standard_derivatives"));
			*(void **)__this = OES_standard_derivatives_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_20db0725ba88843e_7_new)
HXDLIN(   7)		( ( ::lime::graphics::opengl::ext::OES_standard_derivatives)(__this) )->FRAGMENT_SHADER_DERIVATIVE_HINT_OES = 35723;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_standard_derivatives_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_standard_derivatives",8c,cb,00,04); }

		int FRAGMENT_SHADER_DERIVATIVE_HINT_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_standard_derivatives */ 
