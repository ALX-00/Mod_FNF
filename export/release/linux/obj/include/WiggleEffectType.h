// Generated by Haxe 4.1.5
#ifndef INCLUDED_WiggleEffectType
#define INCLUDED_WiggleEffectType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(WiggleEffectType)


class WiggleEffectType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef WiggleEffectType_obj OBJ_;

	public:
		WiggleEffectType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("WiggleEffectType",96,b3,49,6f); }
		::String __ToString() const { return HX_("WiggleEffectType.",d8,6f,33,f1) + _hx_tag; }

		static ::WiggleEffectType DREAMY;
		static inline ::WiggleEffectType DREAMY_dyn() { return DREAMY; }
		static ::WiggleEffectType FLAG;
		static inline ::WiggleEffectType FLAG_dyn() { return FLAG; }
		static ::WiggleEffectType HEAT_WAVE_HORIZONTAL;
		static inline ::WiggleEffectType HEAT_WAVE_HORIZONTAL_dyn() { return HEAT_WAVE_HORIZONTAL; }
		static ::WiggleEffectType HEAT_WAVE_VERTICAL;
		static inline ::WiggleEffectType HEAT_WAVE_VERTICAL_dyn() { return HEAT_WAVE_VERTICAL; }
		static ::WiggleEffectType WAVY;
		static inline ::WiggleEffectType WAVY_dyn() { return WAVY; }
};


#endif /* INCLUDED_WiggleEffectType */ 
