// Generated by Haxe 4.1.5
#ifndef INCLUDED_AccuracyOption
#define INCLUDED_AccuracyOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(AccuracyOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES AccuracyOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef AccuracyOption_obj OBJ_;
		AccuracyOption_obj();

	public:
		enum { _hx_ClassId = 0x50e5556e };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="AccuracyOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"AccuracyOption"); }
		static ::hx::ObjectPtr< AccuracyOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< AccuracyOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AccuracyOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AccuracyOption",ae,d2,f9,6e); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_AccuracyOption */ 
