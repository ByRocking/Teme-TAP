#pragma once
#ifndef Animal_h
#include <iostream>
using namespace std;

class Animal {
	protected:
		string specie;
		unsigned int varsta;
	public:
		Animal(string specie = " ", unsigned int varsta = 0);
		Animal(const Animal& anim);
		~Animal();
		virtual void heterotrof() = 0;
		inline string getSpecie() const {
			return this->specie;
		}
		inline void setSpecie(string specie) {
			this->specie = specie;
		}
		inline unsigned int getVarsta() const {
			return this->varsta;
		}
		inline void setVarsta(unsigned int varsta) {
			this->varsta = varsta;
		}
};
class Mamifer : public Animal {
	protected:
		unsigned int lungime;
	public:
		Mamifer(string specie = " ", unsigned int varsta = 0, unsigned int lungime = 0);
		Mamifer(const Mamifer& mami);
		~Mamifer();
		inline unsigned int getLungime() const {
			return this->lungime;
		}
		inline void setLungime(unsigned int lungime) {
			this->lungime = lungime;
		}
		void heterotrof() override;
		void naste();
};
class Pasare : public Animal {
	protected:
		unsigned int nrPene;
	public:
		Pasare(string specie = " ", unsigned int varsta = 0, unsigned int nrPene = 0);
		Pasare(const Pasare& pas);
		~Pasare();
		inline unsigned int getNrPene() const {
			return this->nrPene;
		}
		inline void setNrPene(unsigned int nrPene) {
			this->nrPene = nrPene;
		}
		void heterotrof() override;
		void zboara();
};
class Ornitorinc : public Mamifer, public Pasare {
	public:
		Ornitorinc(string specie = " ", unsigned int varsta = 0, unsigned int lungime = 0, unsigned int nrPene = 0);
		Ornitorinc(const Ornitorinc& orni);
		~Ornitorinc();
		void heterotrof() override;
		void amfibiu();
};
#endif // !Animal_h

