#pragma once
#include "iostream"
using namespace std;
class Coup
{
private:
	string nom;
public:
	Coup(string nom);
	bool operator==(Coup& C);
	bool operator==(string nom);
	void Afficher_Coup() const;
	~Coup();
};