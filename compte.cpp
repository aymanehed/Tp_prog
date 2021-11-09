#include <iostream>
#include "compte.h"
using namespace Banque;
using namespace std;
compte::compte()
{
	this->numcompte = 0;
	this->nom_propritaire = 0;
	this->solde = 0;
}
compte::compte(int num, char* nom, double so)
{
	this->numcompte = num;
	strcpy(this->nom_propritaire, nom);
	this->solde = so;
}
bool compte::retirer_argent(double montant)
{
	if (this->solde >= montant)
	{
		this->solde -= montant;
		return 1;
	}
	else {
		return 0;
	}

}
double compte::deposer_argent(double montant)
{
	double d;
	d = this->solde + montant;
	return d;
}
void compte::consulter_solde()
{

	cout << "le solde actuel est" << this->solde <<;
}
bool compte::transferer_argent(double montant, compte c)
{
	if (this.retirer_argent(montant) ==1)
	{
		this->solde= this.retirer_argent( montant);
		c->solde= c.deposer_argent(montant);
	}
	if (c->solde == c.deposer_argent(montant))
	{
		return 1;

	}
	else
		return 0;
