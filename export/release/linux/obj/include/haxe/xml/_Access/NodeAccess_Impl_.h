// Generated by Haxe 4.1.5
#ifndef INCLUDED_haxe_xml__Access_NodeAccess_Impl_
#define INCLUDED_haxe_xml__Access_NodeAccess_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS3(haxe,xml,_Access,NodeAccess_Impl_)

namespace haxe{
namespace xml{
namespace _Access{


class HXCPP_CLASS_ATTRIBUTES NodeAccess_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef NodeAccess_Impl__obj OBJ_;
		NodeAccess_Impl__obj();

	public:
		enum { _hx_ClassId = 0x601f71d8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.xml._Access.NodeAccess_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.xml._Access.NodeAccess_Impl_"); }

		inline static ::hx::ObjectPtr< NodeAccess_Impl__obj > __new() {
			::hx::ObjectPtr< NodeAccess_Impl__obj > __this = new NodeAccess_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< NodeAccess_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			NodeAccess_Impl__obj *__this = (NodeAccess_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NodeAccess_Impl__obj), false, "haxe.xml._Access.NodeAccess_Impl_"));
			*(void **)__this = NodeAccess_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NodeAccess_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NodeAccess_Impl_",86,d2,6c,a4); }

		static  ::Xml resolve( ::Xml this1,::String name);
		static ::Dynamic resolve_dyn();

};

} // end namespace haxe
} // end namespace xml
} // end namespace _Access

#endif /* INCLUDED_haxe_xml__Access_NodeAccess_Impl_ */ 
