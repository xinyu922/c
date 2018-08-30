#include <iostream>
#define FULL_GAS 85

class Car
{
public:
	std::string color;
	std::string engine;
	unsigned int gas_tank;
	unsigned int wheel;

	void setColor(std::string col);
	void setEngine(std::string eng);
	void setWheel(unsigned int whe);
	void fillTank(int liter);
	int running(void);
	void warning(void);
};

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
		std::cout << "我正在行驶...." <<"\n";
		gas_tank--;
		std::cout << "当前还剩" << (100*gas_tank)/FULL_GAS << "%" <<"油量！\n";
		return gas_tank;
	}

void Car::warning(void)
{
	std::cout << "WARNING!!!\n" << "还剩" << "(100*gas_tank)/FULL_GAS" << "%" <<"油量！";
}

int main()
{
	char i;
	Car mycar, car1;

	mycar.setColor("white");
	mycar.setEngine("VS");
	mycar.setWheel(4);

	mycar.gas_tank = FULL_GAS;

	while(mycar.running())
	{
		if(mycar.running() < 10)
		{
			mycar.warning();
			std::cout << "请问是否需要加满油再行驶？(Y or N)\n";
			std::cin >> i;
			if('Y' == i || 'y' == i)
			{
				mycar.fillTank(FULL_GAS);
			}
			if('N' == i || 'n' == i)
			{
				std::cout << "汽车将停止！！！\n" ;
				break;
			}
		}
	}


	return 0;
}


















