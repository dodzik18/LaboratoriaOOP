#include "ContactDetails.h"

ContactDetails::ContactDetails(const ContactDetails& Details)
{
	postalCode = Details.postalCode;
	idCardNumber = Details.idCardNumber;
}

void ContactDetails::show()
{
	std::cout << "Kod pocztowy: " << postalCode << std::endl;
	std::cout << "Numer dowodu: " << idCardNumber << std::endl;
}
