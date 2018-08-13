#include <iostream>

int main()
{	
	void change_temperrature(double tempIn, char tpyeIn);
	void change_temperrature(int tempIn, char tpyeIn);//函数的重载，函数名及函数主体相同，传入的参数或数据类型不同

	double tempIn;
	int tempIn_int;
	char typeIn;

	std::cout << "请输入需要转换的温度\n 格式为：xx.x C or xx.x F\n" << std::endl;
	std::cin >> tempIn >> typeIn;  //cin 是以空格键进行输入内容的区分，

	change_temperrature(tempIn, typeIn);

	std::cout << "请输入需要转换的温度\n 格式为：xx C or xx F\n" << std::endl;
	std::cin >> tempIn_int >> typeIn;  //cin 是以空格键进行输入内容的区分，	
	change_temperrature(tempIn_int, typeIn);

	return 0;

}

void change_temperrature(double tempIn, char typeIn)
{

	double tempOut;
	char typeOut;

	const unsigned short ADD_SUBTRACT = 32;
	const double RATIO = 9.0 / 5.0;

	switch( typeIn)
	{

		case 'C':
		case 'c':
			tempOut = tempIn * RATIO + ADD_SUBTRACT;
			typeOut = 'F';
			typeIn = 'C';
			break;

		case 'F':
		case 'f':
			tempOut = (tempIn - ADD_SUBTRACT) / RATIO;
			typeOut = 'C';
			typeIn = 'F';
			break;

		default:
			typeOut = 'E';
			break;
	}

	if (typeOut != 'E')
	{
		std::cout << tempIn << typeIn << " = " << tempOut << typeOut << "\n\n";
	}
	else
	{
		std::cout << "输入错误！！！" << "\n\n";
	}

}

void change_temperrature(int tempIn, char typeIn)
{

	int tempOut;
	char typeOut;

	const unsigned short ADD_SUBTRACT = 32;
	const double RATIO = 9.0 / 5.0;

	switch( typeIn)
	{

		case 'C':
		case 'c':
			tempOut = tempIn * RATIO + ADD_SUBTRACT;
			typeOut = 'F';
			typeIn = 'C';
			break;

		case 'F':
		case 'f':
			tempOut = (tempIn - ADD_SUBTRACT) / RATIO;
			typeOut = 'C';
			typeIn = 'F';
			break;

		default:
			typeOut = 'E';
			break;
	}

	if (typeOut != 'E')
	{
		std::cout << tempIn << typeIn << " = " << tempOut << typeOut << "\n\n";
	}
	else
	{
		std::cout << "输入错误！！！" << "\n\n";
	}

}

