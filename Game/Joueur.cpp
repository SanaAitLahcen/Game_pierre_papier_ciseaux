#include "Joueur.h"
Joueur::Joueur(string nom) : nom(nom), score(0)
{
}

Joueur::~Joueur()
{

}

void Joueur::AugmenterScore()
{
	score++;
}

bool Joueur::operator<(Joueur& J) const
{
	return (this->score<J.score);
}

bool Joueur::operator>(Joueur& J) const
{
	return (this->score > J.score);
}

bool Joueur::operator==(Joueur& J) const
{
	return (this->score == J.score);
}

void Joueur::afficherJoueur() const
{
	cout << this->nom;
}

void Joueur::afficherScore() const
{
	cout << this->score;
}

void Joueur::InitialiserScore()
{
	this->score = 0;
}
