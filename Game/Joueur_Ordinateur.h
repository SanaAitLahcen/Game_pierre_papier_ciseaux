#pragma once
#include "Joueur.h"
#include <vector>
class Joueur_Ordinateur : public Joueur {
public:
    Joueur_Ordinateur(string nom);
    Coup choisirCoup() override;
    ~Joueur_Ordinateur();
};

