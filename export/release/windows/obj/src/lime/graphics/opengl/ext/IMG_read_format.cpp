// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_IMG_read_format
#include <lime/graphics/opengl/ext/IMG_read_format.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4bfa4e4fce498d05_4_new,"lime.graphics.opengl.ext.IMG_read_format","new",0x9790c434,"lime.graphics.opengl.ext.IMG_read_format.new","lime/graphics/opengl/ext/IMG_read_format.hx",4,0x948bf6de)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void IMG_read_format_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4bfa4e4fce498d05_4_new)
HXLINE(   7)		this->UNSIGNED_SHORT_4_4_4_4_REV_IMG = 33637;
HXLINE(   6)		this->BGRA_IMG = 32993;
            	}

Dynamic IMG_read_format_obj::__CreateEmpty() { return new IMG_read_format_obj; }

void *IMG_read_format_obj::_hx_vtable = 0;

Dynamic IMG_read_format_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< IMG_read_format_obj > _hx_result = new IMG_read_format_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool IMG_read_format_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07abfcf2;
}


IMG_read_format_obj::IMG_read_format_obj()
{
}

::hx::Val IMG_read_format_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_IMG") ) { return ::hx::Val( BGRA_IMG ); }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4_REV_IMG") ) { return ::hx::Val( UNSIGNED_SHORT_4_4_4_4_REV_IMG ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val IMG_read_format_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"BGRA_IMG") ) { BGRA_IMG=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4_REV_IMG") ) { UNSIGNED_SHORT_4_4_4_4_REV_IMG=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IMG_read_format_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("BGRA_IMG",98,93,c7,bc));
	outFields->push(HX_("UNSIGNED_SHORT_4_4_4_4_REV_IMG",ce,62,97,9a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo IMG_read_format_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(IMG_read_format_obj,BGRA_IMG),HX_("BGRA_IMG",98,93,c7,bc)},
	{::hx::fsInt,(int)offsetof(IMG_read_format_obj,UNSIGNED_SHORT_4_4_4_4_REV_IMG),HX_("UNSIGNED_SHORT_4_4_4_4_REV_IMG",ce,62,97,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *IMG_read_format_obj_sStaticStorageInfo = 0;
#endif

static ::String IMG_read_format_obj_sMemberFields[] = {
	HX_("BGRA_IMG",98,93,c7,bc),
	HX_("UNSIGNED_SHORT_4_4_4_4_REV_IMG",ce,62,97,9a),
	::String(null()) };

::hx::Class IMG_read_format_obj::__mClass;

void IMG_read_format_obj::__register()
{
	IMG_read_format_obj _hx_dummy;
	IMG_read_format_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.IMG_read_format",42,da,6d,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IMG_read_format_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< IMG_read_format_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IMG_read_format_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IMG_read_format_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
