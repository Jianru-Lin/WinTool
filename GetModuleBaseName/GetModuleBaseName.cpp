// GetModuleBaseName.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	TCHAR moduleName[MAX_PATH] = { 0 };
	DWORD cchLen = GetModuleBaseName(GetCurrentProcess(), NULL, moduleName, MAX_PATH); // cchLen ²»º¬ NULL ÔÚÄÚ
	if (cchLen < 1)
	{
		printf("ERROR CODE: %d\n", GetLastError());
		return 1;
	}
	_tprintf(_T("%s\n"), moduleName);
	return 0;
}

