#include <iostream>

int main()
{
	int var = 123;
	int var1 = 12;
	std::cout << "数据在内存中的地址是：" << &var << "\n";
	std::cout << "数据在内存中的地址是：" << &var1 << "\n";

	return 0;
}