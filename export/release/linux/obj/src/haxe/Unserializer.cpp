// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Unserializer
#include <haxe/Unserializer.h>
#endif
#ifndef INCLUDED_haxe__Unserializer_DefaultResolver
#include <haxe/_Unserializer/DefaultResolver.h>
#endif
#ifndef INCLUDED_haxe__Unserializer_NullResolver
#include <haxe/_Unserializer/NullResolver.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f38f574a287e682f_99_new,"haxe.Unserializer","new",0xa8f5e205,"haxe.Unserializer.new","/usr/share/haxe/std/haxe/Unserializer.hx",99,0x4786e765)
HX_LOCAL_STACK_FRAME(_hx_pos_f38f574a287e682f_125_setResolver,"haxe.Unserializer","setResolver",0x5545046d,"haxe.Unserializer.setResolver","/usr/share/haxe/std/haxe/Unserializer.hx",125,0x4786e765)
HX_LOCAL_STACK_FRAME(_hx_pos_f38f574a287e682f_144_readDigits,"haxe.Unserializer","readDigits",0x75598b17,"haxe.Unserializer.readDigits","/usr/share/haxe/std/haxe/Unserializer.hx",144,0x4786e765)
HX_LOCAL_STACK_FRAME(_hx_pos_f38f574a287e682f_169_readFloat,"haxe.Unserializer","readFloat",0x5bd86dcb,"haxe.Unserializer.readFloat","/usr/share/haxe/std/haxe/Unserializer.hx",169,0x4786e765)
HX_LOCAL_STACK_FRAME(_hx_pos_f38f574a287e682f_184_unserializeObject,"haxe.Unserializer","unserializeObject",0x1b3e66eb,"haxe.Unserializer.unserializeObject","/usr/share/haxe/std/haxe/Unserializer.hx",184,0x4786e765)
HX_LOCAL_STACK_FRAME(_hx_pos_f38f574a287e682f_199_unserializeEnum,"haxe.Unserializer","unserializeEnum",0x5018b02d,"haxe.Unserializer.unserializeEnum","/usr/share/haxe/std/haxe/Unserializer.hx",199,0x4786e765)
HX_LOCAL_STACK_FRAME(_hx_pos_f38f574a287e682f_231_unserialize,"haxe.Unserializer","unserialize",0x92cca30c,"haxe.Unserializer.unserialize","/usr/share/haxe/std/haxe/Unserializer.hx",231,0x4786e765)
HX_LOCAL_STACK_FRAME(_hx_pos_f38f574a287e682f_72_initCodes,"haxe.Unserializer","initCodes",0xee42ccdb,"haxe.Unserializer.initCodes","/usr/share/haxe/std/haxe/Unserializer.hx",72,0x4786e765)
HX_LOCAL_STACK_FRAME(_hx_pos_f38f574a287e682f_465_run,"haxe.Unserializer","run",0xa8f8f8f0,"haxe.Unserializer.run","/usr/share/haxe/std/haxe/Unserializer.hx",465,0x4786e765)
HX_LOCAL_STACK_FRAME(_hx_pos_f38f574a287e682f_65_boot,"haxe.Unserializer","boot",0x2648e2ed,"haxe.Unserializer.boot","/usr/share/haxe/std/haxe/Unserializer.hx",65,0x4786e765)
HX_LOCAL_STACK_FRAME(_hx_pos_f38f574a287e682f_67_boot,"haxe.Unserializer","boot",0x2648e2ed,"haxe.Unserializer.boot","/usr/share/haxe/std/haxe/Unserializer.hx",67,0x4786e765)
HX_LOCAL_STACK_FRAME(_hx_pos_f38f574a287e682f_70_boot,"haxe.Unserializer","boot",0x2648e2ed,"haxe.Unserializer.boot","/usr/share/haxe/std/haxe/Unserializer.hx",70,0x4786e765)
namespace haxe{

void Unserializer_obj::__construct(::String buf){
            	HX_GC_STACKFRAME(&_hx_pos_f38f574a287e682f_99_new)
HXLINE( 100)		this->buf = buf;
HXLINE( 101)		this->length = buf.length;
HXLINE( 102)		this->pos = 0;
HXLINE( 106)		this->scache = ::Array_obj< ::String >::__new();
HXLINE( 107)		this->cache = ::cpp::VirtualArray_obj::__new();
HXLINE( 108)		 ::Dynamic r = ::haxe::Unserializer_obj::DEFAULT_RESOLVER;
HXLINE( 109)		if (::hx::IsNull( r )) {
HXLINE( 110)			r =  ::haxe::_Unserializer::DefaultResolver_obj::__alloc( HX_CTX );
HXLINE( 111)			::haxe::Unserializer_obj::DEFAULT_RESOLVER = r;
            		}
HXLINE( 113)		this->resolver = r;
            	}

Dynamic Unserializer_obj::__CreateEmpty() { return new Unserializer_obj; }

void *Unserializer_obj::_hx_vtable = 0;

Dynamic Unserializer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Unserializer_obj > _hx_result = new Unserializer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Unserializer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x10bb6271;
}

