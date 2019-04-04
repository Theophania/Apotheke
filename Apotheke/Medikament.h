#pragma once
#include <string>

using namespace std;

class Medikament
{
private:
	string name;
	float konz;
	int menge;
	float preis;

public:
	Medikament(string name, float konz, int menge, float preis);
	Medikament();
	string getName();
	float getKonz();
	int getMenge();
	float getPreis();

	void setName(string new_name);
	void setKonz(float new_konz);
	void setMenge(int new_menge);
	void setPreis(float new_preis);


	~Medikament();
};

