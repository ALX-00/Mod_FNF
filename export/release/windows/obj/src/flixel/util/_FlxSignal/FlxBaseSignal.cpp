// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignalHandler
#include <flixel/util/_FlxSignal/FlxSignalHandler.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_06997c0c7386deb2_95_new,"flixel.util._FlxSignal.FlxBaseSignal","new",0x2468c304,"flixel.util._FlxSignal.FlxBaseSignal.new","flixel/util/FlxSignal.hx",95,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_114_add,"flixel.util._FlxSignal.FlxBaseSignal","add",0x245ee4c5,"flixel.util._FlxSignal.FlxBaseSignal.add","flixel/util/FlxSignal.hx",114,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_120_addOnce,"flixel.util._FlxSignal.FlxBaseSignal","addOnce",0xaa1cd4e6,"flixel.util._FlxSignal.FlxBaseSignal.addOnce","flixel/util/FlxSignal.hx",120,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_126_remove,"flixel.util._FlxSignal.FlxBaseSignal","remove",0x06fde820,"flixel.util._FlxSignal.FlxBaseSignal.remove","flixel/util/FlxSignal.hx",126,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_143_has,"flixel.util._FlxSignal.FlxBaseSignal","has",0x246431fe,"flixel.util._FlxSignal.FlxBaseSignal.has","flixel/util/FlxSignal.hx",143,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_151_removeAll,"flixel.util._FlxSignal.FlxBaseSignal","removeAll",0x23fb9ce1,"flixel.util._FlxSignal.FlxBaseSignal.removeAll","flixel/util/FlxSignal.hx",151,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_155_destroy,"flixel.util._FlxSignal.FlxBaseSignal","destroy",0x48b3419e,"flixel.util._FlxSignal.FlxBaseSignal.destroy","flixel/util/FlxSignal.hx",155,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_162_registerListener,"flixel.util._FlxSignal.FlxBaseSignal","registerListener",0xa63a34d3,"flixel.util._FlxSignal.FlxBaseSignal.registerListener","flixel/util/FlxSignal.hx",162,0x3c758c5e)
HX_LOCAL_STACK_FRAME(_hx_pos_06997c0c7386deb2_183_getHandler,"flixel.util._FlxSignal.FlxBaseSignal","getHandler",0x2fd59fb0,"flixel.util._FlxSignal.FlxBaseSignal.getHandler","flixel/util/FlxSignal.hx",183,0x3c758c5e)
namespace flixel{
namespace util{
namespace _FlxSignal{

void FlxBaseSignal_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_95_new)
HXLINE( 104)		this->processingListeners = false;
HXLINE( 108)		this->handlers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 109)		this->pendingRemove = ::Array_obj< ::Dynamic>::__new(0);
            	}

Dynamic FlxBaseSignal_obj::__CreateEmpty() { return new FlxBaseSignal_obj; }

void *FlxBaseSignal_obj::_hx_vtable = 0;

Dynamic FlxBaseSignal_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxBaseSignal_obj > _hx_result = new FlxBaseSignal_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxBaseSignal_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4515ccf2;
}

static ::flixel::util::IFlxSignal_obj _hx_flixel_util__FlxSignal_FlxBaseSignal__hx_flixel_util_IFlxSignal= {
	( void (::hx::Object::*)())&::flixel::util::_FlxSignal::FlxBaseSignal_obj::destroy,
	( void (::hx::Object::*)( ::Dynamic))&::flixel::util::_FlxSignal::FlxBaseSignal_obj::add,
	( void (::hx::Object::*)( ::Dynamic))&::flixel::util::_FlxSignal::FlxBaseSignal_obj::addOnce,
	( void (::hx::Object::*)( ::Dynamic))&::flixel::util::_FlxSignal::FlxBaseSignal_obj::remove,
	( void (::hx::Object::*)())&::flixel::util::_FlxSignal::FlxBaseSignal_obj::removeAll,
	( bool (::hx::Object::*)( ::Dynamic))&::flixel::util::_FlxSignal::FlxBaseSignal_obj::has,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util__FlxSignal_FlxBaseSignal__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::util::_FlxSignal::FlxBaseSignal_obj::destroy,
};

