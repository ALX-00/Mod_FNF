// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Encoding
#include <haxe/io/Encoding.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9080cebb9fb05943_71_new,"haxe.http.HttpBase","new",0x98384fa9,"haxe.http.HttpBase.new","/usr/share/haxe/std/haxe/http/HttpBase.hx",71,0xf812b1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_9080cebb9fb05943_112_setParameter,"haxe.http.HttpBase","setParameter",0x7f4fc53e,"haxe.http.HttpBase.setParameter","/usr/share/haxe/std/haxe/http/HttpBase.hx",112,0xf812b1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_9080cebb9fb05943_196___default_onData,"haxe.http.HttpBase","__default_onData",0xb2f8141e,"haxe.http.HttpBase.__default_onData","/usr/share/haxe/std/haxe/http/HttpBase.hx",196,0xf812b1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_9080cebb9fb05943_205___default_onBytes,"haxe.http.HttpBase","__default_onBytes",0xcf297ff7,"haxe.http.HttpBase.__default_onBytes","/usr/share/haxe/std/haxe/http/HttpBase.hx",205,0xf812b1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_9080cebb9fb05943_214___default_onError,"haxe.http.HttpBase","__default_onError",0x84bb4354,"haxe.http.HttpBase.__default_onError","/usr/share/haxe/std/haxe/http/HttpBase.hx",214,0xf812b1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_9080cebb9fb05943_223___default_onStatus,"haxe.http.HttpBase","__default_onStatus",0x53b30a26,"haxe.http.HttpBase.__default_onStatus","/usr/share/haxe/std/haxe/http/HttpBase.hx",223,0xf812b1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_9080cebb9fb05943_229_hasOnData,"haxe.http.HttpBase","hasOnData",0xc242adec,"haxe.http.HttpBase.hasOnData","/usr/share/haxe/std/haxe/http/HttpBase.hx",229,0xf812b1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_9080cebb9fb05943_232_success,"haxe.http.HttpBase","success",0xfe1e7d8c,"haxe.http.HttpBase.success","/usr/share/haxe/std/haxe/http/HttpBase.hx",232,0xf812b1ec)
HX_LOCAL_STACK_FRAME(_hx_pos_9080cebb9fb05943_241_get_responseData,"haxe.http.HttpBase","get_responseData",0x92ecd8eb,"haxe.http.HttpBase.get_responseData","/usr/share/haxe/std/haxe/http/HttpBase.hx",241,0xf812b1ec)
namespace haxe{
namespace http{

void HttpBase_obj::__construct(::String url){
            	HX_STACKFRAME(&_hx_pos_9080cebb9fb05943_71_new)
HXLINE(  72)		this->url = url;
HXLINE(  73)		this->headers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  74)		this->params = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  75)		this->emptyOnData = this->onData;
            	}

Dynamic HttpBase_obj::__CreateEmpty() { return new HttpBase_obj; }

void *HttpBase_obj::_hx_vtable = 0;

Dynamic HttpBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HttpBase_obj > _hx_result = new HttpBase_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HttpBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10c0921f;
}

void HttpBase_obj::setParameter(::String name,::String value){
            	HX_STACKFRAME(&_hx_pos_9080cebb9fb05943_112_setParameter)
HXLINE( 113)		{
HXLINE( 113)			int _g = 0;
HXDLIN( 113)			int _g1 = this->params->length;
HXDLIN( 113)			while((_g < _g1)){
HXLINE( 113)				_g = (_g + 1);
HXDLIN( 113)				int i = (_g - 1);
HXLINE( 114)				if (::hx::IsEq( this->params->__get(i)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic),name )) {
HXLINE( 115)					this->params[i] =  ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("value",71,7f,b8,31),value)
            						->setFixed(1,HX_("name",4b,72,ff,48),name));
HXLINE( 116)					return;
            				}
            			}
            		}
HXLINE( 119)		this->params->push( ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("value",71,7f,b8,31),value)
            			->setFixed(1,HX_("name",4b,72,ff,48),name)));
            	}


HX_DEFINE_DYNAMIC_FUNC2(HttpBase_obj,setParameter,(void))

HX_BEGIN_DEFAULT_FUNC(__default_onData,HttpBase_obj)
void _hx_run(::String data){
            	HX_STACKFRAME(&_hx_pos_9080cebb9fb05943_196___default_onData)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onBytes,HttpBase_obj)
void _hx_run( ::haxe::io::Bytes data){
            	HX_STACKFRAME(&_hx_pos_9080cebb9fb05943_205___default_onBytes)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onError,HttpBase_obj)
