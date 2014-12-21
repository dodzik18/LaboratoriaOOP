#pragma once
class ContactDetails
{
public:
	ContactDetails(int postalCode_ = 0, int idCardNumber_ = 0)
		:postalCode(postalCode_), idCardNumber(idCardNumber_) {};



private:
	int postalCode, idCardNumber;
};

