#pragma once
#include "stdafx.h"

class Textbook : public Book
{
public:
	Textbook();
	~Textbook();
	void SetPubYear(int pubYear);
	int GetPubYear();
	virtual void print() { cout << "��� �������: " << PubYear << endl; }
private:
	int PubYear;
};