void Unserializer_obj::setResolver( ::Dynamic r){
            	HX_GC_STACKFRAME(&_hx_pos_f38f574a287e682f_125_setResolver)
HXDLIN( 125)		if (::hx::IsNull( r )) {
HXLINE( 126)			if (::hx::IsNull( ::haxe::_Unserializer::NullResolver_obj::instance )) {
HXLINE( 126)				::haxe::_Unserializer::NullResolver_obj::instance =  ::haxe::_Unserializer::NullResolver_obj::__alloc( HX_CTX );
            			}
HXDLIN( 126)			this->resolver = ::haxe::_Unserializer::NullResolver_obj::instance;
            		}
            		else {
HXLINE( 128)			this->resolver = r;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Unserializer_obj,setResolver,(void))

int Unserializer_obj::readDigits(){
            	HX_STACKFRAME(&_hx_pos_f38f574a287e682f_144_readDigits)
HXLINE( 145)		int k = 0;
HXLINE( 146)		bool s = false;
HXLINE( 147)		int fpos = this->pos;
HXLINE( 148)		while(true){
HXLINE( 149)			int c = this->buf.cca(this->pos);
HXLINE( 150)			if ((c == 0)) {
HXLINE( 151)				goto _hx_goto_2;
            			}
HXLINE( 152)			if ((c == 45)) {
HXLINE( 153)				if ((this->pos != fpos)) {
HXLINE( 154)					goto _hx_goto_2;
            				}
HXLINE( 155)				s = true;
HXLINE( 156)				this->pos++;
HXLINE( 157)				continue;
            			}
HXLINE( 159)			bool _hx_tmp;
HXDLIN( 159)			if ((c >= 48)) {
HXLINE( 159)				_hx_tmp = (c > 57);
            			}
            			else {
HXLINE( 159)				_hx_tmp = true;
            			}
HXDLIN( 159)			if (_hx_tmp) {
HXLINE( 160)				goto _hx_goto_2;
            			}
HXLINE( 161)			k = ((k * 10) + (c - 48));
HXLINE( 162)			this->pos++;
            		}
            		_hx_goto_2:;
HXLINE( 164)		if (s) {
HXLINE( 165)			k = (k * -1);
            		}
HXLINE( 166)		return k;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,readDigits,return )

Float Unserializer_obj::readFloat(){
            	HX_STACKFRAME(&_hx_pos_f38f574a287e682f_169_readFloat)
HXLINE( 170)		int p1 = this->pos;
HXLINE( 171)		while(true){
HXLINE( 172)			int c = this->buf.cca(this->pos);
HXLINE( 173)			if ((c == 0)) {
HXLINE( 174)				goto _hx_goto_4;
            			}
HXLINE( 176)			bool _hx_tmp;
HXDLIN( 176)			bool _hx_tmp1;
HXDLIN( 176)			bool _hx_tmp2;
HXDLIN( 176)			if ((c >= 43)) {
HXLINE( 176)				_hx_tmp2 = (c < 58);
            			}
            			else {
HXLINE( 176)				_hx_tmp2 = false;
            			}
HXDLIN( 176)			if (!(_hx_tmp2)) {
HXLINE( 176)				_hx_tmp1 = (c == 101);
            			}
            			else {
HXLINE( 176)				_hx_tmp1 = true;
            			}
HXDLIN( 176)			if (!(_hx_tmp1)) {
HXLINE( 176)				_hx_tmp = (c == 69);
            			}
            			else {
HXLINE( 176)				_hx_tmp = true;
            			}
HXDLIN( 176)			if (_hx_tmp) {
HXLINE( 177)				this->pos++;
            			}
            			else {
HXLINE( 179)				goto _hx_goto_4;
            			}
            		}
            		_hx_goto_4:;
HXLINE( 181)		return ::Std_obj::parseFloat(this->buf.substr(p1,(this->pos - p1)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,readFloat,return )

void Unserializer_obj::unserializeObject( ::Dynamic o){
            	HX_STACKFRAME(&_hx_pos_f38f574a287e682f_184_unserializeObject)
HXLINE( 185)		while(true){
HXLINE( 186)			if ((this->pos >= this->length)) {
HXLINE( 187)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid object",e8,6c,b7,e2)));
            			}
HXLINE( 188)			if ((this->buf.cca(this->pos) == 103)) {
HXLINE( 189)				goto _hx_goto_6;
            			}
HXLINE( 190)			 ::Dynamic k = this->unserialize();
HXLINE( 191)			if (!(::Std_obj::isOfType(k,::hx::ClassOf< ::String >()))) {
HXLINE( 192)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid object key",67,5e,4c,fb)));
            			}
HXLINE( 193)			 ::Dynamic v = this->unserialize();
HXLINE( 194)			::Reflect_obj::setField(o,( (::String)(k) ),v);
            		}
            		_hx_goto_6:;
HXLINE( 196)		this->pos++;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Unserializer_obj,unserializeObject,(void))

 ::Dynamic Unserializer_obj::unserializeEnum(::hx::Class edecl,::String tag){
            	HX_STACKFRAME(&_hx_pos_f38f574a287e682f_199_unserializeEnum)
HXLINE( 200)		if ((this->buf.cca(this->pos++) != 58)) {
HXLINE( 201)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid enum format",ad,eb,77,c2)));
            		}
HXLINE( 202)		int nargs = this->readDigits();
HXLINE( 203)		if ((nargs == 0)) {
HXLINE( 204)			return ::Type_obj::createEnum(edecl,tag,null());
            		}
HXLINE( 205)		::cpp::VirtualArray args = ::cpp::VirtualArray_obj::__new();
HXLINE( 206)		while(true){
HXLINE( 206)			nargs = (nargs - 1);
HXDLIN( 206)			if (!(((nargs + 1) > 0))) {
HXLINE( 206)				goto _hx_goto_8;
            			}
HXLINE( 207)			args->push(this->unserialize());
            		}
            		_hx_goto_8:;
HXLINE( 208)		return ::Type_obj::createEnum(edecl,tag,args);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Unserializer_obj,unserializeEnum,return )

 ::Dynamic Unserializer_obj::unserialize(){
            	HX_GC_STACKFRAME(&_hx_pos_f38f574a287e682f_231_unserialize)
HXLINE( 232)		switch((int)(this->buf.cca(this->pos++))){
            			case (int)65: {
HXLINE( 440)				::String name = ( (::String)(this->unserialize()) );
HXLINE( 441)				::hx::Class cl = this->resolver->__Field(HX_("resolveClass",ac,bd,dd,80),::hx::paccDynamic)(name);
HXLINE( 442)				if (::hx::IsNull( cl )) {
HXLINE( 443)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Class not found ",13,56,74,ed) + name)));
            				}
HXLINE( 444)				return cl;
            			}
            			break;
            			case (int)66: {
HXLINE( 446)				::String name = ( (::String)(this->unserialize()) );
HXLINE( 447)				::hx::Class e = this->resolver->__Field(HX_("resolveEnum",0d,90,51,de),::hx::paccDynamic)(name);
HXLINE( 448)				if (::hx::IsNull( e )) {
HXLINE( 449)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Enum not found ",aa,e1,55,fd) + name)));
            				}
HXLINE( 450)				return e;
            			}
            			break;
            			case (int)67: {
HXLINE( 429)				::String name = ( (::String)(this->unserialize()) );
HXLINE( 430)				::hx::Class cl = this->resolver->__Field(HX_("resolveClass",ac,bd,dd,80),::hx::paccDynamic)(name);
HXLINE( 431)				if (::hx::IsNull( cl )) {
HXLINE( 432)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Class not found ",13,56,74,ed) + name)));
            				}
HXLINE( 433)				 ::Dynamic o = ::Type_obj::createEmptyInstance(cl);
HXLINE( 434)				this->cache->push(o);
HXLINE( 435)				o->__Field(HX_("hxUnserialize",37,db,b9,86),::hx::paccDynamic)(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 436)				if ((this->buf.cca(this->pos++) != 103)) {
HXLINE( 437)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid custom data",30,fa,ef,08)));
            				}
HXLINE( 438)				return o;
            			}
            			break;
            			case (int)77: {
HXLINE( 364)				 ::haxe::ds::ObjectMap h =  ::haxe::ds::ObjectMap_obj::__alloc( HX_CTX );
HXLINE( 365)				this->cache->push(h);
HXLINE( 366)				::String buf = this->buf;
HXLINE( 367)				while((this->buf.cca(this->pos) != 104)){
HXLINE( 368)					 ::Dynamic s = this->unserialize();
HXLINE( 369)					h->set(s,this->unserialize());
            				}
HXLINE( 371)				this->pos++;
HXLINE( 372)				return h;
            			}
            			break;
            			case (int)82: {
HXLINE( 296)				int n = this->readDigits();
HXLINE( 297)				bool _hx_tmp;
HXDLIN( 297)				if ((n >= 0)) {
HXLINE( 297)					_hx_tmp = (n >= this->scache->length);
            				}
            				else {
HXLINE( 297)					_hx_tmp = true;
            				}
HXDLIN( 297)				if (_hx_tmp) {
HXLINE( 298)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid string reference",25,57,28,1b)));
            				}
HXLINE( 299)				return this->scache->__get(n);
            			}
            			break;
            			case (int)97: {
HXLINE( 261)				::String buf = this->buf;
HXLINE( 262)				::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 264)				int cachePos = this->cache->get_length();
HXLINE( 266)				this->cache->push(a);
HXLINE( 267)				while(true){
HXLINE( 268)					int c = this->buf.cca(this->pos);
HXLINE( 269)					if ((c == 104)) {
HXLINE( 270)						this->pos++;
HXLINE( 271)						goto _hx_goto_11;
            					}
HXLINE( 273)					if ((c == 117)) {
HXLINE( 274)						this->pos++;
HXLINE( 275)						int n = this->readDigits();
HXLINE( 276)						a->set(((a->get_length() + n) - 1),null());
            					}
            					else {
HXLINE( 278)						a->push(this->unserialize());
            					}
            				}
            				_hx_goto_11:;
HXLINE( 281)				return (this->cache->set(cachePos,_hx_reslove_virtual_array(a)));
            			}
            			break;
            			case (int)98: {
HXLINE( 341)				 ::haxe::ds::StringMap h =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 342)				this->cache->push(h);
HXLINE( 343)				::String buf = this->buf;
HXLINE( 344)				while((this->buf.cca(this->pos) != 104)){
HXLINE( 345)					::String s = ( (::String)(this->unserialize()) );
HXLINE( 346)					h->set(s,this->unserialize());
            				}
HXLINE( 348)				this->pos++;
HXLINE( 349)				return h;
            			}
            			break;
            			case (int)99: {
HXLINE( 303)				::String name = ( (::String)(this->unserialize()) );
HXLINE( 304)				::hx::Class cl = this->resolver->__Field(HX_("resolveClass",ac,bd,dd,80),::hx::paccDynamic)(name);
HXLINE( 305)				if (::hx::IsNull( cl )) {
HXLINE( 306)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Class not found ",13,56,74,ed) + name)));
            				}
HXLINE( 307)				 ::Dynamic o = ::Type_obj::createEmptyInstance(cl);
HXLINE( 308)				this->cache->push(o);
HXLINE( 309)				this->unserializeObject(o);
HXLINE( 310)				return o;
            			}
            			break;
            			case (int)100: {
HXLINE( 244)				return this->readFloat();
            			}
            			break;
            			case (int)102: {
HXLINE( 238)				return false;
            			}
            			break;
            			case (int)105: {
HXLINE( 242)				return this->readDigits();
            			}
            			break;
            			case (int)106: {
HXLINE( 320)				::String name = ( (::String)(this->unserialize()) );
HXLINE( 321)				::hx::Class edecl = this->resolver->__Field(HX_("resolveEnum",0d,90,51,de),::hx::paccDynamic)(name);
HXLINE( 322)				if (::hx::IsNull( edecl )) {
HXLINE( 323)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Enum not found ",aa,e1,55,fd) + name)));
            				}
HXLINE( 324)				this->pos++;
HXLINE( 325)				int index = this->readDigits();
HXLINE( 326)				::String tag = ::Type_obj::getEnumConstructs(edecl)->__get(index);
HXLINE( 327)				if (::hx::IsNull( tag )) {
HXLINE( 328)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Unknown enum index ",57,ca,63,30) + name) + HX_("@",40,00,00,00)) + index)));
            				}
HXLINE( 329)				 ::Dynamic e = this->unserializeEnum(edecl,tag);
HXLINE( 330)				this->cache->push(e);
HXLINE( 331)				return e;
            			}
            			break;
            			case (int)107: {
HXLINE( 255)				return ::Math_obj::NaN;
            			}
            			break;
            			case (int)108: {
HXLINE( 333)				 ::haxe::ds::List l =  ::haxe::ds::List_obj::__alloc( HX_CTX );
HXLINE( 334)				this->cache->push(l);
HXLINE( 335)				::String buf = this->buf;
HXLINE( 336)				while((this->buf.cca(this->pos) != 104)){
HXLINE( 337)					l->add(this->unserialize());
            				}
HXLINE( 338)				this->pos++;
HXLINE( 339)				return l;
            			}
            			break;
            			case (int)109: {
HXLINE( 257)				return ::Math_obj::NEGATIVE_INFINITY;
            			}
            			break;
            			case (int)110: {
HXLINE( 234)				return null();
            			}
            			break;
            			case (int)111: {
HXLINE( 286)				 ::Dynamic o =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 287)				this->cache->push(o);
HXLINE( 288)				this->unserializeObject(o);
HXLINE( 289)				return o;
            			}
            			break;
            			case (int)112: {
HXLINE( 259)				return ::Math_obj::POSITIVE_INFINITY;
            			}
            			break;
            			case (int)113: {
HXLINE( 351)				 ::haxe::ds::IntMap h =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE( 352)				this->cache->push(h);
HXLINE( 353)				::String buf = this->buf;
HXLINE( 354)				int c = this->buf.cca(this->pos++);
HXLINE( 355)				while((c == 58)){
HXLINE( 356)					int i = this->readDigits();
HXLINE( 357)					h->set(i,this->unserialize());
HXLINE( 358)					c = this->buf.cca(this->pos++);
            				}
HXLINE( 360)				if ((c != 104)) {
HXLINE( 361)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid IntMap format",e1,c2,b1,71)));
            				}
HXLINE( 362)				return h;
            			}
            			break;
            			case (int)114: {
HXLINE( 291)				int n = this->readDigits();
HXLINE( 292)				bool _hx_tmp;
HXDLIN( 292)				if ((n >= 0)) {
HXLINE( 292)					_hx_tmp = (n >= this->cache->get_length());
            				}
            				else {
HXLINE( 292)					_hx_tmp = true;
            				}
HXDLIN( 292)				if (_hx_tmp) {
HXLINE( 293)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid reference",42,99,8f,7d)));
            				}
HXLINE( 294)				return this->cache->__get(n);
            			}
            			break;
            			case (int)115: {
HXLINE( 385)				int len = this->readDigits();
HXLINE( 386)				::String buf = this->buf;
HXLINE( 387)				bool _hx_tmp;
HXDLIN( 387)				if ((this->buf.cca(this->pos++) == 58)) {
HXLINE( 387)					_hx_tmp = ((this->length - this->pos) < len);
            				}
            				else {
HXLINE( 387)					_hx_tmp = true;
            				}
HXDLIN( 387)				if (_hx_tmp) {
HXLINE( 388)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid bytes length",e4,8a,d3,50)));
            				}
HXLINE( 395)				::Array< int > codes = ::haxe::Unserializer_obj::CODES;
HXLINE( 396)				if (::hx::IsNull( codes )) {
HXLINE( 397)					codes = ::haxe::Unserializer_obj::initCodes();
HXLINE( 398)					::haxe::Unserializer_obj::CODES = codes;
            				}
HXLINE( 400)				int i = this->pos;
HXLINE( 401)				int rest = (len & 3);
HXLINE( 402)				int size;
HXDLIN( 402)				if ((rest >= 2)) {
HXLINE( 402)					size = (rest - 1);
            				}
            				else {
HXLINE( 402)					size = 0;
            				}
HXDLIN( 402)				int size1 = (((len >> 2) * 3) + size);
HXLINE( 403)				int max = (i + (len - rest));
HXLINE( 404)				 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(size1);
HXLINE( 405)				int bpos = 0;
HXLINE( 406)				while((i < max)){
HXLINE( 407)					i = (i + 1);
HXDLIN( 407)					int c1 = codes->__get(buf.cca((i - 1)));
HXLINE( 408)					i = (i + 1);
HXDLIN( 408)					int c2 = codes->__get(buf.cca((i - 1)));
HXLINE( 409)					{
HXLINE( 409)						bpos = (bpos + 1);
HXDLIN( 409)						bytes->b[(bpos - 1)] = ( (unsigned char)(((c1 << 2) | (c2 >> 4))) );
            					}
HXLINE( 410)					i = (i + 1);
HXDLIN( 410)					int c3 = codes->__get(buf.cca((i - 1)));
HXLINE( 411)					{
HXLINE( 411)						bpos = (bpos + 1);
HXDLIN( 411)						bytes->b[(bpos - 1)] = ( (unsigned char)(((c2 << 4) | (c3 >> 2))) );
            					}
HXLINE( 412)					i = (i + 1);
HXDLIN( 412)					int c4 = codes->__get(buf.cca((i - 1)));
HXLINE( 413)					{
HXLINE( 413)						bpos = (bpos + 1);
HXDLIN( 413)						bytes->b[(bpos - 1)] = ( (unsigned char)(((c3 << 6) | c4)) );
            					}
            				}
HXLINE( 415)				if ((rest >= 2)) {
HXLINE( 416)					i = (i + 1);
HXDLIN( 416)					int c1 = codes->__get(buf.cca((i - 1)));
HXLINE( 417)					i = (i + 1);
HXDLIN( 417)					int c2 = codes->__get(buf.cca((i - 1)));
HXLINE( 418)					{
HXLINE( 418)						bpos = (bpos + 1);
HXDLIN( 418)						bytes->b[(bpos - 1)] = ( (unsigned char)(((c1 << 2) | (c2 >> 4))) );
            					}
HXLINE( 419)					if ((rest == 3)) {
HXLINE( 420)						i = (i + 1);
HXDLIN( 420)						int c3 = codes->__get(buf.cca((i - 1)));
HXLINE( 421)						{
HXLINE( 421)							bpos = (bpos + 1);
HXDLIN( 421)							bytes->b[(bpos - 1)] = ( (unsigned char)(((c2 << 4) | (c3 >> 2))) );
            						}
            					}
            				}
HXLINE( 425)				 ::haxe::Unserializer _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 425)				_hx_tmp1->pos = (_hx_tmp1->pos + len);
HXLINE( 426)				this->cache->push(bytes);
HXLINE( 427)				return bytes;
            			}
            			break;
            			case (int)116: {
HXLINE( 236)				return true;
            			}
            			break;
            			case (int)118: {
HXLINE( 374)				 ::Date d;
HXLINE( 375)				bool _hx_tmp;
HXDLIN( 375)				bool _hx_tmp1;
HXDLIN( 375)				bool _hx_tmp2;
HXDLIN( 375)				bool _hx_tmp3;
HXDLIN( 375)				bool _hx_tmp4;
HXDLIN( 375)				bool _hx_tmp5;
HXDLIN( 375)				bool _hx_tmp6;
HXDLIN( 375)				bool _hx_tmp7;
HXDLIN( 375)				if ((this->buf.cca(this->pos) >= 48)) {
HXLINE( 375)					_hx_tmp7 = (this->buf.cca(this->pos) <= 57);
            				}
            				else {
HXLINE( 375)					_hx_tmp7 = false;
            				}
HXDLIN( 375)				if (_hx_tmp7) {
HXLINE( 375)					_hx_tmp6 = (this->buf.cca((this->pos + 1)) >= 48);
            				}
            				else {
HXLINE( 375)					_hx_tmp6 = false;
            				}
HXDLIN( 375)				if (_hx_tmp6) {
HXLINE( 375)					_hx_tmp5 = (this->buf.cca((this->pos + 1)) <= 57);
            				}
            				else {
HXLINE( 375)					_hx_tmp5 = false;
            				}
HXDLIN( 375)				if (_hx_tmp5) {
HXLINE( 375)					_hx_tmp4 = (this->buf.cca((this->pos + 2)) >= 48);
            				}
            				else {
HXLINE( 375)					_hx_tmp4 = false;
            				}
HXDLIN( 375)				if (_hx_tmp4) {
HXLINE( 375)					_hx_tmp3 = (this->buf.cca((this->pos + 2)) <= 57);
            				}
            				else {
HXLINE( 375)					_hx_tmp3 = false;
            				}
HXDLIN( 375)				if (_hx_tmp3) {
HXLINE( 375)					_hx_tmp2 = (this->buf.cca((this->pos + 3)) >= 48);
            				}
            				else {
HXLINE( 375)					_hx_tmp2 = false;
            				}
HXDLIN( 375)				if (_hx_tmp2) {
HXLINE( 375)					_hx_tmp1 = (this->buf.cca((this->pos + 3)) <= 57);
            				}
            				else {
HXLINE( 375)					_hx_tmp1 = false;
            				}
HXDLIN( 375)				if (_hx_tmp1) {
HXLINE( 375)					_hx_tmp = (this->buf.cca((this->pos + 4)) == 45);
            				}
            				else {
HXLINE( 375)					_hx_tmp = false;
            				}
HXDLIN( 375)				if (_hx_tmp) {
HXLINE( 378)					d = ::Date_obj::fromString(this->buf.substr(this->pos,19));
HXLINE( 379)					 ::haxe::Unserializer _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 379)					_hx_tmp->pos = (_hx_tmp->pos + 19);
            				}
            				else {
HXLINE( 381)					d = ::Date_obj::fromTime(this->readFloat());
            				}
HXLINE( 382)				this->cache->push(d);
HXLINE( 383)				return d;
            			}
            			break;
            			case (int)119: {
HXLINE( 312)				::String name = ( (::String)(this->unserialize()) );
HXLINE( 313)				::hx::Class edecl = this->resolver->__Field(HX_("resolveEnum",0d,90,51,de),::hx::paccDynamic)(name);
HXLINE( 314)				if (::hx::IsNull( edecl )) {
HXLINE( 315)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Enum not found ",aa,e1,55,fd) + name)));
            				}
HXLINE( 316)				 ::Dynamic e = this->unserializeEnum(edecl,( (::String)(this->unserialize()) ));
HXLINE( 317)				this->cache->push(e);
HXLINE( 318)				return e;
            			}
            			break;
            			case (int)120: {
HXLINE( 301)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(this->unserialize()));
            			}
            			break;
            			case (int)121: {
HXLINE( 246)				int len = this->readDigits();
HXLINE( 247)				bool _hx_tmp;
HXDLIN( 247)				if ((this->buf.cca(this->pos++) == 58)) {
HXLINE( 247)					_hx_tmp = ((this->length - this->pos) < len);
            				}
            				else {
HXLINE( 247)					_hx_tmp = true;
            				}
HXDLIN( 247)				if (_hx_tmp) {
HXLINE( 248)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid string length",4c,89,20,c9)));
            				}
HXLINE( 249)				::String s = this->buf.substr(this->pos,len);
HXLINE( 250)				 ::haxe::Unserializer _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 250)				_hx_tmp1->pos = (_hx_tmp1->pos + len);
HXLINE( 251)				s = ::StringTools_obj::urlDecode(s);
HXLINE( 252)				this->scache->push(s);
HXLINE( 253)				return s;
            			}
            			break;
            			case (int)122: {
HXLINE( 240)				return 0;
            			}
            			break;
            			default:{
            			}
            		}
