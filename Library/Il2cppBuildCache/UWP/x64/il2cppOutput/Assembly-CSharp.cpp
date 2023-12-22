#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader>
struct IReadOnlyList_1_tA80C12111618D2D89FCD26036BFD26E605419A2A;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.Management.XRLoader[]
struct XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// ButtonDoorController
struct ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62;
// ButtonDoorRaycast
struct ButtonDoorRaycast_t5AD14DE21ECA91EFD2F387A9EE5A96AE1389F862;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DoorScript
struct DoorScript_t5012D54C63F69260879B8BDD972C96E1328FDBA0;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// FanRotationScript
struct FanRotationScript_tF348DD3FC85AF69349050270A90CA38F377469C7;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SerialController
struct SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5;
// System.IO.Ports.SerialPort
struct SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628;
// ButtonDoorController/<PaseDoorInteraction>d__6
struct U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09CDD176B7B8CA89DD8FFECF6C2C085B5ECC599F;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral41AAFF06156E0BD2663FCB778053AA3EE0C9C87F;
IL2CPP_EXTERN_C String_t* _stringLiteral5A4AD7A10CDB715D301CA4BFEFAB979BE8A29384;
IL2CPP_EXTERN_C String_t* _stringLiteral61880A1355496A86BBC29466D07CD4E030DDF2E7;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA;
IL2CPP_EXTERN_C String_t* _stringLiteral8BF2FE4A21A81E3C8C4231F80B91F505F94E7E61;
IL2CPP_EXTERN_C String_t* _stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437;
IL2CPP_EXTERN_C String_t* _stringLiteral927834408855B1B6E964A41EC36BB9F4FB56A10D;
IL2CPP_EXTERN_C String_t* _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralBE677CF16CFC543971DE1B7C0497DE36D595BE94;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF36B6375A694F6D69455DBF7163B7B5247BF42;
IL2CPP_EXTERN_C String_t* _stringLiteralD6A5A384EECF5A297D00E8FD89F9C83BAE2FE3B7;
IL2CPP_EXTERN_C String_t* _stringLiteralFEB19E302FE1AE63409B153BE49B02418BAD4579;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62_m8C194D09278ED5674593EEE69425803158CE721F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPaseDoorInteractionU3Ed__6_System_Collections_IEnumerator_Reset_m57EA48D713FD4A14DA1B7B2DA2CBE4CDA8EEE969_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// ButtonDoorController/<PaseDoorInteraction>d__6
struct U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883  : public RuntimeObject
{
	// System.Int32 ButtonDoorController/<PaseDoorInteraction>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ButtonDoorController/<PaseDoorInteraction>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ButtonDoorController ButtonDoorController/<PaseDoorInteraction>d__6::<>4__this
	ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.IO.Ports.SerialPort
struct SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ButtonDoorController
struct ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator ButtonDoorController::doorAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___doorAnim_4;
	// System.Boolean ButtonDoorController::doorOpen
	bool ___doorOpen_5;
	// System.String ButtonDoorController::openAnimationName
	String_t* ___openAnimationName_6;
	// System.String ButtonDoorController::closeAnimationName
	String_t* ___closeAnimationName_7;
	// System.Int32 ButtonDoorController::waitTimer
	int32_t ___waitTimer_8;
	// System.Boolean ButtonDoorController::pauseIntercation
	bool ___pauseIntercation_9;
};

// ButtonDoorRaycast
struct ButtonDoorRaycast_t5AD14DE21ECA91EFD2F387A9EE5A96AE1389F862  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ButtonDoorRaycast::rayLength
	int32_t ___rayLength_4;
	// UnityEngine.LayerMask ButtonDoorRaycast::layerMaskInterract
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___layerMaskInterract_5;
	// System.String ButtonDoorRaycast::exculdeLayerName
	String_t* ___exculdeLayerName_6;
	// ButtonDoorController ButtonDoorRaycast::raycastedObj
	ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* ___raycastedObj_7;
	// UnityEngine.KeyCode ButtonDoorRaycast::openDoorKey
	int32_t ___openDoorKey_8;
	// UnityEngine.UI.Image ButtonDoorRaycast::crosshair
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___crosshair_9;
	// System.Boolean ButtonDoorRaycast::isCrosshairActive
	bool ___isCrosshairActive_10;
	// System.Boolean ButtonDoorRaycast::doOnce
	bool ___doOnce_11;
};

// DoorScript
struct DoorScript_t5012D54C63F69260879B8BDD972C96E1328FDBA0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean DoorScript::isOpen
	bool ___isOpen_4;
	// System.Boolean DoorScript::isOpening
	bool ___isOpening_5;
	// System.Boolean DoorScript::isClosing
	bool ___isClosing_6;
	// System.Boolean DoorScript::isClosed
	bool ___isClosed_7;
	// System.Single DoorScript::progress
	float ___progress_8;
	// UnityEngine.Vector3 DoorScript::initialRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialRotation_9;
	// UnityEngine.GameObject DoorScript::DoorOpen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DoorOpen_10;
	// UnityEngine.GameObject DoorScript::DoorClose
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___DoorClose_11;
};

// FanRotationScript
struct FanRotationScript_tF348DD3FC85AF69349050270A90CA38F377469C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean FanRotationScript::isOn
	bool ___isOn_4;
	// System.Single FanRotationScript::speed
	float ___speed_5;
	// UnityEngine.Transform FanRotationScript::fanBlades
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___fanBlades_6;
	// UnityEngine.GameObject FanRotationScript::FanOn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FanOn_7;
	// UnityEngine.GameObject FanRotationScript::FanOff
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FanOff_8;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerController::speed
	float ___speed_4;
	// System.Single PlayerController::rotationSpeed
	float ___rotationSpeed_5;
	// UnityEngine.Transform PlayerController::cameraTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraTransform_6;
	// DoorScript PlayerController::door
	DoorScript_t5012D54C63F69260879B8BDD972C96E1328FDBA0* ___door_7;
	// UnityEngine.GameObject PlayerController::LampOn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LampOn_8;
	// UnityEngine.GameObject PlayerController::LampOff
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LampOff_9;
	// FanRotationScript PlayerController::Fan
	FanRotationScript_tF348DD3FC85AF69349050270A90CA38F377469C7* ___Fan_10;
	// System.Boolean PlayerController::nearDoor
	bool ___nearDoor_11;
	// System.Boolean PlayerController::doorOpen
	bool ___doorOpen_12;
	// System.Boolean PlayerController::nearFan
	bool ___nearFan_13;
};

