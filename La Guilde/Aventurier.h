#pragma once
#include <string>
#include "Race.h"
using namespace std;

class Aventurier
{
private: 
	int valeurMarchandise;
	Race *maRace;
protected: 
	int attaque;
	int defense;
	int vie;
	int chance;
	string nom;
	int niveau;
	int exp;
public:
	Aventurier();
	Aventurier(string _nom, int _niveau, int _exp);

	int getAtt();
	int getDef();
	int getVie();
	void setRace(Race *race);
	Race* getRace();

	string to_string();

	
};

