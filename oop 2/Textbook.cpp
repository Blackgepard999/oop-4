#include "stdafx.h"

void Textbook::SetPubYear(int pubYear)
{
	PubYear = pubYear;
}


int Textbook::GetPubYear()
{
	return PubYear;
}


Textbook::Textbook()
{
	PubYear = 2015;
}


Textbook::~Textbook()
{
}