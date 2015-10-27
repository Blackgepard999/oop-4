#include "stdafx.h"

void PrintHouse::SetAmountCopy(int amountCopy)
{
	AmountCopy = amountCopy;
}


int PrintHouse::GetAmountCopy()
{
	return AmountCopy;
}


PrintHouse::PrintHouse()
{
	AmountCopy = 1000;
}


PrintHouse::~PrintHouse()
{
}