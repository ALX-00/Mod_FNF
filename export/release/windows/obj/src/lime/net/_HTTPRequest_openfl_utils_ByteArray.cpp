// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_openfl_utils_ByteArray
#include <lime/net/_HTTPRequest_openfl_utils_ByteArray.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_62d462820a77e9f1_134_new,"lime.net._HTTPRequest_openfl_utils_ByteArray","new",0xb743fd13,"lime.net._HTTPRequest_openfl_utils_ByteArray.new","lime/_internal/macros/HTTPRequestMacro.hx",134,0xf82711de)
HX_LOCAL_STACK_FRAME(_hx_pos_0170168071f82217_289_fromBytes,"lime.net._HTTPRequest_openfl_utils_ByteArray","fromBytes",0xc0fc2794,"lime.net._HTTPRequest_openfl_utils_ByteArray.fromBytes","openfl/net/URLLoader.hx",289,0x11daec0d)
namespace lime{
namespace net{

void _HTTPRequest_openfl_utils_ByteArray_obj::__construct(::String uri){
            	HX_STACKFRAME(&_hx_pos_62d462820a77e9f1_134_new)
HXDLIN( 134)		super::__construct(uri);
            	}

Dynamic _HTTPRequest_openfl_utils_ByteArray_obj::__CreateEmpty() { return new _HTTPRequest_openfl_utils_ByteArray_obj; }

void *_HTTPRequest_openfl_utils_ByteArray_obj::_hx_vtable = 0;

Dynamic _HTTPRequest_openfl_utils_ByteArray_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< _HTTPRequest_openfl_utils_ByteArray_obj > _hx_result = new _HTTPRequest_openfl_utils_ByteArray_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool _HTTPRequest_openfl_utils_ByteArray_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x09b24b15) {
		if (inClassId<=(int)0x0084eb87) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0084eb87;
		} else {
			return inClassId==(int)0x09b24b15;
		}
	} else {
		return inClassId==(int)0x7f4deb50;
	}
}

 ::Dynamic _HTTPRequest_openfl_utils_ByteArray_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_0170168071f82217_289_fromBytes)
HXDLIN( 289)		return ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(bytes);
            	}



::hx::ObjectPtr< _HTTPRequest_openfl_utils_ByteArray_obj > _HTTPRequest_openfl_utils_ByteArray_obj::__new(::String uri) {
	::hx::ObjectPtr< _HTTPRequest_openfl_utils_ByteArray_obj > __this = new _HTTPRequest_openfl_utils_ByteArray_obj();
	__this->__construct(uri);
	return __this;
}

::hx::ObjectPtr< _HTTPRequest_openfl_utils_ByteArray_obj > _HTTPRequest_openfl_utils_ByteArray_obj::__alloc(::hx::Ctx *_hx_ctx,::String uri) {
	_HTTPRequest_openfl_utils_ByteArray_obj *__this = (_HTTPRequest_openfl_utils_ByteArray_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(_HTTPRequest_openfl_utils_ByteArray_obj), true, "lime.net._HTTPRequest_openfl_utils_ByteArray"));
	*(void **)__this = _HTTPRequest_openfl_utils_ByteArray_obj::_hx_vtable;
	__this->__construct(uri);
	return __this;
}

_HTTPRequest_openfl_utils_ByteArray_obj::_HTTPRequest_openfl_utils_ByteArray_obj()
{
}

::hx::Val _HTTPRequest_openfl_utils_ByteArray_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return ::hx::Val( fromBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *_HTTPRequest_openfl_utils_ByteArray_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *_HTTPRequest_openfl_utils_ByteArray_obj_sStaticStorageInfo = 0;
#endif

static ::String _HTTPRequest_openfl_utils_ByteArray_obj_sMemberFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	::String(null()) };

::hx::Class _HTTPRequest_openfl_utils_ByteArray_obj::__mClass;

void _HTTPRequest_openfl_utils_ByteArray_obj::__register()
{
	_HTTPRequest_openfl_utils_ByteArray_obj _hx_dummy;
	_HTTPRequest_openfl_utils_ByteArray_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.net._HTTPRequest_openfl_utils_ByteArray",a1,77,7d,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(_HTTPRequest_openfl_utils_ByteArray_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< _HTTPRequest_openfl_utils_ByteArray_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _HTTPRequest_openfl_utils_ByteArray_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _HTTPRequest_openfl_utils_ByteArray_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