// SerialController
struct SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IO.Ports.SerialPort SerialController::serialPort
	SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* ___serialPort_4;
	// System.String SerialController::portName
	String_t* ___portName_5;
	// System.Int32 SerialController::baudRate
	int32_t ___baudRate_6;
	// System.Boolean SerialController::lightOn
	bool ___lightOn_7;
	// System.Boolean SerialController::fanOn
	bool ___fanOn_8;
	// System.Boolean SerialController::doorOpen
	bool ___doorOpen_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Unity.Template.VR.XRPlatformControllerSetup
struct XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftController_4;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightController_5;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_LeftControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_LeftControllerOculusPackage_6;
	// UnityEngine.GameObject Unity.Template.VR.XRPlatformControllerSetup::m_RightControllerOculusPackage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RightControllerOculusPackage_7;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	XRLoaderU5BU5D_t106FBE2039A03743430BD384D0D69555CCD0BA99* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// ButtonDoorController/<PaseDoorInteraction>d__6

// ButtonDoorController/<PaseDoorInteraction>d__6

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Int32

// System.Int32

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// System.Single

// System.Single

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// System.IO.Ports.SerialPort

// System.IO.Ports.SerialPort

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRGeneralSettings

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ButtonDoorController

// ButtonDoorController

// ButtonDoorRaycast

// ButtonDoorRaycast

// DoorScript

// DoorScript

// FanRotationScript

// FanRotationScript

// PlayerController

// PlayerController

// SerialController
struct SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields
{
	// SerialController SerialController::instance
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* ___instance_10;
};

// SerialController

// Unity.Template.VR.XRPlatformControllerSetup

