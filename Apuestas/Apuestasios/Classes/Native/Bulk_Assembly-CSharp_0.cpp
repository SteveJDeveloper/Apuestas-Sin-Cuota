#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_Calcular1664655237.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField1631627530.h"
#include "UnityEngine_UI_UnityEngine_UI_Toggle3976754468.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharp_Prueba3151752491.h"

// Calcular
struct Calcular_t1664655237;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.InputField
struct InputField_t1631627530;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityEngine.UI.Toggle
struct Toggle_t3976754468;
// UnityEngine.UI.Text
struct Text_t356221433;
// Prueba
struct Prueba_t3151752491;
extern const MethodInfo* GameObject_GetComponent_TisInputField_t1631627530_m870073608_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisToggle_t3976754468_m4141321564_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3828303576;
extern Il2CppCodeGenString* _stringLiteral1246232495;
extern Il2CppCodeGenString* _stringLiteral533159065;
extern const uint32_t Calcular_Calculo_m2353106347_MetadataUsageId;
extern const MethodInfo* GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var;
extern const uint32_t Calcular_Actualizar_m1397615242_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3675615724;
extern const uint32_t Prueba_Start_m3040736696_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3675648524;
extern const uint32_t Prueba_Setear_m3643891862_MetadataUsageId;



// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.InputField>()
#define GameObject_GetComponent_TisInputField_t1631627530_m870073608(__this, method) ((  InputField_t1631627530 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.String UnityEngine.UI.InputField::get_text()
extern "C"  String_t* InputField_get_text_m409351770 (InputField_t1631627530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
extern "C"  int32_t Int32_Parse_m3683414232 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::Parse(System.String)
extern "C"  float Single_Parse_m1861732734 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C"  int32_t PlayerPrefs_GetInt_m2889062785 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
#define GameObject_GetComponent_TisToggle_t3976754468_m4141321564(__this, method) ((  Toggle_t3976754468 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C"  bool Toggle_get_isOn_m366838229 (Toggle_t3976754468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C"  void PlayerPrefs_SetInt_m3351928596 (Il2CppObject * __this /* static, unused */, String_t* p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Calcular::Actualizar()
extern "C"  void Calcular_Actualizar_m1397615242 (Calcular_t1664655237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
#define GameObject_GetComponent_TisText_t356221433_m1217399699(__this, method) ((  Text_t356221433 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2960866144 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C"  int32_t PlayerPrefs_GetInt_m136681260 (Il2CppObject * __this /* static, unused */, String_t* p0, int32_t p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Prueba::Setear()
extern "C"  void Prueba_Setear_m3643891862 (Prueba_t3151752491 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Calcular::.ctor()
extern "C"  void Calcular__ctor_m2770502214 (Calcular_t1664655237 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Calcular::Start()
extern "C"  void Calcular_Start_m2724193254 (Calcular_t1664655237 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Calcular::Update()
extern "C"  void Calcular_Update_m518173253 (Calcular_t1664655237 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Calcular::Calculo()
extern "C"  void Calcular_Calculo_m2353106347 (Calcular_t1664655237 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Calcular_Calculo_m2353106347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		GameObject_t1756533147 * L_0 = __this->get_ImputO_8();
		NullCheck(L_0);
		InputField_t1631627530 * L_1 = GameObject_GetComponent_TisInputField_t1631627530_m870073608(L_0, /*hidden argument*/GameObject_GetComponent_TisInputField_t1631627530_m870073608_MethodInfo_var);
		NullCheck(L_1);
		String_t* L_2 = InputField_get_text_m409351770(L_1, /*hidden argument*/NULL);
		int32_t L_3 = Int32_Parse_m3683414232(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t1756533147 * L_4 = __this->get_ImputL_9();
		NullCheck(L_4);
		InputField_t1631627530 * L_5 = GameObject_GetComponent_TisInputField_t1631627530_m870073608(L_4, /*hidden argument*/GameObject_GetComponent_TisInputField_t1631627530_m870073608_MethodInfo_var);
		NullCheck(L_5);
		String_t* L_6 = InputField_get_text_m409351770(L_5, /*hidden argument*/NULL);
		int32_t L_7 = Int32_Parse_m3683414232(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		GameObject_t1756533147 * L_8 = __this->get_ImputS_10();
		NullCheck(L_8);
		InputField_t1631627530 * L_9 = GameObject_GetComponent_TisInputField_t1631627530_m870073608(L_8, /*hidden argument*/GameObject_GetComponent_TisInputField_t1631627530_m870073608_MethodInfo_var);
		NullCheck(L_9);
		String_t* L_10 = InputField_get_text_m409351770(L_9, /*hidden argument*/NULL);
		int32_t L_11 = Int32_Parse_m3683414232(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		GameObject_t1756533147 * L_12 = __this->get_Cuota_11();
		NullCheck(L_12);
		InputField_t1631627530 * L_13 = GameObject_GetComponent_TisInputField_t1631627530_m870073608(L_12, /*hidden argument*/GameObject_GetComponent_TisInputField_t1631627530_m870073608_MethodInfo_var);
		NullCheck(L_13);
		String_t* L_14 = InputField_get_text_m409351770(L_13, /*hidden argument*/NULL);
		float L_15 = Single_Parse_m1861732734(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		V_6 = L_15;
		int32_t L_16 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral3828303576, /*hidden argument*/NULL);
		V_3 = L_16;
		int32_t L_17 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral1246232495, /*hidden argument*/NULL);
		V_4 = L_17;
		int32_t L_18 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral533159065, /*hidden argument*/NULL);
		V_5 = L_18;
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		V_3 = ((int32_t)((int32_t)L_19-(int32_t)L_20));
		int32_t L_21 = V_4;
		int32_t L_22 = V_1;
		V_4 = ((int32_t)((int32_t)L_21-(int32_t)L_22));
		int32_t L_23 = V_5;
		int32_t L_24 = V_2;
		V_5 = ((int32_t)((int32_t)L_23-(int32_t)L_24));
		GameObject_t1756533147 * L_25 = __this->get_GanadorO_12();
		NullCheck(L_25);
		Toggle_t3976754468 * L_26 = GameObject_GetComponent_TisToggle_t3976754468_m4141321564(L_25, /*hidden argument*/GameObject_GetComponent_TisToggle_t3976754468_m4141321564_MethodInfo_var);
		NullCheck(L_26);
		bool L_27 = Toggle_get_isOn_m366838229(L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_0;
		V_7 = (((float)((float)L_28)));
		float L_29 = V_7;
		float L_30 = V_6;
		V_7 = ((float)((float)L_29*(float)L_30));
		float L_31 = V_7;
		V_0 = (((int32_t)((int32_t)L_31)));
		int32_t L_32 = V_3;
		int32_t L_33 = V_0;
		V_3 = ((int32_t)((int32_t)L_32+(int32_t)L_33));
	}

IL_00b4:
	{
		GameObject_t1756533147 * L_34 = __this->get_GanadorL_13();
		NullCheck(L_34);
		Toggle_t3976754468 * L_35 = GameObject_GetComponent_TisToggle_t3976754468_m4141321564(L_34, /*hidden argument*/GameObject_GetComponent_TisToggle_t3976754468_m4141321564_MethodInfo_var);
		NullCheck(L_35);
		bool L_36 = Toggle_get_isOn_m366838229(L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_37 = V_1;
		V_7 = (((float)((float)L_37)));
		float L_38 = V_7;
		float L_39 = V_6;
		V_7 = ((float)((float)L_38*(float)L_39));
		float L_40 = V_7;
		V_1 = (((int32_t)((int32_t)L_40)));
		int32_t L_41 = V_4;
		int32_t L_42 = V_1;
		V_4 = ((int32_t)((int32_t)L_41+(int32_t)L_42));
	}

IL_00de:
	{
		GameObject_t1756533147 * L_43 = __this->get_GanadorS_14();
		NullCheck(L_43);
		Toggle_t3976754468 * L_44 = GameObject_GetComponent_TisToggle_t3976754468_m4141321564(L_43, /*hidden argument*/GameObject_GetComponent_TisToggle_t3976754468_m4141321564_MethodInfo_var);
		NullCheck(L_44);
		bool L_45 = Toggle_get_isOn_m366838229(L_44, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0108;
		}
	}
	{
		int32_t L_46 = V_2;
		V_7 = (((float)((float)L_46)));
		float L_47 = V_7;
		float L_48 = V_6;
		V_7 = ((float)((float)L_47*(float)L_48));
		float L_49 = V_7;
		V_2 = (((int32_t)((int32_t)L_49)));
		int32_t L_50 = V_5;
		int32_t L_51 = V_2;
		V_5 = ((int32_t)((int32_t)L_50+(int32_t)L_51));
	}

IL_0108:
	{
		int32_t L_52 = V_3;
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral3828303576, L_52, /*hidden argument*/NULL);
		int32_t L_53 = V_4;
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral1246232495, L_53, /*hidden argument*/NULL);
		int32_t L_54 = V_5;
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral533159065, L_54, /*hidden argument*/NULL);
		Calcular_Actualizar_m1397615242(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Calcular::Actualizar()
extern "C"  void Calcular_Actualizar_m1397615242 (Calcular_t1664655237 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Calcular_Actualizar_m1397615242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral3828303576, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral1246232495, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral533159065, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0207;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = V_2;
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_016c;
		}
	}
	{
		int32_t L_7 = V_2;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_00d1;
		}
	}
	{
		GameObject_t1756533147 * L_9 = __this->get_Primero_2();
		NullCheck(L_9);
		Text_t356221433 * L_10 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_9, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral3828303576);
		GameObject_t1756533147 * L_11 = __this->get_Segundo_3();
		NullCheck(L_11);
		Text_t356221433 * L_12 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_11, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, _stringLiteral533159065);
		GameObject_t1756533147 * L_13 = __this->get_Tercero_4();
		NullCheck(L_13);
		Text_t356221433 * L_14 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_13, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, _stringLiteral1246232495);
		GameObject_t1756533147 * L_15 = __this->get_M1_5();
		NullCheck(L_15);
		Text_t356221433 * L_16 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_15, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_17 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_17);
		GameObject_t1756533147 * L_18 = __this->get_M2_6();
		NullCheck(L_18);
		Text_t356221433 * L_19 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_18, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_20 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, L_20);
		GameObject_t1756533147 * L_21 = __this->get_M3_7();
		NullCheck(L_21);
		Text_t356221433 * L_22 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_21, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_23 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_23);
		goto IL_0167;
	}

