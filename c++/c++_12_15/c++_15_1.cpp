#include <iostream>
#include <string>
#include <fstream>

class Storequote
{
public:
	std::string quote, speaker;
	std::ofstream fileOutput;

	Storequote();//构造器
	~Storequote();//析构器
	
	void inputQuote();
	void imputSpeaker();
	bool write();
};

Storequote::Storequote()//构造器打开文件（如果没有，先创建文件），已追加的方式打开文件
{
	fileOutput.open("test.txt", std::ios::app);
}

Storequote::~Storequote()//析构器，关闭打开的文件
{
	fileOutput.close();
}

void Storequote::inputQuote()//将输入的名言传递给quote
{
	std::getline(std::cin, quote);
}

void Storequote::imputSpeaker()//将输入的作者传递给speaker
{
	std::getline(std::cin, speaker);
}

bool Storequote::write()
{
	if(fileOutput.is_open())
	{
		fileOutput << quote << "|" << speaker << "\n";//将内容写入文件
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Storequote quote;

	std::cout << "请输入一句名言：\n";
	quote.inputQuote();

	std::cout << "请输入作者：\n";
	quote.imputSpeaker();

	if(quote.write())
	{
		std::cout << "成功写入！！！\n";
	}
	else
	{
		std::cout << "写入文件失败！！！\n";
	}

	return 0;
}














