#include <string>

using namespace std;

#ifndef _Pilot_h_
#define _Pilot_h_

class Pilot {
	string ime;
	int sati;
	bool leti;

public:
	Pilot(string ime, int sati, bool leti = false) : ime(ime), sati(sati), leti(leti) {};
	Pilot(const Pilot& p) = delete;

	string dohvime() const{ return ime; };
	int dohvsate() const{ return sati; };
	bool dohvleti() const{ return leti; };

	void povecajsate(int hours);
	void promenilet(bool flight);

	void pisi();
};

#endif
