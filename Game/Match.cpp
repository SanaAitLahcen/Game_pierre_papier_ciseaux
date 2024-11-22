#include "Match.h"
Match::Match(int nbTours, Joueur* j1, Joueur* j2)
    : nbTours(nbTours), joueur1(j1), joueur2(j2)
{
    
}


void Match::jouerMatch()
{ 

    this->joueur1->InitialiserScore();
    this->joueur2->InitialiserScore();
    cout << "***Bienvenue ";
    this->joueur1->afficherJoueur();
    cout << " Commancant le Match <<";
    this->joueur1->afficherJoueur();
    cout<<" VS ";
    this->joueur2->afficherJoueur();
    cout<<">>*** " << endl;
	for (int i = 0; i < this->nbTours; i++) {
		std::cout << "           Tour " << i + 1<<"\n";
		Coup coup1 = this->joueur1->choisirCoup();
		Coup coup2 = this->joueur2->choisirCoup();
		this->determinerGagnant(coup1,coup2);
        std::cout << "*******************************************" << endl;
	}
	this->afficherResultat();

}

void Match::determinerGagnant(Coup coup1, Coup coup2)
{
    this->joueur1->afficherJoueur();
    cout << " a choisis ";
    coup1.Afficher_Coup();
    this->joueur2->afficherJoueur();
    cout << " a choisis ";
    coup2.Afficher_Coup();

    if ((coup1 == "Pierre" && coup2== "Ciseaux") ||
        (coup1== "Papier" && coup2 == "Pierre") ||
        (coup1 == "Ciseaux" && coup2 == "Papier")) {
        this->joueur1->afficherJoueur();
        cout <<"  gagne ce tour !\n\n";
        this->joueur1->AugmenterScore();
    }
    else if (coup1 == coup2) {
        std::cout << "Egalite sur ce tour !\n\n";
    }
    else {
        this->joueur2->afficherJoueur();
        cout << "  gagne ce tour !\n\n";
        this->joueur2->AugmenterScore();
    }
}

void Match::afficherResultat()
{
    std::cout << "\n=== Resultat du Match ===\n";
    this->joueur1->afficherJoueur();
    cout << " : ";
    this->joueur1->afficherScore();
    cout<< " points\n" << endl;

    this->joueur2->afficherJoueur();
    cout << " : ";
    this->joueur2->afficherScore();
    cout << " points\n" << endl;

    if (*this->joueur1 < *this->joueur2) 
    {
        std::cout << "Gagnant du match : ";
        this->joueur2->afficherJoueur();
        cout << " !\n";
    }
 
    else if (*this->joueur1 == *this->joueur2) 
    {
        std::cout << "Le match se termine par une egalite !\n";
    }
    else
    {      std::cout << "Gagnant du match : ";
            this->joueur1->afficherJoueur();
             cout << " !\n";
    }
    std::cout << "================================================\n";
}

Match::~Match()
{
}
