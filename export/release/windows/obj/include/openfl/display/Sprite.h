// Generated by Haxe 4.1.5
#ifndef INCLUDED_openfl_display_Sprite
#define INCLUDED_openfl_display_Sprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,Graphics)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Sprite_obj : public  ::openfl::display::DisplayObjectContainer_obj
{
	public:
		typedef  ::openfl::display::DisplayObjectContainer_obj super;
		typedef Sprite_obj OBJ_;
		Sprite_obj();

	public:
		enum { _hx_ClassId = 0x1f4df417 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Sprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Sprite"); }
		static ::hx::ObjectPtr< Sprite_obj > __new();
		static ::hx::ObjectPtr< Sprite_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Sprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Sprite",25,50,2a,f8); }

		 ::openfl::display::DisplayObject dropTarget;
		 ::openfl::display::Sprite hitArea;
		bool useHandCursor;
		bool _hx___buttonMode;
		void startDrag(::hx::Null< bool >  lockCenter, ::openfl::geom::Rectangle bounds);
		::Dynamic startDrag_dyn();

		void stopDrag();
		::Dynamic stopDrag_dyn();

		::String _hx___getCursor();

		bool _hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject);

		bool _hx___hitTestHitArea(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject);
		::Dynamic _hx___hitTestHitArea_dyn();

		bool _hx___hitTestMask(Float x,Float y);

		 ::openfl::display::Graphics get_graphics();
		::Dynamic get_graphics_dyn();

		bool get_tabEnabled();

		bool get_buttonMode();
		::Dynamic get_buttonMode_dyn();

		virtual bool set_buttonMode(bool value);
		::Dynamic set_buttonMode_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Sprite */ 
