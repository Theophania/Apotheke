#include "pch.h"
#include "Medikament.h"
#include "Apotheke.h"
#include <iostream>
#include <vector>

int main()
{	
	
	Medikament m1("nurofen", 20.5, 10, 33.3);
	Medikament m2("ibuprofen", 20.5, 10, 33.3);
	Medikament m3("augibu", 20.5, 10, 2.0);
	Apotheke a;
	a.addMed(m1);
	a.addMed(m3);
	a.addMed(m2);
	vector<Medikament> res = a.zeichenKette("fen");

	for (int i = 0; i < res.size(); i++)
	{
		cout << res.at(i).getName << " ";
	}
}
