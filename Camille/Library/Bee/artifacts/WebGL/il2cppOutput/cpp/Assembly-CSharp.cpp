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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A;
// System.Collections.Generic.List`1<InputRecord>
struct List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// InputRecord[]
struct InputRecordU5BU5D_t1FE015398737D87B4C2586B1FEA83993F46E5DAC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// Cammy
struct Cammy_t9F015B182C526309C2D55B05A106244D9D07ACAC;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// CustomGravity
struct CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// InputRecord
struct InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0;
// InputRecorder
struct InputRecorder_tC83DEB8B001CA837BCBEB1BD52C362428CD170AE;
// InputReplayer
struct InputReplayer_t535D2ADBEFD016B8FE6CCF529CEF8E19BBEA5CE4;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// RealCamera
struct RealCamera_t36B80081120C4E3B6FC1C14505EACFEF7B2F087D;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// Spike
struct Spike_tE2995A831D81660FEDD0C545A214B999F90B459E;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// VictoryBlock
struct VictoryBlock_t801103DF97EA6B054971CB9C9E6783387BA5CA25;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GameManager/OnGameOver
struct OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885;
// GameManager/OnVictory
struct OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral38EECE806622DB26EFE4970A3DAD654A26F844BA;
IL2CPP_EXTERN_C String_t* _stringLiteral39388BEF2B159E43E20C3FD7B44E23E3B9F3705C;
IL2CPP_EXTERN_C String_t* _stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50;
IL2CPP_EXTERN_C String_t* _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9;
IL2CPP_EXTERN_C String_t* _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9;
IL2CPP_EXTERN_C String_t* _stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9;
IL2CPP_EXTERN_C String_t* _stringLiteralC87125AEB7E8331B3023392D77F893ED9FB9F143;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralED83D34413F6CE43C735171330348E73CB8A7D2A;
IL2CPP_EXTERN_C const RuntimeMethod* Cammy_OnGameOver_mE174EB2522FAD688FA3B8379E697D95C2083D782_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Cammy_OnVictory_m0AAD03763A6A0F5844608746BDC6B263295AD6CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONTool_ReadData_TisInputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_m07ED5DE4B0CC3454F8F04851EB32A596A13ABF1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JSONTool_WriteData_TisInputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_m9F16512976D4E71AB426784EDE37B1FFFCDD3449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7BC4B7B2520B0F9112DD0B01E0254D17934A116B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA7688F63E9F8ECDAD4E7578F15DAE8BD9B669BF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerController_OnGameOver_m0E8356313AE3002BCC9A424932CCB78FBF3F9924_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

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

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<InputRecord>
struct List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputRecordU5BU5D_t1FE015398737D87B4C2586B1FEA83993F46E5DAC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// InputRecord
struct InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Int32> InputRecord::aPress
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___aPress_0;
	// System.Collections.Generic.List`1<System.Int32> InputRecord::dPress
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___dPress_1;
	// System.Collections.Generic.List`1<System.Int32> InputRecord::spacePress
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___spacePress_2;
};

// JSONTool
struct JSONTool_t3339DE2A242144F3D473C782189C691BAF6AF8A5  : public RuntimeObject
{
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
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

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
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

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// GameManager/OnGameOver
struct OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885  : public MulticastDelegate_t
{
};

// GameManager/OnVictory
struct OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource AudioManager::_jumpSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____jumpSource_4;
	// UnityEngine.AudioSource AudioManager::_victorySource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____victorySource_5;
	// UnityEngine.AudioSource AudioManager::_gameOverSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ____gameOverSource_6;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Cammy
struct Cammy_t9F015B182C526309C2D55B05A106244D9D07ACAC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Cammy::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_4;
	// UnityEngine.GameObject Cammy::_cubey
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____cubey_5;
	// System.Single Cammy::SecondsToDeath
	float ___SecondsToDeath_6;
	// TMPro.TMP_Text Cammy::_countdownText
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ____countdownText_7;
	// PlayerController Cammy::_playerController
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ____playerController_8;
};

// CustomGravity
struct CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single CustomGravity::gravityScale
	float ___gravityScale_4;
	// UnityEngine.Rigidbody CustomGravity::m_rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_rb_6;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GameManager::GameIsOver
	bool ___GameIsOver_7;
};

// InputRecorder
struct InputRecorder_tC83DEB8B001CA837BCBEB1BD52C362428CD170AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// InputRecord InputRecorder::InputRecord
	InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* ___InputRecord_4;
	// System.String InputRecorder::fileName
	String_t* ___fileName_5;
	// System.Collections.Generic.List`1<System.Boolean> InputRecorder::aPress
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___aPress_6;
	// System.Collections.Generic.List`1<System.Boolean> InputRecorder::dPress
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___dPress_7;
	// System.Collections.Generic.List`1<System.Boolean> InputRecorder::spacePress
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* ___spacePress_8;
};

// InputReplayer
struct InputReplayer_t535D2ADBEFD016B8FE6CCF529CEF8E19BBEA5CE4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlayerController InputReplayer::_playerController
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ____playerController_4;
	// System.Int32 InputReplayer::CurrentRecordIndex
	int32_t ___CurrentRecordIndex_5;
	// System.Collections.Generic.List`1<InputRecord> InputReplayer::_records
	List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* ____records_6;
	// System.Int32 InputReplayer::_maxFrames
	int32_t ____maxFrames_7;
	// System.Boolean InputReplayer::aPressed
	bool ___aPressed_8;
	// System.Boolean InputReplayer::dPressed
	bool ___dPressed_9;
	// System.Boolean InputReplayer::spacePressed
	bool ___spacePressed_10;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody PlayerController::_rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ____rb_4;
	// UnityEngine.Collider PlayerController::_collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____collider_5;
	// System.Single PlayerController::_jumpForce
	float ____jumpForce_6;
	// System.Single PlayerController::_acceleration
	float ____acceleration_7;
	// System.Single PlayerController::_maxSpeed
	float ____maxSpeed_8;
	// System.Boolean PlayerController::_replaying
	bool ____replaying_9;
	// System.Single PlayerController::_fastFallForce
	float ____fastFallForce_10;
	// CustomGravity PlayerController::_customGravity
	CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67* ____customGravity_11;
	// System.Single PlayerController::_highGravityScale
	float ____highGravityScale_12;
	// System.Single PlayerController::_lowGravityScale
	float ____lowGravityScale_13;
	// System.Single PlayerController::_coyoteTime
	float ____coyoteTime_14;
	// System.Single PlayerController::TimeSinceGrounded
	float ___TimeSinceGrounded_15;
	// System.Boolean PlayerController::IsJumping
	bool ___IsJumping_16;
	// System.Boolean PlayerController::IsGrounded
	bool ___IsGrounded_17;
	// System.Boolean PlayerController::FastFalling
	bool ___FastFalling_18;
};

// RealCamera
struct RealCamera_t36B80081120C4E3B6FC1C14505EACFEF7B2F087D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject RealCamera::_cammy
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____cammy_4;
	// UnityEngine.Vector3 RealCamera::_offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____offset_5;
};

// Spike
struct Spike_tE2995A831D81660FEDD0C545A214B999F90B459E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.BoxCollider Spike::_boxCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____boxCollider_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VictoryBlock
struct VictoryBlock_t801103DF97EA6B054971CB9C9E6783387BA5CA25  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.BoxCollider VictoryBlock::_boxCollider
	BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* ____boxCollider_4;
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

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Boolean>

// System.Collections.Generic.List`1<InputRecord>
struct List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputRecordU5BU5D_t1FE015398737D87B4C2586B1FEA83993F46E5DAC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<InputRecord>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// InputRecord

// InputRecord

// JSONTool

// JSONTool

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// System.IO.Path

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

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

// UnityEngine.Collision

// UnityEngine.Collision

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// GameManager/OnGameOver

// GameManager/OnGameOver

// GameManager/OnVictory

// GameManager/OnVictory

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields
{
	// AudioManager AudioManager::s_instance
	AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* ___s_instance_7;
};

// AudioManager

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// Cammy

// Cammy

// CustomGravity
struct CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67_StaticFields
{
	// System.Single CustomGravity::globalGravity
	float ___globalGravity_5;
};

// CustomGravity

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::s_instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___s_instance_4;
	// GameManager/OnGameOver GameManager::e_OnGameOver
	OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* ___e_OnGameOver_5;
	// GameManager/OnVictory GameManager::e_OnVictory
	OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* ___e_OnVictory_6;
};

// GameManager

// InputRecorder

// InputRecorder

// InputReplayer

// InputReplayer

// PlayerController

// PlayerController

// RealCamera

// RealCamera

// Spike

// Spike

// VictoryBlock

