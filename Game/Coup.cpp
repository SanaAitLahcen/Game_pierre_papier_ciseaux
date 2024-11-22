#include "Coup.h"

Coup::Coup(string nom) :nom(nom)
{
}

bool Coup::operator==(Coup& C)
{
	return (this->nom == C.nom);
}

bool Coup::operator==(string nom)
{
	return(this->nom == nom);
}

void Coup::Afficher_Coup() const
{
	cout << this->nom<<endl;
}

Coup::~Coup()
{
}
