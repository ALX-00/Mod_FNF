// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_StubBackend
#include <polymod/backends/StubBackend.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d14643276b7999de_33_new,"polymod.backends.StubBackend","new",0x31d2ab41,"polymod.backends.StubBackend.new","polymod/backends/StubBackend.hx",33,0xad5ab72f)
HX_LOCAL_STACK_FRAME(_hx_pos_d14643276b7999de_35_init,"polymod.backends.StubBackend","init",0x633be50f,"polymod.backends.StubBackend.init","polymod/backends/StubBackend.hx",35,0xad5ab72f)
HX_LOCAL_STACK_FRAME(_hx_pos_d14643276b7999de_36_destroy,"polymod.backends.StubBackend","destroy",0xd4a28c5b,"polymod.backends.StubBackend.destroy","polymod/backends/StubBackend.hx",36,0xad5ab72f)
HX_LOCAL_STACK_FRAME(_hx_pos_d14643276b7999de_38_clearCache,"polymod.backends.StubBackend","clearCache",0x6ae58cb4,"polymod.backends.StubBackend.clearCache","polymod/backends/StubBackend.hx",38,0xad5ab72f)
HX_LOCAL_STACK_FRAME(_hx_pos_d14643276b7999de_40_exists,"polymod.backends.StubBackend","exists",0xbe5e859b,"polymod.backends.StubBackend.exists","polymod/backends/StubBackend.hx",40,0xad5ab72f)
HX_LOCAL_STACK_FRAME(_hx_pos_d14643276b7999de_41_getBytes,"polymod.backends.StubBackend","getBytes",0x86262d74,"polymod.backends.StubBackend.getBytes","polymod/backends/StubBackend.hx",41,0xad5ab72f)
HX_LOCAL_STACK_FRAME(_hx_pos_d14643276b7999de_42_getText,"polymod.backends.StubBackend","getText",0xcf98dbc4,"polymod.backends.StubBackend.getText","polymod/backends/StubBackend.hx",42,0xad5ab72f)
HX_LOCAL_STACK_FRAME(_hx_pos_d14643276b7999de_44_getPath,"polymod.backends.StubBackend","getPath",0xccf0f4bc,"polymod.backends.StubBackend.getPath","polymod/backends/StubBackend.hx",44,0xad5ab72f)
HX_LOCAL_STACK_FRAME(_hx_pos_d14643276b7999de_45_list,"polymod.backends.StubBackend","list",0x6533c65d,"polymod.backends.StubBackend.list","polymod/backends/StubBackend.hx",45,0xad5ab72f)
HX_LOCAL_STACK_FRAME(_hx_pos_d14643276b7999de_47_stripAssetsPrefix,"polymod.backends.StubBackend","stripAssetsPrefix",0x4067a00e,"polymod.backends.StubBackend.stripAssetsPrefix","polymod/backends/StubBackend.hx",47,0xad5ab72f)
namespace polymod{
namespace backends{

void StubBackend_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d14643276b7999de_33_new)
            	}

Dynamic StubBackend_obj::__CreateEmpty() { return new StubBackend_obj; }

void *StubBackend_obj::_hx_vtable = 0;

Dynamic StubBackend_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StubBackend_obj > _hx_result = new StubBackend_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool StubBackend_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x66589f31;
}

static ::polymod::backends::IBackend_obj _hx_polymod_backends_StubBackend__hx_polymod_backends_IBackend= {
	( void (::hx::Object::*)())&::polymod::backends::StubBackend_obj::init,
	( void (::hx::Object::*)())&::polymod::backends::StubBackend_obj::destroy,
	( void (::hx::Object::*)())&::polymod::backends::StubBackend_obj::clearCache,
	( bool (::hx::Object::*)(::String))&::polymod::backends::StubBackend_obj::exists,
	(  ::haxe::io::Bytes (::hx::Object::*)(::String))&::polymod::backends::StubBackend_obj::getBytes,
	( ::String (::hx::Object::*)(::String))&::polymod::backends::StubBackend_obj::getText,
	( ::String (::hx::Object::*)(::String))&::polymod::backends::StubBackend_obj::getPath,
	( ::Array< ::String > (::hx::Object::*)(::String))&::polymod::backends::StubBackend_obj::list,
	( ::String (::hx::Object::*)(::String))&::polymod::backends::StubBackend_obj::stripAssetsPrefix,
};

