#include <iostream>
#include <string>

class Pet
{
public:
	 Pet(std::string theName);
	~ Pet();

	void eat();
	void sleep();
	virtual void play();//添加virtual 将其转换为虚方法

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

void Pet::play()
{
	std::cout << name << "正在玩游戏！！！\n" << std::endl;
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
	Pet::play();
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
	Pet::play();

	std::cout << 
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

	delete cat;
	delete dog;

	/*通过实例化对象，能够访问子类的方法（覆盖基类）/

	// Cat cat("加菲");
	// Dog dog("欧迪");

	// cat.sleep();
	// cat.eat();
	// cat.play();

	// dog.sleep();
	// dog.eat();
	// dog.play();

	/*/


	return 0;
}










