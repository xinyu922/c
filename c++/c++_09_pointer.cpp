#include <iostream>
#include <string>

int main()
{
	int a = 123;
	float b = 3.14;
	char c = 'C';
	unsigned long d = 19880808;
	std::string e = "I love you!";

	std::cout << "a 的值是:" << a << "\n";
	std::cout << "b 的值是:" << b << "\n";
	std::cout << "c 的值是:" << c << "\n";
	std::cout << "d 的值是:" << d << "\n";
	std::cout << "e 的值是:" << e << "\n\n";

	int *aPointer = &a;
	float *bPointer = &b;
	char *cPointer = &c;
	unsigned long *dPointer = &d;
	std::string *ePointer = &e;

	*aPointer = 456;
	*bPointer = 3.14;
	*cPointer = 'F';
	*dPointer = 20111124;
	*ePointer = "I love you !!!";

	std::cout << "a 的值是:" << a << "\n";
	std::cout << "b 的值是:" << b << "\n";
	std::cout << "c 的值是:" << c << "\n";
	std::cout << "d 的值是:" << d << "\n";
	std::cout << "e 的值是:" << e << "\n\n";

	return 0;

}