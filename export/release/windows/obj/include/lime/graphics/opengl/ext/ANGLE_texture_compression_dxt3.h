// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt3
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b30108ea6b58727c_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_texture_compression_dxt3)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES ANGLE_texture_compression_dxt3_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ANGLE_texture_compression_dxt3_obj OBJ_;
		ANGLE_texture_compression_dxt3_obj();

	public:
		enum { _hx_ClassId = 0x6e08566e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_texture_compression_dxt3")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.ANGLE_texture_compression_dxt3"); }

		inline static ::hx::ObjectPtr< ANGLE_texture_compression_dxt3_obj > __new() {
			::hx::ObjectPtr< ANGLE_texture_compression_dxt3_obj > __this = new ANGLE_texture_compression_dxt3_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ANGLE_texture_compression_dxt3_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ANGLE_texture_compression_dxt3_obj *__this = (ANGLE_texture_compression_dxt3_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ANGLE_texture_compression_dxt3_obj), false, "lime.graphics.opengl.ext.ANGLE_texture_compression_dxt3"));
			*(void **)__this = ANGLE_texture_compression_dxt3_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b30108ea6b58727c_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::ANGLE_texture_compression_dxt3)(__this) )->COMPRESSED_RGBA_S3TC_DXT3_ANGLE = 33778;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ANGLE_texture_compression_dxt3_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ANGLE_texture_compression_dxt3",fc,60,dc,b5); }

		int COMPRESSED_RGBA_S3TC_DXT3_ANGLE;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_texture_compression_dxt3 */ 