HXLINE( 453)		this->pos--;
HXLINE( 454)		::String _hx_tmp = ((HX_("Invalid char ",81,66,ec,29) + this->buf.charAt(this->pos)) + HX_(" at position ",0a,c2,01,e0));
HXDLIN( 454)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + this->pos)));
HXDLIN( 454)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,unserialize,return )

 ::Dynamic Unserializer_obj::DEFAULT_RESOLVER;

::String Unserializer_obj::BASE64;

::Array< int > Unserializer_obj::CODES;

::Array< int > Unserializer_obj::initCodes(){
            	HX_STACKFRAME(&_hx_pos_f38f574a287e682f_72_initCodes)
HXLINE(  73)		::Array< int > codes = ::Array_obj< int >::__new();
HXLINE(  74)		{
HXLINE(  74)			int _g = 0;
HXDLIN(  74)			int _g1 = ::haxe::Unserializer_obj::BASE64.length;
HXDLIN(  74)			while((_g < _g1)){
HXLINE(  74)				_g = (_g + 1);
HXDLIN(  74)				int i = (_g - 1);
HXLINE(  75)				codes[::haxe::Unserializer_obj::BASE64.cca(i)] = i;
            			}
            		}
HXLINE(  76)		return codes;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Unserializer_obj,initCodes,return )

 ::Dynamic Unserializer_obj::run(::String v){
            	HX_GC_STACKFRAME(&_hx_pos_f38f574a287e682f_465_run)
HXDLIN( 465)		return  ::haxe::Unserializer_obj::__alloc( HX_CTX ,v)->unserialize();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Unserializer_obj,run,return )