void *FlxBaseSignal_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x540588cf: return &_hx_flixel_util__FlxSignal_FlxBaseSignal__hx_flixel_util_IFlxSignal;
		case (int)0xd4fe2fcd: return &_hx_flixel_util__FlxSignal_FlxBaseSignal__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxBaseSignal_obj::add( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_114_add)
HXDLIN( 114)		if (::hx::IsNotNull( listener )) {
HXLINE( 115)			this->registerListener(listener,false);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,add,(void))

void FlxBaseSignal_obj::addOnce( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_120_addOnce)
HXDLIN( 120)		if (::hx::IsNotNull( listener )) {
HXLINE( 121)			this->registerListener(listener,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,addOnce,(void))

void FlxBaseSignal_obj::remove( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_126_remove)
HXDLIN( 126)		if (::hx::IsNotNull( listener )) {
HXLINE( 128)			 ::flixel::util::_FlxSignal::FlxSignalHandler handler = this->getHandler(listener);
HXLINE( 129)			if (::hx::IsNotNull( handler )) {
HXLINE( 131)				if (this->processingListeners) {
HXLINE( 132)					this->pendingRemove->push(handler);
            				}
            				else {
HXLINE( 135)					this->handlers->remove(handler);
HXLINE( 136)					handler->destroy();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,remove,(void))

bool FlxBaseSignal_obj::has( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_143_has)
HXLINE( 144)		if (::hx::IsNull( listener )) {
HXLINE( 145)			return false;
            		}
HXLINE( 146)		return ::hx::IsNotNull( this->getHandler(listener) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,has,return )

void FlxBaseSignal_obj::removeAll(){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_151_removeAll)
HXDLIN( 151)		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->handlers);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseSignal_obj,removeAll,(void))

void FlxBaseSignal_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_155_destroy)
HXLINE( 156)		::flixel::util::FlxDestroyUtil_obj::destroyArray(this->handlers);
HXLINE( 157)		this->handlers = null();
HXLINE( 158)		this->pendingRemove = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxBaseSignal_obj,destroy,(void))

 ::flixel::util::_FlxSignal::FlxSignalHandler FlxBaseSignal_obj::registerListener( ::Dynamic listener,bool dispatchOnce){
            	HX_GC_STACKFRAME(&_hx_pos_06997c0c7386deb2_162_registerListener)
HXLINE( 163)		 ::flixel::util::_FlxSignal::FlxSignalHandler handler = this->getHandler(listener);
HXLINE( 165)		if (::hx::IsNull( handler )) {
HXLINE( 167)			handler =  ::flixel::util::_FlxSignal::FlxSignalHandler_obj::__alloc( HX_CTX ,listener,dispatchOnce);
HXLINE( 168)			this->handlers->push(handler);
HXLINE( 169)			return handler;
            		}
            		else {
HXLINE( 175)			if ((handler->dispatchOnce != dispatchOnce)) {
HXLINE( 176)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("You cannot addOnce() then add() the same listener without removing the relationship first.",19,c7,3c,a5)));
            			}
            			else {
HXLINE( 178)				return handler;
            			}
            		}
HXLINE( 165)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxBaseSignal_obj,registerListener,return )

 ::flixel::util::_FlxSignal::FlxSignalHandler FlxBaseSignal_obj::getHandler( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_06997c0c7386deb2_183_getHandler)
HXLINE( 184)		{
HXLINE( 184)			int _g = 0;
HXDLIN( 184)			::Array< ::Dynamic> _g1 = this->handlers;
HXDLIN( 184)			while((_g < _g1->length)){
HXLINE( 184)				 ::flixel::util::_FlxSignal::FlxSignalHandler handler = _g1->__get(_g).StaticCast<  ::flixel::util::_FlxSignal::FlxSignalHandler >();
HXDLIN( 184)				_g = (_g + 1);
HXLINE( 186)				if (::hx::IsEq( handler->listener,listener )) {
HXLINE( 189)					return handler;
            				}
            			}
            		}