void _hx_run(::String msg){
            	HX_STACKFRAME(&_hx_pos_9080cebb9fb05943_214___default_onError)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

HX_BEGIN_DEFAULT_FUNC(__default_onStatus,HttpBase_obj)
void _hx_run(int status){
            	HX_STACKFRAME(&_hx_pos_9080cebb9fb05943_223___default_onStatus)
            	}
HX_END_LOCAL_FUNC1((void))
HX_END_DEFAULT_FUNC

bool HttpBase_obj::hasOnData(){
            	HX_STACKFRAME(&_hx_pos_9080cebb9fb05943_229_hasOnData)
HXDLIN( 229)		return !(::Reflect_obj::compareMethods(this->onData,this->emptyOnData));
            	}


HX_DEFINE_DYNAMIC_FUNC0(HttpBase_obj,hasOnData,return )

void HttpBase_obj::success( ::haxe::io::Bytes data){
            	HX_STACKFRAME(&_hx_pos_9080cebb9fb05943_232_success)
HXLINE( 233)		this->responseBytes = data;
HXLINE( 234)		this->responseAsString = null();
HXLINE( 235)		if (this->hasOnData()) {
HXLINE( 236)			 ::Dynamic _hx_tmp = this->onData;
HXDLIN( 236)			_hx_tmp(this->get_responseData());
            		}
HXLINE( 238)		this->onBytes(this->responseBytes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HttpBase_obj,success,(void))

::String HttpBase_obj::get_responseData(){
            	HX_STACKFRAME(&_hx_pos_9080cebb9fb05943_241_get_responseData)
HXLINE( 242)		bool _hx_tmp;
HXDLIN( 242)		if (::hx::IsNull( this->responseAsString )) {
HXLINE( 242)			_hx_tmp = ::hx::IsNotNull( this->responseBytes );
            		}
            		else {
HXLINE( 242)			_hx_tmp = false;
            		}
HXDLIN( 242)		if (_hx_tmp) {
HXLINE( 246)			this->responseAsString = this->responseBytes->getString(0,this->responseBytes->length,::haxe::io::Encoding_obj::UTF8_dyn());
            		}
HXLINE( 249)		return this->responseAsString;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HttpBase_obj,get_responseData,return )


void HttpBase_obj::__alloc_dynamic_functions(::hx::Ctx *_hx_ctx,HttpBase_obj *_hx_obj) {
	if (!_hx_obj->onStatus.mPtr) _hx_obj->onStatus = new __default_onStatus(_hx_obj);
	if (!_hx_obj->onError.mPtr) _hx_obj->onError = new __default_onError(_hx_obj);
	if (!_hx_obj->onBytes.mPtr) _hx_obj->onBytes = new __default_onBytes(_hx_obj);
	if (!_hx_obj->onData.mPtr) _hx_obj->onData = new __default_onData(_hx_obj);
}
::hx::ObjectPtr< HttpBase_obj > HttpBase_obj::__new(::String url) {
	::hx::ObjectPtr< HttpBase_obj > __this = new HttpBase_obj();
	__this->__construct(url);
	return __this;
}

::hx::ObjectPtr< HttpBase_obj > HttpBase_obj::__alloc(::hx::Ctx *_hx_ctx,::String url) {
	HttpBase_obj *__this = (HttpBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HttpBase_obj), true, "haxe.http.HttpBase"));
	*(void **)__this = HttpBase_obj::_hx_vtable;
	haxe::http::HttpBase_obj::__alloc_dynamic_functions(_hx_ctx,__this);
	__this->__construct(url);
	return __this;
}

HttpBase_obj::HttpBase_obj()
{
	onStatus = new __default_onStatus(this);
	onError = new __default_onError(this);
	onBytes = new __default_onBytes(this);
	onData = new __default_onData(this);
}

void HttpBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HttpBase);
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(responseBytes,"responseBytes");
	HX_MARK_MEMBER_NAME(responseAsString,"responseAsString");
	HX_MARK_MEMBER_NAME(postData,"postData");
	HX_MARK_MEMBER_NAME(postBytes,"postBytes");
	HX_MARK_MEMBER_NAME(headers,"headers");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(emptyOnData,"emptyOnData");
	HX_MARK_MEMBER_NAME(onData,"onData");
	HX_MARK_MEMBER_NAME(onBytes,"onBytes");
	HX_MARK_MEMBER_NAME(onError,"onError");
	HX_MARK_MEMBER_NAME(onStatus,"onStatus");
	HX_MARK_END_CLASS();
}

void HttpBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(responseBytes,"responseBytes");
	HX_VISIT_MEMBER_NAME(responseAsString,"responseAsString");
	HX_VISIT_MEMBER_NAME(postData,"postData");
	HX_VISIT_MEMBER_NAME(postBytes,"postBytes");
	HX_VISIT_MEMBER_NAME(headers,"headers");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(emptyOnData,"emptyOnData");
	HX_VISIT_MEMBER_NAME(onData,"onData");
	HX_VISIT_MEMBER_NAME(onBytes,"onBytes");
	HX_VISIT_MEMBER_NAME(onError,"onError");
	HX_VISIT_MEMBER_NAME(onStatus,"onStatus");
}

