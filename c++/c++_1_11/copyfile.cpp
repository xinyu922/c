#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		cout << "输入格式有误!正确的格式为：./copyfile 原文件 目标文件" << endl;
	}

	ifstream f_read(argv[1], ios::binary | ios::in);
	ofstream f_write(argv[2], ios::binary | ios::out);

	if (!f_read)
	{
		cout << "文件读取失败！！！" << endl;
		return 0;
	}

	char ch;

	while(f_read >> ch)
	{
		f_write << ch;
	}

	cout << "成功复制！！" << endl;

	f_read.close();
	f_write.close();

	return 0;
}