HXLINE( 192)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxBaseSignal_obj,getHandler,return )


::hx::ObjectPtr< FlxBaseSignal_obj > FlxBaseSignal_obj::__new() {
	::hx::ObjectPtr< FlxBaseSignal_obj > __this = new FlxBaseSignal_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxBaseSignal_obj > FlxBaseSignal_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxBaseSignal_obj *__this = (FlxBaseSignal_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxBaseSignal_obj), true, "flixel.util._FlxSignal.FlxBaseSignal"));
	*(void **)__this = FlxBaseSignal_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxBaseSignal_obj::FlxBaseSignal_obj()
{
}

void FlxBaseSignal_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBaseSignal);
	HX_MARK_MEMBER_NAME(dispatch,"dispatch");
	HX_MARK_MEMBER_NAME(handlers,"handlers");
	HX_MARK_MEMBER_NAME(pendingRemove,"pendingRemove");
	HX_MARK_MEMBER_NAME(processingListeners,"processingListeners");
	HX_MARK_END_CLASS();
}

void FlxBaseSignal_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dispatch,"dispatch");
	HX_VISIT_MEMBER_NAME(handlers,"handlers");
	HX_VISIT_MEMBER_NAME(pendingRemove,"pendingRemove");
	HX_VISIT_MEMBER_NAME(processingListeners,"processingListeners");
}

::hx::Val FlxBaseSignal_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"has") ) { return ::hx::Val( has_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addOnce") ) { return ::hx::Val( addOnce_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { return ::hx::Val( dispatch ); }
		if (HX_FIELD_EQ(inName,"handlers") ) { return ::hx::Val( handlers ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"removeAll") ) { return ::hx::Val( removeAll_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getHandler") ) { return ::hx::Val( getHandler_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingRemove") ) { return ::hx::Val( pendingRemove ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"registerListener") ) { return ::hx::Val( registerListener_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"processingListeners") ) { return ::hx::Val( processingListeners ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxBaseSignal_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { dispatch=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"handlers") ) { handlers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pendingRemove") ) { pendingRemove=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"processingListeners") ) { processingListeners=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBaseSignal_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dispatch",ba,ce,63,1e));
	outFields->push(HX_("handlers",69,21,24,d5));
	outFields->push(HX_("pendingRemove",fb,03,57,fe));
	outFields->push(HX_("processingListeners",2c,99,99,10));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxBaseSignal_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxBaseSignal_obj,dispatch),HX_("dispatch",ba,ce,63,1e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxBaseSignal_obj,handlers),HX_("handlers",69,21,24,d5)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxBaseSignal_obj,pendingRemove),HX_("pendingRemove",fb,03,57,fe)},
	{::hx::fsBool,(int)offsetof(FlxBaseSignal_obj,processingListeners),HX_("processingListeners",2c,99,99,10)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxBaseSignal_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxBaseSignal_obj_sMemberFields[] = {
	HX_("dispatch",ba,ce,63,1e),
	HX_("handlers",69,21,24,d5),
	HX_("pendingRemove",fb,03,57,fe),
	HX_("processingListeners",2c,99,99,10),
	HX_("add",21,f2,49,00),
	HX_("addOnce",42,c0,ef,85),
	HX_("remove",44,9c,88,04),
	HX_("has",5a,3f,4f,00),
	HX_("removeAll",3d,17,e5,ca),
	HX_("destroy",fa,2c,86,24),
	HX_("registerListener",f7,fd,f4,36),
	HX_("getHandler",d4,35,37,95),
	::String(null()) };

::hx::Class FlxBaseSignal_obj::__mClass;

void FlxBaseSignal_obj::__register()
{
	FlxBaseSignal_obj _hx_dummy;
	FlxBaseSignal_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.util._FlxSignal.FlxBaseSignal",12,31,0a,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxBaseSignal_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxBaseSignal_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxBaseSignal_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxBaseSignal_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxSignal
