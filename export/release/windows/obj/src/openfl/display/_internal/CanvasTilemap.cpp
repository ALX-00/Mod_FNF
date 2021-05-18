// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_TileContainer
#include <openfl/display/TileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasTilemap
#include <openfl/display/_internal/CanvasTilemap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_12472103ca7965a0_28_render,"openfl.display._internal.CanvasTilemap","render",0x08904b8a,"openfl.display._internal.CanvasTilemap.render","openfl/display/_internal/CanvasTilemap.hx",28,0xe65c06c7)
HX_LOCAL_STACK_FRAME(_hx_pos_12472103ca7965a0_68_renderTileContainer,"openfl.display._internal.CanvasTilemap","renderTileContainer",0x0d75ca49,"openfl.display._internal.CanvasTilemap.renderTileContainer","openfl/display/_internal/CanvasTilemap.hx",68,0xe65c06c7)
HX_LOCAL_STACK_FRAME(_hx_pos_12472103ca7965a0_171_renderDrawable,"openfl.display._internal.CanvasTilemap","renderDrawable",0xcc208d48,"openfl.display._internal.CanvasTilemap.renderDrawable","openfl/display/_internal/CanvasTilemap.hx",171,0xe65c06c7)
HX_LOCAL_STACK_FRAME(_hx_pos_12472103ca7965a0_187_renderDrawableMask,"openfl.display._internal.CanvasTilemap","renderDrawableMask",0x83f43e54,"openfl.display._internal.CanvasTilemap.renderDrawableMask","openfl/display/_internal/CanvasTilemap.hx",187,0xe65c06c7)
HX_LOCAL_STACK_FRAME(_hx_pos_12472103ca7965a0_25_boot,"openfl.display._internal.CanvasTilemap","boot",0xc71a2f66,"openfl.display._internal.CanvasTilemap.boot","openfl/display/_internal/CanvasTilemap.hx",25,0xe65c06c7)
namespace openfl{
namespace display{
namespace _internal{

void CanvasTilemap_obj::__construct() { }

Dynamic CanvasTilemap_obj::__CreateEmpty() { return new CanvasTilemap_obj; }

void *CanvasTilemap_obj::_hx_vtable = 0;

Dynamic CanvasTilemap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasTilemap_obj > _hx_result = new CanvasTilemap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasTilemap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0f23ecac;
}

void CanvasTilemap_obj::render( ::openfl::display::Tilemap tilemap, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_12472103ca7965a0_28_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTilemap_obj,render,(void))

void CanvasTilemap_obj::renderTileContainer( ::openfl::display::TileContainer group, ::openfl::display::CanvasRenderer renderer, ::openfl::geom::Matrix parentTransform, ::openfl::display::Tileset defaultTileset,bool smooth,bool alphaEnabled,Float worldAlpha,bool blendModeEnabled, ::Dynamic defaultBlendMode, ::openfl::display::BitmapData cacheBitmapData, ::Dynamic source, ::openfl::geom::Rectangle rect){
            	HX_STACKFRAME(&_hx_pos_12472103ca7965a0_68_renderTileContainer)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(CanvasTilemap_obj,renderTileContainer,(void))

void CanvasTilemap_obj::renderDrawable( ::openfl::display::Tilemap tilemap, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_12472103ca7965a0_171_renderDrawable)
HXLINE( 172)		renderer->_hx___updateCacheBitmap(tilemap,false);
HXLINE( 174)		bool _hx_tmp;
HXDLIN( 174)		if (::hx::IsNotNull( tilemap->_hx___cacheBitmap )) {
HXLINE( 174)			_hx_tmp = !(tilemap->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE( 174)			_hx_tmp = false;
            		}
HXLINE( 184)		renderer->_hx___renderEvent(tilemap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTilemap_obj,renderDrawable,(void))

void CanvasTilemap_obj::renderDrawableMask( ::openfl::display::Tilemap tilemap, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_12472103ca7965a0_187_renderDrawableMask)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasTilemap_obj,renderDrawableMask,(void))


CanvasTilemap_obj::CanvasTilemap_obj()
{
}

bool CanvasTilemap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderTileContainer") ) { outValue = renderTileContainer_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasTilemap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CanvasTilemap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CanvasTilemap_obj::__mClass;

static ::String CanvasTilemap_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderTileContainer",fd,ba,73,84),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CanvasTilemap_obj::__register()
{
	CanvasTilemap_obj _hx_dummy;
	CanvasTilemap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CanvasTilemap",ba,81,3d,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasTilemap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasTilemap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasTilemap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasTilemap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasTilemap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasTilemap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_12472103ca7965a0_25_boot)
HXDLIN(  25)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20)))))
            			->setFixed(1,HX_("statics",05,3c,65,36), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("renderTileContainer",fd,ba,73,84), ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:Dynamic",ce,ea,47,3c))))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