// VictoryBlock

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) ;
// T JSONTool::ReadData<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONTool_ReadData_TisRuntimeObject_m302D9C84B0DF1B469FEE67D6E3B0D160ED6591FE_gshared (String_t* ___0_fileName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179_gshared (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) ;
// System.Void JSONTool::WriteData<System.Object>(JSONData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONTool_WriteData_TisRuntimeObject_mC775CB6E7518B632929970AEF0A2D9504C3727DA_gshared (RuntimeObject* ___0_data, String_t* ___1_fileName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void GameManager::Victory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Victory_mF18580848267BE6FC7BA6EC8340ED91D4461605D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void AudioManager::PlayVictory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayVictory_mEC671218EF8DD2ABB6D672F9AF852059D6F4D84F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// System.Void GameManager/OnGameOver::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGameOver__ctor_mA77D41F89A0469BCFCFC62C35A224025687CB7B6 (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GameManager::add_e_OnGameOver(GameManager/OnGameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_e_OnGameOver_m323DB4CDDD334B8F04F188D5676D975511431006 (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* ___0_value, const RuntimeMethod* method) ;
// System.Void GameManager/OnVictory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVictory__ctor_mEC79E04CB74C21D531CA05C554F6993DA86B88D6 (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GameManager::add_e_OnVictory(GameManager/OnVictory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_e_OnVictory_mFFF31B3FEC9636E8EA67FBE14F46121343DD7A85 (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* ___0_value, const RuntimeMethod* method) ;
// System.Void GameManager::remove_e_OnGameOver(GameManager/OnGameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_e_OnGameOver_m9FCC2F1B13D4A21472C1B9F8FE1B42D2B1F26536 (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* ___0_value, const RuntimeMethod* method) ;
// System.Void GameManager::remove_e_OnVictory(GameManager/OnVictory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_e_OnVictory_m9F40C76EBF48FFE632CCE0F8ED64F0527EEF3BE7 (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void PlayerController::StopMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StopMoving_mFC899B19D5C4A2ACC1BA52FA1D02C1A22BD019FA (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void GameManager/OnGameOver::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_inline (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, const RuntimeMethod* method) ;
// System.Void AudioManager::PlayGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayGameOver_m6FA7403934E277ACAB637B732F1F19CBD1E8275F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void GameManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Restart_mCAD4B8EB332D65D94F493AD96956EC1777DC3854 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void GameManager/OnVictory::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_inline (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, const RuntimeMethod* method) ;
// System.Void GameManager::LoadNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LoadNextLevel_m4B0B6CEE8676085703A73D053730728EF02ED8FD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void InputRecord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecord__ctor_m1F01B172FF62B35FF8D10D2327B830EEEF16EB6E (InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
inline void List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_gshared)(__this, method);
}
// T JSONTool::ReadData<InputRecord>(System.String)
inline InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* JSONTool_ReadData_TisInputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_m07ED5DE4B0CC3454F8F04851EB32A596A13ABF1B (String_t* ___0_fileName, const RuntimeMethod* method)
{
	return ((  InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* (*) (String_t*, const RuntimeMethod*))JSONTool_ReadData_TisRuntimeObject_m302D9C84B0DF1B469FEE67D6E3B0D160ED6591FE_gshared)(___0_fileName, method);
}
// InputRecord InputRecord::CreateNewFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* InputRecord_CreateNewFile_m69E4F1447BC0403ED7170CDE912730E0A022ED18 (InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(T)
inline void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, bool, const RuntimeMethod*))List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline)(__this, ___0_item, method);
}
// System.Void InputRecorder::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecorder_Save_mD11F4E8023C5AE46F9F650D5F885B639FBA9B84C (InputRecorder_tC83DEB8B001CA837BCBEB1BD52C362428CD170AE* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
inline bool List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179 (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, int32_t, const RuntimeMethod*))List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline)(__this, ___0_item, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
inline int32_t List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_gshared_inline)(__this, method);
}
// System.Void JSONTool::WriteData<InputRecord>(JSONData,System.String)
inline void JSONTool_WriteData_TisInputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_m9F16512976D4E71AB426784EDE37B1FFFCDD3449 (InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* ___0_data, String_t* ___1_fileName, const RuntimeMethod* method)
{
	((  void (*) (InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0*, String_t*, const RuntimeMethod*))JSONTool_WriteData_TisRuntimeObject_mC775CB6E7518B632929970AEF0A2D9504C3727DA_gshared)(___0_data, ___1_fileName, method);
}
// System.Void System.Collections.Generic.List`1<InputRecord>::.ctor()
inline void List_1__ctor_mA7688F63E9F8ECDAD4E7578F15DAE8BD9B669BF0 (List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<InputRecord>::Add(T)
inline void List_1_Add_m7BC4B7B2520B0F9112DD0B01E0254D17934A116B_inline (List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* __this, InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0*, InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Ground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Ground_mD8A04EBFE1EDBF227B2B7BFE93143EB4BDC2837B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::CheckJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CheckJump_m0448B9FF64E79016EFAD1DA312FA88304E552B27 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::FastFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FastFall_m0CCB01A7D4F5A041FCDD66F973D2BD77E604533E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::MoveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveLeft_m35C99AF42CF84424196F7C3D7DEEA7B6C7428508 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::MoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveRight_m98678E680E583355C2152EC52D96B29487067F5C (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Boolean PlayerController::CheckGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_CheckGrounded_mE977111C038A822DAEF246FB9A8C3F299279543E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void InputReplayer::UpdateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputReplayer_UpdateButtons_m1657BE1D486F43D849BCA16BEFAEDF229D402A6B (InputReplayer_t535D2ADBEFD016B8FE6CCF529CEF8E19BBEA5CE4* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<InputRecord>::get_Item(System.Int32)
inline InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270 (List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* (*) (List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
inline void List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___0_index, method);
}
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void PlayerController::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Jump_mA1AE5FDC39F88F78568A88C4CF6D08FDC6D7E908 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, const RuntimeMethod* method) ;
// System.Void AudioManager::PlayJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayJump_mC9F9C13C5C2ADDAA2E5C354198EC04D7FF3FB9F8 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
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
// System.Void AudioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Awake_m8138BCED4D692C83C95626A1A09AB46EA5205569 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject.DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// s_instance = this;
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___s_instance_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___s_instance_7), (void*)__this);
		// }
		return;
	}
}
// System.Void AudioManager::PlayJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayJump_mC9F9C13C5C2ADDAA2E5C354198EC04D7FF3FB9F8 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// _jumpSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____jumpSource_4;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::PlayVictory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayVictory_mEC671218EF8DD2ABB6D672F9AF852059D6F4D84F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// _victorySource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____victorySource_5;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::PlayGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayGameOver_m6FA7403934E277ACAB637B732F1F19CBD1E8275F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// _gameOverSource.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->____gameOverSource_6;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_mA793A9DF6B975D03690B7C953972EFE41AE4D5E6 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
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
// System.Void RealCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealCamera_Start_mF31FF3FE6283301F583F43560BA43317B5B4AEA5 (RealCamera_t36B80081120C4E3B6FC1C14505EACFEF7B2F087D* __this, const RuntimeMethod* method) 
{
	{
		// _offset = transform.position - _cammy.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____cammy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_4, NULL);
		__this->____offset_5 = L_5;
		// }
		return;
	}
}
// System.Void RealCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealCamera_Update_m08FEB04D351869FF632A701DB73E11CFAE00214C (RealCamera_t36B80081120C4E3B6FC1C14505EACFEF7B2F087D* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = _cammy.transform.position + _offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->____cammy_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->____offset_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void RealCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RealCamera__ctor_m0D95C1E2D036BCB2F35EAFCBC4969648A04F4803 (RealCamera_t36B80081120C4E3B6FC1C14505EACFEF7B2F087D* __this, const RuntimeMethod* method) 
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
// System.Void Spike::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spike_OnCollisionEnter_m0134388246FFF20CE8429D14DDB665DF9EF408DF (Spike_tE2995A831D81660FEDD0C545A214B999F90B459E* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag.Equals("Player")) {
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// GameManager.s_instance.GameOver();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___s_instance_4;
		GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625(L_4, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Spike::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spike__ctor_m39A1E86084873D20D422C13174083CA09BC4C842 (Spike_tE2995A831D81660FEDD0C545A214B999F90B459E* __this, const RuntimeMethod* method) 
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
// System.Void VictoryBlock::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VictoryBlock_OnCollisionEnter_m576B697CD77D2B218336E0ED827AB0B5287E6A46 (VictoryBlock_t801103DF97EA6B054971CB9C9E6783387BA5CA25* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC87125AEB7E8331B3023392D77F893ED9FB9F143);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Collision");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralC87125AEB7E8331B3023392D77F893ED9FB9F143, NULL);
		// if (collision.gameObject.tag.Equals("Player")) {
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// GameManager.s_instance.Victory();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___s_instance_4;
		GameManager_Victory_mF18580848267BE6FC7BA6EC8340ED91D4461605D(L_4, NULL);
		// AudioManager.s_instance.PlayVictory();
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_5 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___s_instance_7;
		AudioManager_PlayVictory_mEC671218EF8DD2ABB6D672F9AF852059D6F4D84F(L_5, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void VictoryBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VictoryBlock__ctor_mB342DE34D4E98AF30AA106F808BFF3319C1D0116 (VictoryBlock_t801103DF97EA6B054971CB9C9E6783387BA5CA25* __this, const RuntimeMethod* method) 
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
// System.Void Cammy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cammy_Start_mD40BD142AB013710CE5A4C905BD68E2309D22A10 (Cammy_t9F015B182C526309C2D55B05A106244D9D07ACAC* __this, const RuntimeMethod* method) 
{
	{
		// SecondsToDeath = 3f;
		__this->___SecondsToDeath_6 = (3.0f);
		// }
		return;
	}
}
// System.Void Cammy::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cammy_OnEnable_m3361E725B5B51B39E7089FDBB982487560695C62 (Cammy_t9F015B182C526309C2D55B05A106244D9D07ACAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cammy_OnGameOver_mE174EB2522FAD688FA3B8379E697D95C2083D782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cammy_OnVictory_m0AAD03763A6A0F5844608746BDC6B263295AD6CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.e_OnGameOver += OnGameOver;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_0 = (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*)il2cpp_codegen_object_new(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var);
		OnGameOver__ctor_mA77D41F89A0469BCFCFC62C35A224025687CB7B6(L_0, __this, (intptr_t)((void*)Cammy_OnGameOver_mE174EB2522FAD688FA3B8379E697D95C2083D782_RuntimeMethod_var), NULL);
		GameManager_add_e_OnGameOver_m323DB4CDDD334B8F04F188D5676D975511431006(L_0, NULL);
		// GameManager.e_OnVictory += OnVictory;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_1 = (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD*)il2cpp_codegen_object_new(OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD_il2cpp_TypeInfo_var);
		OnVictory__ctor_mEC79E04CB74C21D531CA05C554F6993DA86B88D6(L_1, __this, (intptr_t)((void*)Cammy_OnVictory_m0AAD03763A6A0F5844608746BDC6B263295AD6CC_RuntimeMethod_var), NULL);
		GameManager_add_e_OnVictory_mFFF31B3FEC9636E8EA67FBE14F46121343DD7A85(L_1, NULL);
		// }
		return;
	}
}
// System.Void Cammy::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cammy_OnDisable_m02FB266CC1F856B423380DDE34366983D35BD1DB (Cammy_t9F015B182C526309C2D55B05A106244D9D07ACAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cammy_OnGameOver_mE174EB2522FAD688FA3B8379E697D95C2083D782_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Cammy_OnVictory_m0AAD03763A6A0F5844608746BDC6B263295AD6CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.e_OnGameOver -= OnGameOver;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_0 = (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*)il2cpp_codegen_object_new(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var);
		OnGameOver__ctor_mA77D41F89A0469BCFCFC62C35A224025687CB7B6(L_0, __this, (intptr_t)((void*)Cammy_OnGameOver_mE174EB2522FAD688FA3B8379E697D95C2083D782_RuntimeMethod_var), NULL);
		GameManager_remove_e_OnGameOver_m9FCC2F1B13D4A21472C1B9F8FE1B42D2B1F26536(L_0, NULL);
		// GameManager.e_OnVictory -= OnVictory;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_1 = (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD*)il2cpp_codegen_object_new(OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD_il2cpp_TypeInfo_var);
		OnVictory__ctor_mEC79E04CB74C21D531CA05C554F6993DA86B88D6(L_1, __this, (intptr_t)((void*)Cammy_OnVictory_m0AAD03763A6A0F5844608746BDC6B263295AD6CC_RuntimeMethod_var), NULL);
		GameManager_remove_e_OnVictory_m9F40C76EBF48FFE632CCE0F8ED64F0527EEF3BE7(L_1, NULL);
		// }
		return;
	}
}
// System.Void Cammy::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cammy_FixedUpdate_m3F07ECF587D9DC69FA85D21BE8D4461846DA729B (Cammy_t9F015B182C526309C2D55B05A106244D9D07ACAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39388BEF2B159E43E20C3FD7B44E23E3B9F3705C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (GameManager.s_instance.GameIsOver) {
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___s_instance_4;
		bool L_1 = L_0->___GameIsOver_7;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// Vector2 cubeyPosition = _camera.WorldToViewportPoint(_cubey.transform.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->____camera_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____cubey_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_2, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		V_0 = L_7;
		// if (cubeyPosition.x < -0.01 || cubeyPosition.x > 1.01 || cubeyPosition.y < -0.01 || cubeyPosition.y > 1.01 ||
		//     (Physics.Raycast(_camera.transform.position, _cubey.transform.position - _camera.transform.position, out RaycastHit hit, 200f) && !hit.collider.gameObject.name.Equals("Cubey"))) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___x_0;
		if ((((double)((double)L_9)) < ((double)(-0.01))))
		{
			goto IL_00dc;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___x_0;
		if ((((double)((double)L_11)) > ((double)(1.01))))
		{
			goto IL_00dc;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		float L_13 = L_12.___y_1;
		if ((((double)((double)L_13)) < ((double)(-0.01))))
		{
			goto IL_00dc;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		float L_15 = L_14.___y_1;
		if ((((double)((double)L_15)) > ((double)(1.01))))
		{
			goto IL_00dc;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->____camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->____cubey_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = __this->____camera_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_21, L_24, NULL);
		bool L_26;
		L_26 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_18, L_25, (&V_1), (200.0f), NULL);
		if (!L_26)
		{
			goto IL_010b;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_27;
		L_27 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		String_t* L_29;
		L_29 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_28, NULL);
		bool L_30;
		L_30 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_29, _stringLiteral39388BEF2B159E43E20C3FD7B44E23E3B9F3705C, NULL);
		if (L_30)
		{
			goto IL_010b;
		}
	}

