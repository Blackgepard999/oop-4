#pragma once
#include "stdafx.h"

class PrintHouse: public PrintBook
{
public:
	PrintHouse();
	~PrintHouse();
	void SetAmountCopy(int amountCopy);
	int GetAmountCopy();
	virtual void print() { cout << "���������� �����: " << AmountCopy << endl; }
private:
	int AmountCopy;
};