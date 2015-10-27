#include "stdafx.h"

void PrintBook::SetTitle(string title)
{
	Title = title ;
}


string PrintBook::GetTitle()
{
	return Title;
}


PrintBook::PrintBook()
{
	Title = "Зорька";
}


PrintBook::~PrintBook()
{
}