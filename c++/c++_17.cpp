#include <iostream>
#include <string>

class Animal
{
public:
	std::string mouth;
	std::string name;

	 Animal(std::string theName);
	// ~ Animal();
	
	void eat();
	void sleep();
	void drool();
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
	std::cout << "I am climbing!\n" << std::endl;
}

Turtle::Turtle(std::string theName) : Animal(theName)
{
	;
}

void Turtle::swim()
{
	std::cout << "I am swiming!\n" << std::endl;
}


int main()
{
	Pig pig("小猪猪");
	Turtle turtle("小甲鱼");

	std::cout << "这只小猪的名字是：" << pig.name << std::endl;
	std::cout << "这只小乌龟的名字是：" << turtle.name << std::endl;

	pig.eat();
	turtle.eat();

	pig.climb();
	turtle.swim();

	return 0;
}












