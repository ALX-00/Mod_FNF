// Generated by Haxe 4.1.5
#ifndef INCLUDED_polymod_fs_SysFileSystem
#define INCLUDED_polymod_fs_SysFileSystem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_31_new)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(polymod,fs,SysFileSystem)

namespace polymod{
namespace fs{


class HXCPP_CLASS_ATTRIBUTES SysFileSystem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SysFileSystem_obj OBJ_;
		SysFileSystem_obj();

	public:
		enum { _hx_ClassId = 0x744a2635 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="polymod.fs.SysFileSystem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"polymod.fs.SysFileSystem"); }

		inline static ::hx::ObjectPtr< SysFileSystem_obj > __new() {
			::hx::ObjectPtr< SysFileSystem_obj > __this = new SysFileSystem_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< SysFileSystem_obj > __alloc(::hx::Ctx *_hx_ctx) {
			SysFileSystem_obj *__this = (SysFileSystem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SysFileSystem_obj), false, "polymod.fs.SysFileSystem"));
			*(void **)__this = SysFileSystem_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_31_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SysFileSystem_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SysFileSystem",d8,91,e5,5e); }

		static bool exists(::String path);
		static ::Dynamic exists_dyn();

		static bool isDirectory(::String path);
		static ::Dynamic isDirectory_dyn();

		static ::Array< ::String > readDirectory(::String path);
		static ::Dynamic readDirectory_dyn();

		static ::String getFileContent(::String path);
		static ::Dynamic getFileContent_dyn();

		static  ::haxe::io::Bytes getFileBytes(::String path);
		static ::Dynamic getFileBytes_dyn();

		static ::Array< ::String > readDirectoryRecursive(::String path);
		static ::Dynamic readDirectoryRecursive_dyn();

		static ::Array< ::String > _readDirectoryRecursive(::String str);
		static ::Dynamic _readDirectoryRecursive_dyn();

};

} // end namespace polymod
} // end namespace fs

#endif /* INCLUDED_polymod_fs_SysFileSystem */ 
