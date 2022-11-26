#pragma once
#ifndef APLICATIE_BANCA_H
#define APLICATIE_BANCA_H
#include <iostream>

using namespace std;

class Operatiuni {
	public:
		virtual float getSumaTotala() = 0;
		virtual float getDobanda() = 0;
		virtual void depunere(float suma) = 0;
		virtual void extragere(float suma) = 0;
};
class ContBancar : public Operatiuni {
	private: 
		string numarCont;
		float suma;
		string moneda;

	public :
		ContBancar();
		ContBancar(const ContBancar& obiect); // Constructor de copiere
		~ContBancar(); // Destructor
		void setNumarCont(string numarCont);
		void setSuma(float suma);
		void setMoneda(string moneda);
		string getNumarCont();
		float getSuma();
		string getMoneda();
		void transfer(ContBancar& constDest, float suma);
		float getSumaTotala();
		float getDobanda();
		void depunere(float suma);
		void extragere(float suma);
};
class Client : public Operatiuni {
	private:
		string nume;
		string prenume;
		string adresa;
		unsigned nrConturi;
		ContBancar *conturi[2];
	public:
		Client();
		Client(const Client& obiect);
		~Client();
		void setNume(string nume);
		void setPrenume(string prenume);
		void setAdresa(string adresa);
		void setNrConturi(unsigned nrConturi);
		string getNume();
		string getPrenume();
		string getAdresa();
		unsigned getNrConturi();
};

class Banca : public Operatiuni {
	private:
		string codBanca;
		unsigned nrClienti;
		Client *clienti[50];

};
#endif
