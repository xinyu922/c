#include <iostream>
#include <string>

class Animal
{
public:
	std::string mouth;

	 Animal(std::string theName);
	// ~ Animal();
	
	void eat();
	void eat(int eatCount);//通过函数的重载，改变子类的方法
	void sleep();
	void drool();

protected:
	std::string name;//子类在调用是会报错

};

class Pig : public Animal
{
public:
	Pig(std::string theName);
	// ~Pig();

	void climb();
	
};

class Turtle : public Animal
{
public:
	 Turtle(std::string theName);
	// ~ Turtle();

	void swim();
	
};

Animal::Animal(std::string theName)
{
	name = theName;
}

void Animal::eat()
{
	std::cout << "I an eating!\n" << std::endl;
}

void Animal::eat(int eatCount)
{
	std::cout << name << "吃了" << eatCount<<"碗饭！！！\n" << std::endl;
}

void Animal::sleep()
{
	std::cout << "I am sleeping!\n" << std::endl;
}

void Animal::drool()
{
	std::cout << "I am drooling!\n" << std::endl;
}

Pig::Pig(std::string theName) : Animal(theName)
{
	;
}

void Pig::climb()
{
	std::cout << name << "is climbing!\n" << std::endl;
}

Turtle::Turtle(std::string theName) : Animal(theName)
{
	;
}

void Turtle::swim()
{
	std::cout << name << " is swiming!\n" << std::endl;
}


int main()
{
	Pig pig("小猪猪");
	Turtle turtle("小甲鱼");

	// std::cout << "这只小猪的名字是：" << pig.name << std::endl;
	// std::cout << "这只小乌龟的名字是：" << turtle.name << std::endl;

	pig.eat();
	turtle.eat();

	pig.eat(4);
	turtle.eat(5);

	pig.climb();
	turtle.swim();

	return 0;
}