IL_00dc:
	{
		// SecondsToDeath -= Time.deltaTime;
		float L_31 = __this->___SecondsToDeath_6;
		float L_32;
		L_32 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___SecondsToDeath_6 = ((float)il2cpp_codegen_subtract(L_31, L_32));
		// _countdownText.text = SecondsToDeath.ToString("F3");
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_33 = __this->____countdownText_7;
		float* L_34 = (&__this->___SecondsToDeath_6);
		String_t* L_35;
		L_35 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_34, _stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_33, L_35);
		goto IL_0126;
	}

IL_010b:
	{
		// SecondsToDeath = 3f;
		__this->___SecondsToDeath_6 = (3.0f);
		// _countdownText.text = "";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_36 = __this->____countdownText_7;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_36, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_0126:
	{
		// if (SecondsToDeath <= 0.0f) {
		float L_37 = __this->___SecondsToDeath_6;
		if ((!(((float)L_37) <= ((float)(0.0f)))))
		{
			goto IL_013d;
		}
	}
	{
		// GameManager.s_instance.GameOver();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_38 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___s_instance_4;
		GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625(L_38, NULL);
	}

IL_013d:
	{
		// }
		return;
	}
}
// System.Void Cammy::OnGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cammy_OnGameOver_mE174EB2522FAD688FA3B8379E697D95C2083D782 (Cammy_t9F015B182C526309C2D55B05A106244D9D07ACAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38EECE806622DB26EFE4970A3DAD654A26F844BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _countdownText.text = "Game Over\nPress R to Restart";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____countdownText_7;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteral38EECE806622DB26EFE4970A3DAD654A26F844BA);
		// _playerController.StopMoving();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->____playerController_8;
		PlayerController_StopMoving_mFC899B19D5C4A2ACC1BA52FA1D02C1A22BD019FA(L_1, NULL);
		// }
		return;
	}
}
// System.Void Cammy::OnVictory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cammy_OnVictory_m0AAD03763A6A0F5844608746BDC6B263295AD6CC (Cammy_t9F015B182C526309C2D55B05A106244D9D07ACAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED83D34413F6CE43C735171330348E73CB8A7D2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _countdownText.text = "You Win!";
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->____countdownText_7;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_0, _stringLiteralED83D34413F6CE43C735171330348E73CB8A7D2A);
		// _playerController.StopMoving();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = __this->____playerController_8;
		PlayerController_StopMoving_mFC899B19D5C4A2ACC1BA52FA1D02C1A22BD019FA(L_1, NULL);
		// }
		return;
	}
}
// System.Void Cammy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cammy__ctor_m1288A0E0CFF6DC9B7AE5E6E4189CB9CAA68E85FD (Cammy_t9F015B182C526309C2D55B05A106244D9D07ACAC* __this, const RuntimeMethod* method) 
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
// System.Void CustomGravity::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomGravity_OnEnable_mFACCB53C90EF32B6423B36E7757EFF1495D276C7 (CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___m_rb_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rb_6), (void*)L_0);
		// m_rb.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___m_rb_6;
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CustomGravity::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomGravity_FixedUpdate_m414BB89921D2F427E39256DC0F7222B6005CE4B4 (CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 gravity = globalGravity * gravityScale * Vector3.up;
		il2cpp_codegen_runtime_class_init_inline(CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67_il2cpp_TypeInfo_var);
		float L_0 = ((CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67_StaticFields*)il2cpp_codegen_static_fields_for(CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67_il2cpp_TypeInfo_var))->___globalGravity_5;
		float L_1 = __this->___gravityScale_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2, NULL);
		V_0 = L_3;
		// m_rb.AddForce(gravity, ForceMode.Acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___m_rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_4, L_5, 5, NULL);
		// }
		return;
	}
}
// System.Void CustomGravity::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomGravity__ctor_m7DF2FDDC09CF59E37EC591C342F6D5377F053D2F (CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67* __this, const RuntimeMethod* method) 
{
	{
		// public float gravityScale = 1.0f;
		__this->___gravityScale_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void CustomGravity::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomGravity__cctor_mA4C0C7FDBB2C829AC58CA663D29BE0F93C83E4B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float globalGravity = -9.81f;
		((CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67_StaticFields*)il2cpp_codegen_static_fields_for(CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67_il2cpp_TypeInfo_var))->___globalGravity_5 = (-9.81000042f);
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
// System.Void GameManager::add_e_OnGameOver(GameManager/OnGameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_e_OnGameOver_m323DB4CDDD334B8F04F188D5676D975511431006 (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* V_0 = NULL;
	OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* V_1 = NULL;
	OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* V_2 = NULL;
	{
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___e_OnGameOver_5;
		V_0 = L_0;
	}

IL_0006:
	{
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_1 = V_0;
		V_1 = L_1;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_2 = V_1;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*)CastclassSealed((RuntimeObject*)L_4, OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var));
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_5 = V_2;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_6 = V_1;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___e_OnGameOver_5), L_5, L_6);
		V_0 = L_7;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_8 = V_0;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*)L_8) == ((RuntimeObject*)(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::remove_e_OnGameOver(GameManager/OnGameOver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_e_OnGameOver_m9FCC2F1B13D4A21472C1B9F8FE1B42D2B1F26536 (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* V_0 = NULL;
	OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* V_1 = NULL;
	OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* V_2 = NULL;
	{
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___e_OnGameOver_5;
		V_0 = L_0;
	}

IL_0006:
	{
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_1 = V_0;
		V_1 = L_1;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_2 = V_1;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*)CastclassSealed((RuntimeObject*)L_4, OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var));
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_5 = V_2;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_6 = V_1;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___e_OnGameOver_5), L_5, L_6);
		V_0 = L_7;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_8 = V_0;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*)L_8) == ((RuntimeObject*)(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::add_e_OnVictory(GameManager/OnVictory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_add_e_OnVictory_mFFF31B3FEC9636E8EA67FBE14F46121343DD7A85 (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* V_0 = NULL;
	OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* V_1 = NULL;
	OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* V_2 = NULL;
	{
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___e_OnVictory_6;
		V_0 = L_0;
	}

IL_0006:
	{
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_1 = V_0;
		V_1 = L_1;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_2 = V_1;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD*)CastclassSealed((RuntimeObject*)L_4, OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD_il2cpp_TypeInfo_var));
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_5 = V_2;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_6 = V_1;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___e_OnVictory_6), L_5, L_6);
		V_0 = L_7;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_8 = V_0;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD*)L_8) == ((RuntimeObject*)(OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::remove_e_OnVictory(GameManager/OnVictory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_remove_e_OnVictory_m9F40C76EBF48FFE632CCE0F8ED64F0527EEF3BE7 (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* V_0 = NULL;
	OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* V_1 = NULL;
	OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* V_2 = NULL;
	{
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___e_OnVictory_6;
		V_0 = L_0;
	}

IL_0006:
	{
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_1 = V_0;
		V_1 = L_1;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_2 = V_1;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD*)CastclassSealed((RuntimeObject*)L_4, OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD_il2cpp_TypeInfo_var));
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_5 = V_2;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_6 = V_1;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD*>((&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___e_OnVictory_6), L_5, L_6);
		V_0 = L_7;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_8 = V_0;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD*)L_8) == ((RuntimeObject*)(OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___s_instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___s_instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* G_B2_0 = NULL;
	OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* G_B1_0 = NULL;
	{
		// e_OnGameOver?.Invoke();
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___e_OnGameOver_5;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0010;
	}

IL_000b:
	{
		OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_inline(G_B2_0, NULL);
	}

IL_0010:
	{
		// GameIsOver = true;
		__this->___GameIsOver_7 = (bool)1;
		// AudioManager.s_instance.PlayGameOver();
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_2 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___s_instance_7;
		AudioManager_PlayGameOver_m6FA7403934E277ACAB637B732F1F19CBD1E8275F(L_2, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.R)) {
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)114), NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// Restart();
		GameManager_Restart_mCAD4B8EB332D65D94F493AD96956EC1777DC3854(__this, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void GameManager::Victory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Victory_mF18580848267BE6FC7BA6EC8340ED91D4461605D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* G_B3_0 = NULL;
	OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* G_B2_0 = NULL;
	{
		// if (SceneManager.GetActiveScene().name.Equals("4")) {
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_1, _stringLiteral7454695E25D304C65D0C1333D8008E862569CAE9, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// e_OnVictory?.Invoke();
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_3 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___e_OnVictory_6;
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_0024;
		}
	}
	{
		goto IL_0029;
	}

IL_0024:
	{
		OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_inline(G_B3_0, NULL);
	}

IL_0029:
	{
		// GameIsOver = true;
		__this->___GameIsOver_7 = (bool)1;
		return;
	}

IL_0031:
	{
		// LoadNextLevel();
		GameManager_LoadNextLevel_m4B0B6CEE8676085703A73D053730728EF02ED8FD(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::LoadNextLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LoadNextLevel_m4B0B6CEE8676085703A73D053730728EF02ED8FD (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void GameManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Restart_mCAD4B8EB332D65D94F493AD96956EC1777DC3854 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_1, NULL);
		// GameIsOver = false;
		__this->___GameIsOver_7 = (bool)0;
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
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
void OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_Multicast(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* currentDelegate = reinterpret_cast<OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_OpenInst(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_OpenStatic(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_OpenStaticInvoker(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_ClosedStaticInvoker(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885 (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameManager/OnGameOver::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGameOver__ctor_mA77D41F89A0469BCFCFC62C35A224025687CB7B6 (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_Multicast;
}
// System.Void GameManager/OnGameOver::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameManager/OnGameOver::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnGameOver_BeginInvoke_mCE4915A539410F742009FEA73483CD1CDA07E4A5 (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void GameManager/OnGameOver::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnGameOver_EndInvoke_m42B6877DCDEBC2E7B36817453A21A6A5CBC648FB (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_Multicast(OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* currentDelegate = reinterpret_cast<OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_OpenInst(OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_OpenStatic(OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_OpenStaticInvoker(OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_ClosedStaticInvoker(OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameManager/OnVictory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVictory__ctor_mEC79E04CB74C21D531CA05C554F6993DA86B88D6 (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_Multicast;
}
// System.Void GameManager/OnVictory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7 (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameManager/OnVictory::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnVictory_BeginInvoke_mCBDCDDC804EE913F2B4394D9F0A05BAAD79708F6 (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void GameManager/OnVictory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnVictory_EndInvoke_mC69764D0109667AD3727AE66CB8F79506DE7DD11 (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// InputRecord InputRecord::CreateNewFile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* InputRecord_CreateNewFile_m69E4F1447BC0403ED7170CDE912730E0A022ED18 (InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InputRecord inputRecord = new InputRecord();
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_0 = (InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0*)il2cpp_codegen_object_new(InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_il2cpp_TypeInfo_var);
		InputRecord__ctor_m1F01B172FF62B35FF8D10D2327B830EEEF16EB6E(L_0, NULL);
		// inputRecord.aPress = new List<int>();
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_1 = L_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_2 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_2, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		L_1->___aPress_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___aPress_0), (void*)L_2);
		// inputRecord.dPress = new List<int>();
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_3 = L_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_4, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		L_3->___dPress_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___dPress_1), (void*)L_4);
		// inputRecord.spacePress = new List<int>();
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_5 = L_3;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_6, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		L_5->___spacePress_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___spacePress_2), (void*)L_6);
		// return inputRecord;
		return L_5;
	}
}
// System.Void InputRecord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecord__ctor_m1F01B172FF62B35FF8D10D2327B830EEEF16EB6E (InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void InputRecorder::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecorder_Start_m20B0BA1DE6F563EC676095A596C3A89EAEC21B8B (InputRecorder_tC83DEB8B001CA837BCBEB1BD52C362428CD170AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONTool_ReadData_TisInputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_m07ED5DE4B0CC3454F8F04851EB32A596A13ABF1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// aPress = new List<bool>();
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_0 = (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)il2cpp_codegen_object_new(List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953(L_0, List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var);
		__this->___aPress_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aPress_6), (void*)L_0);
		// dPress = new List<bool>();
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_1 = (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)il2cpp_codegen_object_new(List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953(L_1, List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var);
		__this->___dPress_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dPress_7), (void*)L_1);
		// spacePress = new List<bool>();
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_2 = (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)il2cpp_codegen_object_new(List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_il2cpp_TypeInfo_var);
		List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953(L_2, List_1__ctor_m87539832B82A3453971F3BCC702C7346E8D3F953_RuntimeMethod_var);
		__this->___spacePress_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spacePress_8), (void*)L_2);
		// InputRecord inputRecord = JSONTool.ReadData<InputRecord>(fileName);
		String_t* L_3 = __this->___fileName_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_4;
		L_4 = JSONTool_ReadData_TisInputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_m07ED5DE4B0CC3454F8F04851EB32A596A13ABF1B(L_3, JSONTool_ReadData_TisInputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_m07ED5DE4B0CC3454F8F04851EB32A596A13ABF1B_RuntimeMethod_var);
		// InputRecord = new InputRecord();
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_5 = (InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0*)il2cpp_codegen_object_new(InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_il2cpp_TypeInfo_var);
		InputRecord__ctor_m1F01B172FF62B35FF8D10D2327B830EEEF16EB6E(L_5, NULL);
		__this->___InputRecord_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InputRecord_4), (void*)L_5);
		// InputRecord = InputRecord.CreateNewFile();
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_6 = __this->___InputRecord_4;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_7;
		L_7 = InputRecord_CreateNewFile_m69E4F1447BC0403ED7170CDE912730E0A022ED18(L_6, NULL);
		__this->___InputRecord_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___InputRecord_4), (void*)L_7);
		// }
		return;
	}
}
// System.Void InputRecorder::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecorder_FixedUpdate_m3FE9D98D77AFFAEA6C1CD9343C103C4C82E8A54F (InputRecorder_tC83DEB8B001CA837BCBEB1BD52C362428CD170AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKey(KeyCode.A)) {
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// aPress.Add(true);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_1 = __this->___aPress_6;
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_1, (bool)1, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		goto IL_0023;
	}

