// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__InterpolationMethod_InterpolationMethod_Impl_
#include <openfl/display/_InterpolationMethod/InterpolationMethod_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_35fa8dd9a2d72011_45_fromInt,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_","fromInt",0x57171cfe,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.fromInt","openfl/display/InterpolationMethod.hx",45,0x1fa1c725)
HX_LOCAL_STACK_FRAME(_hx_pos_35fa8dd9a2d72011_50_fromString,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_","fromString",0x8e1d4c22,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.fromString","openfl/display/InterpolationMethod.hx",50,0x1fa1c725)
HX_LOCAL_STACK_FRAME(_hx_pos_35fa8dd9a2d72011_60_toInt,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_","toInt",0x246b454d,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.toInt","openfl/display/InterpolationMethod.hx",60,0x1fa1c725)
HX_LOCAL_STACK_FRAME(_hx_pos_35fa8dd9a2d72011_65_toString,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_","toString",0x7209ff33,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.toString","openfl/display/InterpolationMethod.hx",65,0x1fa1c725)
HX_LOCAL_STACK_FRAME(_hx_pos_35fa8dd9a2d72011_27_boot,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_","boot",0x602d2339,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.boot","openfl/display/InterpolationMethod.hx",27,0x1fa1c725)
HX_LOCAL_STACK_FRAME(_hx_pos_35fa8dd9a2d72011_41_boot,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_","boot",0x602d2339,"openfl.display._InterpolationMethod.InterpolationMethod_Impl_.boot","openfl/display/InterpolationMethod.hx",41,0x1fa1c725)
namespace openfl{
namespace display{
namespace _InterpolationMethod{

void InterpolationMethod_Impl__obj::__construct() { }

Dynamic InterpolationMethod_Impl__obj::__CreateEmpty() { return new InterpolationMethod_Impl__obj; }

void *InterpolationMethod_Impl__obj::_hx_vtable = 0;

Dynamic InterpolationMethod_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InterpolationMethod_Impl__obj > _hx_result = new InterpolationMethod_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InterpolationMethod_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5fbddaf5;
}

 ::Dynamic InterpolationMethod_Impl__obj::LINEAR_RGB;

 ::Dynamic InterpolationMethod_Impl__obj::RGB;

 ::Dynamic InterpolationMethod_Impl__obj::fromInt( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_35fa8dd9a2d72011_45_fromInt)
HXDLIN(  45)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InterpolationMethod_Impl__obj,fromInt,return )

 ::Dynamic InterpolationMethod_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_35fa8dd9a2d72011_50_fromString)
HXDLIN(  50)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("linearRGB",28,a2,44,d9)) ){
HXLINE(  52)			return 0;
HXDLIN(  52)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("rgb",0d,db,56,00)) ){
HXLINE(  53)			return 1;
HXDLIN(  53)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  54)			return null();
            		}
            		_hx_goto_1:;
HXLINE(  50)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InterpolationMethod_Impl__obj,fromString,return )

 ::Dynamic InterpolationMethod_Impl__obj::toInt( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_35fa8dd9a2d72011_60_toInt)
HXDLIN(  60)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InterpolationMethod_Impl__obj,toInt,return )

::String InterpolationMethod_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_35fa8dd9a2d72011_65_toString)
HXDLIN(  65)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  67)			return HX_("linearRGB",28,a2,44,d9);
HXDLIN(  67)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  68)			return HX_("rgb",0d,db,56,00);
HXDLIN(  68)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE(  69)			return null();
            		}
            		_hx_goto_4:;
HXLINE(  65)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(InterpolationMethod_Impl__obj,toString,return )


InterpolationMethod_Impl__obj::InterpolationMethod_Impl__obj()
{
}

bool InterpolationMethod_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *InterpolationMethod_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo InterpolationMethod_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &InterpolationMethod_Impl__obj::LINEAR_RGB,HX_("LINEAR_RGB",53,10,b2,52)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &InterpolationMethod_Impl__obj::RGB,HX_("RGB",ed,76,3e,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void InterpolationMethod_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InterpolationMethod_Impl__obj::LINEAR_RGB,"LINEAR_RGB");
	HX_MARK_MEMBER_NAME(InterpolationMethod_Impl__obj::RGB,"RGB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void InterpolationMethod_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InterpolationMethod_Impl__obj::LINEAR_RGB,"LINEAR_RGB");
	HX_VISIT_MEMBER_NAME(InterpolationMethod_Impl__obj::RGB,"RGB");
};

#endif

::hx::Class InterpolationMethod_Impl__obj::__mClass;

static ::String InterpolationMethod_Impl__obj_sStaticFields[] = {
	HX_("LINEAR_RGB",53,10,b2,52),
	HX_("RGB",ed,76,3e,00),
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromString",db,2d,74,54),
	HX_("toInt",34,be,11,14),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void InterpolationMethod_Impl__obj::__register()
{
	InterpolationMethod_Impl__obj _hx_dummy;
	InterpolationMethod_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._InterpolationMethod.InterpolationMethod_Impl_",c7,1e,15,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &InterpolationMethod_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = InterpolationMethod_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(InterpolationMethod_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< InterpolationMethod_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = InterpolationMethod_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InterpolationMethod_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InterpolationMethod_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void InterpolationMethod_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_35fa8dd9a2d72011_27_boot)
HXDLIN(  27)		LINEAR_RGB = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_35fa8dd9a2d72011_41_boot)
HXDLIN(  41)		RGB = 1;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _InterpolationMethod
