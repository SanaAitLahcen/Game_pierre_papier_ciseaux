#include "Joueur_Normal.h"
Joueur_Normal::Joueur_Normal(string nom) :Joueur(nom)
{
}

Coup Joueur_Normal::choisirCoup()
{
    int choix;
    cout << "choisissez votre coup: " << endl;
    cout << "0:Pierre" << endl;
    cout << "1:Papier" << endl;
    cout << "2:Ciseaux" << endl;
    cout << "choix:";
    cin >> choix;
    cout <<endl;
    vector<string> coups = { "Pierre", "Papier", "Ciseaux" };
    return Coup(coups[choix]);
}

Joueur_Normal::~Joueur_Normal()
{
}

