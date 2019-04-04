#include "pch.h"
#include "Medikament.h"


Medikament::Medikament()
{
	this->name = "";
	this->menge = 0;
	this->konz = 0.0;
	this->preis = 0.0;

}

Medikament::Medikament(string name, float konz, int menge, float preis)
{
	this->name=name;
	this->menge=menge;
	this->konz=konz;
	this->preis=preis;
}

string Medikament::getName()
{
	return this->name;
}

float Medikament::getKonz()
{
	return this->konz;
}

int Medikament::getMenge()
{
	return this->menge;
}

float Medikament::getPreis()
{
	return this->preis;
}

void Medikament::setName(string new_name)
{
	this->name = new_name;
}

void Medikament::setKonz(float new_konz)
{
	this->konz = new_konz;
}

void Medikament::setMenge(int new_menge)
{
	this->menge = new_menge;
}

void Medikament::setPreis(float new_preis)
{
	this->preis = new_preis;
}


Medikament::~Medikament()
{
}
