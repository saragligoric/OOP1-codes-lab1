#include "Flota.h"
#include <iostream>

using namespace std;

void Flota::dodaj(Avion* a) {
	prvi = new Elem(a, prvi);
}
void Flota::pisi(){
	cout << naziv << endl;
	Elem* tek = prvi;
	while (tek) {
		tek->a->pisi();
		tek = tek->sled;
	}
}
int Flota::ukbraviona(){
	int broj = 0;
	Elem* tek = prvi;
	while (tek) {
		broj++;
		tek = tek->sled;
	}
	return broj;
}
int Flota::ukbrputnika(){
	int suma = 0;
	Elem* tek = prvi;
	while (tek) {
		suma += tek->a->dohvmaxput();
		tek = tek->sled;
	}
	return suma;
}
Flota::Elem* Flota::dohvmax(){
	Elem* max=nullptr;
	int maxput = -1;
	Elem* tek = prvi;
	while (tek) {
		if (tek->a->dohvmaxput() > maxput) {
			maxput = tek->a->dohvmaxput();
			max = tek;
		}
		tek = tek->sled;
	};
	return max;
}

void Flota::izbaciav(string ime) {
	Elem* tek = prvi;
	Elem* preth = nullptr;;
	while (tek) {
		if (tek->a->dohvnaziv() == ime) {
			Elem* stari = tek;
			tek = tek->sled;
			if (!preth) {
				preth->sled = tek;
			}
			delete stari;
		}
		else {
			preth = tek;
			tek = tek->sled;
		};
	};
};

Flota* Flota::dohvinterval(int min, int max, Flota* f){
	Elem* tek = prvi;
	while (tek) {
		if (tek->a->dohvmaxput() >= min && tek->a->dohvmaxput() <= max) {
			f->dodaj(tek->a);
		}
		tek = tek->sled;
	}
	return f;
};
