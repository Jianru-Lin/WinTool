// GetLongPathName.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	_TCHAR result[MAX_PATH] = { 0 };

	if (argc != 2) {
		printf("GetLongPathName.exe <path>\n");
		return 0;
	}

	DWORD cch_without_null = GetLongPathName(argv[1], result, MAX_PATH);

	if (cch_without_null == 0) {
		printf("ERROR CODE: %d\n", GetLastError());
		return 1;
	}

	_tprintf(_T("%s\n"), result);
	return 0;
}

