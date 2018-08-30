#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	ifstream in;//实例化一个对象		ifstream 是文件的读取类
	in.open("test.txt");

	// ifstream in("test.txt");//可以将上面的两句代码合为一句

	if (!in)
	{
		cerr << "打开文件失败！"<< endl;
		return 0;
	}

	char x;
	while(in >> x)
	{
		cout << x;
	}

	cout << endl;
	in.close();

	return 0;
}