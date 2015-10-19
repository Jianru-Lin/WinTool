// GetModuleFileName.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	TCHAR fileName[MAX_PATH] = { 0 };
	DWORD cchLen = GetModuleFileName(NULL, fileName, MAX_PATH); // cchLen ²»º¬ NULL ÔÚÄÚ
	if (cchLen < 1)
	{
		printf("ERROR CODE: %d\n", GetLastError());
		return 1;
	}
	_tprintf(_T("%s\n"), fileName);
	return 0;
}

