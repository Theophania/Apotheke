#pragma once
#include"Medikament.h"
#include<vector>
#include<string>

class Apotheke
{
private:
	vector<Medikament> lista_med;
	int searchMed(Medikament med);
	bool comp(Medikament &a, Medikament &b);
	bool comp2(Medikament &a, Medikament &b);
public:
	Apotheke();
	~Apotheke();
	void addMed(Medikament med);
	void deleteMed(Medikament med);
	void changeMed(string n_name, float n_konz, int n_menge, float n_preis);
	vector<Medikament> zeichenKette(string kette);
	vector<Medikament> fewMed(int menge);
	vector<Medikament> sortPreis();
	

	
};

