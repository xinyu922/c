#include <iostream>
#define FULL_GAS 85

class Car
{
public:
	std::string color;
	std::string engine;
	unsigned int gas_tank;
	unsigned int wheel;

	Car(void);//构造器
	void setColor(std::string col);
	void setEngine(std::string eng);
	void setWheel(unsigned int whe);
	void fillTank(int liter);
	int running(void);
	void warning(void);
};

Car::Car(void)//对函数进行初始化
{
	color = "white";
	engine = "v8";
	gas_tank = FULL_GAS;
	wheel = 4;
}

void Car::setColor(std::string col)
{
	color = col;
}

void Car::setEngine(std::string eng)
{
	engine = eng;
}

void Car::setWheel(unsigned int whe)
{
	wheel = whe;
}

void Car::fillTank(int liter)
	{
		gas_tank += liter;
	}

int Car::running()
	{
		char i;
		std::cout << "我正在行驶...." <<"\n";
		gas_tank--;
		std::cout << "当前还剩" << (100*gas_tank)/FULL_GAS << "%" <<"油量！\n";
		if(gas_tank < 10)
		{
			warning();
			std::cout << "请问是否需要加满油再行驶？(Y or N)\n";
			std::cin >> i;
			if('Y' == i || 'y' == i)
			{
				fillTank(FULL_GAS);
			}
			if(0 == gas_tank)
			{
				std::cout << "抛锚了！！！\n	";
				return 1;
			}
		}

		return 0;
	}

void Car::warning(void)
{
	std::cout << "WARNING!!!\n" << "还剩" << "(100*gas_tank)/FULL_GAS" << "%" <<"油量！";
}

int main()
{
	Car mycar;

	while(!mycar.running())
	{
		;
	}


	return 0;
}


















