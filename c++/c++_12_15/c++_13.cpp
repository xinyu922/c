#include <iostream>
using namespace std;

union mima
{
	unsigned long birthday;
	unsigned short ssn;
	char *pet;
};

int main()
{
	mima mima_1;
	mima_1.birthday = 19980101;

	cout << mima_1.birthday << "\n";

	mima_1.pet = "Chaozai";
	cout << mima_1.pet << "\n";
	cout << mima_1.birthday << "\n";

	return 0;
}