IL_00d1:
	{
		GameObject_t1756533147 * L_24 = __this->get_Primero_2();
		NullCheck(L_24);
		Text_t356221433 * L_25 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_24, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_25);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, _stringLiteral3828303576);
		GameObject_t1756533147 * L_26 = __this->get_Segundo_3();
		NullCheck(L_26);
		Text_t356221433 * L_27 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_26, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_27);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, _stringLiteral1246232495);
		GameObject_t1756533147 * L_28 = __this->get_Tercero_4();
		NullCheck(L_28);
		Text_t356221433 * L_29 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_28, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, _stringLiteral533159065);
		GameObject_t1756533147 * L_30 = __this->get_M1_5();
		NullCheck(L_30);
		Text_t356221433 * L_31 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_30, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_32 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_32);
		GameObject_t1756533147 * L_33 = __this->get_M2_6();
		NullCheck(L_33);
		Text_t356221433 * L_34 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_33, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_35 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_34, L_35);
		GameObject_t1756533147 * L_36 = __this->get_M3_7();
		NullCheck(L_36);
		Text_t356221433 * L_37 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_36, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_38 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_37);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_38);
	}

IL_0167:
	{
		goto IL_0202;
	}

IL_016c:
	{
		GameObject_t1756533147 * L_39 = __this->get_Primero_2();
		NullCheck(L_39);
		Text_t356221433 * L_40 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_39, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_40);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, _stringLiteral533159065);
		GameObject_t1756533147 * L_41 = __this->get_Segundo_3();
		NullCheck(L_41);
		Text_t356221433 * L_42 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_41, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_42);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, _stringLiteral3828303576);
		GameObject_t1756533147 * L_43 = __this->get_Tercero_4();
		NullCheck(L_43);
		Text_t356221433 * L_44 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_43, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_44);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, _stringLiteral1246232495);
		GameObject_t1756533147 * L_45 = __this->get_M1_5();
		NullCheck(L_45);
		Text_t356221433 * L_46 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_45, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_47 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_46);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_46, L_47);
		GameObject_t1756533147 * L_48 = __this->get_M2_6();
		NullCheck(L_48);
		Text_t356221433 * L_49 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_48, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_50 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_49);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, L_50);
		GameObject_t1756533147 * L_51 = __this->get_M3_7();
		NullCheck(L_51);
		Text_t356221433 * L_52 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_51, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_53 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_52);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_52, L_53);
	}

IL_0202:
	{
		goto IL_03e1;
	}