::hx::Val HttpBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { return ::hx::Val( url ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"onData") ) { return ::hx::Val( onData ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { return ::hx::Val( headers ); }
		if (HX_FIELD_EQ(inName,"onBytes") ) { return ::hx::Val( onBytes ); }
		if (HX_FIELD_EQ(inName,"onError") ) { return ::hx::Val( onError ); }
		if (HX_FIELD_EQ(inName,"success") ) { return ::hx::Val( success_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postData") ) { return ::hx::Val( postData ); }
		if (HX_FIELD_EQ(inName,"onStatus") ) { return ::hx::Val( onStatus ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"postBytes") ) { return ::hx::Val( postBytes ); }
		if (HX_FIELD_EQ(inName,"hasOnData") ) { return ::hx::Val( hasOnData_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"emptyOnData") ) { return ::hx::Val( emptyOnData ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"responseData") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_responseData() ); }
		if (HX_FIELD_EQ(inName,"setParameter") ) { return ::hx::Val( setParameter_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"responseBytes") ) { return ::hx::Val( responseBytes ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"responseAsString") ) { return ::hx::Val( responseAsString ); }
		if (HX_FIELD_EQ(inName,"get_responseData") ) { return ::hx::Val( get_responseData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HttpBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onData") ) { onData=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"headers") ) { headers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onBytes") ) { onBytes=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onError") ) { onError=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"postData") ) { postData=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onStatus") ) { onStatus=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"postBytes") ) { postBytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"emptyOnData") ) { emptyOnData=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"responseBytes") ) { responseBytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"responseAsString") ) { responseAsString=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HttpBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("url",6f,2b,59,00));
	outFields->push(HX_("responseData",4b,05,e9,c4));
	outFields->push(HX_("responseBytes",2a,96,0b,70));
	outFields->push(HX_("responseAsString",04,87,c8,68));
	outFields->push(HX_("postData",aa,b6,a2,00));
	outFields->push(HX_("postBytes",eb,17,cd,76));
	outFields->push(HX_("headers",46,52,08,63));
	outFields->push(HX_("params",46,fb,7a,ed));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HttpBase_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(HttpBase_obj,url),HX_("url",6f,2b,59,00)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(HttpBase_obj,responseBytes),HX_("responseBytes",2a,96,0b,70)},
	{::hx::fsString,(int)offsetof(HttpBase_obj,responseAsString),HX_("responseAsString",04,87,c8,68)},
	{::hx::fsString,(int)offsetof(HttpBase_obj,postData),HX_("postData",aa,b6,a2,00)},
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(HttpBase_obj,postBytes),HX_("postBytes",eb,17,cd,76)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(HttpBase_obj,headers),HX_("headers",46,52,08,63)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(HttpBase_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HttpBase_obj,emptyOnData),HX_("emptyOnData",56,f5,15,ad)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HttpBase_obj,onData),HX_("onData",e9,5e,ed,e4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HttpBase_obj,onBytes),HX_("onBytes",cc,a6,d5,53)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HttpBase_obj,onError),HX_("onError",29,6a,67,09)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HttpBase_obj,onStatus),HX_("onStatus",b1,dd,a8,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HttpBase_obj_sStaticStorageInfo = 0;
#endif

static ::String HttpBase_obj_sMemberFields[] = {
	HX_("url",6f,2b,59,00),
	HX_("responseBytes",2a,96,0b,70),
	HX_("responseAsString",04,87,c8,68),
	HX_("postData",aa,b6,a2,00),
	HX_("postBytes",eb,17,cd,76),
	HX_("headers",46,52,08,63),
	HX_("params",46,fb,7a,ed),
	HX_("emptyOnData",56,f5,15,ad),
	HX_("setParameter",a7,f5,ff,6c),
	HX_("onData",e9,5e,ed,e4),
	HX_("onBytes",cc,a6,d5,53),
	HX_("onError",29,6a,67,09),
	HX_("onStatus",b1,dd,a8,e5),
	HX_("hasOnData",e3,11,d6,25),
	HX_("success",c3,25,4e,b8),
	HX_("get_responseData",d4,f1,87,c9),
	::String(null()) };

::hx::Class HttpBase_obj::__mClass;

void HttpBase_obj::__register()
{
	HttpBase_obj _hx_dummy;
	HttpBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.http.HttpBase",37,47,c3,bd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HttpBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HttpBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HttpBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HttpBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace http
