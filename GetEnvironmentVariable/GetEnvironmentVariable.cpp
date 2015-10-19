// GetEnvironmentVariable.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

const int buff_len = 32767 * 2;
TCHAR buff[buff_len] = { 0 };

int _tmain(int argc, _TCHAR* argv[])
{
	if (argc != 2)
	{
		printf("GetEnvironmentVariable.exe <name>\n");
		return 0;
	}

	DWORD cch = GetEnvironmentVariable(argv[1], buff, buff_len);
	if (cch < 1)
	{
		printf("ERROR CODE: %d\n", GetLastError());
		return 1;
	}

	_tprintf(_T("%s=%s\n"), argv[1], buff);
	return 0;
}

