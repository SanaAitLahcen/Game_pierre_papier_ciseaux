#include "Joueur_Ordinateur.h"

Joueur_Ordinateur::Joueur_Ordinateur(string nom) : Joueur(nom)
{
}

Coup Joueur_Ordinateur::choisirCoup()
{
    vector<string> coups = { "Pierre", "Papier", "Ciseaux" };
    return Coup(coups[rand() % 3]);
}

Joueur_Ordinateur::~Joueur_Ordinateur()
{
}
