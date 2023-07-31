#include <string>
#include "Avion.h"

using namespace std;

#ifndef _Let_h_
#define _Let_h_

class Let {
	static int current_id;

	string pol;
	string dol;
	int id;
	Avion* av;

public:
	Let(string pol, string dol, Avion* a) : pol(pol), dol(dol), av(a), id(current_id++) {};

	void pisi();
	//dohvatanje svih podataka
	string dohvpol() { return pol; };
};

#endif

