// oop 2.cpp: определяет точку входа для консольного приложения.
//
// Классы - Журнал, Книга, Печатное издание, Учебник, Персона, Автор, Издательство.

#include "stdafx.h"


int main()
{
	setlocale(LC_ALL,"rus");

	
	

	Person d1;
	Journal d2;
	Textbook d3;
	d1.add();
	d2.add();
	d3.add();
	
	d3.show();


    return 0;
}


