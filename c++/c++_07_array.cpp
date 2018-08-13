#include <iostream>

int main()
{
	const unsigned short ITEM = 5;
	int num[ITEM];

	std::cout << "请输入" << ITEM << "个整形数据\n" << std::endl;

	for (int i = 0; i < ITEM; i++)
	{
		std::cout << "请输入第" << i+1 << "个数据\n";
		while(!(std::cin >> num[i]))//输入合法行检验
		{
			std::cin.clear();
			std::cin.ignore(100,'\n');
			std::cout << "请输入一个合法的值：";
		}
	}

	float total = 0;

	for (int j = 0; j < ITEM; j++)
	{
		total += num[j];
	}

	std::cout << "总和是：" << total << "\n";
	std::cout << "平均值是：" << total / ITEM << "\n";

	return 0;
}
