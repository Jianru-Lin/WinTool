// GetFullPathName.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	_TCHAR result[MAX_PATH] = { 0 };
	_TCHAR* filePart = NULL;

	if (argc != 2) {
		printf("GetFullPathName.exe <filename>\n");
		return 0;
	}

	DWORD cch_without_null = GetFullPathName(argv[1], MAX_PATH, result, &filePart);

	if (cch_without_null == 0) {
		printf("ERROR CODE: %d\n", GetLastError());
		return 1;
	}

	_tprintf(_T("%s\n"), filePart);
	return 0;
}

