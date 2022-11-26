#include "AplicatieBanca.h"

// CLASA CONT BANCAR
// Constructor default
ContBancar::ContBancar() {
	this->suma = 1.0;
	this->moneda = "Undefined";
	this->numarCont = "1";
}
// Constructor de copiere
ContBancar::ContBancar(const ContBancar& obiect) {
	this->suma = obiect.suma;
	this->moneda = obiect.moneda;
	this->numarCont = obiect.numarCont;
}
ContBancar::~ContBancar() {
	this->suma = NULL;
	this->moneda = "";
	this->numarCont = "";
}
void ContBancar::setSuma(float suma) {
	this->suma = suma;
}
void ContBancar::setMoneda(string moneda) {
	this->moneda = moneda;
}
void ContBancar::setNumarCont(string numarCont) {
	this->numarCont = numarCont;
}
float ContBancar::getSuma() {
	return this->suma;
}
string ContBancar::getMoneda() {
	return this->moneda;
}
string ContBancar::getNumarCont() {
	return this->numarCont;
}
void ContBancar::transfer(ContBancar& obiect, float suma) {
	obiect.suma = suma;
}
float ContBancar::getDobanda() {
	if (this->moneda == "RON") {
		if (this->suma < 500)
		{
			return (0.3 / 100) * this->suma;
		}
		else if (this->suma > 500) {
			return (0.8 / 100) * this->suma;
		}
	}
	else if (this->moneda == "EUR") {
		return (0.1 / 100) * this->suma;
	}
	else
		return 0;
}
float ContBancar::getSumaTotala() {
	return (this->suma + getDobanda());
}
void ContBancar::depunere(float suma) {
	this->suma += suma;
}
void ContBancar::extragere(float suma) {
	this->suma -= suma;
}
// CLASA CLIENT
Client::Client() {
	this->nume = "Undefined";
	this->prenume = "Undefined";
	this->adresa = "Undefined";
	this->nrConturi = 0;
}
Client::Client(const Client& obiect) {
	this->nume = obiect.nume;
	this->prenume = obiect.prenume;
	this->adresa = obiect.adresa;
	this->nrConturi = obiect.nrConturi;
}
Client::~Client() {
	this->nume = "";
	this->prenume = "";
	this->adresa = "";
	this->nrConturi = NULL;
}
void Client::setNume(string nume) {
	this->nume = nume;
}
void Client::setPrenume(string prenume) {
	this->prenume = prenume;
}
void Client::setAdresa(string adresa) {
	this->adresa = adresa;
}
void Client::setNrConturi(unsigned nrConturi) {
	this->nrConturi = nrConturi;
}
string Client::getNume() {
	return this->nume;
}
string Client::getPrenume() {
	return this->prenume;
}
string Client::getAdresa() {
	return this->adresa;
}
unsigned Client::getNrConturi() {
	return this->nrConturi;
}

//CLASA BANCA
Banca::Banca() {
	this->codBanca = "Undefined";
	this->nrClienti = 0;
}
Banca::Banca(const Banca& obiect) {
	this->codBanca = obiect.codBanca;
	this->nrClienti = obiect.nrClienti;
}
Banca::~Banca() {
	this->codBanca = "";
	this->nrClienti = NULL;
}
void Banca::setCodBanca(string codBanca) {
	this->codBanca = codBanca;
}
void Banca::setNrClienti(unsigned nrClienti) {
	this->nrClienti = nrClienti;
}
string Banca::getCodBanca() {
	return this->codBanca;
}
unsigned Banca::getNrClienti() {
	return this->nrClienti;
}
void Banca::afisareDateBanca() {
	Client::afisareDateClient();
}