IL_0017:
	{
		// aPress.Add(false);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_2 = __this->___aPress_6;
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_2, (bool)0, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
	}

IL_0023:
	{
		// if (Input.GetKey(KeyCode.D)) {
		bool L_3;
		L_3 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// dPress.Add(true);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_4 = __this->___dPress_7;
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_4, (bool)1, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		goto IL_0046;
	}

IL_003a:
	{
		// dPress.Add(false);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_5 = __this->___dPress_7;
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_5, (bool)0, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
	}

IL_0046:
	{
		// if (Input.GetKey(KeyCode.Space)) {
		bool L_6;
		L_6 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)32), NULL);
		if (!L_6)
		{
			goto IL_005c;
		}
	}
	{
		// spacePress.Add(true);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_7 = __this->___spacePress_8;
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_7, (bool)1, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		return;
	}

IL_005c:
	{
		// spacePress.Add(false);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_8 = __this->___spacePress_8;
		List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_inline(L_8, (bool)0, List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void InputRecorder::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecorder_OnApplicationQuit_mCCCF4A9F17C0D6494A8F0342BD1CFA47963F4AD5 (InputRecorder_tC83DEB8B001CA837BCBEB1BD52C362428CD170AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Quit");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50, NULL);
		// Save();
		InputRecorder_Save_mD11F4E8023C5AE46F9F650D5F885B639FBA9B84C(__this, NULL);
		// }
		return;
	}
}
// System.Void InputRecorder::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecorder_Save_mD11F4E8023C5AE46F9F650D5F885B639FBA9B84C (InputRecorder_tC83DEB8B001CA837BCBEB1BD52C362428CD170AE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONTool_WriteData_TisInputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_m9F16512976D4E71AB426784EDE37B1FFFCDD3449_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int count = 1;
		V_0 = 1;
		// for (int i = 1; i < aPress.Count; i++) {
		V_1 = 1;
		goto IL_003f;
	}

IL_0006:
	{
		// if (aPress[i] == aPress[i-1]) {
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_0 = __this->___aPress_6;
		int32_t L_1 = V_1;
		bool L_2;
		L_2 = List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179(L_0, L_1, List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179_RuntimeMethod_var);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_3 = __this->___aPress_6;
		int32_t L_4 = V_1;
		bool L_5;
		L_5 = List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, 1)), List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179_RuntimeMethod_var);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_5))))
		{
			goto IL_0028;
		}
	}
	{
		// count++;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		goto IL_003b;
	}

IL_0028:
	{
		// InputRecord.aPress.Add(count);
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_7 = __this->___InputRecord_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = L_7->___aPress_0;
		int32_t L_9 = V_0;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_8, L_9, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// count = 1;
		V_0 = 1;
	}

IL_003b:
	{
		// for (int i = 1; i < aPress.Count; i++) {
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003f:
	{
		// for (int i = 1; i < aPress.Count; i++) {
		int32_t L_11 = V_1;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_12 = __this->___aPress_6;
		int32_t L_13;
		L_13 = List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline(L_12, List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0006;
		}
	}
	{
		// InputRecord.aPress.Add(count);
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_14 = __this->___InputRecord_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_15 = L_14->___aPress_0;
		int32_t L_16 = V_0;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_15, L_16, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// count = 1;
		V_0 = 1;
		// for (int i = 1; i < dPress.Count; i++) {
		V_2 = 1;
		goto IL_009d;
	}

IL_0064:
	{
		// if (dPress[i] == dPress[i-1]) {
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_17 = __this->___dPress_7;
		int32_t L_18 = V_2;
		bool L_19;
		L_19 = List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179(L_17, L_18, List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179_RuntimeMethod_var);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_20 = __this->___dPress_7;
		int32_t L_21 = V_2;
		bool L_22;
		L_22 = List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179(L_20, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179_RuntimeMethod_var);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_22))))
		{
			goto IL_0086;
		}
	}
	{
		// count++;
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		goto IL_0099;
	}

IL_0086:
	{
		// InputRecord.dPress.Add(count);
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_24 = __this->___InputRecord_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_25 = L_24->___dPress_1;
		int32_t L_26 = V_0;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_25, L_26, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// count = 1;
		V_0 = 1;
	}

