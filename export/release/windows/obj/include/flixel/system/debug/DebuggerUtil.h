// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#define INCLUDED_flixel_system_debug_DebuggerUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,_hx_system,debug,DebuggerUtil)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace flixel{
namespace _hx_system{
namespace debug{


class HXCPP_CLASS_ATTRIBUTES DebuggerUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DebuggerUtil_obj OBJ_;
		DebuggerUtil_obj();

	public:
		enum { _hx_ClassId = 0x603b72e7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.system.debug.DebuggerUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.system.debug.DebuggerUtil"); }

		inline static ::hx::ObjectPtr< DebuggerUtil_obj > __new() {
			::hx::ObjectPtr< DebuggerUtil_obj > __this = new DebuggerUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DebuggerUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DebuggerUtil_obj *__this = (DebuggerUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DebuggerUtil_obj), false, "flixel.system.debug.DebuggerUtil"));
			*(void **)__this = DebuggerUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DebuggerUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DebuggerUtil",e3,18,20,50); }

		static  ::openfl::text::TextField createTextField(::hx::Null< Float >  X,::hx::Null< Float >  Y,::hx::Null< int >  Color,::hx::Null< int >  Size);
		static ::Dynamic createTextField_dyn();

		static  ::Dynamic initTextField( ::Dynamic tf,::hx::Null< Float >  X,::hx::Null< Float >  Y,::hx::Null< int >  Color,::hx::Null< int >  Size);
		static ::Dynamic initTextField_dyn();

		static  ::openfl::display::BitmapData fixSize( ::openfl::display::BitmapData bitmapData);
		static ::Dynamic fixSize_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug

#endif /* INCLUDED_flixel_system_debug_DebuggerUtil */ 
