#include <stdlib.h>
#include <time.h>
#include "person.h"
#include <stdio.h>

int main() {
	srand(time(NULL));

	//Csin�ltam egy default konstruktort, lehet a feladat azt k�rte ne de mivel m�g �t kell n�znem az eg�szet (picit lemaradtam) �gy most egyenl�re ez t�nt j�nak.

	person p;
	p.print();
	p.setFirstName("Janos");
	p.setLastName("Kovacs");
	p.setTaxNumber("875659");
	p.setContact(nullptr);
	p.generatePrivateKey();
	p.print();



	
	return 0;
}