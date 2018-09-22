#include <iostream>
#include <string>

class Pet
{
public:
	 Pet(std::string theName);
	~ Pet();

	static int getCount();//读取静态属性的值，可以看做一个接口

protected:
	std::string name;

private:
	static int count;//定义了一个静态属性
	
};

class Dog : public Pet
{
public:
	Dog(std::string theName);
	// ~Dog();
	
};

class Cat : public Pet
{
public:
	Cat(std::string theName);
	// ~Cat();
	
};

int Pet::count = 0;//1.分配内存空间给静态变量；2.初始化静态变量

Pet::Pet(std::string theName)
{
	name = theName;
	count++;

	std::cout << "一只宠物诞生了，名字是：" << name << "\n" << std::endl;
}

Pet::~Pet()
{
	count--;
	std::cout << name << "挂掉了...\n" << std::endl;
}

int Pet::getCount()
{
	return count;
}

Dog::Dog(std::string theName) : Pet(theName)
{
	std::cout << "this指针的地址：" << this << "\n" << std::endl;
}

Cat::Cat(std::string theName) : Pet(theName)
{

}


int main(int argc, char const *argv[])
{
	Dog dog("Tom");
	Cat cat("Jerry");

	std::cout << "dog对象的地址：" << &dog << "\n" << std::endl;

	std::cout << "\n\t已经诞生了" << Pet::getCount() << "只宠物！\n" << std::endl;

	{
		Dog dog_2("Tom_2");
		Cat cat_2("Jerry_2");

		std::cout << "\n\t已经诞生了" << Pet::getCount() << "只宠物！\n" << std::endl;
	}

	std::cout << "\n\t 现在还剩 " << Pet::getCount() << "只宠物！\n" << std::endl;

	return 0;
}














