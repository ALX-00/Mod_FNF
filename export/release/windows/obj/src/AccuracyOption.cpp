// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_AccuracyOption
#include <AccuracyOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_073f38f294c4fadc_150_new,"AccuracyOption","new",0x53bf62a0,"AccuracyOption.new","Options.hx",150,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_073f38f294c4fadc_155_press,"AccuracyOption","press",0x7bacf5c3,"AccuracyOption.press","Options.hx",155,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_073f38f294c4fadc_163_updateDisplay,"AccuracyOption","updateDisplay",0x7ea97179,"AccuracyOption.updateDisplay","Options.hx",163,0x9d9a0240)

void AccuracyOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_073f38f294c4fadc_150_new)
HXLINE( 151)		super::__construct();
HXLINE( 152)		this->description = desc;
            	}

Dynamic AccuracyOption_obj::__CreateEmpty() { return new AccuracyOption_obj; }

void *AccuracyOption_obj::_hx_vtable = 0;

Dynamic AccuracyOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AccuracyOption_obj > _hx_result = new AccuracyOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool AccuracyOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x50e5556e;
	}
}

bool AccuracyOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_073f38f294c4fadc_155_press)
HXLINE( 156)		::flixel::FlxG_obj::save->data->__SetField(HX_("accuracyDisplay",09,75,5e,26),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("accuracyDisplay",09,75,5e,26),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 157)		this->display = this->updateDisplay();
HXLINE( 158)		return true;
            	}


::String AccuracyOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_073f38f294c4fadc_163_updateDisplay)
HXDLIN( 163)		::String _hx_tmp;
HXDLIN( 163)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("accuracyDisplay",09,75,5e,26),::hx::paccDynamic)) ))) {
HXDLIN( 163)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
            		else {
HXDLIN( 163)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
HXDLIN( 163)		return (HX_("Accuracy ",a7,4b,73,6e) + _hx_tmp);
            	}



::hx::ObjectPtr< AccuracyOption_obj > AccuracyOption_obj::__new(::String desc) {
	::hx::ObjectPtr< AccuracyOption_obj > __this = new AccuracyOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< AccuracyOption_obj > AccuracyOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	AccuracyOption_obj *__this = (AccuracyOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AccuracyOption_obj), true, "AccuracyOption"));
	*(void **)__this = AccuracyOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

AccuracyOption_obj::AccuracyOption_obj()
{
}

::hx::Val AccuracyOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AccuracyOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AccuracyOption_obj_sStaticStorageInfo = 0;
#endif

static ::String AccuracyOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class AccuracyOption_obj::__mClass;

void AccuracyOption_obj::__register()
{
	AccuracyOption_obj _hx_dummy;
	AccuracyOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AccuracyOption",ae,d2,f9,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AccuracyOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AccuracyOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AccuracyOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AccuracyOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

