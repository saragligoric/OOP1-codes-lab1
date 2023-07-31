#include <string>
#include "Pilot.h"

using namespace std;

#ifndef _Avion_h_
#define _Avion_h_

class Avion {
	string naziv;
	Pilot* kapetan;
	Pilot* kopilot;
	int maxput;

public:
	Avion(string naziv, int maxput) : naziv(naziv), maxput(maxput) {};
	Avion(const Avion& a) = delete;

	void postkap(Pilot* p);
	void postkop(Pilot* p);

	string dohvnaziv() { return naziv; };
	Pilot* dohvkapetana() { return kapetan; };
	Pilot* dohvkopilota() { return kopilot; };
	int dohvmaxput() { return maxput; };

	void pisi();
};

#endif
