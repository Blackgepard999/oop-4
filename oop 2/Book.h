#pragma once
#include "stdafx.h"

class Book : public Journal
{
public:
	Book();
	~Book();
	void SetTomNumber(int tomNumber);
	int GetTomNumber();
	virtual void print() { cout << "����� ����: " << TomNumber << endl; }
private:
	int TomNumber;
};