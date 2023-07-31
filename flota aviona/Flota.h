#include <string>
#include "Avion.h"

using namespace std;

#ifndef _Flota_h_
#define _Flota_h_

class Flota {
	string naziv;
	struct Elem {
		Avion* a;
		Elem* sled;
		Elem(Avion* a, Elem* s = nullptr) :a(a), sled(s) {};
	};
	Elem* prvi = nullptr;

public:
	//konstruktori destruktori itd
	Flota(string ime): naziv(ime) {};

	void dodaj(Avion* a);

	void pisi();

	int ukbraviona();
	int ukbrputnika();
	Elem* dohvmax();

	void izbaciav(string ime);
	Flota* dohvinterval(int min, int max,Flota* f);
};

#endif

