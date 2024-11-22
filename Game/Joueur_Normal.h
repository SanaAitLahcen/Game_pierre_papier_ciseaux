#pragma once
#include "Joueur.h"
#include <vector>
class Joueur_Normal :public Joueur
{
public:
	Joueur_Normal(string nom);
	Coup choisirCoup() override;
	~Joueur_Normal();
};


