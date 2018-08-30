#include <iostream>
#include <string>

class Animal
{
public:
	std::string mouth;

	//  Animal();
	// ~ Animal();
	
	void eat();
	void sleep();
	void drool();
};

class Pig : public Animal
{
public:
	// Pig();
	// ~Pig();

	void climb();
	
};

class Turtle : public Animal
{
public:
	//  Turtle();
	// ~ Turtle();

	void swim();
	
};

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

void Pig::climb()
{
	std::cout << "I am climbing!\n" << std::endl;
}

void Turtle::swim()
{
	std::cout << "I am swiming!\n" << std::endl;
}


int main()
{
	Pig pig;
	Turtle turtle;

	pig.eat();
	turtle.eat();

	pig.climb();
	turtle.swim();

	return 0;
}












