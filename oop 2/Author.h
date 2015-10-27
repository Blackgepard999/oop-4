#pragma once
#include "stdafx.h"

class Author
{
protected:
	static Author* head;
public:
	Author();
	~Author();
	void SetName(string name);
	string GetName();
	void SetSurname(string surname);
	string GetSurname();
	virtual void print() { cout << "Имя: " << Name << " Фамилия: " << Surname << endl; }
	virtual void add() = 0;
	Author *next;
private:
	string Name;
	string Surname;
};