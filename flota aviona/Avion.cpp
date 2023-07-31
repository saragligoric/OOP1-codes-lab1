#include "Avion.h"
#include <iostream>

using namespace std;

void Avion::postkap(Pilot* p) {
	if (p->dohvsate() >= 100) {
		kapetan = p;
		kapetan->promenilet(true);
	}
	else
		cout << "Nije moguce postaviti pilota";
};

void Avion::postkop(Pilot* p) {
	kopilot = p;
	kopilot->promenilet(true);
};

void Avion::pisi(){
	cout << "AVION" << ":" << naziv << "-" << maxput << endl;
};
