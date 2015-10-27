#include "stdafx.h"

void Book::SetTomNumber(int tomNumber)
{
	TomNumber = tomNumber;
}


int Book::GetTomNumber()
{
	return TomNumber;
}


Book::Book()
{
	TomNumber = 1;
}


Book::~Book()
{
}