// Unity.Template.VR.XRPlatformControllerSetup

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Void ButtonDoorController/<PaseDoorInteraction>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPaseDoorInteractionU3Ed__6__ctor_m306F5A5E50375359A09032E078D70B166D9B085E (U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, int32_t ___1_layer, float ___2_normalizedTime, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ButtonDoorController::PaseDoorInteraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonDoorController_PaseDoorInteraction_mF83D78A6B73E7F9CDBDE0E4E147BA29CE895E0F6 (ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___0_layerName, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, int32_t ___4_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ButtonDoorController>()
inline ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* GameObject_GetComponent_TisButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62_m8C194D09278ED5674593EEE69425803158CE721F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ButtonDoorRaycast::CrosshairChange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonDoorRaycast_CrosshairChange_m9D69BEB1B9E05221C8E585663D7F9DAA89307023 (ButtonDoorRaycast_t5AD14DE21ECA91EFD2F387A9EE5A96AE1389F862* __this, bool ___0_on, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void ButtonDoorController::PlayAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonDoorController_PlayAnimation_m73F1539B99A5E8E568C8157589D0FC3CA3F8FFA5 (ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean SerialController::GetDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerialController_GetDoor_m6C196612D778E8D76C9E45D05E4E8CA2BFDF6A5B (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, const RuntimeMethod* method) ;
// System.Void SerialController::SetDoor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_SetDoor_m0558FF7E77DD23E76F4A1A2BA1AE259B21182DB6 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, bool ___0_b, const RuntimeMethod* method) ;
// System.Boolean SerialController::GetFan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerialController_GetFan_mFA3A49AF18BF585E1728DCF7711D4CFF94840C9B (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, const RuntimeMethod* method) ;
// System.Void SerialController::SetFan(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_SetFan_m92E8DEE963A42F7C15399EA0B4E9068F93883325 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, bool ___0_b, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, float ___2_angle, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Void DoorScript::ChangeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorScript_ChangeState_m68F8C4EBE96DA5EB5AD0B3D2D291A7210EDBEA3E (DoorScript_t5012D54C63F69260879B8BDD972C96E1328FDBA0* __this, const RuntimeMethod* method) ;
// System.Void FanRotationScript::ChangeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanRotationScript_ChangeState_m28460BE6D0A19838C470476946AE33123C082976 (FanRotationScript_tF348DD3FC85AF69349050270A90CA38F377469C7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_active()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_active_mAADB8845313470CFA8C2A937543D0B004E035BA5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void SerialController::SetLight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_SetLight_m852F9FA9E96809134CA806FE805334156F5757C3 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, bool ___0_b, const RuntimeMethod* method) ;
// System.Boolean SerialController::GetLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerialController_GetLight_mD05DAD762BF953DDB64C3914EF70801B6F224F23 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.IO.Ports.SerialPort::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort__ctor_m981DE49D76B0FB248F869D97749285D7C72A1194 (SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* __this, String_t* ___0_portName, int32_t ___1_baudRate, const RuntimeMethod* method) ;
// System.Void System.IO.Ports.SerialPort::Open()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_Open_m2DD2C179B7D8123CFDB85A4B3FD8484A5A4380F6 (SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Ports.SerialPort::get_BytesToRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerialPort_get_BytesToRead_mB0E5AA33F4895ED8FAB8284639212604D49D550C (SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* __this, const RuntimeMethod* method) ;
// System.Int32 System.IO.Ports.SerialPort::Read(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerialPort_Read_m5771CFFC5378B6F13F1F38B22E77FEC3F129232E (SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.IO.Ports.SerialPort::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialPort_WriteLine_m39016573AEEF36579A528D299F3C67B72C24B061 (SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// System.Void SerialController::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_SendMessage_m4DBEB6427920DA85F19CDB1C3AEDABFED1304686 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, String_t* ___0_Message, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42 (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::get_activeLoaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator ButtonDoorController::PaseDoorInteraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonDoorController_PaseDoorInteraction_mF83D78A6B73E7F9CDBDE0E4E147BA29CE895E0F6 (ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883* L_0 = (U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883*)il2cpp_codegen_object_new(U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPaseDoorInteractionU3Ed__6__ctor_m306F5A5E50375359A09032E078D70B166D9B085E(L_0, 0, NULL);
		U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ButtonDoorController::PlayAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonDoorController_PlayAnimation_m73F1539B99A5E8E568C8157589D0FC3CA3F8FFA5 (ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (!doorOpen && !pauseIntercation)
		bool L_0 = __this->___doorOpen_5;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = __this->___pauseIntercation_9;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		// doorAnim.Play(openAnimationName,0,0.0f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___doorAnim_4;
		String_t* L_4 = __this->___openAnimationName_6;
		NullCheck(L_3);
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_3, L_4, 0, (0.0f), NULL);
		// doorOpen = true;
		__this->___doorOpen_5 = (bool)1;
		// StartCoroutine(PaseDoorInteraction());
		RuntimeObject* L_5;
		L_5 = ButtonDoorController_PaseDoorInteraction_mF83D78A6B73E7F9CDBDE0E4E147BA29CE895E0F6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		goto IL_008f;
	}

IL_0049:
	{
		// else if (doorOpen && !pauseIntercation)
		bool L_7 = __this->___doorOpen_5;
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		bool L_8 = __this->___pauseIntercation_9;
		G_B8_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B8_0 = 0;
	}

IL_005d:
	{
		V_1 = (bool)G_B8_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_008f;
		}
	}
	{
		// doorAnim.Play(closeAnimationName, 0, 0.0f);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___doorAnim_4;
		String_t* L_11 = __this->___closeAnimationName_7;
		NullCheck(L_10);
		Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744(L_10, L_11, 0, (0.0f), NULL);
		// doorOpen = false;
		__this->___doorOpen_5 = (bool)0;
		// StartCoroutine(PaseDoorInteraction());
		RuntimeObject* L_12;
		L_12 = ButtonDoorController_PaseDoorInteraction_mF83D78A6B73E7F9CDBDE0E4E147BA29CE895E0F6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_12, NULL);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void ButtonDoorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonDoorController__ctor_m15D55F51123CD50F2CA07B8142A676A1402C03CB (ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE677CF16CFC543971DE1B7C0497DE36D595BE94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEF36B6375A694F6D69455DBF7163B7B5247BF42);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] Animator doorAnim = null;
		__this->___doorAnim_4 = (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___doorAnim_4), (void*)(Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*)NULL);
		// private bool doorOpen = false;
		__this->___doorOpen_5 = (bool)0;
		// [SerializeField] string openAnimationName = "DoorOpen";
		__this->___openAnimationName_6 = _stringLiteralCEF36B6375A694F6D69455DBF7163B7B5247BF42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___openAnimationName_6), (void*)_stringLiteralCEF36B6375A694F6D69455DBF7163B7B5247BF42);
		// [SerializeField] string closeAnimationName = "DoorClose";
		__this->___closeAnimationName_7 = _stringLiteralBE677CF16CFC543971DE1B7C0497DE36D595BE94;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___closeAnimationName_7), (void*)_stringLiteralBE677CF16CFC543971DE1B7C0497DE36D595BE94);
		// [SerializeField] int waitTimer = 1;
		__this->___waitTimer_8 = 1;
		// [SerializeField] bool pauseIntercation = false;
		__this->___pauseIntercation_9 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonDoorController/<PaseDoorInteraction>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPaseDoorInteractionU3Ed__6__ctor_m306F5A5E50375359A09032E078D70B166D9B085E (U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ButtonDoorController/<PaseDoorInteraction>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPaseDoorInteractionU3Ed__6_System_IDisposable_Dispose_m3709F1CAE26F5BCBA87BD11AD8F085C645143729 (U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ButtonDoorController/<PaseDoorInteraction>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPaseDoorInteractionU3Ed__6_MoveNext_m1CCFA93C98930D0F0016A5324450015732D722D0 (U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_004c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// pauseIntercation = true;
		ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		L_3->___pauseIntercation_9 = (bool)1;
		// yield return new WaitForSeconds(waitTimer);
		ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		int32_t L_5 = L_4->___waitTimer_8;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, ((float)L_5), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// pauseIntercation = false;
		ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		L_7->___pauseIntercation_9 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object ButtonDoorController/<PaseDoorInteraction>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPaseDoorInteractionU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAFA54B4642D85EA877A923C3F3C3E60503449020 (U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ButtonDoorController/<PaseDoorInteraction>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPaseDoorInteractionU3Ed__6_System_Collections_IEnumerator_Reset_m57EA48D713FD4A14DA1B7B2DA2CBE4CDA8EEE969 (U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPaseDoorInteractionU3Ed__6_System_Collections_IEnumerator_Reset_m57EA48D713FD4A14DA1B7B2DA2CBE4CDA8EEE969_RuntimeMethod_var)));
	}
}
// System.Object ButtonDoorController/<PaseDoorInteraction>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPaseDoorInteractionU3Ed__6_System_Collections_IEnumerator_get_Current_mE215FFC744F9F1E3C3698C90D6902143C614A0E3 (U3CPaseDoorInteractionU3Ed__6_tBE4DE8F1D7F0D8A3ED31701030B6D5231C030883* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonDoorRaycast::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonDoorRaycast_Update_m107064609154CE88A3E248EEAA56E0570B2630C2 (ButtonDoorRaycast_t5AD14DE21ECA91EFD2F387A9EE5A96AE1389F862* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62_m8C194D09278ED5674593EEE69425803158CE721F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09CDD176B7B8CA89DD8FFECF6C2C085B5ECC599F);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// Vector3 fwd = transform.TransformDirection(Vector3.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_0, L_1, NULL);
		V_1 = L_2;
		// int mask = 1 << LayerMask.NameToLayer(exculdeLayerName) | layerMaskInterract.value;
		String_t* L_3 = __this->___exculdeLayerName_6;
		int32_t L_4;
		L_4 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(L_3, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* L_5 = (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)(&__this->___layerMaskInterract_5);
		int32_t L_6;
		L_6 = LayerMask_get_value_m70CBE32210A1F0FD4ECB850285DA90ED57B87974(L_5, NULL);
		V_2 = ((int32_t)(((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))|L_6));
		// if (Physics.Raycast(transform.position, fwd, out hit, rayLength, mask))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_1;
		int32_t L_10 = __this->___rayLength_4;
		int32_t L_11 = V_2;
		bool L_12;
		L_12 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_8, L_9, (&V_0), ((float)L_10), L_11, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_00c8;
		}
	}
	{
		// if (hit.collider.CompareTag(iteractableTag))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_14;
		L_14 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_14, _stringLiteral09CDD176B7B8CA89DD8FFECF6C2C085B5ECC599F, NULL);
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_00c5;
		}
	}
	{
		// if (!doOnce)
		bool L_17 = __this->___doOnce_11;
		V_5 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0097;
		}
	}
	{
		// raycastedObj = hit.collider.gameObject.GetComponent<ButtonDoorController>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_19;
		L_19 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		NullCheck(L_20);
		ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* L_21;
		L_21 = GameObject_GetComponent_TisButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62_m8C194D09278ED5674593EEE69425803158CE721F(L_20, GameObject_GetComponent_TisButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62_m8C194D09278ED5674593EEE69425803158CE721F_RuntimeMethod_var);
		__this->___raycastedObj_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___raycastedObj_7), (void*)L_21);
		// CrosshairChange(true);
		ButtonDoorRaycast_CrosshairChange_m9D69BEB1B9E05221C8E585663D7F9DAA89307023(__this, (bool)1, NULL);
	}

