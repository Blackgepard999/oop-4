#pragma once
#include "stdafx.h"

class PrintBook: public Textbook
{
public:
	PrintBook();
	~PrintBook();
	void SetTitle(string title);
	string GetTitle();
	virtual void print() { cout << "��������: "<< Title << endl; }
private:
	string Title;
};