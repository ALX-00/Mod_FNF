// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_polymod_fs_PolymodFileSystem
#include <polymod/fs/PolymodFileSystem.h>
#endif
#ifndef INCLUDED_polymod_fs_SysFileSystem
#include <polymod/fs/SysFileSystem.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_229e9118b7a14b67_31_exists,"polymod.fs.PolymodFileSystem","exists",0x4d08d572,"polymod.fs.PolymodFileSystem.exists","polymod/fs/PolymodFileSystem.hx",31,0x1f0c5646)
HX_LOCAL_STACK_FRAME(_hx_pos_229e9118b7a14b67_40_isDirectory,"polymod.fs.PolymodFileSystem","isDirectory",0xf92db1cd,"polymod.fs.PolymodFileSystem.isDirectory","polymod/fs/PolymodFileSystem.hx",40,0x1f0c5646)
HX_LOCAL_STACK_FRAME(_hx_pos_229e9118b7a14b67_49_readDirectory,"polymod.fs.PolymodFileSystem","readDirectory",0x1eae7361,"polymod.fs.PolymodFileSystem.readDirectory","polymod/fs/PolymodFileSystem.hx",49,0x1f0c5646)
HX_LOCAL_STACK_FRAME(_hx_pos_229e9118b7a14b67_56_getFileContent,"polymod.fs.PolymodFileSystem","getFileContent",0x54fb7ebd,"polymod.fs.PolymodFileSystem.getFileContent","polymod/fs/PolymodFileSystem.hx",56,0x1f0c5646)
HX_LOCAL_STACK_FRAME(_hx_pos_229e9118b7a14b67_66_getFileBytes,"polymod.fs.PolymodFileSystem","getFileBytes",0xdfb5d0ef,"polymod.fs.PolymodFileSystem.getFileBytes","polymod/fs/PolymodFileSystem.hx",66,0x1f0c5646)
HX_LOCAL_STACK_FRAME(_hx_pos_229e9118b7a14b67_78_readDirectoryRecursive,"polymod.fs.PolymodFileSystem","readDirectoryRecursive",0xda6d23d1,"polymod.fs.PolymodFileSystem.readDirectoryRecursive","polymod/fs/PolymodFileSystem.hx",78,0x1f0c5646)
namespace polymod{
namespace fs{

void PolymodFileSystem_obj::__construct() { }

Dynamic PolymodFileSystem_obj::__CreateEmpty() { return new PolymodFileSystem_obj; }

void *PolymodFileSystem_obj::_hx_vtable = 0;

Dynamic PolymodFileSystem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PolymodFileSystem_obj > _hx_result = new PolymodFileSystem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PolymodFileSystem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4abdba0a;
}

bool PolymodFileSystem_obj::exists(::String path){
            	HX_STACKFRAME(&_hx_pos_229e9118b7a14b67_31_exists)
HXDLIN(  31)		return ::sys::FileSystem_obj::exists(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodFileSystem_obj,exists,return )

bool PolymodFileSystem_obj::isDirectory(::String path){
            	HX_STACKFRAME(&_hx_pos_229e9118b7a14b67_40_isDirectory)
HXDLIN(  40)		return ::sys::FileSystem_obj::isDirectory(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodFileSystem_obj,isDirectory,return )

::Array< ::String > PolymodFileSystem_obj::readDirectory(::String path){
            	HX_STACKFRAME(&_hx_pos_229e9118b7a14b67_49_readDirectory)
HXDLIN(  49)		return ::sys::FileSystem_obj::readDirectory(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodFileSystem_obj,readDirectory,return )

::String PolymodFileSystem_obj::getFileContent(::String path){
            	HX_STACKFRAME(&_hx_pos_229e9118b7a14b67_56_getFileContent)
HXLINE(  57)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  57)			return null();
            		}
HXLINE(  59)		return ::sys::io::File_obj::getContent(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodFileSystem_obj,getFileContent,return )

 ::haxe::io::Bytes PolymodFileSystem_obj::getFileBytes(::String path){
            	HX_STACKFRAME(&_hx_pos_229e9118b7a14b67_66_getFileBytes)
HXLINE(  67)		if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE(  67)			return null();
            		}
HXLINE(  69)		return ::sys::io::File_obj::getBytes(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodFileSystem_obj,getFileBytes,return )

::Array< ::String > PolymodFileSystem_obj::readDirectoryRecursive(::String path){
            	HX_STACKFRAME(&_hx_pos_229e9118b7a14b67_78_readDirectoryRecursive)
HXDLIN(  78)		return ::polymod::fs::SysFileSystem_obj::readDirectoryRecursive(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PolymodFileSystem_obj,readDirectoryRecursive,return )


PolymodFileSystem_obj::PolymodFileSystem_obj()
{
}

bool PolymodFileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDirectory") ) { outValue = isDirectory_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFileBytes") ) { outValue = getFileBytes_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readDirectory") ) { outValue = readDirectory_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFileContent") ) { outValue = getFileContent_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"readDirectoryRecursive") ) { outValue = readDirectoryRecursive_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PolymodFileSystem_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PolymodFileSystem_obj_sStaticStorageInfo = 0;
#endif

::hx::Class PolymodFileSystem_obj::__mClass;

static ::String PolymodFileSystem_obj_sStaticFields[] = {
	HX_("exists",dc,1d,e0,bf),
	HX_("isDirectory",23,a9,c5,ee),
	HX_("readDirectory",37,6c,b3,a3),
	HX_("getFileContent",27,41,50,34),
	HX_("getFileBytes",d9,44,16,cf),
	HX_("readDirectoryRecursive",3b,60,49,77),
	::String(null())
};

void PolymodFileSystem_obj::__register()
{
	PolymodFileSystem_obj _hx_dummy;
	PolymodFileSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.fs.PolymodFileSystem",18,92,e3,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PolymodFileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PolymodFileSystem_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PolymodFileSystem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PolymodFileSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PolymodFileSystem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace fs
