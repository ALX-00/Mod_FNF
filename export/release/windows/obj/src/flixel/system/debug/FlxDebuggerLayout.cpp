// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_FlxDebuggerLayout
#include <flixel/system/debug/FlxDebuggerLayout.h>
#endif
namespace flixel{
namespace _hx_system{
namespace debug{

::flixel::_hx_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::BIG;

::flixel::_hx_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::LEFT;

::flixel::_hx_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::MICRO;

::flixel::_hx_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::RIGHT;

::flixel::_hx_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::STANDARD;

::flixel::_hx_system::debug::FlxDebuggerLayout FlxDebuggerLayout_obj::TOP;

bool FlxDebuggerLayout_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BIG",a0,54,32,00)) { outValue = FlxDebuggerLayout_obj::BIG; return true; }
	if (inName==HX_("LEFT",07,d0,70,32)) { outValue = FlxDebuggerLayout_obj::LEFT; return true; }
	if (inName==HX_("MICRO",e4,5c,4e,86)) { outValue = FlxDebuggerLayout_obj::MICRO; return true; }
	if (inName==HX_("RIGHT",bc,43,52,67)) { outValue = FlxDebuggerLayout_obj::RIGHT; return true; }
	if (inName==HX_("STANDARD",3d,c7,fd,43)) { outValue = FlxDebuggerLayout_obj::STANDARD; return true; }
	if (inName==HX_("TOP",75,02,40,00)) { outValue = FlxDebuggerLayout_obj::TOP; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxDebuggerLayout_obj)

int FlxDebuggerLayout_obj::__FindIndex(::String inName)
{
	if (inName==HX_("BIG",a0,54,32,00)) return 2;
	if (inName==HX_("LEFT",07,d0,70,32)) return 4;
	if (inName==HX_("MICRO",e4,5c,4e,86)) return 1;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 5;
	if (inName==HX_("STANDARD",3d,c7,fd,43)) return 0;
	if (inName==HX_("TOP",75,02,40,00)) return 3;
	return super::__FindIndex(inName);
}

int FlxDebuggerLayout_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("BIG",a0,54,32,00)) return 0;
	if (inName==HX_("LEFT",07,d0,70,32)) return 0;
	if (inName==HX_("MICRO",e4,5c,4e,86)) return 0;
	if (inName==HX_("RIGHT",bc,43,52,67)) return 0;
	if (inName==HX_("STANDARD",3d,c7,fd,43)) return 0;
	if (inName==HX_("TOP",75,02,40,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxDebuggerLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("BIG",a0,54,32,00)) return BIG;
	if (inName==HX_("LEFT",07,d0,70,32)) return LEFT;
	if (inName==HX_("MICRO",e4,5c,4e,86)) return MICRO;
	if (inName==HX_("RIGHT",bc,43,52,67)) return RIGHT;
	if (inName==HX_("STANDARD",3d,c7,fd,43)) return STANDARD;
	if (inName==HX_("TOP",75,02,40,00)) return TOP;
	return super::__Field(inName,inCallProp);
}

static ::String FlxDebuggerLayout_obj_sStaticFields[] = {
	HX_("STANDARD",3d,c7,fd,43),
	HX_("MICRO",e4,5c,4e,86),
	HX_("BIG",a0,54,32,00),
	HX_("TOP",75,02,40,00),
	HX_("LEFT",07,d0,70,32),
	HX_("RIGHT",bc,43,52,67),
	::String(null())
};

::hx::Class FlxDebuggerLayout_obj::__mClass;

Dynamic __Create_FlxDebuggerLayout_obj() { return new FlxDebuggerLayout_obj; }

void FlxDebuggerLayout_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.system.debug.FlxDebuggerLayout",15,d0,5b,09), ::hx::TCanCast< FlxDebuggerLayout_obj >,FlxDebuggerLayout_obj_sStaticFields,0,
	&__Create_FlxDebuggerLayout_obj, &__Create,
	&super::__SGetClass(), &CreateFlxDebuggerLayout_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxDebuggerLayout_obj::__GetStatic;
}

void FlxDebuggerLayout_obj::__boot()
{
BIG = ::hx::CreateConstEnum< FlxDebuggerLayout_obj >(HX_("BIG",a0,54,32,00),2);
LEFT = ::hx::CreateConstEnum< FlxDebuggerLayout_obj >(HX_("LEFT",07,d0,70,32),4);
MICRO = ::hx::CreateConstEnum< FlxDebuggerLayout_obj >(HX_("MICRO",e4,5c,4e,86),1);
RIGHT = ::hx::CreateConstEnum< FlxDebuggerLayout_obj >(HX_("RIGHT",bc,43,52,67),5);
STANDARD = ::hx::CreateConstEnum< FlxDebuggerLayout_obj >(HX_("STANDARD",3d,c7,fd,43),0);
TOP = ::hx::CreateConstEnum< FlxDebuggerLayout_obj >(HX_("TOP",75,02,40,00),3);
}


} // end namespace flixel
} // end namespace system
} // end namespace debug
