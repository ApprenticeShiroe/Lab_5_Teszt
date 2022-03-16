#include <string.h>
#include "person.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


person::person()
{
	setFirstName("John");
	setLastName("Doe");
	setTaxNumber("");
	generatePrivateKey();
	contact = nullptr;
}

person::person(char const* name1, char const* name2)
{
	setFirstName(name1);
	setLastName(name2);
	setTaxNumber("");
	generatePrivateKey();
	contact = nullptr;
}

person::person(char const* name1, char const* name2, char const* tax)
{
	setFirstName(name1);
	setLastName(name2);
	setTaxNumber(tax);
	generatePrivateKey();
	contact = nullptr;
}

void person::setFirstName(char const* name)
{
	if (strlen(name) > 19) return;
	strcpy_s(firstName, name);
}

void person::setLastName(char const* name)
{
	if (strlen(name) > 19) return;
	strcpy_s(lastName, name);
}

void person::setTaxNumber(char const* number)
{
	if (strlen(number) > 9) return;
	strcpy_s(taxNumber, number);
}

void person::generatePrivateKey()
{
	for (int i = 0; i < 1999; ++i) {
		privateKey[i] = rand() % ('Z' - 'A' + 1) + 'A';
	}
	privateKey[1999] = '\0';
}


void person::setContact(person* person)
{
	contact = person;
}

void person::print()
{
	printf("Nev: %s %s\n", firstName, lastName);
	printf("Adoazonosito: %s\n", taxNumber);
	if (contact != nullptr) {
		printf("Ajanlotta: %s\n", contact->firstName);
	}
}