IL_0207:
	{
		int32_t L_54 = V_1;
		int32_t L_55 = V_2;
		if ((((int32_t)L_54) <= ((int32_t)L_55)))
		{
			goto IL_034b;
		}
	}
	{
		int32_t L_56 = V_2;
		int32_t L_57 = V_0;
		if ((((int32_t)L_56) <= ((int32_t)L_57)))
		{
			goto IL_02b0;
		}
	}
	{
		GameObject_t1756533147 * L_58 = __this->get_Primero_2();
		NullCheck(L_58);
		Text_t356221433 * L_59 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_58, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_59);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_59, _stringLiteral1246232495);
		GameObject_t1756533147 * L_60 = __this->get_Segundo_3();
		NullCheck(L_60);
		Text_t356221433 * L_61 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_60, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_61);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_61, _stringLiteral533159065);
		GameObject_t1756533147 * L_62 = __this->get_Tercero_4();
		NullCheck(L_62);
		Text_t356221433 * L_63 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_62, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_63);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_63, _stringLiteral3828303576);
		GameObject_t1756533147 * L_64 = __this->get_M1_5();
		NullCheck(L_64);
		Text_t356221433 * L_65 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_64, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_66 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_65);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_65, L_66);
		GameObject_t1756533147 * L_67 = __this->get_M2_6();
		NullCheck(L_67);
		Text_t356221433 * L_68 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_67, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_69 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_68);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_68, L_69);
		GameObject_t1756533147 * L_70 = __this->get_M3_7();
		NullCheck(L_70);
		Text_t356221433 * L_71 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_70, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_72 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_71);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_71, L_72);
		goto IL_0346;
	}

IL_02b0:
	{
		GameObject_t1756533147 * L_73 = __this->get_Primero_2();
		NullCheck(L_73);
		Text_t356221433 * L_74 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_73, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_74);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_74, _stringLiteral1246232495);
		GameObject_t1756533147 * L_75 = __this->get_Segundo_3();
		NullCheck(L_75);
		Text_t356221433 * L_76 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_75, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_76);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_76, _stringLiteral3828303576);
		GameObject_t1756533147 * L_77 = __this->get_Tercero_4();
		NullCheck(L_77);
		Text_t356221433 * L_78 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_77, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_78);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_78, _stringLiteral533159065);
		GameObject_t1756533147 * L_79 = __this->get_M1_5();
		NullCheck(L_79);
		Text_t356221433 * L_80 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_79, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_81 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_80);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_80, L_81);
		GameObject_t1756533147 * L_82 = __this->get_M2_6();
		NullCheck(L_82);
		Text_t356221433 * L_83 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_82, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_84 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_83);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_83, L_84);
		GameObject_t1756533147 * L_85 = __this->get_M3_7();
		NullCheck(L_85);
		Text_t356221433 * L_86 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_85, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_87 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_86);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_86, L_87);
	}

IL_0346:
	{
		goto IL_03e1;
	}

IL_034b:
	{
		GameObject_t1756533147 * L_88 = __this->get_Primero_2();
		NullCheck(L_88);
		Text_t356221433 * L_89 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_88, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_89);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_89, _stringLiteral533159065);
		GameObject_t1756533147 * L_90 = __this->get_Segundo_3();
		NullCheck(L_90);
		Text_t356221433 * L_91 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_90, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_91);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_91, _stringLiteral1246232495);
		GameObject_t1756533147 * L_92 = __this->get_Tercero_4();
		NullCheck(L_92);
		Text_t356221433 * L_93 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_92, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_93);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_93, _stringLiteral3828303576);
		GameObject_t1756533147 * L_94 = __this->get_M1_5();
		NullCheck(L_94);
		Text_t356221433 * L_95 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_94, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_96 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_95);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_95, L_96);
		GameObject_t1756533147 * L_97 = __this->get_M2_6();
		NullCheck(L_97);
		Text_t356221433 * L_98 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_97, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_99 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_98);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_98, L_99);
		GameObject_t1756533147 * L_100 = __this->get_M3_7();
		NullCheck(L_100);
		Text_t356221433 * L_101 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_100, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_102 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_101);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_101, L_102);
	}

