#pragma once
#include "stdafx.h"

class Book : public Journal
{
public:
	Book();
	~Book();
	void SetTomNumber(int tomNumber);
	int GetTomNumber();
	virtual void print() { cout << "Номер тома: " << TomNumber << endl; }
private:
	int TomNumber;
};