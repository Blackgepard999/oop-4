#pragma once
#include "stdafx.h"

class Journal : public Person
{
public:
	Journal();
	~Journal();
	void SetAmountPages(int amountPages);
	int GetAmountPages();
	virtual void print() { cout << "���������� �������: "<< AmountPages << endl; }
private:
	int AmountPages;
};