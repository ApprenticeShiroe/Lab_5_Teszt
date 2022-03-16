#pragma once
class person
{
private:
	char firstName[20];
	char lastName[20];
	char taxNumber[10];
	char privateKey[2000];
	person* contact;
public:

	person();
	person(char const* name1, char const* name2);
	person(char const* name1, char const* name2, char const* tax);


	const char* getFirstName() const { return firstName; }
	void setFirstName(char const* name);

	const char* getLastName() const { return lastName; }
	void setLastName(char const* name);

	const char* getTaxNumber() const { return taxNumber; }
	void setTaxNumber(char const* number);

	char getPrivateKey();
	void generatePrivateKey();

	person* getContact() const { return contact; }
	void setContact(person* person);

	void print();

};

