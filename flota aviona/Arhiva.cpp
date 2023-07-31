#include "Arhiva.h"
#include "Let.h"
#include <iostream>

using namespace std;


void Arhiva::dodaj(Let* let) {
	prvi = new Elem(let, prvi);
};

void Arhiva::pisi() {
	cout << "ARHIVA" << endl;
	Elem* tek = prvi;
	while (tek) {
		tek->let->pisi();
		tek = tek->sled;
	}
};

Arhiva* Arhiva::dohvpolaz(string polaz,Arhiva* a) {
	Elem* tek = prvi;
	while (tek) {
		if (tek->let->dohvpol()==polaz) {
			a->dodaj(tek->let);
		}
		tek = tek->sled;
	}
	return a;
};
