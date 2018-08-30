
/**********************************************************************************************
                                         温度转换
**********************************************************************************************/

// #include <iostream>

// int main()
// {

// 	const unsigned short ADD_SUBTRACT = 32;
// 	const double RATIO = 9.0 / 5.0;

// 	double tempIn, tempOut;

// 	char typeIn, typeOut;

// 	std::cout << "请输入需要转换的温度\n 格式为：xx.x C or xx.x F" << std::endl;
// 	std::cin >> tempIn >> typeIn;  //cin 是以空格键进行输入内容的区分，

// 	switch(typeIn)
// 	{

// 		case 'C':
// 		case 'c':
// 			tempOut = tempIn * RATIO + ADD_SUBTRACT;
// 			typeOut = 'F';
// 			typeIn = 'C';
// 			break;

// 		case 'F':
// 		case 'f':
// 			tempOut = (tempIn - ADD_SUBTRACT) / RATIO;
// 			typeOut = 'C';
// 			typeIn = 'F';
// 			break;

// 		default:
// 			typeOut = 'E';
// 			break;
// 	}

// 	if (typeOut != 'E')
// 	{
// 		std::cout << tempIn << typeIn << " = " << tempOut << typeOut << "\n\n";
// 	}
// 	else
// 	{
// 		std::cout << "输入错误！！！" << "\n\n";
// 	}

// 	return 0;

// }



/**********************************************************************************************
                                         温度转换 2
**********************************************************************************************/

// #include <iostream>

// int main()
// {

// 	const unsigned short ADD_SUBTRACT = 32;
// 	const double RATIO = 9.0 / 5.0;

// 	double tempIn, tempOut;

// 	char typeIn, typeOut;

// 	std::cout << "请输入需要转换的温度\n 格式为：xx.x C or xx.x F" << std::endl;

// 	while(1)
// 	{

// 		std::cin >> tempIn >> typeIn;  //cin 是以空格键进行输入内容的区分，

// 		if (typeIn == 'C' || typeIn == 'c' || typeIn == 'F' || typeIn == 'f' )
// 		{
// 				switch(typeIn)
// 			{

// 				case 'C':
// 				case 'c':
// 					tempOut = tempIn * RATIO + ADD_SUBTRACT;
// 					typeOut = 'F';
// 					typeIn = 'C';
// 					goto A;

// 				case 'F':
// 				case 'f':
// 					tempOut = (tempIn - ADD_SUBTRACT) / RATIO;
// 					typeOut = 'C';
// 					typeIn = 'F';
// 					goto A;

// 				}
// 		}
// 		else
// 		{
// 			std::cout << "您的输入有误，请重新输入！！！" << "\n" << std::endl;
// 		}
// 	}

// 	A:
// 	std::cout << tempIn << typeIn << " = " << tempOut << typeOut << "\n\n";

// 	return 0;

// }



