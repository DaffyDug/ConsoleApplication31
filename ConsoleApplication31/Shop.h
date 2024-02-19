#pragma once
#include "Product.h"
class Shop
{
	Product * _product;
	int len;
public:
	Shop() 
	{
		len = 5;
		Category category("������� �������", 1);
		Category category1("������������ �������", 2);
		_product = new Product[len];
		Product Agusha(150, "����� ���� � �������", category);
		Product Tort(350, "��������", category1);
		Product Eckler(240, "������ � ���������", category1);
		Product fruto_niania(120, "�����-���� � ����� � ���������", category);
		Product Pecheniki(50, "�������� � ���������", category1);
		_product[0] = Agusha;
		_product[1] = Tort;
		_product[2] = Eckler;
		_product[3] = fruto_niania;
		_product[4] = Pecheniki;
	}

	void Show_Category(Category cat)
	{
		for (int i = 0; i < len; i++)
		{
			if (_product[i].GetCategory().GetCode() == cat.GetCode())
				_product[i].Show();
		}
	}
	void sortPrice(bool ASC)
	{
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < len-i-1; j++)
			{
				if (_product[j].GetPrice() > _product[j + 1].GetPrice() == ASC)
					swap(_product[j], _product[j + 1]);
			}
		}
	}
};