IL_0097:
	{
		// isCrosshairActive = true;
		__this->___isCrosshairActive_10 = (bool)1;
		// doOnce = false;
		__this->___doOnce_11 = (bool)0;
		// if (Input.GetKeyDown(openDoorKey))
		int32_t L_22 = __this->___openDoorKey_8;
		bool L_23;
		L_23 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_22, NULL);
		V_6 = L_23;
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_00c4;
		}
	}
	{
		// raycastedObj.PlayAnimation();
		ButtonDoorController_tA31BB87422EA684C4FE12A0C6472FD9BDD653E62* L_25 = __this->___raycastedObj_7;
		NullCheck(L_25);
		ButtonDoorController_PlayAnimation_m73F1539B99A5E8E568C8157589D0FC3CA3F8FFA5(L_25, NULL);
	}

IL_00c4:
	{
	}

IL_00c5:
	{
		goto IL_00e7;
	}

IL_00c8:
	{
		// if (isCrosshairActive)
		bool L_26 = __this->___isCrosshairActive_10;
		V_7 = L_26;
		bool L_27 = V_7;
		if (!L_27)
		{
			goto IL_00e6;
		}
	}
	{
		// CrosshairChange(false);
		ButtonDoorRaycast_CrosshairChange_m9D69BEB1B9E05221C8E585663D7F9DAA89307023(__this, (bool)0, NULL);
		// doOnce = false;
		__this->___doOnce_11 = (bool)0;
	}

IL_00e6:
	{
	}

IL_00e7:
	{
		// }
		return;
	}
}
// System.Void ButtonDoorRaycast::CrosshairChange(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonDoorRaycast_CrosshairChange_m9D69BEB1B9E05221C8E585663D7F9DAA89307023 (ButtonDoorRaycast_t5AD14DE21ECA91EFD2F387A9EE5A96AE1389F862* __this, bool ___0_on, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (on && !doOnce)
		bool L_0 = ___0_on;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = __this->___doOnce_11;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 0;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// crosshair.color = Color.red;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___crosshair_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		goto IL_0043;
	}

