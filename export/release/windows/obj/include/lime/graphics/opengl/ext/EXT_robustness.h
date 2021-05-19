// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_robustness
#define INCLUDED_lime_graphics_opengl_ext_EXT_robustness

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_60e6ca196390a6ae_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,EXT_robustness)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES EXT_robustness_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EXT_robustness_obj OBJ_;
		EXT_robustness_obj();

	public:
		enum { _hx_ClassId = 0x011ffc38 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.EXT_robustness")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.EXT_robustness"); }

		inline static ::hx::ObjectPtr< EXT_robustness_obj > __new() {
			::hx::ObjectPtr< EXT_robustness_obj > __this = new EXT_robustness_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EXT_robustness_obj > __alloc(::hx::Ctx *_hx_ctx) {
			EXT_robustness_obj *__this = (EXT_robustness_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EXT_robustness_obj), false, "lime.graphics.opengl.ext.EXT_robustness"));
			*(void **)__this = EXT_robustness_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_60e6ca196390a6ae_4_new)
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::EXT_robustness)(__this) )->NO_RESET_NOTIFICATION_EXT = 33377;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::EXT_robustness)(__this) )->LOSE_CONTEXT_ON_RESET_EXT = 33362;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::EXT_robustness)(__this) )->RESET_NOTIFICATION_STRATEGY_EXT = 33366;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::EXT_robustness)(__this) )->CONTEXT_ROBUST_ACCESS_EXT = 37107;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::EXT_robustness)(__this) )->UNKNOWN_CONTEXT_RESET_EXT = 33365;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::EXT_robustness)(__this) )->INNOCENT_CONTEXT_RESET_EXT = 33364;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::EXT_robustness)(__this) )->GUILTY_CONTEXT_RESET_EXT = 33363;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EXT_robustness_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EXT_robustness",c6,8a,39,e5); }

		int GUILTY_CONTEXT_RESET_EXT;
		int INNOCENT_CONTEXT_RESET_EXT;
		int UNKNOWN_CONTEXT_RESET_EXT;
		int CONTEXT_ROBUST_ACCESS_EXT;
		int RESET_NOTIFICATION_STRATEGY_EXT;
		int LOSE_CONTEXT_ON_RESET_EXT;
		int NO_RESET_NOTIFICATION_EXT;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_EXT_robustness */ 
