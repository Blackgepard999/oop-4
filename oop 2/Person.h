#pragma once
#include "stdafx.h"

class Person: public Author
{
public:
	Person();
	~Person();
	void SetAlias(string alias);
	string GetAlias();
	virtual void print() { cout << "ѕсевдоним: " << Alias << endl; }
	virtual void add();
	friend ostream& operator <<(ostream& out, Person& e) { out << e.Alias << endl; return out; }
	static void show();
private:
	string Alias;
};