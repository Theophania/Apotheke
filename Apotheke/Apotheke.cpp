
#include "pch.h"
#include <iostream>
#include "Apotheke.h"
#include <algorithm>

using namespace std;


Apotheke::Apotheke()
{
}

int Apotheke::searchMed(Medikament med)
{
	for (int i=0; i < lista_med.size(); i++)
	{
		if (lista_med.at(i).getName() == med.getName() && lista_med.at(i).getKonz() == med.getKonz())
			return i;
		
	}
	return -1;


}

void Apotheke::addMed(Medikament med)
{
	int index = searchMed(med);
	if (index != -1)
		lista_med.at(index).setKonz(lista_med.at(index).getKonz() + 1);
	else
		lista_med.push_back(med);
}

void Apotheke::deleteMed(Medikament med)
{	
	int index = searchMed(med);
	if (index != -1)
	{
		if (lista_med.at(index).getKonz() == 1)
		{
			lista_med.erase(lista_med.begin() + index);
		}
		else
			lista_med.at(index).setKonz(lista_med.at(index).getKonz() - 1);
	}
	else
		throw exception();
}
bool Apotheke::comp(Medikament a, Medikament b)
{
	return(a.getName() < b.getName());

}

vector<Medikament> Apotheke::zeichenKette(string kette)
{
	vector<Medikament> result;
	if (kette != "")
	{
		for (int i = 0; i < lista_med.size(); i++)
		{
			if (lista_med.at(i).getName().find(kette) != string::npos)
			{
				result.push_back(lista_med.at(i));
			}
		}


	}

	else
	{
		result = lista_med;
	}

	sort(result.begin(), result.begin()+result.size(), comp);


		return result;
}

vector<Medikament> Apotheke::fewMed(int menge)
{
	vector<Medikament> result;
	for (int i = 0; i < lista_med.size(); i++)
	{
		if (lista_med.at(i).getMenge() <= menge)
		{
			result.push_back(lista_med.at(i));
		}
	}

	return result;


}
bool Apotheke::comp2(Medikament &a, Medikament &b)
{
	return(a.getPreis() < b.getPreis());

}

vector<Medikament> Apotheke::sortPreis()
{
	vector<Medikament> result = lista_med;
	sort(result.begin(), result.end(), comp2);
	return result;
}


Apotheke::~Apotheke()
{
}
