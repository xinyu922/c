#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream out;//实例化一个对象				ofstream 是文件的写入类

	out.open("test.txt");

	if (!out)
	{
		cerr << "打开文件失败！"<< endl;
		return 0;
	}

	for (int i=0; i<10; i++)
	{
		out << i;
 	}

	out << endl;
	out.close();

	return 0;
}