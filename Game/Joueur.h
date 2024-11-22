#pragma once
#include <iostream>
#include "Coup.h"
using namespace std;
class Joueur {
private:
    string nom;
    int score;

public:
    Joueur(string nom);
    ~Joueur();

    void AugmenterScore();

    bool operator<(Joueur& J) const;
    bool operator>(Joueur& J) const;
    bool operator==(Joueur& J) const;

    virtual Coup choisirCoup() = 0;

    void afficherJoueur() const;
    void afficherScore() const;

    void InitialiserScore();
};


