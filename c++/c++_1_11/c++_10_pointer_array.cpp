#include <iostream>

int main()
{
	const unsigned short ITEMS = 5;

	int intArray[ITEMS] = {1, 2 ,3 ,4, 5};
	char charAaary[ITEMS] = {'F', 'i', 's', 'h', 'c'};

	int *intPtr = intArray;
	char *charPtr = charAaary;

	std::cout << "整形数组输出：" << "\n";
	for (int i =0; i < ITEMS; i++)
	{
		std::cout << *intPtr << " at " << reinterpret_cast <unsigned long> (intPtr) << "\n";//强制格式转换
		intPtr++;
	}

	std::cout << "字符型数组输出：" << "\n";
	for (int i =0; i < ITEMS; i++)
	{
		// std::cout << *charPtr << " at " << reinterpret_cast <unsigned long> (charPtr) << "\n";
		std::cout << *charPtr << " at " << charPtr << "\n";
		charPtr++;
	}

	return 0;

}