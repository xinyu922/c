#include <iostream>

int main(int argc, char *argv[])
{
	void cal(int num1);

	std::cout << "请输入参数，一个计算平方，两个计算积，三个计算和" << std::endl;

	switch(argc)
	{
		case 1:
			cal(int num1);
			break;

		case 2:
			cal(int num1, int num2);
			break;

		case 3:
			cal(int num1, int num2, int num3);
			break;

		default:
			std::cout << "您的输入有误！！！" << std::endl;

	}

	return 0;
}

void cal(int num):
{
	std::cout << num * num << std::endl;
}