// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_MapKeyValueIterator
#include <haxe/iterators/MapKeyValueIterator.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_UtilsObjectMap
#include <openfl/utils/_Dictionary/UtilsObjectMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_477_new,"openfl.utils._Dictionary.UtilsObjectMap","new",0xb7b17cf2,"openfl.utils._Dictionary.UtilsObjectMap.new","openfl/utils/Dictionary.hx",477,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_483_clear,"openfl.utils._Dictionary.UtilsObjectMap","clear",0xd3eae69f,"openfl.utils._Dictionary.UtilsObjectMap.clear","openfl/utils/Dictionary.hx",483,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_489_copy,"openfl.utils._Dictionary.UtilsObjectMap","copy",0xfc5e0ee3,"openfl.utils._Dictionary.UtilsObjectMap.copy","openfl/utils/Dictionary.hx",489,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_499_exists,"openfl.utils._Dictionary.UtilsObjectMap","exists",0x51d7188a,"openfl.utils._Dictionary.UtilsObjectMap.exists","openfl/utils/Dictionary.hx",499,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_504_get,"openfl.utils._Dictionary.UtilsObjectMap","get",0xb7ac2d28,"openfl.utils._Dictionary.UtilsObjectMap.get","openfl/utils/Dictionary.hx",504,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_510_keyValueIterator,"openfl.utils._Dictionary.UtilsObjectMap","keyValueIterator",0xf84f2d8e,"openfl.utils._Dictionary.UtilsObjectMap.keyValueIterator","openfl/utils/Dictionary.hx",510,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_516_keys,"openfl.utils._Dictionary.UtilsObjectMap","keys",0x01a03522,"openfl.utils._Dictionary.UtilsObjectMap.keys","openfl/utils/Dictionary.hx",516,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_521_iterator,"openfl.utils._Dictionary.UtilsObjectMap","iterator",0xcd47cc1c,"openfl.utils._Dictionary.UtilsObjectMap.iterator","openfl/utils/Dictionary.hx",521,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_526_remove,"openfl.utils._Dictionary.UtilsObjectMap","remove",0x967f96f2,"openfl.utils._Dictionary.UtilsObjectMap.remove","openfl/utils/Dictionary.hx",526,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_531_set,"openfl.utils._Dictionary.UtilsObjectMap","set",0xb7b54834,"openfl.utils._Dictionary.UtilsObjectMap.set","openfl/utils/Dictionary.hx",531,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_536_toString,"openfl.utils._Dictionary.UtilsObjectMap","toString",0x721c52da,"openfl.utils._Dictionary.UtilsObjectMap.toString","openfl/utils/Dictionary.hx",536,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_b7f8145c5f80ac3d_471_boot,"openfl.utils._Dictionary.UtilsObjectMap","boot",0xfbb4d760,"openfl.utils._Dictionary.UtilsObjectMap.boot","openfl/utils/Dictionary.hx",471,0x5979b1eb)
namespace openfl{
namespace utils{
namespace _Dictionary{

void UtilsObjectMap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_477_new)
HXDLIN( 477)		this->map =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
            	}

Dynamic UtilsObjectMap_obj::__CreateEmpty() { return new UtilsObjectMap_obj; }

void *UtilsObjectMap_obj::_hx_vtable = 0;

Dynamic UtilsObjectMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< UtilsObjectMap_obj > _hx_result = new UtilsObjectMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool UtilsObjectMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1f9171e0;
}

static ::haxe::IMap_obj _hx_openfl_utils__Dictionary_UtilsObjectMap__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::UtilsObjectMap_obj::get,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::utils::_Dictionary::UtilsObjectMap_obj::set_dca24b06,
	( bool (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::UtilsObjectMap_obj::exists,
	( bool (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::UtilsObjectMap_obj::remove,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::UtilsObjectMap_obj::keys,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::UtilsObjectMap_obj::iterator,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::UtilsObjectMap_obj::keyValueIterator,
};

void UtilsObjectMap_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *UtilsObjectMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_openfl_utils__Dictionary_UtilsObjectMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void UtilsObjectMap_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_483_clear)
HXDLIN( 483)		this->map->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(UtilsObjectMap_obj,clear,(void))

 ::openfl::utils::_Dictionary::UtilsObjectMap UtilsObjectMap_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_489_copy)
HXLINE( 490)		 ::openfl::utils::_Dictionary::UtilsObjectMap copied =  ::openfl::utils::_Dictionary::UtilsObjectMap_obj::__alloc( HX_CTX );
HXLINE( 491)		{
HXLINE( 491)			 ::Dynamic key = this->keys();
HXDLIN( 491)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 491)				 ::Dynamic key1 = key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 492)				copied->set(key1,this->get(key1));
            			}
            		}
