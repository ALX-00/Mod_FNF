// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_alpha_test
#include <lime/graphics/opengl/ext/QCOM_alpha_test.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_399cf2cdee05251f_4_new,"lime.graphics.opengl.ext.QCOM_alpha_test","new",0x0896a752,"lime.graphics.opengl.ext.QCOM_alpha_test.new","lime/graphics/opengl/ext/QCOM_alpha_test.hx",4,0xac036180)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void QCOM_alpha_test_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_399cf2cdee05251f_4_new)
HXLINE(   8)		this->ALPHA_TEST_REF_QCOM = 3010;
HXLINE(   7)		this->ALPHA_TEST_FUNC_QCOM = 3009;
HXLINE(   6)		this->ALPHA_TEST_QCOM = 3008;
            	}

Dynamic QCOM_alpha_test_obj::__CreateEmpty() { return new QCOM_alpha_test_obj; }

void *QCOM_alpha_test_obj::_hx_vtable = 0;

Dynamic QCOM_alpha_test_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< QCOM_alpha_test_obj > _hx_result = new QCOM_alpha_test_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QCOM_alpha_test_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11be7910;
}


QCOM_alpha_test_obj::QCOM_alpha_test_obj()
{
}

::hx::Val QCOM_alpha_test_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_QCOM") ) { return ::hx::Val( ALPHA_TEST_QCOM ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_REF_QCOM") ) { return ::hx::Val( ALPHA_TEST_REF_QCOM ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_FUNC_QCOM") ) { return ::hx::Val( ALPHA_TEST_FUNC_QCOM ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val QCOM_alpha_test_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 15:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_QCOM") ) { ALPHA_TEST_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_REF_QCOM") ) { ALPHA_TEST_REF_QCOM=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"ALPHA_TEST_FUNC_QCOM") ) { ALPHA_TEST_FUNC_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_alpha_test_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ALPHA_TEST_QCOM",3c,9b,7f,99));
	outFields->push(HX_("ALPHA_TEST_FUNC_QCOM",3f,1c,4c,9d));
	outFields->push(HX_("ALPHA_TEST_REF_QCOM",08,df,0e,f3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo QCOM_alpha_test_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(QCOM_alpha_test_obj,ALPHA_TEST_QCOM),HX_("ALPHA_TEST_QCOM",3c,9b,7f,99)},
	{::hx::fsInt,(int)offsetof(QCOM_alpha_test_obj,ALPHA_TEST_FUNC_QCOM),HX_("ALPHA_TEST_FUNC_QCOM",3f,1c,4c,9d)},
	{::hx::fsInt,(int)offsetof(QCOM_alpha_test_obj,ALPHA_TEST_REF_QCOM),HX_("ALPHA_TEST_REF_QCOM",08,df,0e,f3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *QCOM_alpha_test_obj_sStaticStorageInfo = 0;
#endif

static ::String QCOM_alpha_test_obj_sMemberFields[] = {
	HX_("ALPHA_TEST_QCOM",3c,9b,7f,99),
	HX_("ALPHA_TEST_FUNC_QCOM",3f,1c,4c,9d),
	HX_("ALPHA_TEST_REF_QCOM",08,df,0e,f3),
	::String(null()) };

::hx::Class QCOM_alpha_test_obj::__mClass;

void QCOM_alpha_test_obj::__register()
{
	QCOM_alpha_test_obj _hx_dummy;
	QCOM_alpha_test_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.QCOM_alpha_test",60,56,80,6d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(QCOM_alpha_test_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< QCOM_alpha_test_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QCOM_alpha_test_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QCOM_alpha_test_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
