#pragma once
namespace Banque {
	class compte{
	public:
	compte(int num,char* nom,double so);
	compte();
	private:
	int numcompte;
	char* nom_propritaire;
	double solde;
	public:
	bool retirer_argent(double montant);
	double deposer_argent(double montant);
	void consulter_solde();
	bool transferer_argent(double montant,compte c);
	};
}