IL_0099:
	{
		// for (int i = 1; i < dPress.Count; i++) {
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_009d:
	{
		// for (int i = 1; i < dPress.Count; i++) {
		int32_t L_28 = V_2;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_29 = __this->___dPress_7;
		int32_t L_30;
		L_30 = List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline(L_29, List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0064;
		}
	}
	{
		// InputRecord.dPress.Add(count);
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_31 = __this->___InputRecord_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_32 = L_31->___dPress_1;
		int32_t L_33 = V_0;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_32, L_33, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// count = 1;
		V_0 = 1;
		// for (int i = 1; i < spacePress.Count; i++) {
		V_3 = 1;
		goto IL_00fb;
	}

IL_00c2:
	{
		// if (spacePress[i] == spacePress[i - 1]) {
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_34 = __this->___spacePress_8;
		int32_t L_35 = V_3;
		bool L_36;
		L_36 = List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179(L_34, L_35, List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179_RuntimeMethod_var);
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_37 = __this->___spacePress_8;
		int32_t L_38 = V_3;
		bool L_39;
		L_39 = List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179(L_37, ((int32_t)il2cpp_codegen_subtract(L_38, 1)), List_1_get_Item_m876910864A81E4E2ACB93266B50ADFBE8262C179_RuntimeMethod_var);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_39))))
		{
			goto IL_00e4;
		}
	}
	{
		// count++;
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
		goto IL_00f7;
	}

IL_00e4:
	{
		// InputRecord.spacePress.Add(count);
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_41 = __this->___InputRecord_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_42 = L_41->___spacePress_2;
		int32_t L_43 = V_0;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_42, L_43, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// count = 1;
		V_0 = 1;
	}

