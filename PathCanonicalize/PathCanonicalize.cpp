// PathCanonicalize.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	_TCHAR result[MAX_PATH] = { 0 };

	if (argc != 2) {
		printf("PathCanonicalize.exe <path>\n");
		return 0;
	}

	if (!PathCanonicalize(result, argv[1])) {
		printf("ERROR CODE: %d\n", GetLastError());
		return 1;
	}

	_tprintf(_T("%s\n"), result);

	return 0;
}

