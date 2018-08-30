
/**********************************************************************************************
                                   计算输入的一串整数的和以空格键分割
**********************************************************************************************/


// #include <iostream>

// using namespace std;

// int main()
// {
// 	int sum = 0;

// 	cout<<"请输入一串整数和任意的空格:"<<endl;

// 	int i;
// 	while(cin>>i)
// 		{
// 			sum += i;
// 			while(cin.peek() == ' ')//peek j
// 			{
// 				cin.get();
// 			}
// 			if(cin.peek() == '\n')
// 			{
// 				break;
// 			}
// 		}

// 		cout<<"结果是："<<sum<<endl;

// 		return 0;

// }


/**********************************************************************************************
                                   忽略输入的一些字符 
                                   cin.ignore() cin.getline()    
**********************************************************************************************/


// #include <iostream>
// using namespace std;

// int main(int argc, char const *argv[])
// {
// 	char buf[20];

// 	cin.ignore(7);
// 	cin.getline(buf, 10);

// 	cout << buf << endl;//endl = 回车键加清空缓存区
	
// 	return 0;
// }


/**********************************************************************************************
                                   将输入的字符串打印出来  
                                   cin.peek() cin.get()  
**********************************************************************************************/


// #include <iostream>
// using namespace std;

// int main(void)
// {
// 	char p;
// 	cout << "请输入一段文本：" << endl;

// 	while(cin.peek() != '\n')
// 	{
// 		cout << (p = cin.get());
// 	}

// 	cout << endl;

// 	return 0;
// }



/**********************************************************************************************
                                   将输入的字符串打印出来 
                             cin.read() cin.gcount() cout.write()
**********************************************************************************************/

// #include <iostream>
// using namespace std;

// int main(void)
// {
// 	const int size = 50;
// 	char buf[size];

// 	cout << "请输入一段文本：" << endl;
// 	cin.read(buf, 20);

// 	cout << "字符串收集到的字符数为：" << cin.gcount() << endl;

// 	cout << "输入的文本是：" << endl;

// 	cout.write(buf, 20);
// 	cout << endl;


// 	return 0;
// }

/**********************************************************************************************
                                   输出不同精度的数据 
                                   cin.precision()                        
**********************************************************************************************/

// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
// 	double result = sqrt(3.0);

// 	cout << "对3开方保留0～9位，结果如下：\n" << endl;

// 	for (int i = 0; i <= 9; i++)
// 	{
// 		cout.precision(i);
// 		cout << result << endl;
// 	}

// 	cout << "当前精度为：" << cout.precision() << endl;

// 	return 0;
// }


/**********************************************************************************************
                                   输出不同格式 
                                   cin.width()                       
**********************************************************************************************/


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int width = 4;
	char str[20];

	cout << "请输入一段文本：" << endl;
	cin.width(5);

	while(cin >> str)
	{
		cout.width(width++);
		cout << str << endl;
		cin.width(5);
	}

	return 0;
}















