#include <iostream>
#include "Pilot.h"
#include "Avion.h"
#include "Flota.h"
#include "Let.h"
#include "Arhiva.h"

using namespace std;

int main() {
	Pilot pilot1("Boban", 30);
	Pilot pilot2("Branko", 120, false);
	Pilot pilot3("Branislav", 180, true);
	Pilot pilot4("Djordje", 30);
	Pilot pilot5("Andrija", 175);
	Pilot pilot6("Aleksa", 120);

	Avion avion1("Boing", 300);
	Avion avion2("Wroom", 150);
	Avion avion3("Niieh", 700);
	avion1.postkap(&pilot2);
	avion1.postkop(&pilot1);
	avion2.postkap(&pilot3);
	avion2.postkop(&pilot4);
	avion3.postkap(&pilot5);
	avion3.postkop(&pilot6);

	Flota flota1("Flotica");
	flota1.dodaj(&avion1);
	flota1.dodaj(&avion2);
	flota1.dodaj(&avion3);

	//Flota flotamod("Modifikovana");
	//Flota* flotapok = &flotamod;
	//flota1.dohvinterval(100, 400, flotapok)->pisi();

	Let let1("Beograd", "London", &avion1);
	Let let2("Pariz", "Berlin", &avion3);
	
	Arhiva arhiva1;
	arhiva1.dodaj(&let1);
	arhiva1.dodaj(&let2);

	Arhiva arhivamod;
	Arhiva* arhivapok = &arhivamod;
	arhiva1.dohvpolaz("Beograd", arhivapok)->pisi();
};