void *StubBackend_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4ed455e0: return &_hx_polymod_backends_StubBackend__hx_polymod_backends_IBackend;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void StubBackend_obj::init(){
            	HX_STACKFRAME(&_hx_pos_d14643276b7999de_35_init)
            	}


HX_DEFINE_DYNAMIC_FUNC0(StubBackend_obj,init,(void))

void StubBackend_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_d14643276b7999de_36_destroy)
            	}


HX_DEFINE_DYNAMIC_FUNC0(StubBackend_obj,destroy,(void))

void StubBackend_obj::clearCache(){
            	HX_STACKFRAME(&_hx_pos_d14643276b7999de_38_clearCache)
            	}


HX_DEFINE_DYNAMIC_FUNC0(StubBackend_obj,clearCache,(void))

bool StubBackend_obj::exists(::String id){
            	HX_STACKFRAME(&_hx_pos_d14643276b7999de_40_exists)
HXDLIN(  40)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StubBackend_obj,exists,return )

 ::haxe::io::Bytes StubBackend_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_d14643276b7999de_41_getBytes)
HXDLIN(  41)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StubBackend_obj,getBytes,return )

::String StubBackend_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_d14643276b7999de_42_getText)
HXDLIN(  42)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StubBackend_obj,getText,return )

::String StubBackend_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_d14643276b7999de_44_getPath)
HXDLIN(  44)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(StubBackend_obj,getPath,return )

::Array< ::String > StubBackend_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_d14643276b7999de_45_list)
HXDLIN(  45)		return ::Array_obj< ::String >::__new(0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(StubBackend_obj,list,return )

::String StubBackend_obj::stripAssetsPrefix(::String id){
            	HX_STACKFRAME(&_hx_pos_d14643276b7999de_47_stripAssetsPrefix)
HXDLIN(  47)		return id;
            	}


HX_DEFINE_DYNAMIC_FUNC1(StubBackend_obj,stripAssetsPrefix,return )


::hx::ObjectPtr< StubBackend_obj > StubBackend_obj::__new() {
	::hx::ObjectPtr< StubBackend_obj > __this = new StubBackend_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< StubBackend_obj > StubBackend_obj::__alloc(::hx::Ctx *_hx_ctx) {
	StubBackend_obj *__this = (StubBackend_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StubBackend_obj), true, "polymod.backends.StubBackend"));
	*(void **)__this = StubBackend_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

StubBackend_obj::StubBackend_obj()
{
}

void StubBackend_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StubBackend);
	HX_MARK_MEMBER_NAME(polymodLibrary,"polymodLibrary");
	HX_MARK_END_CLASS();
}

void StubBackend_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(polymodLibrary,"polymodLibrary");
}

::hx::Val StubBackend_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearCache") ) { return ::hx::Val( clearCache_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"polymodLibrary") ) { return ::hx::Val( polymodLibrary ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stripAssetsPrefix") ) { return ::hx::Val( stripAssetsPrefix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StubBackend_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"polymodLibrary") ) { polymodLibrary=inValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StubBackend_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("polymodLibrary",a5,49,05,cb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StubBackend_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(int)offsetof(StubBackend_obj,polymodLibrary),HX_("polymodLibrary",a5,49,05,cb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StubBackend_obj_sStaticStorageInfo = 0;
#endif

static ::String StubBackend_obj_sMemberFields[] = {
	HX_("polymodLibrary",a5,49,05,cb),
	HX_("init",10,3b,bb,45),
	HX_("destroy",fa,2c,86,24),
	HX_("clearCache",75,d9,1e,16),
	HX_("exists",dc,1d,e0,bf),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getText",63,7c,7c,1f),
	HX_("getPath",5b,95,d4,1c),
	HX_("list",5e,1c,b3,47),
	HX_("stripAssetsPrefix",6d,dd,37,77),
	::String(null()) };

::hx::Class StubBackend_obj::__mClass;

void StubBackend_obj::__register()
{
	StubBackend_obj _hx_dummy;
	StubBackend_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.StubBackend",cf,f6,f1,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StubBackend_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StubBackend_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StubBackend_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StubBackend_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
