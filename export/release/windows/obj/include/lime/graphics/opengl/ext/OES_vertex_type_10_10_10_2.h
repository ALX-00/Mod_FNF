// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_vertex_type_10_10_10_2
#define INCLUDED_lime_graphics_opengl_ext_OES_vertex_type_10_10_10_2

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d5e1f87d93817c09_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_vertex_type_10_10_10_2)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_vertex_type_10_10_10_2_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_vertex_type_10_10_10_2_obj OBJ_;
		OES_vertex_type_10_10_10_2_obj();

	public:
		enum { _hx_ClassId = 0x6af59350 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_vertex_type_10_10_10_2")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_vertex_type_10_10_10_2"); }

		inline static ::hx::ObjectPtr< OES_vertex_type_10_10_10_2_obj > __new() {
			::hx::ObjectPtr< OES_vertex_type_10_10_10_2_obj > __this = new OES_vertex_type_10_10_10_2_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_vertex_type_10_10_10_2_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_vertex_type_10_10_10_2_obj *__this = (OES_vertex_type_10_10_10_2_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_vertex_type_10_10_10_2_obj), false, "lime.graphics.opengl.ext.OES_vertex_type_10_10_10_2"));
			*(void **)__this = OES_vertex_type_10_10_10_2_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d5e1f87d93817c09_4_new)
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::OES_vertex_type_10_10_10_2)(__this) )->INT_10_10_10_2_OES = 36343;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::OES_vertex_type_10_10_10_2)(__this) )->UNSIGNED_INT_10_10_10_2_OES = 36342;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_vertex_type_10_10_10_2_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_vertex_type_10_10_10_2",de,be,f1,06); }

		int UNSIGNED_INT_10_10_10_2_OES;
		int INT_10_10_10_2_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_vertex_type_10_10_10_2 */ 
