// Common.cpp : DLL ������ʵ�֡�


#include "stdafx.h"
#include "resource.h"

// ģ������ʹ DllMain��DllRegisterServer �� DllUnregisterServer Ϊ���Զ�ʵ��
[ module(dll, uuid = "{2768AE11-1B35-48AE-BA6B-E3AB172F2AAC}", 
		 name = "Common", 
		 helpstring = "Common 1.0 ���Ϳ�",
		 resource_name = "IDR_COMMON") ]
class CCommonModule
{
public:
	CCommonModule()
	{
	}
};
		 