HXLINE( 493)		return copied;
            	}


HX_DEFINE_DYNAMIC_FUNC0(UtilsObjectMap_obj,copy,return )

bool UtilsObjectMap_obj::exists( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_499_exists)
HXDLIN( 499)		return this->map->exists(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(UtilsObjectMap_obj,exists,return )

 ::Dynamic UtilsObjectMap_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_504_get)
HXDLIN( 504)		return this->map->get(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(UtilsObjectMap_obj,get,return )

 ::Dynamic UtilsObjectMap_obj::keyValueIterator(){
            	HX_GC_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_510_keyValueIterator)
HXDLIN( 510)		return  ::haxe::iterators::MapKeyValueIterator_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(UtilsObjectMap_obj,keyValueIterator,return )

 ::Dynamic UtilsObjectMap_obj::keys(){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_516_keys)
HXDLIN( 516)		return this->map->keys();
            	}


HX_DEFINE_DYNAMIC_FUNC0(UtilsObjectMap_obj,keys,return )

 ::Dynamic UtilsObjectMap_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_521_iterator)
HXDLIN( 521)		return this->map->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(UtilsObjectMap_obj,iterator,return )

bool UtilsObjectMap_obj::remove( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_526_remove)
HXDLIN( 526)		return this->map->remove(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(UtilsObjectMap_obj,remove,return )

void UtilsObjectMap_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_531_set)
HXDLIN( 531)		this->map->set(key,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(UtilsObjectMap_obj,set,(void))

::String UtilsObjectMap_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_536_toString)
HXDLIN( 536)		return this->map->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(UtilsObjectMap_obj,toString,return )


::hx::ObjectPtr< UtilsObjectMap_obj > UtilsObjectMap_obj::__new() {
	::hx::ObjectPtr< UtilsObjectMap_obj > __this = new UtilsObjectMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< UtilsObjectMap_obj > UtilsObjectMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	UtilsObjectMap_obj *__this = (UtilsObjectMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(UtilsObjectMap_obj), true, "openfl.utils._Dictionary.UtilsObjectMap"));
	*(void **)__this = UtilsObjectMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

UtilsObjectMap_obj::UtilsObjectMap_obj()
{
}

void UtilsObjectMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UtilsObjectMap);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_END_CLASS();
}

void UtilsObjectMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
}

::hx::Val UtilsObjectMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return ::hx::Val( map ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { return ::hx::Val( keyValueIterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val UtilsObjectMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast<  ::haxe::ds::ObjectMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UtilsObjectMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("map",9c,0a,53,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo UtilsObjectMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::ObjectMap */ ,(int)offsetof(UtilsObjectMap_obj,map),HX_("map",9c,0a,53,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *UtilsObjectMap_obj_sStaticStorageInfo = 0;
#endif

static ::String UtilsObjectMap_obj_sMemberFields[] = {
	HX_("map",9c,0a,53,00),
	HX_("clear",8d,71,5b,48),
	HX_("copy",b5,bb,c4,41),
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("keyValueIterator",60,cd,ee,4a),
	HX_("keys",f4,e1,06,47),
	HX_("iterator",ee,49,9a,93),
	HX_("remove",44,9c,88,04),
	HX_("set",a2,9b,57,00),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class UtilsObjectMap_obj::__mClass;

void UtilsObjectMap_obj::__register()
{
	UtilsObjectMap_obj _hx_dummy;
	UtilsObjectMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._Dictionary.UtilsObjectMap",00,dc,d7,39);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(UtilsObjectMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< UtilsObjectMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UtilsObjectMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UtilsObjectMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UtilsObjectMap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b7f8145c5f80ac3d_471_boot)
HXDLIN( 471)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Dictionary