IL_00f7:
	{
		// for (int i = 1; i < spacePress.Count; i++) {
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00fb:
	{
		// for (int i = 1; i < spacePress.Count; i++) {
		int32_t L_45 = V_3;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_46 = __this->___spacePress_8;
		int32_t L_47;
		L_47 = List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_inline(L_46, List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_RuntimeMethod_var);
		if ((((int32_t)L_45) < ((int32_t)L_47)))
		{
			goto IL_00c2;
		}
	}
	{
		// InputRecord.spacePress.Add(count);
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_48 = __this->___InputRecord_4;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_49 = L_48->___spacePress_2;
		int32_t L_50 = V_0;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_49, L_50, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		// JSONTool.WriteData(InputRecord, fileName);
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_51 = __this->___InputRecord_4;
		String_t* L_52 = __this->___fileName_5;
		JSONTool_WriteData_TisInputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_m9F16512976D4E71AB426784EDE37B1FFFCDD3449(L_51, L_52, JSONTool_WriteData_TisInputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_m9F16512976D4E71AB426784EDE37B1FFFCDD3449_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void InputRecorder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputRecorder__ctor_mB219A15B01DD7290BF487B1F530FCD8E764D1215 (InputRecorder_tC83DEB8B001CA837BCBEB1BD52C362428CD170AE* __this, const RuntimeMethod* method) 
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
// System.Void InputReplayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputReplayer_Start_mD8D799A29935F0CC13DCDED4E3D9363B4A42D001 (InputReplayer_t535D2ADBEFD016B8FE6CCF529CEF8E19BBEA5CE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7BC4B7B2520B0F9112DD0B01E0254D17934A116B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA7688F63E9F8ECDAD4E7578F15DAE8BD9B669BF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* V_0 = NULL;
	InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* V_1 = NULL;
	InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* V_2 = NULL;
	{
		// _records = new List<InputRecord>();
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_0 = (List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0*)il2cpp_codegen_object_new(List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0_il2cpp_TypeInfo_var);
		List_1__ctor_mA7688F63E9F8ECDAD4E7578F15DAE8BD9B669BF0(L_0, List_1__ctor_mA7688F63E9F8ECDAD4E7578F15DAE8BD9B669BF0_RuntimeMethod_var);
		__this->____records_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____records_6), (void*)L_0);
		// InputRecord recordOne = new InputRecord();
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_1 = (InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0*)il2cpp_codegen_object_new(InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_il2cpp_TypeInfo_var);
		InputRecord__ctor_m1F01B172FF62B35FF8D10D2327B830EEEF16EB6E(L_1, NULL);
		V_0 = L_1;
		// recordOne.aPress = new List<int> {171,24,1438,4,79};
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_2 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_3, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = L_3;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_4, ((int32_t)171), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = L_4;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_5, ((int32_t)24), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = L_5;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_6, ((int32_t)1438), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = L_6;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_7, 4, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = L_7;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_8, ((int32_t)79), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		L_2->___aPress_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___aPress_0), (void*)L_8);
		// recordOne.dPress = new List<int> {33,117,78,76,15,25,17,48,17,70,10,496,28,42,36,157,16,37,51,28,38,60,30,88,103};
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_9 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_10, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = L_10;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_11, ((int32_t)33), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_12 = L_11;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_12, ((int32_t)117), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = L_12;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_13, ((int32_t)78), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_14 = L_13;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_14, ((int32_t)76), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_15 = L_14;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_15, ((int32_t)15), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = L_15;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_16, ((int32_t)25), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_17 = L_16;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_17, ((int32_t)17), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_18 = L_17;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_18, ((int32_t)48), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_19 = L_18;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_19, ((int32_t)17), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_20 = L_19;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_20, ((int32_t)70), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_21 = L_20;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_21, ((int32_t)10), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_22 = L_21;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_22, ((int32_t)496), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_23 = L_22;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_23, ((int32_t)28), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_24 = L_23;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_24, ((int32_t)42), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_25 = L_24;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_25, ((int32_t)36), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_26 = L_25;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_26, ((int32_t)157), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_27 = L_26;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_27, ((int32_t)16), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_28 = L_27;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_28, ((int32_t)37), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_29 = L_28;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_29, ((int32_t)51), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_30 = L_29;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_30, ((int32_t)28), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_31 = L_30;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_31, ((int32_t)38), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_32 = L_31;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_32, ((int32_t)60), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_33 = L_32;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_33, ((int32_t)30), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_34 = L_33;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_34, ((int32_t)88), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_35 = L_34;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_35, ((int32_t)103), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		L_9->___dPress_1 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___dPress_1), (void*)L_35);
		// recordOne.spacePress = new List<int> {154,20,29,16,92,18,33,25,38,50,78,11,88,11,260,58,44,23,56,11,160,30,57,19,52,18,190,22,53};
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_36 = V_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_37 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_37, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_38 = L_37;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_38, ((int32_t)154), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_39 = L_38;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_39, ((int32_t)20), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_40 = L_39;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_40, ((int32_t)29), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_41 = L_40;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_41, ((int32_t)16), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_42 = L_41;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_42, ((int32_t)92), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_43 = L_42;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_43, ((int32_t)18), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_44 = L_43;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_44, ((int32_t)33), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_45 = L_44;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_45, ((int32_t)25), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_46 = L_45;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_46, ((int32_t)38), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_47 = L_46;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_47, ((int32_t)50), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_48 = L_47;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_48, ((int32_t)78), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_49 = L_48;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_49, ((int32_t)11), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_50 = L_49;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_50, ((int32_t)88), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_51 = L_50;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_51, ((int32_t)11), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_52 = L_51;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_52, ((int32_t)260), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_53 = L_52;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_53, ((int32_t)58), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_54 = L_53;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_54, ((int32_t)44), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_55 = L_54;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_55, ((int32_t)23), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_56 = L_55;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_56, ((int32_t)56), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_57 = L_56;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_57, ((int32_t)11), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_58 = L_57;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_58, ((int32_t)160), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_59 = L_58;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_59, ((int32_t)30), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_60 = L_59;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_60, ((int32_t)57), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_61 = L_60;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_61, ((int32_t)19), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_62 = L_61;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_62, ((int32_t)52), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_63 = L_62;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_63, ((int32_t)18), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_64 = L_63;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_64, ((int32_t)190), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_65 = L_64;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_65, ((int32_t)22), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_66 = L_65;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_66, ((int32_t)53), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		L_36->___spacePress_2 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&L_36->___spacePress_2), (void*)L_66);
		// _records.Add(recordOne);
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_67 = __this->____records_6;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_68 = V_0;
		List_1_Add_m7BC4B7B2520B0F9112DD0B01E0254D17934A116B_inline(L_67, L_68, List_1_Add_m7BC4B7B2520B0F9112DD0B01E0254D17934A116B_RuntimeMethod_var);
		// InputRecord recordTwo = new InputRecord();
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_69 = (InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0*)il2cpp_codegen_object_new(InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_il2cpp_TypeInfo_var);
		InputRecord__ctor_m1F01B172FF62B35FF8D10D2327B830EEEF16EB6E(L_69, NULL);
		V_1 = L_69;
		// recordTwo.aPress = new List<int> {161,4,32,21,16,10,690,14,843};
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_70 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_71 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_71, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_72 = L_71;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_72, ((int32_t)161), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_73 = L_72;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_73, 4, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_74 = L_73;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_74, ((int32_t)32), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_75 = L_74;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_75, ((int32_t)21), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_76 = L_75;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_76, ((int32_t)16), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_77 = L_76;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_77, ((int32_t)10), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_78 = L_77;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_78, ((int32_t)690), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_79 = L_78;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_79, ((int32_t)14), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_80 = L_79;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_80, ((int32_t)843), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		L_70->___aPress_0 = L_80;
		Il2CppCodeGenWriteBarrier((void**)(&L_70->___aPress_0), (void*)L_80);
		// recordTwo.dPress = new List<int> {23,123,143,69,11,31,21,49,14,37,11,382,62,25,19,56,2,90,16,31,87,210,16,82,1,78,10,7,85};
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_81 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_82 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_82, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_83 = L_82;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_83, ((int32_t)23), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_84 = L_83;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_84, ((int32_t)123), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_85 = L_84;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_85, ((int32_t)143), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_86 = L_85;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_86, ((int32_t)69), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_87 = L_86;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_87, ((int32_t)11), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_88 = L_87;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_88, ((int32_t)31), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_89 = L_88;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_89, ((int32_t)21), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_90 = L_89;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_90, ((int32_t)49), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_91 = L_90;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_91, ((int32_t)14), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_92 = L_91;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_92, ((int32_t)37), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_93 = L_92;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_93, ((int32_t)11), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_94 = L_93;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_94, ((int32_t)382), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_95 = L_94;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_95, ((int32_t)62), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_96 = L_95;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_96, ((int32_t)25), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_97 = L_96;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_97, ((int32_t)19), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_98 = L_97;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_98, ((int32_t)56), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_99 = L_98;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_99, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_100 = L_99;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_100, ((int32_t)90), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_101 = L_100;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_101, ((int32_t)16), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_102 = L_101;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_102, ((int32_t)31), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_103 = L_102;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_103, ((int32_t)87), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_104 = L_103;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_104, ((int32_t)210), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_105 = L_104;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_105, ((int32_t)16), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_106 = L_105;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_106, ((int32_t)82), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_107 = L_106;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_107, 1, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_108 = L_107;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_108, ((int32_t)78), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_109 = L_108;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_109, ((int32_t)10), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_110 = L_109;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_110, 7, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_111 = L_110;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_111, ((int32_t)85), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		L_81->___dPress_1 = L_111;
		Il2CppCodeGenWriteBarrier((void**)(&L_81->___dPress_1), (void*)L_111);
		// recordTwo.spacePress = new List<int> {174,38,47,13,25,12,57,17,42,20,86,27,44,19,85,12,203,21,27,27,18,32,35,32,66,35,45,23,15,26,133,45,22,68,127,17,56};
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_112 = V_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_113 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_113, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_114 = L_113;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_114, ((int32_t)174), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_115 = L_114;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_115, ((int32_t)38), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_116 = L_115;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_116, ((int32_t)47), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_117 = L_116;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_117, ((int32_t)13), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_118 = L_117;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_118, ((int32_t)25), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_119 = L_118;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_119, ((int32_t)12), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_120 = L_119;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_120, ((int32_t)57), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_121 = L_120;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_121, ((int32_t)17), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_122 = L_121;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_122, ((int32_t)42), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_123 = L_122;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_123, ((int32_t)20), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_124 = L_123;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_124, ((int32_t)86), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_125 = L_124;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_125, ((int32_t)27), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_126 = L_125;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_126, ((int32_t)44), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_127 = L_126;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_127, ((int32_t)19), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_128 = L_127;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_128, ((int32_t)85), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_129 = L_128;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_129, ((int32_t)12), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_130 = L_129;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_130, ((int32_t)203), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_131 = L_130;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_131, ((int32_t)21), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_132 = L_131;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_132, ((int32_t)27), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_133 = L_132;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_133, ((int32_t)27), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_134 = L_133;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_134, ((int32_t)18), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_135 = L_134;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_135, ((int32_t)32), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_136 = L_135;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_136, ((int32_t)35), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_137 = L_136;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_137, ((int32_t)32), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_138 = L_137;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_138, ((int32_t)66), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_139 = L_138;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_139, ((int32_t)35), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_140 = L_139;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_140, ((int32_t)45), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_141 = L_140;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_141, ((int32_t)23), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_142 = L_141;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_142, ((int32_t)15), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_143 = L_142;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_143, ((int32_t)26), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_144 = L_143;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_144, ((int32_t)133), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_145 = L_144;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_145, ((int32_t)45), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_146 = L_145;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_146, ((int32_t)22), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_147 = L_146;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_147, ((int32_t)68), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_148 = L_147;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_148, ((int32_t)127), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_149 = L_148;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_149, ((int32_t)17), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_150 = L_149;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_150, ((int32_t)56), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		L_112->___spacePress_2 = L_150;
		Il2CppCodeGenWriteBarrier((void**)(&L_112->___spacePress_2), (void*)L_150);
		// _records.Add(recordTwo);
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_151 = __this->____records_6;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_152 = V_1;
		List_1_Add_m7BC4B7B2520B0F9112DD0B01E0254D17934A116B_inline(L_151, L_152, List_1_Add_m7BC4B7B2520B0F9112DD0B01E0254D17934A116B_RuntimeMethod_var);
		// InputRecord recordThree = new InputRecord();
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_153 = (InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0*)il2cpp_codegen_object_new(InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0_il2cpp_TypeInfo_var);
		InputRecord__ctor_m1F01B172FF62B35FF8D10D2327B830EEEF16EB6E(L_153, NULL);
		V_2 = L_153;
		// recordThree.aPress = new List<int> {872,9,385,4,102};
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_154 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_155 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_155, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_156 = L_155;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_156, ((int32_t)872), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_157 = L_156;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_157, ((int32_t)9), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_158 = L_157;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_158, ((int32_t)385), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_159 = L_158;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_159, 4, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_160 = L_159;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_160, ((int32_t)102), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		L_154->___aPress_0 = L_160;
		Il2CppCodeGenWriteBarrier((void**)(&L_154->___aPress_0), (void*)L_160);
		// recordThree.dPress = new List<int> {30,72,16,86,28,17,15,68,8,62,11,133,19,36,32,35,42,52,21,27,17,29,2,4,43,24,26,162,26,31,14,27,17,22,118};
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_161 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_162 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_162, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_163 = L_162;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_163, ((int32_t)30), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_164 = L_163;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_164, ((int32_t)72), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_165 = L_164;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_165, ((int32_t)16), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_166 = L_165;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_166, ((int32_t)86), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_167 = L_166;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_167, ((int32_t)28), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_168 = L_167;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_168, ((int32_t)17), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_169 = L_168;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_169, ((int32_t)15), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_170 = L_169;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_170, ((int32_t)68), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_171 = L_170;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_171, 8, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_172 = L_171;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_172, ((int32_t)62), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_173 = L_172;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_173, ((int32_t)11), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_174 = L_173;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_174, ((int32_t)133), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_175 = L_174;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_175, ((int32_t)19), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_176 = L_175;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_176, ((int32_t)36), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_177 = L_176;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_177, ((int32_t)32), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_178 = L_177;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_178, ((int32_t)35), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_179 = L_178;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_179, ((int32_t)42), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_180 = L_179;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_180, ((int32_t)52), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_181 = L_180;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_181, ((int32_t)21), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_182 = L_181;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_182, ((int32_t)27), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_183 = L_182;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_183, ((int32_t)17), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_184 = L_183;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_184, ((int32_t)29), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_185 = L_184;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_185, 2, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_186 = L_185;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_186, 4, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_187 = L_186;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_187, ((int32_t)43), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_188 = L_187;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_188, ((int32_t)24), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_189 = L_188;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_189, ((int32_t)26), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_190 = L_189;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_190, ((int32_t)162), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_191 = L_190;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_191, ((int32_t)26), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_192 = L_191;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_192, ((int32_t)31), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_193 = L_192;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_193, ((int32_t)14), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_194 = L_193;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_194, ((int32_t)27), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_195 = L_194;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_195, ((int32_t)17), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_196 = L_195;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_196, ((int32_t)22), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_197 = L_196;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_197, ((int32_t)118), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		L_161->___dPress_1 = L_197;
		Il2CppCodeGenWriteBarrier((void**)(&L_161->___dPress_1), (void*)L_197);
		// recordThree.spacePress = new List<int> {60,27,80,13,44,13,28,51,25,39,35,30,61,13,47,15,45,23,45,47,38,16,34,8,235,30,29,22,29,18,79,36,57};
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_198 = V_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_199 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_199, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_200 = L_199;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_200, ((int32_t)60), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_201 = L_200;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_201, ((int32_t)27), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_202 = L_201;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_202, ((int32_t)80), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_203 = L_202;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_203, ((int32_t)13), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_204 = L_203;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_204, ((int32_t)44), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_205 = L_204;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_205, ((int32_t)13), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_206 = L_205;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_206, ((int32_t)28), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_207 = L_206;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_207, ((int32_t)51), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_208 = L_207;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_208, ((int32_t)25), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_209 = L_208;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_209, ((int32_t)39), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_210 = L_209;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_210, ((int32_t)35), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_211 = L_210;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_211, ((int32_t)30), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_212 = L_211;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_212, ((int32_t)61), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_213 = L_212;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_213, ((int32_t)13), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_214 = L_213;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_214, ((int32_t)47), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_215 = L_214;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_215, ((int32_t)15), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_216 = L_215;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_216, ((int32_t)45), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_217 = L_216;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_217, ((int32_t)23), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_218 = L_217;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_218, ((int32_t)45), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_219 = L_218;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_219, ((int32_t)47), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_220 = L_219;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_220, ((int32_t)38), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_221 = L_220;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_221, ((int32_t)16), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_222 = L_221;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_222, ((int32_t)34), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_223 = L_222;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_223, 8, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_224 = L_223;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_224, ((int32_t)235), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_225 = L_224;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_225, ((int32_t)30), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_226 = L_225;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_226, ((int32_t)29), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_227 = L_226;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_227, ((int32_t)22), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_228 = L_227;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_228, ((int32_t)29), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_229 = L_228;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_229, ((int32_t)18), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_230 = L_229;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_230, ((int32_t)79), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_231 = L_230;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_231, ((int32_t)36), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_232 = L_231;
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_232, ((int32_t)57), List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		L_198->___spacePress_2 = L_232;
		Il2CppCodeGenWriteBarrier((void**)(&L_198->___spacePress_2), (void*)L_232);
		// _records.Add(recordThree);
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_233 = __this->____records_6;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_234 = V_2;
		List_1_Add_m7BC4B7B2520B0F9112DD0B01E0254D17934A116B_inline(L_233, L_234, List_1_Add_m7BC4B7B2520B0F9112DD0B01E0254D17934A116B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void InputReplayer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputReplayer_FixedUpdate_mA124EA1AD4A0F94BF462951D37607B015BA57254 (InputReplayer_t535D2ADBEFD016B8FE6CCF529CEF8E19BBEA5CE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!(Physics.Raycast(_playerController.transform.position + new Vector3(0, -1f, 0), Vector3.down, out RaycastHit hit, 0.001f) && hit.collider.tag.Equals("Floor"))) {
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_0 = __this->____playerController_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		bool L_6;
		L_6 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_4, L_5, (&V_0), (0.00100000005f), NULL);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
		L_7 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		String_t* L_8;
		L_8 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_7, NULL);
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (L_9)
		{
			goto IL_006d;
		}
	}

IL_0054:
	{
		// _playerController.TimeSinceGrounded += Time.deltaTime;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_10 = __this->____playerController_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11 = L_10;
		float L_12 = L_11->___TimeSinceGrounded_15;
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		L_11->___TimeSinceGrounded_15 = ((float)il2cpp_codegen_add(L_12, L_13));
		goto IL_0078;
	}

IL_006d:
	{
		// _playerController.Ground();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_14 = __this->____playerController_4;
		PlayerController_Ground_mD8A04EBFE1EDBF227B2B7BFE93143EB4BDC2837B(L_14, NULL);
	}

IL_0078:
	{
		// if (spacePressed) {
		bool L_15 = __this->___spacePressed_10;
		if (!L_15)
		{
			goto IL_008d;
		}
	}
	{
		// _playerController.CheckJump();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_16 = __this->____playerController_4;
		PlayerController_CheckJump_m0448B9FF64E79016EFAD1DA312FA88304E552B27(L_16, NULL);
		goto IL_0098;
	}

