#include "pilot.h"
#include <iostream>

using namespace std;

void Pilot::povecajsate(int hours) {
	sati += hours;
}

void Pilot::promenilet(bool flight) {
	leti = flight;
}

void Pilot::pisi() {
	cout << ime << "(" << sati << ")" << "-" << (leti ? "L" : "N");
	cout << endl;
};
