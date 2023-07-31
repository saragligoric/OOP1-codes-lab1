#include "Let.h"

#ifndef _Arhiva_h_
#define _Arhiva_h_

class Arhiva {
	struct Elem {
		Let* let;
		Elem* sled;
		Elem(Let* l, Elem* s = nullptr) : let(l), sled(s) {};
	};
	Elem* prvi = nullptr;

public:
	//konstruktori destruktori itd
	void dodaj(Let* l);
	void pisi();
	Arhiva* dohvpolaz(string polaz, Arhiva *a);
	//isto sranje i za dolaziste mrzi me
	//opet isto sranje za polaziste i dolaziste zajedno i to me mrzi xixixi
};

#endif

