#pragma once
#include "Category.h"
using namespace std;
class Product
{
	char _Title[100];
	int _Price;
	Category _category;
public:
	Product(int price, const char title[], Category category)
	{
		_Price = price;
		strcpy_s(_Title, title);
		_category = category;
	}
	Product(){}
	void Show()
	{
		cout << "������: " << _Title << endl;
		cout << "����: " << _Price << " ������\n";
		cout << "��������� ������: " << _category.GetTitle() << endl;
	}
	char* GetTitle()
	{
		return _Title;
	}
	int GetPrice()
	{
		return _Price;
	}
	Category GetCategory()
	{
		return _category;
	}
};

