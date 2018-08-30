#include <iostream>
// using namespace std;

int main()
{
	char answer;

	std::cout << "请问可以格式化您的硬盘吗？！【Y or N】" << "\n" << std::endl;
	std::cin >> answer;

	switch(answer)
	{
		case 'Y':
		case 'y':
			std::cout << "格式化硬盘不好！！！" << "\n" << std::endl;
			break;
	
		case 'N':
		case 'n':
			std::cout << "您的选择是正确的！！！" << "\n" << std::endl;
			break;

		default:
			std::cout << "您的输入不符合要求！！！" << "\n" << std::endl;
 	}

	return 0;
}