IL_03e1:
	{
		return;
	}
}
// System.Void Prueba::.ctor()
extern "C"  void Prueba__ctor_m3369798356 (Prueba_t3151752491 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Prueba::Start()
extern "C"  void Prueba_Start_m3040736696 (Prueba_t3151752491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Prueba_Start_m3040736696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = PlayerPrefs_GetInt_m136681260(NULL /*static, unused*/, _stringLiteral3675615724, 0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Prueba_Setear_m3643891862(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		int32_t L_1 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral3828303576, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral1246232495, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral533159065, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_00e7;
		}
	}
	{
		GameObject_t1756533147 * L_10 = __this->get_Primero_2();
		NullCheck(L_10);
		Text_t356221433 * L_11 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_10, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, _stringLiteral3828303576);
		GameObject_t1756533147 * L_12 = __this->get_Segundo_3();
		NullCheck(L_12);
		Text_t356221433 * L_13 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_12, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, _stringLiteral533159065);
		GameObject_t1756533147 * L_14 = __this->get_Tercero_4();
		NullCheck(L_14);
		Text_t356221433 * L_15 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_14, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, _stringLiteral1246232495);
		GameObject_t1756533147 * L_16 = __this->get_M1_5();
		NullCheck(L_16);
		Text_t356221433 * L_17 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_16, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_18 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_18);
		GameObject_t1756533147 * L_19 = __this->get_M2_6();
		NullCheck(L_19);
		Text_t356221433 * L_20 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_19, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_21 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_21);
		GameObject_t1756533147 * L_22 = __this->get_M3_7();
		NullCheck(L_22);
		Text_t356221433 * L_23 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_22, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_24 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_23);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_24);
		goto IL_017d;
	}

IL_00e7:
	{
		GameObject_t1756533147 * L_25 = __this->get_Primero_2();
		NullCheck(L_25);
		Text_t356221433 * L_26 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_25, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_26);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, _stringLiteral3828303576);
		GameObject_t1756533147 * L_27 = __this->get_Segundo_3();
		NullCheck(L_27);
		Text_t356221433 * L_28 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_27, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_28);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_28, _stringLiteral1246232495);
		GameObject_t1756533147 * L_29 = __this->get_Tercero_4();
		NullCheck(L_29);
		Text_t356221433 * L_30 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_29, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_30);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, _stringLiteral533159065);
		GameObject_t1756533147 * L_31 = __this->get_M1_5();
		NullCheck(L_31);
		Text_t356221433 * L_32 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_31, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_33 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, L_33);
		GameObject_t1756533147 * L_34 = __this->get_M2_6();
		NullCheck(L_34);
		Text_t356221433 * L_35 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_34, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_36 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_35);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_36);
		GameObject_t1756533147 * L_37 = __this->get_M3_7();
		NullCheck(L_37);
		Text_t356221433 * L_38 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_37, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_39 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_38);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, L_39);
	}

IL_017d:
	{
		goto IL_0218;
	}

IL_0182:
	{
		GameObject_t1756533147 * L_40 = __this->get_Primero_2();
		NullCheck(L_40);
		Text_t356221433 * L_41 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_40, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_41);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_41, _stringLiteral533159065);
		GameObject_t1756533147 * L_42 = __this->get_Segundo_3();
		NullCheck(L_42);
		Text_t356221433 * L_43 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_42, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_43);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, _stringLiteral3828303576);
		GameObject_t1756533147 * L_44 = __this->get_Tercero_4();
		NullCheck(L_44);
		Text_t356221433 * L_45 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_44, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_45);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, _stringLiteral1246232495);
		GameObject_t1756533147 * L_46 = __this->get_M1_5();
		NullCheck(L_46);
		Text_t356221433 * L_47 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_46, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_48 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_47);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_47, L_48);
		GameObject_t1756533147 * L_49 = __this->get_M2_6();
		NullCheck(L_49);
		Text_t356221433 * L_50 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_49, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_51 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_50);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_50, L_51);
		GameObject_t1756533147 * L_52 = __this->get_M3_7();
		NullCheck(L_52);
		Text_t356221433 * L_53 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_52, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_54 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_53);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_53, L_54);
	}

IL_0218:
	{
		goto IL_03f7;
	}

