#include "stdafx.h"

void Journal::SetAmountPages(int amountPages)
{
	AmountPages = amountPages;
}


int Journal::GetAmountPages()
{
	return AmountPages;
}


Journal::Journal()
{
	AmountPages = 63;
}


Journal::~Journal()
{
}