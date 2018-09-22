#include <iostream>
#include <string>

class Pet
{
public:
	 Pet(std::string theName);
	~ Pet();

	virtual void eat();
	virtual void sleep();
	virtual void play() = 0;//添加virtual 将其转换为虚方法;"=0",表示它是一个抽象方法

protected:
	std::string name;
	
};

class Cat : public Pet
{
public:
	 Cat(std::string theName);
	~ Cat();

	void climb();
	void play();
	
};

class Dog : public Pet
{
public:
	 Dog(std::string theName);
	~ Dog();

	void bark();
	void play();
	
};

Pet::Pet(std::string theName)
{
	name = theName;
}

Pet::~Pet()
{

}

void Pet::eat()
{
	std::cout << name << "正在吃东西！！！\n" << std::endl;
}

void Pet::sleep()
{
	std::cout << name << "正在睡觉！！！\n" << std::endl;
}

Cat::Cat(std::string theName) : Pet(theName)
{

}

Cat::~Cat()
{

}

void Cat::climb()
{
	std::cout << name << "正在爬树！！！\n" << std::endl;
}

void Cat::play()
{
	std::cout << name << "正在玩毛毛球！！！\n" << std::endl;
}


Dog::Dog(std::string theName) : Pet(theName)
{

}

Dog::~Dog()
{

}

void Dog::bark()
{
	std::cout << name << "汪汪叫...！！！\n" << std::endl;
}

void Dog::play()
{
	std::cout << name << "正在追那只猫！！！\n" << std::endl;
}

int main()
{
	Pet *cat = new Cat("加菲");
	Pet *dog = new Dog("欧迪");

	cat->sleep();
	cat->eat();
	cat->play();

	dog->sleep();
	dog->eat();
	dog->play();

	// delete cat;
	// delete dog;

	return 0;
}










