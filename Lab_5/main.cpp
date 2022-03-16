#include <stdlib.h>
#include <time.h>
#include "person.h"
#include <stdio.h>

int main() {
	srand(time(NULL));

	//Csináltam egy default konstruktort, lehet a feladat azt kérte ne de mivel még át kell néznem az egészet (picit lemaradtam) így most egyenlõre ez tûnt jónak.

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