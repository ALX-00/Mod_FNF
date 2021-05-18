// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b224d6bfd31a08e5_18_new,"flixel.input.FlxBaseKeyList","new",0x83657282,"flixel.input.FlxBaseKeyList.new","flixel/input/FlxBaseKeyList.hx",18,0x0418a22c)
HX_LOCAL_STACK_FRAME(_hx_pos_b224d6bfd31a08e5_25_check,"flixel.input.FlxBaseKeyList","check",0xea0e876a,"flixel.input.FlxBaseKeyList.check","flixel/input/FlxBaseKeyList.hx",25,0x0418a22c)
HX_LOCAL_STACK_FRAME(_hx_pos_b224d6bfd31a08e5_29_get_ANY,"flixel.input.FlxBaseKeyList","get_ANY",0x83d0ba85,"flixel.input.FlxBaseKeyList.get_ANY","flixel/input/FlxBaseKeyList.hx",29,0x0418a22c)
HX_LOCAL_STACK_FRAME(_hx_pos_b224d6bfd31a08e5_41_get_NONE,"flixel.input.FlxBaseKeyList","get_NONE",0xdb6af8df,"flixel.input.FlxBaseKeyList.get_NONE","flixel/input/FlxBaseKeyList.hx",41,0x0418a22c)
namespace flixel{
namespace input{

void FlxBaseKeyList_obj::__construct(int status, ::flixel::input::FlxKeyManager keyManager){
            	HX_STACKFRAME(&_hx_pos_b224d6bfd31a08e5_18_new)
HXLINE(  19)		this->status = status;
HXLINE(  20)		this->keyManager = keyManager;
            	}

Dynamic FlxBaseKeyList_obj::__CreateEmpty() { return new FlxBaseKeyList_obj; }

void *FlxBaseKeyList_obj::_hx_vtable = 0;

Dynamic FlxBaseKeyList_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBaseKeyList_obj > _hx_result = new FlxBaseKeyList_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxBaseKeyList_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7e9b8150;
}

bool FlxBaseKeyList_obj::check(int keyCode){
            	HX_STACKFRAME(&_hx_pos_b224d6bfd31a08e5_25_check)
HXDLIN(  25)		return this->keyManager->checkStatus(keyCode,this->status);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseKeyList_obj,check,return )

bool FlxBaseKeyList_obj::get_ANY(){
            	HX_STACKFRAME(&_hx_pos_b224d6bfd31a08e5_29_get_ANY)
HXLINE(  30)		{
HXLINE(  30)			int _g = 0;
HXDLIN(  30)			::Array< ::Dynamic> _g1 = this->keyManager->_keyListArray;
HXDLIN(  30)			while((_g < _g1->length)){
HXLINE(  30)				 ::flixel::input::FlxInput key = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN(  30)				_g = (_g + 1);
HXLINE(  32)				bool _hx_tmp;
HXDLIN(  32)				if (::hx::IsNotNull( key )) {
HXLINE(  32)					_hx_tmp = this->keyManager->checkStatus(( (int)(key->ID) ),this->status);
            				}
            				else {
HXLINE(  32)					_hx_tmp = false;
            				}
HXDLIN(  32)				if (_hx_tmp) {
HXLINE(  34)					return true;
            				}
            			}
            		}
HXLINE(  37)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseKeyList_obj,get_ANY,return )

bool FlxBaseKeyList_obj::get_NONE(){
            	HX_STACKFRAME(&_hx_pos_b224d6bfd31a08e5_41_get_NONE)
HXLINE(  42)		{
HXLINE(  42)			int _g = 0;
HXDLIN(  42)			::Array< ::Dynamic> _g1 = this->keyManager->_keyListArray;
HXDLIN(  42)			while((_g < _g1->length)){
HXLINE(  42)				 ::flixel::input::FlxInput key = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN(  42)				_g = (_g + 1);
HXLINE(  44)				bool _hx_tmp;
HXDLIN(  44)				if (::hx::IsNotNull( key )) {
HXLINE(  44)					_hx_tmp = this->keyManager->checkStatus(( (int)(key->ID) ),this->status);
            				}
            				else {
HXLINE(  44)					_hx_tmp = false;
            				}
HXDLIN(  44)				if (_hx_tmp) {
HXLINE(  46)					return false;
            				}
            			}
            		}
HXLINE(  49)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseKeyList_obj,get_NONE,return )


::hx::ObjectPtr< FlxBaseKeyList_obj > FlxBaseKeyList_obj::__new(int status, ::flixel::input::FlxKeyManager keyManager) {
	::hx::ObjectPtr< FlxBaseKeyList_obj > __this = new FlxBaseKeyList_obj();
	__this->__construct(status,keyManager);
	return __this;
}

::hx::ObjectPtr< FlxBaseKeyList_obj > FlxBaseKeyList_obj::__alloc(::hx::Ctx *_hx_ctx,int status, ::flixel::input::FlxKeyManager keyManager) {
	FlxBaseKeyList_obj *__this = (FlxBaseKeyList_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseKeyList_obj), true, "flixel.input.FlxBaseKeyList"));
	*(void **)__this = FlxBaseKeyList_obj::_hx_vtable;
	__this->__construct(status,keyManager);
	return __this;
}

FlxBaseKeyList_obj::FlxBaseKeyList_obj()
{
}

void FlxBaseKeyList_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseKeyList);
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(keyManager,"keyManager");
	HX_MARK_END_CLASS();
}

void FlxBaseKeyList_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(keyManager,"keyManager");
}

::hx::Val FlxBaseKeyList_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_ANY() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"NONE") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_NONE() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { return ::hx::Val( status ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_ANY") ) { return ::hx::Val( get_ANY_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_NONE") ) { return ::hx::Val( get_NONE_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyManager") ) { return ::hx::Val( keyManager ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxBaseKeyList_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyManager") ) { keyManager=inValue.Cast<  ::flixel::input::FlxKeyManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseKeyList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ANY",cc,96,31,00));
	outFields->push(HX_("NONE",b8,da,ca,33));
	outFields->push(HX_("status",32,e7,fb,05));
	outFields->push(HX_("keyManager",8e,32,49,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBaseKeyList_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(FlxBaseKeyList_obj,status),HX_("status",32,e7,fb,05)},
	{::hx::fsObject /*  ::flixel::input::FlxKeyManager */ ,(int)offsetof(FlxBaseKeyList_obj,keyManager),HX_("keyManager",8e,32,49,82)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxBaseKeyList_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBaseKeyList_obj_sMemberFields[] = {
	HX_("status",32,e7,fb,05),
	HX_("keyManager",8e,32,49,82),
	HX_("check",c8,98,b6,45),
	HX_("get_ANY",63,5f,a6,26),
	HX_("get_NONE",41,96,85,b3),
	::String(null()) };

::hx::Class FlxBaseKeyList_obj::__mClass;

void FlxBaseKeyList_obj::__register()
{
	FlxBaseKeyList_obj _hx_dummy;
	FlxBaseKeyList_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.FlxBaseKeyList",90,c9,dd,3d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBaseKeyList_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBaseKeyList_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseKeyList_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseKeyList_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
