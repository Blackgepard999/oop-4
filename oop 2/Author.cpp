#include "stdafx.h"


void Author::SetName(string name)
{
	Name = name;
}

string Author::GetName()
{
	return Name;
}


void Author::SetSurname(string surname)
{
	Surname = surname;
}

string Author::GetSurname()
{
	return Surname;
}



Author::Author()
{
	Name = "Unknown";
	Surname = "Unknown";
}

Author::~Author()
{

}

Author* Author::head = NULL;