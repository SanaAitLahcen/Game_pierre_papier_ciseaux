#pragma once
#include "Joueur.h"
#include <vector>
class Match {
private:
    int nbTours;
    Joueur* joueur1;
    Joueur* joueur2;

public:
    Match(int nbTours, Joueur* j1, Joueur* j2);

    void jouerMatch();

    void determinerGagnant(Coup coup1, Coup coup2);

    void afficherResultat();


    ~Match();
        
};
