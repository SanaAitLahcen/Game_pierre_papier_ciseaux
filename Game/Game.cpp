#include <iostream>
#include"Joueur.h"
#include"Joueur_Normal.h"
#include"Joueur_Ordinateur.h"
#include"Match.h"

int main()
{
    int choix;
    string nom;
    cout << endl;
    cout << "___________________________________________________________Bienvenue dans le jeu Pierre-Papier-Ciseaux!____________________________________________________________________________________________"<<endl<<endl;

    cout << "Pouvez-vous entrer votre nom?" << endl;
    cin >> nom;
    cout << endl;
    Joueur* J1 = new Joueur_Normal(nom);
    Joueur* J2 = new Joueur_Ordinateur("Sana");
    while (true) 
    {
        cout << "Entrer votre choix:" << endl;
        cout << "1. Jouer un match\n2. Quitter\n";
        cout << "Choix:";
        cin >> choix;

        if (choix == 1) {
            Match* M1 = new Match(3, J1, J2);
            M1->jouerMatch();
            delete M1;
           
        }

        else if (choix == 2) {
            cout << "Au revoir !\n";
            break;
        }
        else
            cout << "Il faux saisir un choix parmi les deux !\n";
    }
    delete J1, J2;
}

