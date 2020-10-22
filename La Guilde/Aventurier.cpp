#include "Aventurier.h"
Aventurier::Aventurier()
{

}

Aventurier::Aventurier(string _nom, int _niveau, int _exp)
{
	nom = _nom;
	niveau = _niveau;
	exp = _exp;
}
void  Aventurier::setRace(Race *race)
{
	maRace = race;
}
Race* Aventurier::getRace()
{
	return maRace;
}

int Aventurier::getAtt()
{
	return attaque;
}

int Aventurier::getDef()
{
	return vie;
}

int Aventurier::getVie()
{
	return vie;
}

std::string Aventurier::to_string()
{
	std::string t;
	t.append(" " + nom + " " + std::to_string(this->niveau) + " " + std::to_string(this->exp) + " " + std::to_string(this->getAtt()) + " " + std::to_string(this->getDef()) + " " + std::to_string(this->getVie()));
	return t;
}