IL_021d:
	{
		int32_t L_55 = V_1;
		int32_t L_56 = V_2;
		if ((((int32_t)L_55) <= ((int32_t)L_56)))
		{
			goto IL_0361;
		}
	}
	{
		int32_t L_57 = V_2;
		int32_t L_58 = V_0;
		if ((((int32_t)L_57) <= ((int32_t)L_58)))
		{
			goto IL_02c6;
		}
	}
	{
		GameObject_t1756533147 * L_59 = __this->get_Primero_2();
		NullCheck(L_59);
		Text_t356221433 * L_60 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_59, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_60);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_60, _stringLiteral1246232495);
		GameObject_t1756533147 * L_61 = __this->get_Segundo_3();
		NullCheck(L_61);
		Text_t356221433 * L_62 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_61, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_62);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_62, _stringLiteral533159065);
		GameObject_t1756533147 * L_63 = __this->get_Tercero_4();
		NullCheck(L_63);
		Text_t356221433 * L_64 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_63, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_64);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_64, _stringLiteral3828303576);
		GameObject_t1756533147 * L_65 = __this->get_M1_5();
		NullCheck(L_65);
		Text_t356221433 * L_66 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_65, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_67 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_66);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_66, L_67);
		GameObject_t1756533147 * L_68 = __this->get_M2_6();
		NullCheck(L_68);
		Text_t356221433 * L_69 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_68, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_70 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_69);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_69, L_70);
		GameObject_t1756533147 * L_71 = __this->get_M3_7();
		NullCheck(L_71);
		Text_t356221433 * L_72 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_71, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_73 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_72);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_72, L_73);
		goto IL_035c;
	}

IL_02c6:
	{
		GameObject_t1756533147 * L_74 = __this->get_Primero_2();
		NullCheck(L_74);
		Text_t356221433 * L_75 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_74, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_75);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_75, _stringLiteral1246232495);
		GameObject_t1756533147 * L_76 = __this->get_Segundo_3();
		NullCheck(L_76);
		Text_t356221433 * L_77 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_76, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_77);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_77, _stringLiteral3828303576);
		GameObject_t1756533147 * L_78 = __this->get_Tercero_4();
		NullCheck(L_78);
		Text_t356221433 * L_79 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_78, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_79);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_79, _stringLiteral533159065);
		GameObject_t1756533147 * L_80 = __this->get_M1_5();
		NullCheck(L_80);
		Text_t356221433 * L_81 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_80, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_82 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_81);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_81, L_82);
		GameObject_t1756533147 * L_83 = __this->get_M2_6();
		NullCheck(L_83);
		Text_t356221433 * L_84 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_83, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_85 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_84);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_84, L_85);
		GameObject_t1756533147 * L_86 = __this->get_M3_7();
		NullCheck(L_86);
		Text_t356221433 * L_87 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_86, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_88 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_87);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_87, L_88);
	}

IL_035c:
	{
		goto IL_03f7;
	}

IL_0361:
	{
		GameObject_t1756533147 * L_89 = __this->get_Primero_2();
		NullCheck(L_89);
		Text_t356221433 * L_90 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_89, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_90);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_90, _stringLiteral533159065);
		GameObject_t1756533147 * L_91 = __this->get_Segundo_3();
		NullCheck(L_91);
		Text_t356221433 * L_92 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_91, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_92);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_92, _stringLiteral3828303576);
		GameObject_t1756533147 * L_93 = __this->get_Tercero_4();
		NullCheck(L_93);
		Text_t356221433 * L_94 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_93, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		NullCheck(L_94);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_94, _stringLiteral1246232495);
		GameObject_t1756533147 * L_95 = __this->get_M1_5();
		NullCheck(L_95);
		Text_t356221433 * L_96 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_95, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_97 = Int32_ToString_m2960866144((&V_2), /*hidden argument*/NULL);
		NullCheck(L_96);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_96, L_97);
		GameObject_t1756533147 * L_98 = __this->get_M2_6();
		NullCheck(L_98);
		Text_t356221433 * L_99 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_98, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_100 = Int32_ToString_m2960866144((&V_1), /*hidden argument*/NULL);
		NullCheck(L_99);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_99, L_100);
		GameObject_t1756533147 * L_101 = __this->get_M3_7();
		NullCheck(L_101);
		Text_t356221433 * L_102 = GameObject_GetComponent_TisText_t356221433_m1217399699(L_101, /*hidden argument*/GameObject_GetComponent_TisText_t356221433_m1217399699_MethodInfo_var);
		String_t* L_103 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_102);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_102, L_103);
	}

IL_03f7:
	{
		return;
	}
}
// System.Void Prueba::Update()
extern "C"  void Prueba_Update_m2140754027 (Prueba_t3151752491 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Prueba::Setear()
extern "C"  void Prueba_Setear_m3643891862 (Prueba_t3151752491 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Prueba_Setear_m3643891862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral3828303576, ((int32_t)80), /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral1246232495, ((int32_t)75), /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral533159065, ((int32_t)90), /*hidden argument*/NULL);
		PlayerPrefs_SetInt_m3351928596(NULL /*static, unused*/, _stringLiteral3675648524, 1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