IL_008d:
	{
		// _playerController.FastFall();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_17 = __this->____playerController_4;
		PlayerController_FastFall_m0CCB01A7D4F5A041FCDD66F973D2BD77E604533E(L_17, NULL);
	}

IL_0098:
	{
		// if (aPressed && dPressed) {
		bool L_18 = __this->___aPressed_8;
		if (!L_18)
		{
			goto IL_00b5;
		}
	}
	{
		bool L_19 = __this->___dPressed_9;
		if (!L_19)
		{
			goto IL_00b5;
		}
	}
	{
		// _playerController.StopMoving();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_20 = __this->____playerController_4;
		PlayerController_StopMoving_mFC899B19D5C4A2ACC1BA52FA1D02C1A22BD019FA(L_20, NULL);
		goto IL_00ea;
	}

IL_00b5:
	{
		// } else if (aPressed) {
		bool L_21 = __this->___aPressed_8;
		if (!L_21)
		{
			goto IL_00ca;
		}
	}
	{
		// _playerController.MoveLeft();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_22 = __this->____playerController_4;
		PlayerController_MoveLeft_m35C99AF42CF84424196F7C3D7DEEA7B6C7428508(L_22, NULL);
		goto IL_00ea;
	}

IL_00ca:
	{
		// } else if (dPressed) {
		bool L_23 = __this->___dPressed_9;
		if (!L_23)
		{
			goto IL_00df;
		}
	}
	{
		// _playerController.MoveRight();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_24 = __this->____playerController_4;
		PlayerController_MoveRight_m98678E680E583355C2152EC52D96B29487067F5C(L_24, NULL);
		goto IL_00ea;
	}

IL_00df:
	{
		// _playerController.StopMoving();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_25 = __this->____playerController_4;
		PlayerController_StopMoving_mFC899B19D5C4A2ACC1BA52FA1D02C1A22BD019FA(L_25, NULL);
	}

IL_00ea:
	{
		// if (!_playerController.CheckGrounded()) {
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_26 = __this->____playerController_4;
		bool L_27;
		L_27 = PlayerController_CheckGrounded_mE977111C038A822DAEF246FB9A8C3F299279543E(L_26, NULL);
		if (L_27)
		{
			goto IL_010e;
		}
	}
	{
		// _playerController.TimeSinceGrounded += Time.deltaTime;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_28 = __this->____playerController_4;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_29 = L_28;
		float L_30 = L_29->___TimeSinceGrounded_15;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		L_29->___TimeSinceGrounded_15 = ((float)il2cpp_codegen_add(L_30, L_31));
	}

IL_010e:
	{
		// UpdateButtons();
		InputReplayer_UpdateButtons_m1657BE1D486F43D849BCA16BEFAEDF229D402A6B(__this, NULL);
		// }
		return;
	}
}
// System.Void InputReplayer::UpdateButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputReplayer_UpdateButtons_m1657BE1D486F43D849BCA16BEFAEDF229D402A6B (InputReplayer_t535D2ADBEFD016B8FE6CCF529CEF8E19BBEA5CE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_records[CurrentRecordIndex].aPress.Count <= 0) {
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_0 = __this->____records_6;
		int32_t L_1 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_2;
		L_2 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_0, L_1, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = L_2->___aPress_0;
		int32_t L_4;
		L_4 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_3, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		// aPressed = false;
		__this->___aPressed_8 = (bool)0;
		// dPressed = false;
		__this->___dPressed_9 = (bool)0;
		// spacePressed = false;
		__this->___spacePressed_10 = (bool)0;
		// return;
		return;
	}

IL_0034:
	{
		// _records[CurrentRecordIndex].aPress[0]--;
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_5 = __this->____records_6;
		int32_t L_6 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_7;
		L_7 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_5, L_6, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = L_7->___aPress_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_9 = L_8;
		int32_t L_10;
		L_10 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_9, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_0 = L_10;
		int32_t L_11 = V_0;
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_9, 0, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		// _records[CurrentRecordIndex].dPress[0]--;
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_12 = __this->____records_6;
		int32_t L_13 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_14;
		L_14 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_12, L_13, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_15 = L_14->___dPress_1;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = L_15;
		int32_t L_17;
		L_17 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_16, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_0 = L_17;
		int32_t L_18 = V_0;
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_16, 0, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		// _records[CurrentRecordIndex].spacePress[0]--;
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_19 = __this->____records_6;
		int32_t L_20 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_21;
		L_21 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_19, L_20, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_22 = L_21->___spacePress_2;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_23 = L_22;
		int32_t L_24;
		L_24 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_23, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_0 = L_24;
		int32_t L_25 = V_0;
		List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587(L_23, 0, ((int32_t)il2cpp_codegen_subtract(L_25, 1)), List_1_set_Item_m95629806F31CF369D937590912E0B6A53FF7C587_RuntimeMethod_var);
		// if (_records[CurrentRecordIndex].aPress.Count > 0 && _records[CurrentRecordIndex].aPress[0] <= 0) {
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_26 = __this->____records_6;
		int32_t L_27 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_28;
		L_28 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_26, L_27, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_29 = L_28->___aPress_0;
		int32_t L_30;
		L_30 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_29, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0111;
		}
	}
	{
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_31 = __this->____records_6;
		int32_t L_32 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_33;
		L_33 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_31, L_32, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_34 = L_33->___aPress_0;
		int32_t L_35;
		L_35 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_34, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_0111;
		}
	}
	{
		// aPressed = !aPressed;
		bool L_36 = __this->___aPressed_8;
		__this->___aPressed_8 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		// _records[CurrentRecordIndex].aPress.RemoveAt(0);
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_37 = __this->____records_6;
		int32_t L_38 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_39;
		L_39 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_37, L_38, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_40 = L_39->___aPress_0;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_40, 0, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
	}

IL_0111:
	{
		// if (_records[CurrentRecordIndex].dPress.Count > 0 && _records[CurrentRecordIndex].dPress[0] <= 0) {
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_41 = __this->____records_6;
		int32_t L_42 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_43;
		L_43 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_41, L_42, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_44 = L_43->___dPress_1;
		int32_t L_45;
		L_45 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_44, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_45) <= ((int32_t)0)))
		{
			goto IL_0179;
		}
	}
	{
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_46 = __this->____records_6;
		int32_t L_47 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_48;
		L_48 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_46, L_47, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_49 = L_48->___dPress_1;
		int32_t L_50;
		L_50 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_49, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0179;
		}
	}
	{
		// dPressed = !dPressed;
		bool L_51 = __this->___dPressed_9;
		__this->___dPressed_9 = (bool)((((int32_t)L_51) == ((int32_t)0))? 1 : 0);
		// _records[CurrentRecordIndex].dPress.RemoveAt(0);
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_52 = __this->____records_6;
		int32_t L_53 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_54;
		L_54 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_52, L_53, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_55 = L_54->___dPress_1;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_55, 0, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
	}

IL_0179:
	{
		// if (_records[CurrentRecordIndex].spacePress.Count > 0 && _records[CurrentRecordIndex].spacePress[0] <= 0) {
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_56 = __this->____records_6;
		int32_t L_57 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_58;
		L_58 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_56, L_57, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_59 = L_58->___spacePress_2;
		int32_t L_60;
		L_60 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_59, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			goto IL_01e1;
		}
	}
	{
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_61 = __this->____records_6;
		int32_t L_62 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_63;
		L_63 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_61, L_62, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_64 = L_63->___spacePress_2;
		int32_t L_65;
		L_65 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_64, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		if ((((int32_t)L_65) > ((int32_t)0)))
		{
			goto IL_01e1;
		}
	}
	{
		// spacePressed = !spacePressed;
		bool L_66 = __this->___spacePressed_10;
		__this->___spacePressed_10 = (bool)((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		// _records[CurrentRecordIndex].spacePress.RemoveAt(0);
		List_1_t912845BB00DCE54F2BEC600F57FE658F66DD98F0* L_67 = __this->____records_6;
		int32_t L_68 = __this->___CurrentRecordIndex_5;
		InputRecord_t6A9925E2EC2BD2802DCCCD6EFCF68BF7C3CBE3E0* L_69;
		L_69 = List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270(L_67, L_68, List_1_get_Item_m844B9E8E8284AA0DF0F46CBAB487435B91D3E270_RuntimeMethod_var);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_70 = L_69->___spacePress_2;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_70, 0, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
	}

IL_01e1:
	{
		// }
		return;
	}
}
// System.Void InputReplayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputReplayer__ctor_m016141A765641C8D08472075638BE0D4E3ACD720 (InputReplayer_t535D2ADBEFD016B8FE6CCF529CEF8E19BBEA5CE4* __this, const RuntimeMethod* method) 
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
// System.Boolean JSONTool::FileExists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONTool_FileExists_mB50C0AFB134E5FE169DD64CE986F105B1C81BF15 (String_t* ___0_fileName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return File.Exists(Application.persistentDataPath + Path.AltDirectorySeparatorChar + fileName);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___AltDirectorySeparatorChar_1), NULL);
		String_t* L_2 = ___0_fileName;
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, L_1, L_2, NULL);
		bool L_4;
		L_4 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_3, NULL);
		return L_4;
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
// System.Void PlayerController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnEnable_m1558047F72022F1A32FC373A927E122D1F3CF5CC (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_OnGameOver_m0E8356313AE3002BCC9A424932CCB78FBF3F9924_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.e_OnGameOver += OnGameOver;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_0 = (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*)il2cpp_codegen_object_new(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var);
		OnGameOver__ctor_mA77D41F89A0469BCFCFC62C35A224025687CB7B6(L_0, __this, (intptr_t)((void*)PlayerController_OnGameOver_m0E8356313AE3002BCC9A424932CCB78FBF3F9924_RuntimeMethod_var), NULL);
		GameManager_add_e_OnGameOver_m323DB4CDDD334B8F04F188D5676D975511431006(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnDisable_m16524B89F1DDB4EB1E201CCEB7E9502967BF57DB (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_OnGameOver_m0E8356313AE3002BCC9A424932CCB78FBF3F9924_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.e_OnGameOver -= OnGameOver;
		OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* L_0 = (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885*)il2cpp_codegen_object_new(OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885_il2cpp_TypeInfo_var);
		OnGameOver__ctor_mA77D41F89A0469BCFCFC62C35A224025687CB7B6(L_0, __this, (intptr_t)((void*)PlayerController_OnGameOver_m0E8356313AE3002BCC9A424932CCB78FBF3F9924_RuntimeMethod_var), NULL);
		GameManager_remove_e_OnGameOver_m9FCC2F1B13D4A21472C1B9F8FE1B42D2B1F26536(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::OnGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnGameOver_m0E8356313AE3002BCC9A424932CCB78FBF3F9924 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// this.enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m6D906D8B13844542B81CC49BA19760F747CEC8C0 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_replaying) {
		bool L_0 = __this->____replaying_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!(Physics.Raycast(transform.position + new Vector3(0, -1f, 0), Vector3.down, out RaycastHit hit, 0.001f) && hit.collider.tag.Equals("Floor"))) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		bool L_6;
		L_6 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_4, L_5, (&V_0), (0.00100000005f), NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7;
		L_7 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		String_t* L_8;
		L_8 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_7, NULL);
		bool L_9;
		L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (L_9)
		{
			goto IL_006c;
		}
	}

