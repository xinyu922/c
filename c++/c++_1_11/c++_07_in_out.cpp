#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cout << "请输入一串字符串：\n";
	// std::cin >> str;
	std::getline(std::cin, str);//得到一连串的字符串，空格会终止cin 的接受
	std::cout << str << "\n";

	return 0;
}