#include "ContactDetails.h"

ContactDetails::ContactDetails(const ContactDetails& Details)
{
	postalCode = Details.postalCode;
	idCardNumber = Details.idCardNumber;
}