// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_25_is,"Std","is",0x3c56d6f5,"Std.is","/usr/share/haxe/std/cpp/_std/Std.hx",25,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_29_isOfType,"Std","isOfType",0x6718c846,"Std.isOfType","/usr/share/haxe/std/cpp/_std/Std.hx",29,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_33_downcast,"Std","downcast",0x4619c56c,"Std.downcast","/usr/share/haxe/std/cpp/_std/Std.hx",33,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_38_instance,"Std","instance",0x1431f4e0,"Std.instance","/usr/share/haxe/std/cpp/_std/Std.hx",38,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_42_string,"Std","string",0xcf48855c,"Std.string","/usr/share/haxe/std/cpp/_std/Std.hx",42,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_46_int,"Std","int",0x8fa53b84,"Std.int","/usr/share/haxe/std/cpp/_std/Std.hx",46,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_50_parseInt,"Std","parseInt",0x90c2ebc7,"Std.parseInt","/usr/share/haxe/std/cpp/_std/Std.hx",50,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_54_parseFloat,"Std","parseFloat",0xbca10a74,"Std.parseFloat","/usr/share/haxe/std/cpp/_std/Std.hx",54,0x63298cdf)
HX_LOCAL_STACK_FRAME(_hx_pos_10265659e446e554_57_random,"Std","random",0x75a77e8e,"Std.random","/usr/share/haxe/std/cpp/_std/Std.hx",57,0x63298cdf)

void Std_obj::__construct() { }

Dynamic Std_obj::__CreateEmpty() { return new Std_obj; }

void *Std_obj::_hx_vtable = 0;

Dynamic Std_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Std_obj > _hx_result = new Std_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Std_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ee3a517;
}

bool Std_obj::is( ::Dynamic v, ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_25_is)
HXDLIN(  25)		return ::Std_obj::isOfType(v,t);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Std_obj,is,return )

bool Std_obj::isOfType( ::Dynamic v, ::Dynamic t){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_29_isOfType)
HXDLIN(  29)		return  ::__instanceof(v,t);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Std_obj,isOfType,return )

 ::Dynamic Std_obj::downcast( ::Dynamic value,::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_33_downcast)
HXDLIN(  33)		if (::Std_obj::isOfType(value,c)) {
HXDLIN(  33)			return value;
            		}
            		else {
HXDLIN(  33)			return null();
            		}
HXDLIN(  33)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Std_obj,downcast,return )

 ::Dynamic Std_obj::instance( ::Dynamic value,::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_38_instance)
HXDLIN(  38)		 ::Dynamic _hx_tmp;
HXDLIN(  38)		if (::Std_obj::isOfType(value,c)) {
HXDLIN(  38)			_hx_tmp = value;
            		}
            		else {
HXDLIN(  38)			_hx_tmp = null();
            		}
HXDLIN(  38)		return _hx_tmp;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Std_obj,instance,return )

::String Std_obj::string( ::Dynamic s){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_42_string)
HXDLIN(  42)		if (::hx::IsNull( s )) {
HXDLIN(  42)			return HX_("null",87,9e,0e,49);
            		}
            		else {
HXDLIN(  42)			return ( (::String)(s->toString()) );
            		}
HXDLIN(  42)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,string,return )

int Std_obj::_hx_int(Float x){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_46_int)
HXDLIN(  46)		return  ::__int__(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,_hx_int,return )

 ::Dynamic Std_obj::parseInt(::String x){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_50_parseInt)
HXDLIN(  50)		return  ::__hxcpp_parse_int(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,parseInt,return )

Float Std_obj::parseFloat(::String x){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_54_parseFloat)
HXDLIN(  54)		return  ::__hxcpp_parse_float(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,parseFloat,return )

int Std_obj::random(int x){
            	HX_STACKFRAME(&_hx_pos_10265659e446e554_57_random)
HXLINE(  58)		if ((x <= 0)) {
HXLINE(  59)			return 0;
            		}
HXLINE(  60)		return  ::__hxcpp_irand(x);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Std_obj,random,return )


Std_obj::Std_obj()
{
}

bool Std_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"is") ) { outValue = is_dyn(); return true; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"int") ) { outValue = _hx_int_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"string") ) { outValue = string_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"random") ) { outValue = random_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isOfType") ) { outValue = isOfType_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"downcast") ) { outValue = downcast_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = instance_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"parseInt") ) { outValue = parseInt_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"parseFloat") ) { outValue = parseFloat_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Std_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Std_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Std_obj::__mClass;

static ::String Std_obj_sStaticFields[] = {
	HX_("is",ea,5b,00,00),
	HX_("isOfType",fb,f2,c7,ac),
	HX_("downcast",21,f0,c8,8b),
	HX_("instance",95,1f,e1,59),
	HX_("string",d1,28,30,11),
	HX_("int",ef,0c,50,00),
	HX_("parseInt",7c,16,72,d6),
	HX_("parseFloat",69,0c,78,2c),
	HX_("random",03,22,8f,b7),
	::String(null())
};

void Std_obj::__register()
{
	Std_obj _hx_dummy;
	Std_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Std",83,60,3f,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Std_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Std_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Std_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Std_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Std_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