::hx::ObjectPtr< Unserializer_obj > Unserializer_obj::__new(::String buf) {
	::hx::ObjectPtr< Unserializer_obj > __this = new Unserializer_obj();
	__this->__construct(buf);
	return __this;
}

::hx::ObjectPtr< Unserializer_obj > Unserializer_obj::__alloc(::hx::Ctx *_hx_ctx,::String buf) {
	Unserializer_obj *__this = (Unserializer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Unserializer_obj), true, "haxe.Unserializer"));
	*(void **)__this = Unserializer_obj::_hx_vtable;
	__this->__construct(buf);
	return __this;
}

Unserializer_obj::Unserializer_obj()
{
}

void Unserializer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Unserializer);
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(scache,"scache");
	HX_MARK_MEMBER_NAME(resolver,"resolver");
	HX_MARK_END_CLASS();
}

void Unserializer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(scache,"scache");
	HX_VISIT_MEMBER_NAME(resolver,"resolver");
}

::hx::Val Unserializer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return ::hx::Val( buf ); }
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"scache") ) { return ::hx::Val( scache ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resolver") ) { return ::hx::Val( resolver ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readFloat") ) { return ::hx::Val( readFloat_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readDigits") ) { return ::hx::Val( readDigits_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setResolver") ) { return ::hx::Val( setResolver_dyn() ); }
		if (HX_FIELD_EQ(inName,"unserialize") ) { return ::hx::Val( unserialize_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unserializeEnum") ) { return ::hx::Val( unserializeEnum_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unserializeObject") ) { return ::hx::Val( unserializeObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Unserializer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"run") ) { outValue = run_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"CODES") ) { outValue = ( CODES ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { outValue = ( BASE64 ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"initCodes") ) { outValue = initCodes_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEFAULT_RESOLVER") ) { outValue = ( DEFAULT_RESOLVER ); return true; }
	}
	return false;
}

::hx::Val Unserializer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scache") ) { scache=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resolver") ) { resolver=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Unserializer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"CODES") ) { CODES=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BASE64") ) { BASE64=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEFAULT_RESOLVER") ) { DEFAULT_RESOLVER=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Unserializer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buf",33,c3,4a,00));
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("cache",42,9a,14,41));
	outFields->push(HX_("scache",ef,18,1f,3c));
	outFields->push(HX_("resolver",06,7c,b0,0c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Unserializer_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Unserializer_obj,buf),HX_("buf",33,c3,4a,00)},
	{::hx::fsInt,(int)offsetof(Unserializer_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsInt,(int)offsetof(Unserializer_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(Unserializer_obj,cache),HX_("cache",42,9a,14,41)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Unserializer_obj,scache),HX_("scache",ef,18,1f,3c)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Unserializer_obj,resolver),HX_("resolver",06,7c,b0,0c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Unserializer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Unserializer_obj::DEFAULT_RESOLVER,HX_("DEFAULT_RESOLVER",a4,3a,b4,de)},
	{::hx::fsString,(void *) &Unserializer_obj::BASE64,HX_("BASE64",8f,c5,aa,07)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &Unserializer_obj::CODES,HX_("CODES",86,8e,44,c8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Unserializer_obj_sMemberFields[] = {
	HX_("buf",33,c3,4a,00),
	HX_("pos",94,5d,55,00),
	HX_("length",e6,94,07,9f),
	HX_("cache",42,9a,14,41),
	HX_("scache",ef,18,1f,3c),
	HX_("resolver",06,7c,b0,0c),
	HX_("setResolver",c8,45,11,3d),
	HX_("readDigits",1c,ee,a3,ae),
	HX_("readFloat",66,12,7e,d3),
	HX_("unserializeObject",86,9e,52,9f),
	HX_("unserializeEnum",08,3b,10,7f),
	HX_("unserialize",67,e4,98,7a),
	::String(null()) };

static void Unserializer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Unserializer_obj::DEFAULT_RESOLVER,"DEFAULT_RESOLVER");
	HX_MARK_MEMBER_NAME(Unserializer_obj::BASE64,"BASE64");
	HX_MARK_MEMBER_NAME(Unserializer_obj::CODES,"CODES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Unserializer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Unserializer_obj::DEFAULT_RESOLVER,"DEFAULT_RESOLVER");
	HX_VISIT_MEMBER_NAME(Unserializer_obj::BASE64,"BASE64");
	HX_VISIT_MEMBER_NAME(Unserializer_obj::CODES,"CODES");
};

#endif

::hx::Class Unserializer_obj::__mClass;

static ::String Unserializer_obj_sStaticFields[] = {
	HX_("DEFAULT_RESOLVER",a4,3a,b4,de),
	HX_("BASE64",8f,c5,aa,07),
	HX_("CODES",86,8e,44,c8),
	HX_("initCodes",76,71,e8,65),
	HX_("run",4b,e7,56,00),
	::String(null())
};

void Unserializer_obj::__register()
{
	Unserializer_obj _hx_dummy;
	Unserializer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.Unserializer",93,7b,79,6c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Unserializer_obj::__GetStatic;
	__mClass->mSetStaticField = &Unserializer_obj::__SetStatic;
	__mClass->mMarkFunc = Unserializer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Unserializer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Unserializer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Unserializer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Unserializer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Unserializer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Unserializer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Unserializer_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f38f574a287e682f_65_boot)
HXDLIN(  65)		DEFAULT_RESOLVER =  ::haxe::_Unserializer::DefaultResolver_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_f38f574a287e682f_67_boot)
HXDLIN(  67)		BASE64 = HX_("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789%:",d4,3b,03,7f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f38f574a287e682f_70_boot)
HXDLIN(  70)		CODES = null();
            	}
}

} // end namespace haxe
