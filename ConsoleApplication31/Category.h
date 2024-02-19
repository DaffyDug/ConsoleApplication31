#pragma once
#define _CRT_SECURE_NO_WORNINGS
#include <iostream>
class Category
{
	char _Title[100];
	int _Code;
public:
	Category(const char Title[100], int code)
	{
		_Code = code;
		strcpy_s(_Title, Title);
	}
	Category(){}
	int GetCode()
	{
		return _Code;
	}
	char* GetTitle()
	{
		return _Title;
	}

};

