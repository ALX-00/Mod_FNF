// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicCursorCross
#include <flixel/system/debug/interaction/tools/GraphicCursorCross.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_084b38929ee3eaaa_47_new,"flixel.system.debug.interaction.tools.GraphicCursorCross","new",0x7ff5abab,"flixel.system.debug.interaction.tools.GraphicCursorCross.new","openfl/utils/_internal/AssetsMacro.hx",47,0xfdd54705)
HX_LOCAL_STACK_FRAME(_hx_pos_ef1b3e6d9529fe01_15_boot,"flixel.system.debug.interaction.tools.GraphicCursorCross","boot",0x6f198a87,"flixel.system.debug.interaction.tools.GraphicCursorCross.boot","flixel/system/debug/interaction/tools/Pointer.hx",15,0x6c93613b)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void GraphicCursorCross_obj::__construct(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA){
            		 ::Dynamic transparent = __o_transparent;
            		if (::hx::IsNull(__o_transparent)) transparent = true;
            		 ::Dynamic fillRGBA = __o_fillRGBA;
            		if (::hx::IsNull(__o_fillRGBA)) fillRGBA = -1;
            	HX_STACKFRAME(&_hx_pos_084b38929ee3eaaa_47_new)
HXLINE(  71)		super::__construct(0,0,transparent,fillRGBA);
HXLINE(  73)		 ::openfl::utils::ByteArrayData byteArray = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(::haxe::Resource_obj::getBytes(::flixel::_hx_system::debug::interaction::tools::GraphicCursorCross_obj::resourceName));
HXLINE(  74)		{
HXLINE(  74)			 ::openfl::utils::ByteArrayData rawAlpha = null();
HXDLIN(  74)			 ::lime::graphics::Image image = ::lime::graphics::Image_obj::fromBytes(::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(byteArray));
HXDLIN(  74)			this->_hx___fromImage(image);
HXDLIN(  74)			if (::hx::IsNotNull( rawAlpha )) {
HXLINE(  74)				this->_hx___applyAlpha(rawAlpha);
            			}
            		}
            	}

Dynamic GraphicCursorCross_obj::__CreateEmpty() { return new GraphicCursorCross_obj; }

void *GraphicCursorCross_obj::_hx_vtable = 0;

Dynamic GraphicCursorCross_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicCursorCross_obj > _hx_result = new GraphicCursorCross_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GraphicCursorCross_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x073e5103) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x073e5103;
	} else {
		return inClassId==(int)0x7310ad13;
	}
}

::String GraphicCursorCross_obj::resourceName;


::hx::ObjectPtr< GraphicCursorCross_obj > GraphicCursorCross_obj::__new(int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	::hx::ObjectPtr< GraphicCursorCross_obj > __this = new GraphicCursorCross_obj();
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

::hx::ObjectPtr< GraphicCursorCross_obj > GraphicCursorCross_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA) {
	GraphicCursorCross_obj *__this = (GraphicCursorCross_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicCursorCross_obj), true, "flixel.system.debug.interaction.tools.GraphicCursorCross"));
	*(void **)__this = GraphicCursorCross_obj::_hx_vtable;
	__this->__construct(width,height,__o_transparent,__o_fillRGBA);
	return __this;
}

GraphicCursorCross_obj::GraphicCursorCross_obj()
{
}

bool GraphicCursorCross_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool GraphicCursorCross_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GraphicCursorCross_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GraphicCursorCross_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &GraphicCursorCross_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GraphicCursorCross_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicCursorCross_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GraphicCursorCross_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicCursorCross_obj::resourceName,"resourceName");
};

#endif

::hx::Class GraphicCursorCross_obj::__mClass;

static ::String GraphicCursorCross_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void GraphicCursorCross_obj::__register()
{
	GraphicCursorCross_obj _hx_dummy;
	GraphicCursorCross_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools.GraphicCursorCross",39,fa,dd,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicCursorCross_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicCursorCross_obj::__SetStatic;
	__mClass->mMarkFunc = GraphicCursorCross_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GraphicCursorCross_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GraphicCursorCross_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GraphicCursorCross_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicCursorCross_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicCursorCross_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GraphicCursorCross_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ef1b3e6d9529fe01_15_boot)
HXDLIN(  15)		resourceName = HX_("__ASSET__:bitmap_flixel_system_debug_interaction_tools_GraphicCursorCross",12,f7,e2,fa);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
