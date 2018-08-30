#include <iostream>
#include <string>

class BaseClass
{
public:
	 BaseClass();
	~BaseClass();
	
	void doSomething();
};

class SubClass : public BaseClass
{
public:
	SubClass();
	~SubClass();
	
};

BaseClass::BaseClass()
{
	std::cout << "进入基类构造器...\n" << std::endl;
}

BaseClass::~BaseClass()
{
	std::cout << "进入基类析构器...\n" << std::endl;
}

void BaseClass::doSomething()
{
	std::cout << "进入了dosomething...\n" << std::endl;
}

SubClass::SubClass()
{
	std::cout << "进入子类构造器...\n" << std::endl;
}

SubClass::~SubClass()
{
	std::cout << "进入子类析构器...\n" << std::endl;
}


int main(int argc, char const *argv[])
{	
	SubClass subclass;

	subclass.doSomething();

	std::cout << "完事，手工！！！\n" << std::endl;
	
	return 0;
}


/*执行的顺序为先进入基类的构造器，在进入子类的构造器，再执行方法，
	在退出时，先执行子类的析构器，在执行基类的析构器*/










