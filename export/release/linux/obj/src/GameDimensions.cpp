// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_GameDimensions
#include <GameDimensions.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3586ab88c5764efa_5_boot,"GameDimensions","boot",0x6f6f4a01,"GameDimensions.boot","GameDimensions.hx",5,0xaaa7bf1f)
HX_LOCAL_STACK_FRAME(_hx_pos_3586ab88c5764efa_6_boot,"GameDimensions","boot",0x6f6f4a01,"GameDimensions.boot","GameDimensions.hx",6,0xaaa7bf1f)

void GameDimensions_obj::__construct() { }

Dynamic GameDimensions_obj::__CreateEmpty() { return new GameDimensions_obj; }

void *GameDimensions_obj::_hx_vtable = 0;

Dynamic GameDimensions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameDimensions_obj > _hx_result = new GameDimensions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameDimensions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1ebdf823;
}

int GameDimensions_obj::width;

int GameDimensions_obj::height;


GameDimensions_obj::GameDimensions_obj()
{
}

bool GameDimensions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { outValue = ( width ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { outValue = ( height ); return true; }
	}
	return false;
}

bool GameDimensions_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=ioValue.Cast< int >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GameDimensions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GameDimensions_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &GameDimensions_obj::width,HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(void *) &GameDimensions_obj::height,HX_("height",e7,07,4c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GameDimensions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameDimensions_obj::width,"width");
	HX_MARK_MEMBER_NAME(GameDimensions_obj::height,"height");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GameDimensions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameDimensions_obj::width,"width");
	HX_VISIT_MEMBER_NAME(GameDimensions_obj::height,"height");
};

#endif

::hx::Class GameDimensions_obj::__mClass;

static ::String GameDimensions_obj_sStaticFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	::String(null())
};

void GameDimensions_obj::__register()
{
	GameDimensions_obj _hx_dummy;
	GameDimensions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameDimensions",ff,6c,94,15);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GameDimensions_obj::__GetStatic;
	__mClass->mSetStaticField = &GameDimensions_obj::__SetStatic;
	__mClass->mMarkFunc = GameDimensions_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GameDimensions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GameDimensions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GameDimensions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameDimensions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameDimensions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GameDimensions_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3586ab88c5764efa_5_boot)
HXDLIN(   5)		width = 1280;
            	}
{
            	HX_STACKFRAME(&_hx_pos_3586ab88c5764efa_6_boot)
HXDLIN(   6)		height = 720;
            	}
}

