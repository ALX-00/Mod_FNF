// Generated by Haxe 4.1.5
#ifndef INCLUDED_polymod_format_BaseParseFormat
#define INCLUDED_polymod_format_BaseParseFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(polymod,format,BaseParseFormat)
HX_DECLARE_CLASS2(polymod,format,TextFileFormat)

namespace polymod{
namespace format{


class HXCPP_CLASS_ATTRIBUTES BaseParseFormat_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::String (::hx::Object :: *_hx_append)(::String baseText,::String mergeText,::String id); 
		static inline ::String append( ::Dynamic _hx_,::String baseText,::String mergeText,::String id) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::format::BaseParseFormat_obj *>(_hx_.mPtr->_hx_getInterface(0xa2d29dcc)))->_hx_append)(baseText,mergeText,id);
		}
		::String (::hx::Object :: *_hx_merge)(::String baseText,::String mergeText,::String id); 
		static inline ::String merge( ::Dynamic _hx_,::String baseText,::String mergeText,::String id) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::polymod::format::BaseParseFormat_obj *>(_hx_.mPtr->_hx_getInterface(0xa2d29dcc)))->_hx_merge)(baseText,mergeText,id);
		}
};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_BaseParseFormat */ 
