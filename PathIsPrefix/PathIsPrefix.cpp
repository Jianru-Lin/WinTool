// PathIsPrefix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	if (argc != 3) {
		printf("PathIsPrefix.exe <prefix> <path>\n");
		return 0;
	}

	_tprintf(PathIsPrefix(argv[1], argv[2]) ? _T("TRUE") : _T("FALSE"));

	return 0;
}

