#include "Let.h"
#include <iostream>

using namespace std;

int Let::current_id = 1;

void Let::pisi() {
	cout << "LET" << ":" << pol << ":" << dol << "-";
	av->pisi();
	cout << id << endl;
};