IL_0058:
	{
		// TimeSinceGrounded += Time.deltaTime;
		float L_10 = __this->___TimeSinceGrounded_15;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___TimeSinceGrounded_15 = ((float)il2cpp_codegen_add(L_10, L_11));
		goto IL_0072;
	}

IL_006c:
	{
		// Ground();
		PlayerController_Ground_mD8A04EBFE1EDBF227B2B7BFE93143EB4BDC2837B(__this, NULL);
	}

IL_0072:
	{
		// if (Input.GetKey(KeyCode.Space)) {
		bool L_12;
		L_12 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)32), NULL);
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		// CheckJump();
		PlayerController_CheckJump_m0448B9FF64E79016EFAD1DA312FA88304E552B27(__this, NULL);
		goto IL_0092;
	}

IL_0083:
	{
		// } else if (!Input.GetKey(KeyCode.Space)) {
		bool L_13;
		L_13 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)32), NULL);
		if (L_13)
		{
			goto IL_0092;
		}
	}
	{
		// FastFall();
		PlayerController_FastFall_m0CCB01A7D4F5A041FCDD66F973D2BD77E604533E(__this, NULL);
	}

IL_0092:
	{
		// if (Input.GetKey(KeyCode.A) && Input.GetKey(KeyCode.D)) {
		bool L_14;
		L_14 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (!L_14)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_15;
		L_15 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (!L_15)
		{
			goto IL_00ac;
		}
	}
	{
		// StopMoving();
		PlayerController_StopMoving_mFC899B19D5C4A2ACC1BA52FA1D02C1A22BD019FA(__this, NULL);
		goto IL_00d4;
	}

IL_00ac:
	{
		// } else if (Input.GetKey(KeyCode.A)) {
		bool L_16;
		L_16 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (!L_16)
		{
			goto IL_00bd;
		}
	}
	{
		// MoveLeft();
		PlayerController_MoveLeft_m35C99AF42CF84424196F7C3D7DEEA7B6C7428508(__this, NULL);
		goto IL_00d4;
	}

IL_00bd:
	{
		// } else if (Input.GetKey(KeyCode.D)) {
		bool L_17;
		L_17 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (!L_17)
		{
			goto IL_00ce;
		}
	}
	{
		// MoveRight();
		PlayerController_MoveRight_m98678E680E583355C2152EC52D96B29487067F5C(__this, NULL);
		goto IL_00d4;
	}

IL_00ce:
	{
		// StopMoving();
		PlayerController_StopMoving_mFC899B19D5C4A2ACC1BA52FA1D02C1A22BD019FA(__this, NULL);
	}

IL_00d4:
	{
		// if (!CheckGrounded()) {
		bool L_18;
		L_18 = PlayerController_CheckGrounded_mE977111C038A822DAEF246FB9A8C3F299279543E(__this, NULL);
		if (L_18)
		{
			goto IL_00ee;
		}
	}
	{
		// TimeSinceGrounded += Time.deltaTime;
		float L_19 = __this->___TimeSinceGrounded_15;
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___TimeSinceGrounded_15 = ((float)il2cpp_codegen_add(L_19, L_20));
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Boolean PlayerController::CheckGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerController_CheckGrounded_mE977111C038A822DAEF246FB9A8C3F299279543E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 velocity = _rb.velocity;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		// Vector3 displacement = velocity * Time.deltaTime;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// Physics.Raycast(transform.position, displacement, out RaycastHit hit, displacement.magnitude);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		bool L_8;
		L_8 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_5, L_6, (&V_1), L_7, NULL);
		// if (hit.collider != null && hit.collider.tag.Equals("Floor")) {
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_9;
		L_9 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11;
		L_11 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		String_t* L_12;
		L_12 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_11, NULL);
		bool L_13;
		L_13 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_12, _stringLiteral970DBD957E951CBB2A0CADFAE721EDA0478353B9, NULL);
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		// Ground();
		PlayerController_Ground_mD8A04EBFE1EDBF227B2B7BFE93143EB4BDC2837B(__this, NULL);
		// return true;
		return (bool)1;
	}

IL_0060:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void PlayerController::Ground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Ground_mD8A04EBFE1EDBF227B2B7BFE93143EB4BDC2837B (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// IsGrounded = true;
		__this->___IsGrounded_17 = (bool)1;
		// FastFalling = false;
		__this->___FastFalling_18 = (bool)0;
		// _customGravity.gravityScale = _lowGravityScale;
		CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67* L_0 = __this->____customGravity_11;
		float L_1 = __this->____lowGravityScale_13;
		L_0->___gravityScale_4 = L_1;
		// TimeSinceGrounded = 0f;
		__this->___TimeSinceGrounded_15 = (0.0f);
		// }
		return;
	}
}
// System.Void PlayerController::CheckJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_CheckJump_m0448B9FF64E79016EFAD1DA312FA88304E552B27 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (IsGrounded || (!IsJumping && TimeSinceGrounded < _coyoteTime)) {
		bool L_0 = __this->___IsGrounded_17;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		bool L_1 = __this->___IsJumping_16;
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		float L_2 = __this->___TimeSinceGrounded_15;
		float L_3 = __this->____coyoteTime_14;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0024;
		}
	}

IL_001e:
	{
		// Jump();
		PlayerController_Jump_mA1AE5FDC39F88F78568A88C4CF6D08FDC6D7E908(__this, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Jump_mA1AE5FDC39F88F78568A88C4CF6D08FDC6D7E908 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rb.AddForce(Vector3.up * _jumpForce);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_2 = __this->____jumpForce_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_0, L_3, NULL);
		// IsGrounded = false;
		__this->___IsGrounded_17 = (bool)0;
		// IsJumping = true;
		__this->___IsJumping_16 = (bool)1;
		// AudioManager.s_instance.PlayJump();
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_4 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___s_instance_7;
		AudioManager_PlayJump_mC9F9C13C5C2ADDAA2E5C354198EC04D7FF3FB9F8(L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::FastFall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FastFall_m0CCB01A7D4F5A041FCDD66F973D2BD77E604533E (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// if (!FastFalling && !IsGrounded) {
		bool L_0 = __this->___FastFalling_18;
		if (L_0)
		{
			goto IL_0043;
		}
	}
	{
		bool L_1 = __this->___IsGrounded_17;
		if (L_1)
		{
			goto IL_0043;
		}
	}
	{
		// _rb.AddForce(Vector3.down * _fastFallForce);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_4 = __this->____fastFallForce_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_2, L_5, NULL);
		// FastFalling = true;
		__this->___FastFalling_18 = (bool)1;
		// _customGravity.gravityScale = _highGravityScale;
		CustomGravity_tE15817277ADBA42EFF5CA0646C3FDD9F07FB6E67* L_6 = __this->____customGravity_11;
		float L_7 = __this->____highGravityScale_12;
		L_6->___gravityScale_4 = L_7;
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void PlayerController::MoveLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveLeft_m35C99AF42CF84424196F7C3D7DEEA7B6C7428508 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// _rb.AddForce(Vector3.left * _acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		float L_2 = __this->____acceleration_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_0, L_3, NULL);
		// if (_rb.velocity.x < -_maxSpeed) {
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		float L_6 = L_5.___x_2;
		float L_7 = __this->____maxSpeed_8;
		if ((!(((float)L_6) < ((float)((-L_7))))))
		{
			goto IL_006b;
		}
	}
	{
		// _rb.velocity = new Vector3(-_maxSpeed, _rb.velocity.y, _rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->____rb_4;
		float L_9 = __this->____maxSpeed_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_10, NULL);
		float L_12 = L_11.___y_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_13, NULL);
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), ((-L_9)), L_12, L_15, /*hidden argument*/NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_8, L_16, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void PlayerController::MoveRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_MoveRight_m98678E680E583355C2152EC52D96B29487067F5C (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// _rb.AddForce(Vector3.right * _acceleration);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_2 = __this->____acceleration_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_0, L_3, NULL);
		// if (_rb.velocity.x > _maxSpeed) {
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		float L_6 = L_5.___x_2;
		float L_7 = __this->____maxSpeed_8;
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_0069;
		}
	}
	{
		// _rb.velocity = new Vector3(_maxSpeed, _rb.velocity.y, _rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->____rb_4;
		float L_9 = __this->____maxSpeed_8;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_10, NULL);
		float L_12 = L_11.___y_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_13 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_13, NULL);
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), L_9, L_12, L_15, /*hidden argument*/NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_8, L_16, NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void PlayerController::StopMoving()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_StopMoving_mFC899B19D5C4A2ACC1BA52FA1D02C1A22BD019FA (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// _rb.velocity = new Vector3(0, _rb.velocity.y, _rb.velocity.z);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->____rb_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_1, NULL);
		float L_3 = L_2.___y_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->____rb_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		float L_6 = L_5.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), L_3, L_6, /*hidden argument*/NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_7, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnGameOver_Invoke_m941D25FFDD9127B67B9499C74896DA46D3388E0F_inline (OnGameOver_tA87167A4A7D8CBEE23FEBB51F598B5A7D56B7885* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnVictory_Invoke_m1C74F07DC2FBD3146F7B063DE59AE836781B78E7_inline (OnVictory_tA508AF09B26DA5DF72D6A6CC51F1D368969192FD* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5AAB6DCB6C30EB5769B4E8DB8170E50319F0A9ED_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, bool ___0_item, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = V_0;
		int32_t L_7 = V_1;
		bool L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (bool)L_8);
		return;
	}

IL_0034:
	{
		bool L_9 = ___0_item;
		((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (int32_t)L_8);
		return;
	}

IL_0034:
	{
		int32_t L_9 = ___0_item;
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4573A12BFDA535926500C04E88A94540C95C395D_gshared_inline (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
