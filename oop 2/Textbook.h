#pragma once
#include "stdafx.h"

class Textbook : public Book
{
public:
	Textbook();
	~Textbook();
	void SetPubYear(int pubYear);
	int GetPubYear();
	virtual void print() { cout << "Год издания: " << PubYear << endl; }
private:
	int PubYear;
};