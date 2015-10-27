#include "stdafx.h"


void Person::SetAlias(string alias)
{
	Alias = alias;
}

string Person::GetAlias()
{
	return Alias;
}


Person::Person()
{
	Alias = "Unknown";
}

Person::~Person()
{

}

void Person::show()
{
	Author *p = head;
	while (p)
	{	
		p->print();
		p = p->next;
	}

}
void Person::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Author *q = head;
		while (q->next != NULL)
		{
			q = q->next;
		}
			q->next = this;
			this->next = NULL;
	}
}