IL_0029:
	{
		// crosshair.color = Color.white;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___crosshair_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// isCrosshairActive = false;
		__this->___isCrosshairActive_10 = (bool)0;
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void ButtonDoorRaycast::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonDoorRaycast__ctor_mF8A4827A39ACF896BC00420DDB9D611E915E8681 (ButtonDoorRaycast_t5AD14DE21ECA91EFD2F387A9EE5A96AE1389F862* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private int rayLength = 5;
		__this->___rayLength_4 = 5;
		// [SerializeField] private string exculdeLayerName = null;
		__this->___exculdeLayerName_6 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exculdeLayerName_6), (void*)(String_t*)NULL);
		// private KeyCode openDoorKey = KeyCode.Mouse0;
		__this->___openDoorKey_8 = ((int32_t)323);
		// private Image crosshair = null;
		__this->___crosshair_9 = (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crosshair_9), (void*)(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)NULL);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DoorScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorScript_Start_m4102808B5B774B569C7F138C8965CB8EFD375CF9 (DoorScript_t5012D54C63F69260879B8BDD972C96E1328FDBA0* __this, const RuntimeMethod* method) 
{
	{
		// initialRotation = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		__this->___initialRotation_9 = L_1;
		// DoorClose.SetActive(true); DoorOpen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___DoorClose_11;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// DoorClose.SetActive(true); DoorOpen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___DoorOpen_10;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DoorScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorScript_Update_mABBB5B26EE541635387F2A98BA698867C2604D22 (DoorScript_t5012D54C63F69260879B8BDD972C96E1328FDBA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		// if (isOpening)
		bool L_0 = __this->___isOpening_5;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0097;
		}
	}
	{
		// progress += Time.deltaTime * 0.5f;
		float L_2 = __this->___progress_8;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___progress_8 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_3, (0.5f)))));
		// transform.eulerAngles = initialRotation + Vector3.forward * progress * 100;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___initialRotation_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_7 = __this->___progress_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, (100.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_9, NULL);
		NullCheck(L_4);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_4, L_10, NULL);
		// if (progress >= 1)
		float L_11 = __this->___progress_8;
		V_1 = (bool)((((int32_t)((!(((float)L_11) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0096;
		}
	}
	{
		// isOpen = true;
		__this->___isOpen_4 = (bool)1;
		// isOpening = false;
		__this->___isOpening_5 = (bool)0;
		// DoorOpen.SetActive(true); DoorClose.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___DoorOpen_10;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// DoorOpen.SetActive(true); DoorClose.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___DoorClose_11;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
	}

IL_0096:
	{
	}

IL_0097:
	{
		// if (isClosing)
		bool L_15 = __this->___isClosing_6;
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_0133;
		}
	}
	{
		// progress += Time.deltaTime * 0.5f;
		float L_17 = __this->___progress_8;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___progress_8 = ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(L_18, (0.5f)))));
		// transform.eulerAngles = initialRotation + Vector3.forward * (1 - progress) * 100;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___initialRotation_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_22 = __this->___progress_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, ((float)il2cpp_codegen_subtract((1.0f), L_22)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, (100.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_24, NULL);
		NullCheck(L_19);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_19, L_25, NULL);
		// if (progress >= 1)
		float L_26 = __this->___progress_8;
		V_3 = (bool)((((int32_t)((!(((float)L_26) >= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_3;
		if (!L_27)
		{
			goto IL_0132;
		}
	}
	{
		// isClosed = true;
		__this->___isClosed_7 = (bool)1;
		// isClosing = false;
		__this->___isClosing_6 = (bool)0;
		// DoorClose.SetActive(true); DoorOpen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___DoorClose_11;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// DoorClose.SetActive(true); DoorOpen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___DoorOpen_10;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)0, NULL);
	}

IL_0132:
	{
	}

IL_0133:
	{
		// if (!SerialController.instance.GetDoor() && isOpen)
		SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* L_30 = ((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10;
		NullCheck(L_30);
		bool L_31;
		L_31 = SerialController_GetDoor_m6C196612D778E8D76C9E45D05E4E8CA2BFDF6A5B(L_30, NULL);
		if (L_31)
		{
			goto IL_0147;
		}
	}
	{
		bool L_32 = __this->___isOpen_4;
		G_B11_0 = ((int32_t)(L_32));
		goto IL_0148;
	}

IL_0147:
	{
		G_B11_0 = 0;
	}

IL_0148:
	{
		V_4 = (bool)G_B11_0;
		bool L_33 = V_4;
		if (!L_33)
		{
			goto IL_016b;
		}
	}
	{
		// progress = 0;
		__this->___progress_8 = (0.0f);
		// isClosing = true;
		__this->___isClosing_6 = (bool)1;
		// isOpen = false;
		__this->___isOpen_4 = (bool)0;
		goto IL_01a1;
	}

IL_016b:
	{
		// else if (SerialController.instance.GetDoor() && isClosed)
		SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* L_34 = ((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10;
		NullCheck(L_34);
		bool L_35;
		L_35 = SerialController_GetDoor_m6C196612D778E8D76C9E45D05E4E8CA2BFDF6A5B(L_34, NULL);
		if (!L_35)
		{
			goto IL_017f;
		}
	}
	{
		bool L_36 = __this->___isClosed_7;
		G_B16_0 = ((int32_t)(L_36));
		goto IL_0180;
	}

IL_017f:
	{
		G_B16_0 = 0;
	}

IL_0180:
	{
		V_5 = (bool)G_B16_0;
		bool L_37 = V_5;
		if (!L_37)
		{
			goto IL_01a1;
		}
	}
	{
		// progress = 0;
		__this->___progress_8 = (0.0f);
		// isOpening = true;
		__this->___isOpening_5 = (bool)1;
		// isClosed = false;
		__this->___isClosed_7 = (bool)0;
	}

IL_01a1:
	{
		// }
		return;
	}
}
// System.Void DoorScript::ChangeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorScript_ChangeState_m68F8C4EBE96DA5EB5AD0B3D2D291A7210EDBEA3E (DoorScript_t5012D54C63F69260879B8BDD972C96E1328FDBA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// progress = 0;
		__this->___progress_8 = (0.0f);
		// if (isOpen)
		bool L_0 = __this->___isOpen_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// isClosing = true;
		__this->___isClosing_6 = (bool)1;
		// isOpen = false;
		__this->___isOpen_4 = (bool)0;
		// SerialController.instance.SetDoor(false);
		SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* L_2 = ((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10;
		NullCheck(L_2);
		SerialController_SetDoor_m0558FF7E77DD23E76F4A1A2BA1AE259B21182DB6(L_2, (bool)0, NULL);
	}

IL_0032:
	{
		// if (isClosed)
		bool L_3 = __this->___isClosed_7;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// isOpening = true;
		__this->___isOpening_5 = (bool)1;
		// isClosed = false;
		__this->___isClosed_7 = (bool)0;
		// SerialController.instance.SetDoor(true);
		SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* L_5 = ((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10;
		NullCheck(L_5);
		SerialController_SetDoor_m0558FF7E77DD23E76F4A1A2BA1AE259B21182DB6(L_5, (bool)1, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void DoorScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoorScript__ctor_m2BC788BDB5425EACE4DC74A4D13C7AA443313755 (DoorScript_t5012D54C63F69260879B8BDD972C96E1328FDBA0* __this, const RuntimeMethod* method) 
{
	{
		// private bool isOpen = false;
		__this->___isOpen_4 = (bool)0;
		// private bool isOpening = false;
		__this->___isOpening_5 = (bool)0;
		// private bool isClosing = false;
		__this->___isClosing_6 = (bool)0;
		// private bool isClosed = true;
		__this->___isClosed_7 = (bool)1;
		// private float progress = 0;
		__this->___progress_8 = (0.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void FanRotationScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanRotationScript_Start_m39438EDE6EAC824CAB71C3B82721105291A16FA8 (FanRotationScript_tF348DD3FC85AF69349050270A90CA38F377469C7* __this, const RuntimeMethod* method) 
{
	{
		// FanOff.SetActive(true); FanOn.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___FanOff_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// FanOff.SetActive(true); FanOn.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___FanOn_7;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FanRotationScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanRotationScript_Update_mFF03E99C241182973682E565EACD69D01A3EC17C (FanRotationScript_tF348DD3FC85AF69349050270A90CA38F377469C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (isOn)
		bool L_0 = __this->___isOn_4;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0050;
		}
	}
	{
		// fanBlades.eulerAngles += Vector3.forward * speed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___fanBlades_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_6 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_7, NULL);
		NullCheck(L_3);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_3, L_8, NULL);
		// FanOff.SetActive(false); FanOn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___FanOff_8;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// FanOff.SetActive(false); FanOn.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___FanOn_7;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)1, NULL);
		goto IL_006c;
	}

IL_0050:
	{
		// else { FanOff.SetActive(true); FanOn.SetActive(false); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___FanOff_8;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// else { FanOff.SetActive(true); FanOn.SetActive(false); }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___FanOn_7;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
	}

IL_006c:
	{
		// isOn = SerialController.instance.GetFan();
		SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* L_13 = ((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10;
		NullCheck(L_13);
		bool L_14;
		L_14 = SerialController_GetFan_mFA3A49AF18BF585E1728DCF7711D4CFF94840C9B(L_13, NULL);
		__this->___isOn_4 = L_14;
		// }
		return;
	}
}
// System.Void FanRotationScript::ChangeState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanRotationScript_ChangeState_m28460BE6D0A19838C470476946AE33123C082976 (FanRotationScript_tF348DD3FC85AF69349050270A90CA38F377469C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isOn = !isOn;
		bool L_0 = __this->___isOn_4;
		__this->___isOn_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// SerialController.instance.SetFan(isOn);
		SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* L_1 = ((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10;
		bool L_2 = __this->___isOn_4;
		NullCheck(L_1);
		SerialController_SetFan_m92E8DEE963A42F7C15399EA0B4E9068F93883325(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void FanRotationScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FanRotationScript__ctor_m001F8EF5586807C97D8F89F282A3E591B84FE8B2 (FanRotationScript_tF348DD3FC85AF69349050270A90CA38F377469C7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// GetComponent<Rigidbody>().MovePosition(transform.position + Time.deltaTime * speed * (transform.right * Input.GetAxis("Horizontal") + transform.forward * Input.GetAxis("Vertical")));
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_4 = __this->___speed_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_5, NULL);
		float L_7;
		L_7 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		float L_11;
		L_11 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_3, L_4)), L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_14, NULL);
		NullCheck(L_0);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_0, L_15, NULL);
		// transform.RotateAround(transform.position, Vector3.up, rotationSpeed * Input.GetAxis("Mouse X"));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_20 = __this->___rotationSpeed_5;
		float L_21;
		L_21 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		NullCheck(L_16);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_16, L_18, L_19, ((float)il2cpp_codegen_multiply(L_20, L_21)), NULL);
		// cameraTransform.RotateAround(cameraTransform.position, transform.right, - rotationSpeed * Input.GetAxis("Mouse Y"));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___cameraTransform_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = __this->___cameraTransform_6;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_25, NULL);
		float L_27 = __this->___rotationSpeed_5;
		float L_28;
		L_28 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		NullCheck(L_22);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_22, L_24, L_26, ((float)il2cpp_codegen_multiply(((-L_27)), L_28)), NULL);
		// if (Input.GetMouseButtonDown(0))
		bool L_29;
		L_29 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		V_0 = L_29;
		bool L_30 = V_0;
		if (!L_30)
		{
			goto IL_0104;
		}
	}
	{
		// if (nearDoor)
		bool L_31 = __this->___nearDoor_11;
		V_1 = L_31;
		bool L_32 = V_1;
		if (!L_32)
		{
			goto IL_00eb;
		}
	}
	{
		// door.ChangeState();
		DoorScript_t5012D54C63F69260879B8BDD972C96E1328FDBA0* L_33 = __this->___door_7;
		NullCheck(L_33);
		DoorScript_ChangeState_m68F8C4EBE96DA5EB5AD0B3D2D291A7210EDBEA3E(L_33, NULL);
	}

IL_00eb:
	{
		// if (nearFan)
		bool L_34 = __this->___nearFan_13;
		V_2 = L_34;
		bool L_35 = V_2;
		if (!L_35)
		{
			goto IL_0103;
		}
	}
	{
		// Fan.ChangeState();
		FanRotationScript_tF348DD3FC85AF69349050270A90CA38F377469C7* L_36 = __this->___Fan_10;
		NullCheck(L_36);
		FanRotationScript_ChangeState_m28460BE6D0A19838C470476946AE33123C082976(L_36, NULL);
	}

IL_0103:
	{
	}

IL_0104:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_37;
		L_37 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(1, NULL);
		V_3 = L_37;
		bool L_38 = V_3;
		if (!L_38)
		{
			goto IL_015a;
		}
	}
	{
		// SerialController.instance.SetLight(LampOff.active);
		SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* L_39 = ((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___LampOff_9;
		NullCheck(L_40);
		bool L_41;
		L_41 = GameObject_get_active_mAADB8845313470CFA8C2A937543D0B004E035BA5(L_40, NULL);
		NullCheck(L_39);
		SerialController_SetLight_m852F9FA9E96809134CA806FE805334156F5757C3(L_39, L_41, NULL);
		// LampOff.SetActive(!LampOff.active);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___LampOff_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___LampOff_9;
		NullCheck(L_43);
		bool L_44;
		L_44 = GameObject_get_active_mAADB8845313470CFA8C2A937543D0B004E035BA5(L_43, NULL);
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)((((int32_t)L_44) == ((int32_t)0))? 1 : 0), NULL);
		// LampOn.SetActive(!LampOn.active);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___LampOn_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___LampOn_8;
		NullCheck(L_46);
		bool L_47;
		L_47 = GameObject_get_active_mAADB8845313470CFA8C2A937543D0B004E035BA5(L_46, NULL);
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0), NULL);
	}

IL_015a:
	{
		// LampOn.SetActive(SerialController.instance.GetLight());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___LampOn_8;
		SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* L_49 = ((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10;
		NullCheck(L_49);
		bool L_50;
		L_50 = SerialController_GetLight_mD05DAD762BF953DDB64C3914EF70801B6F224F23(L_49, NULL);
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, L_50, NULL);
		// LampOff.SetActive(!SerialController.instance.GetLight());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___LampOff_9;
		SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* L_52 = ((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10;
		NullCheck(L_52);
		bool L_53;
		L_53 = SerialController_GetLight_mD05DAD762BF953DDB64C3914EF70801B6F224F23(L_52, NULL);
		NullCheck(L_51);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_51, (bool)((((int32_t)L_53) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerEnter_mF2704872AEA62333341DCBEA2831320C385701D1 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6A5A384EECF5A297D00E8FD89F9C83BAE2FE3B7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (other.tag == "Door")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// nearDoor = true;
		__this->___nearDoor_11 = (bool)1;
	}

IL_001c:
	{
		// if (other.tag == "Fan")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___0_other;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralD6A5A384EECF5A297D00E8FD89F9C83BAE2FE3B7, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		// nearFan = true;
		__this->___nearFan_13 = (bool)1;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerExit_m0A2DB7CCC3CDB222AAF6BCE476CCEEBFDF3FC136 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6A5A384EECF5A297D00E8FD89F9C83BAE2FE3B7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (other.tag == "Door")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral8FBF8AA6D7A72EEACFB864E4DB1AC71C83F59437, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// nearDoor = false;
		__this->___nearDoor_11 = (bool)0;
	}

IL_001c:
	{
		// if (other.tag == "Fan")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___0_other;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralD6A5A384EECF5A297D00E8FD89F9C83BAE2FE3B7, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		// nearFan = false;
		__this->___nearFan_13 = (bool)0;
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SerialController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_Awake_m13AAF8FAA357A06A20EF5A217B5835476F9D5346 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (SerialController.instance)
		SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* L_0 = ((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(__this, NULL);
		goto IL_0022;
	}

IL_001a:
	{
		// instance = this;
		((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_StaticFields*)il2cpp_codegen_static_fields_for(SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5_il2cpp_TypeInfo_var))->___instance_10), (void*)__this);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void SerialController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_Start_m98C262969149DC47B8ED4BC4EC4CC773DD0C0C9E (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// serialPort = new SerialPort(portName, baudRate);
		String_t* L_0 = __this->___portName_5;
		int32_t L_1 = __this->___baudRate_6;
		SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* L_2 = (SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82*)il2cpp_codegen_object_new(SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SerialPort__ctor_m981DE49D76B0FB248F869D97749285D7C72A1194(L_2, L_0, L_1, NULL);
		__this->___serialPort_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___serialPort_4), (void*)L_2);
		// serialPort.Open();
		SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* L_3 = __this->___serialPort_4;
		NullCheck(L_3);
		SerialPort_Open_m2DD2C179B7D8123CFDB85A4B3FD8484A5A4380F6(L_3, NULL);
		// }
		return;
	}
}
// System.Void SerialController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_Update_mEBD45C752D44248AEE8D12B55E2373ED67186824 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41AAFF06156E0BD2663FCB778053AA3EE0C9C87F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4AD7A10CDB715D301CA4BFEFAB979BE8A29384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61880A1355496A86BBC29466D07CD4E030DDF2E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF2FE4A21A81E3C8C4231F80B91F505F94E7E61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral927834408855B1B6E964A41EC36BB9F4FB56A10D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEB19E302FE1AE63409B153BE49B02418BAD4579);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	String_t* V_2 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B3_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B4_1 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B6_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B7_1 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B9_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B10_1 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B12_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B11_0 = NULL;
	int32_t G_B13_0 = 0;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B13_1 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B15_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B14_0 = NULL;
	int32_t G_B16_0 = 0;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B16_1 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B18_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B19_1 = NULL;
	{
		// if (serialPort.BytesToRead > 0)
		SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* L_0 = __this->___serialPort_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SerialPort_get_BytesToRead_mB0E5AA33F4895ED8FAB8284639212604D49D550C(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00ee;
		}
	}
	{
		// char[] dataIn = new char[serialPort.BytesToRead];
		SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* L_3 = __this->___serialPort_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SerialPort_get_BytesToRead_mB0E5AA33F4895ED8FAB8284639212604D49D550C(L_3, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		// serialPort.Read(dataIn, 0, 5);
		SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* L_6 = __this->___serialPort_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = SerialPort_Read_m5771CFFC5378B6F13F1F38B22E77FEC3F129232E(L_6, L_7, 0, 5, NULL);
		// string data = new string(dataIn);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = V_1;
		String_t* L_10;
		L_10 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_9, NULL);
		V_2 = L_10;
		// lightOn = data == "L 1 0" ? false : lightOn;
		String_t* L_11 = V_2;
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralFEB19E302FE1AE63409B153BE49B02418BAD4579, NULL);
		G_B2_0 = __this;
		if (L_12)
		{
			G_B3_0 = __this;
			goto IL_0054;
		}
	}
	{
		bool L_13 = __this->___lightOn_7;
		G_B4_0 = ((int32_t)(L_13));
		G_B4_1 = G_B2_0;
		goto IL_0055;
	}

IL_0054:
	{
		G_B4_0 = 0;
		G_B4_1 = G_B3_0;
	}

IL_0055:
	{
		NullCheck(G_B4_1);
		G_B4_1->___lightOn_7 = (bool)G_B4_0;
		// lightOn = data == "L 1 1" ? true : lightOn;
		String_t* L_14 = V_2;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral41AAFF06156E0BD2663FCB778053AA3EE0C9C87F, NULL);
		G_B5_0 = __this;
		if (L_15)
		{
			G_B6_0 = __this;
			goto IL_0070;
		}
	}
	{
		bool L_16 = __this->___lightOn_7;
		G_B7_0 = ((int32_t)(L_16));
		G_B7_1 = G_B5_0;
		goto IL_0071;
	}

IL_0070:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0071:
	{
		NullCheck(G_B7_1);
		G_B7_1->___lightOn_7 = (bool)G_B7_0;
		// fanOn = data == "F 1 0" ? false : fanOn;
		String_t* L_17 = V_2;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteral927834408855B1B6E964A41EC36BB9F4FB56A10D, NULL);
		G_B8_0 = __this;
		if (L_18)
		{
			G_B9_0 = __this;
			goto IL_008c;
		}
	}
	{
		bool L_19 = __this->___fanOn_8;
		G_B10_0 = ((int32_t)(L_19));
		G_B10_1 = G_B8_0;
		goto IL_008d;
	}

IL_008c:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_008d:
	{
		NullCheck(G_B10_1);
		G_B10_1->___fanOn_8 = (bool)G_B10_0;
		// fanOn = data == "F 1 1" ? true : fanOn;
		String_t* L_20 = V_2;
		bool L_21;
		L_21 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_20, _stringLiteral8BF2FE4A21A81E3C8C4231F80B91F505F94E7E61, NULL);
		G_B11_0 = __this;
		if (L_21)
		{
			G_B12_0 = __this;
			goto IL_00a8;
		}
	}
	{
		bool L_22 = __this->___fanOn_8;
		G_B13_0 = ((int32_t)(L_22));
		G_B13_1 = G_B11_0;
		goto IL_00a9;
	}

IL_00a8:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
	}

IL_00a9:
	{
		NullCheck(G_B13_1);
		G_B13_1->___fanOn_8 = (bool)G_B13_0;
		// doorOpen = data == "D 1 0" ? false : doorOpen;
		String_t* L_23 = V_2;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral61880A1355496A86BBC29466D07CD4E030DDF2E7, NULL);
		G_B14_0 = __this;
		if (L_24)
		{
			G_B15_0 = __this;
			goto IL_00c4;
		}
	}
	{
		bool L_25 = __this->___doorOpen_9;
		G_B16_0 = ((int32_t)(L_25));
		G_B16_1 = G_B14_0;
		goto IL_00c5;
	}

IL_00c4:
	{
		G_B16_0 = 0;
		G_B16_1 = G_B15_0;
	}

IL_00c5:
	{
		NullCheck(G_B16_1);
		G_B16_1->___doorOpen_9 = (bool)G_B16_0;
		// doorOpen = data == "D 1 1" ? true : doorOpen;
		String_t* L_26 = V_2;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral5A4AD7A10CDB715D301CA4BFEFAB979BE8A29384, NULL);
		G_B17_0 = __this;
		if (L_27)
		{
			G_B18_0 = __this;
			goto IL_00e0;
		}
	}
	{
		bool L_28 = __this->___doorOpen_9;
		G_B19_0 = ((int32_t)(L_28));
		G_B19_1 = G_B17_0;
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B19_0 = 1;
		G_B19_1 = G_B18_0;
	}

IL_00e1:
	{
		NullCheck(G_B19_1);
		G_B19_1->___doorOpen_9 = (bool)G_B19_0;
		// Debug.Log(data);
		String_t* L_29 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_29, NULL);
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void SerialController::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_SendMessage_m4DBEB6427920DA85F19CDB1C3AEDABFED1304686 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, String_t* ___0_Message, const RuntimeMethod* method) 
{
	{
		// serialPort.WriteLine(Message);
		SerialPort_t4443B0B7B94397C8CD2E0C3534510613EBA2DD82* L_0 = __this->___serialPort_4;
		String_t* L_1 = ___0_Message;
		NullCheck(L_0);
		SerialPort_WriteLine_m39016573AEEF36579A528D299F3C67B72C24B061(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void SerialController::SetLight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_SetLight_m852F9FA9E96809134CA806FE805334156F5757C3 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, bool ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41AAFF06156E0BD2663FCB778053AA3EE0C9C87F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEB19E302FE1AE63409B153BE49B02418BAD4579);
		s_Il2CppMethodInitialized = true;
	}
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B2_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B3_1 = NULL;
	{
		// SendMessage(b ? "L 1 1" : "L 1 0");
		bool L_0 = ___0_b;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = _stringLiteralFEB19E302FE1AE63409B153BE49B02418BAD4579;
		G_B3_1 = G_B1_0;
		goto IL_0011;
	}

IL_000c:
	{
		G_B3_0 = _stringLiteral41AAFF06156E0BD2663FCB778053AA3EE0C9C87F;
		G_B3_1 = G_B2_0;
	}

IL_0011:
	{
		NullCheck(G_B3_1);
		SerialController_SendMessage_m4DBEB6427920DA85F19CDB1C3AEDABFED1304686(G_B3_1, G_B3_0, NULL);
		// lightOn = b;
		bool L_1 = ___0_b;
		__this->___lightOn_7 = L_1;
		// }
		return;
	}
}
// System.Void SerialController::SetFan(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_SetFan_m92E8DEE963A42F7C15399EA0B4E9068F93883325 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, bool ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BF2FE4A21A81E3C8C4231F80B91F505F94E7E61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral927834408855B1B6E964A41EC36BB9F4FB56A10D);
		s_Il2CppMethodInitialized = true;
	}
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B2_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B3_1 = NULL;
	{
		// SendMessage(b ? "F 1 1" : "F 1 0");
		bool L_0 = ___0_b;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = _stringLiteral927834408855B1B6E964A41EC36BB9F4FB56A10D;
		G_B3_1 = G_B1_0;
		goto IL_0011;
	}

IL_000c:
	{
		G_B3_0 = _stringLiteral8BF2FE4A21A81E3C8C4231F80B91F505F94E7E61;
		G_B3_1 = G_B2_0;
	}

IL_0011:
	{
		NullCheck(G_B3_1);
		SerialController_SendMessage_m4DBEB6427920DA85F19CDB1C3AEDABFED1304686(G_B3_1, G_B3_0, NULL);
		// fanOn = b;
		bool L_1 = ___0_b;
		__this->___fanOn_8 = L_1;
		// }
		return;
	}
}
// System.Void SerialController::SetDoor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController_SetDoor_m0558FF7E77DD23E76F4A1A2BA1AE259B21182DB6 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, bool ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A4AD7A10CDB715D301CA4BFEFAB979BE8A29384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61880A1355496A86BBC29466D07CD4E030DDF2E7);
		s_Il2CppMethodInitialized = true;
	}
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B2_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* G_B3_1 = NULL;
	{
		// SendMessage(b ? "D 1 1" : "D 1 0");
		bool L_0 = ___0_b;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_000c;
		}
	}
	{
		G_B3_0 = _stringLiteral61880A1355496A86BBC29466D07CD4E030DDF2E7;
		G_B3_1 = G_B1_0;
		goto IL_0011;
	}

IL_000c:
	{
		G_B3_0 = _stringLiteral5A4AD7A10CDB715D301CA4BFEFAB979BE8A29384;
		G_B3_1 = G_B2_0;
	}

IL_0011:
	{
		NullCheck(G_B3_1);
		SerialController_SendMessage_m4DBEB6427920DA85F19CDB1C3AEDABFED1304686(G_B3_1, G_B3_0, NULL);
		// doorOpen = b;
		bool L_1 = ___0_b;
		__this->___doorOpen_9 = L_1;
		// }
		return;
	}
}
// System.Boolean SerialController::GetDoor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerialController_GetDoor_m6C196612D778E8D76C9E45D05E4E8CA2BFDF6A5B (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool GetDoor() { return doorOpen; }
		bool L_0 = __this->___doorOpen_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool GetDoor() { return doorOpen; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean SerialController::GetLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerialController_GetLight_mD05DAD762BF953DDB64C3914EF70801B6F224F23 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool GetLight() { return lightOn; }
		bool L_0 = __this->___lightOn_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool GetLight() { return lightOn; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean SerialController::GetFan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerialController_GetFan_mFA3A49AF18BF585E1728DCF7711D4CFF94840C9B (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public bool GetFan() { return fanOn; }
		bool L_0 = __this->___fanOn_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// public bool GetFan() { return fanOn; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void SerialController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialController__ctor_m010DC19B59E244CD6A21616450452DB711C6CB17 (SerialController_t313DBF7A5B6CDFDCF88AF42C6E33740DBD7D21E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string portName = "COM3";
		__this->___portName_5 = _stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___portName_5), (void*)_stringLiteral89062EDEDEC92709DBEFFC3A01B9BEAFAB44BDDA);
		// public int baudRate = 9600;
		__this->___baudRate_6 = ((int32_t)9600);
		// public bool lightOn = false;
		__this->___lightOn_7 = (bool)0;
		// public bool fanOn = false;
		__this->___fanOn_8 = (bool)0;
		// public bool doorOpen = false;
		__this->___doorOpen_9 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Template.VR.XRPlatformControllerSetup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup_Start_m1F22FCA29DFD83DC0E343C3F391D04A7C52085BF (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* V_2 = NULL;
	bool V_3 = false;
	{
		// var loaders = XRGeneralSettings.Instance.Manager.activeLoaders;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline(L_1, NULL);
		V_0 = L_2;
		// foreach (var loader in loaders)
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.XR.Management.XRLoader>::GetEnumerator() */, IEnumerable_1_t468455E75DD3CE53FB1BEFFBDB5DBB1C5905801C_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0078:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0082;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0082:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006e_1;
			}

IL_001b_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8;
				L_8 = InterfaceFuncInvoker0< XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.XR.Management.XRLoader>::get_Current() */, IEnumerator_1_tE9023775CE757CAAA4A054FB61980FF18EC394AE_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				// if (loader.name.Equals("Oculus Loader"))
				XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_9, NULL);
				NullCheck(L_10);
				bool L_11;
				L_11 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_10, _stringLiteralB87CC029578F0C6F88E01A8257EBF1ED95223CEC, NULL);
				V_3 = L_11;
				bool L_12 = V_3;
				if (!L_12)
				{
					goto IL_006d_1;
				}
			}
			{
				// m_RightController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___m_RightController_5;
				NullCheck(L_13);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
				// m_LeftController.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___m_LeftController_4;
				NullCheck(L_14);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
				// m_RightControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___m_RightControllerOculusPackage_7;
				NullCheck(L_15);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
				// m_LeftControllerOculusPackage.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___m_LeftControllerOculusPackage_6;
				NullCheck(L_16);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
			}

IL_006d_1:
			{
			}

IL_006e_1:
			{
				// foreach (var loader in loaders)
				RuntimeObject* L_17 = V_1;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_001b_1;
				}
			}
			{
				goto IL_0083;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Unity.Template.VR.XRPlatformControllerSetup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRPlatformControllerSetup__ctor_mF9A3998AF90962CF8F35BAF2221558BDF5F6596E (XRPlatformControllerSetup_tF3241056E2DD26648305E205151EB2ACF3333628* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_get_activeLoaders_m47D0FF16B7012A87F56D93124DC5D8DA0ACA591F_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<XRLoader> activeLoaders => m_Loaders;
		List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* L_0 = __this->___m_Loaders_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
