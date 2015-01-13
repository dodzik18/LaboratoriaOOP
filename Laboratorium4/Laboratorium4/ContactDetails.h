#pragma once
#include <iostream>
class ContactDetails
{
public:

	int getPostalCode(void) { return postalCode; };
	int getidCardNumber(void) { return idCardNumber; };

	void show(void);

	ContactDetails(int postalCode_ = 0, int idCardNumber_ = 0)
		:postalCode(postalCode_), idCardNumber(idCardNumber_) {};
	ContactDetails(const ContactDetails&);

private:
	int postalCode, idCardNumber;
};

