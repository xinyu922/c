#include <iostream>
#include <string>

class Lovers
{
public:
	Lovers(std::string theName);
	~Lovers();

	void kiss(Lovers *lover);
	void ask(Lovers *lover, std::string something);

protected:
	std::string name; 
	friend class Other;
	
};

class Boyfriend : public Lovers
{
public:
	Boyfriend(std::string theName);
	~Boyfriend();
	
};

class Girfriend : public Lovers
{
public:
	Girfriend(std::string theName);
	~Girfriend();
	
};

class Other 
{
public:
	Other(std::string theName);
	~Other();

	void kiss(Lovers *lover);

protected:
	std::string name;
	
};


Lovers::Lovers(std::string theName)
{
	name = theName;
}

Lovers::~Lovers()
{

}

void Lovers::kiss(Lovers *lover)
{
	std::cout << name << "亲亲我们家的" << lover->name << "\n" << std::endl;
}

void Lovers::ask(Lovers *lover, std::string something)
{
	std::cout<< "宝贝儿" << lover->name << "帮我" << something << "\n" <<std::endl;
}


Boyfriend::Boyfriend(std::string theName) : Lovers(theName)
{

}

Boyfriend::~Boyfriend()
{

}


Girfriend::Girfriend(std::string theName) : Lovers(theName)
{

}

Girfriend::~Girfriend()
{

}

Other::Other(std::string theName)
{
	name = theName;
}

Other::~Other()
{

}

void Other::kiss(Lovers *lover)
{
	std::cout << name << "亲一下" << lover->name << "\n" << std::endl;
}


int main(int argc, char const *argv[])
{
	Boyfriend boyfriend("A君");
	Girfriend girfriend("B妞");

	Other other("路人甲");

	girfriend.kiss(&boyfriend);
	girfriend.ask(&boyfriend, "洗衣服了！！！");

	std::cout << "\n \t\t当当！！传说中的路人甲出现了！！！\n" << std::endl;
	other.kiss(&girfriend);

	return 0;
}






