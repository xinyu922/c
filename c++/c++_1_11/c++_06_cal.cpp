/**********************************************************************************************
                                         函数重载
**********************************************************************************************/

#include <iostream>
using namespace std;

int cal(int);
int cal(int, int);
int cal(int, int, int);

int main(void)
{
	int num[4];
	int i = 0;

	cout << "请输入参数，一个计算平方，两个计算积，三个计算和" << endl;

	char c;
	while((c = getchar()) != '\n')
	{
		if (c != ' ')
		{
			ungetc(c, stdin);
			cin >> num[i++];
		}
	}
	if(i == 1)
	{
		cout << cal(num[0]) << "\n";
	}
	if(i == 2)
	{
		cout << cal(num[0], num[1]) << "\n";
	}
	if(i == 3)
	{
		cout << cal(num[0], num[1], num[2]) << "\n";
	}
	if(i >= 4 || i <= 0)
	{
		cout << "输入有误！！！";
	}

	return 0;
}

int cal(int num1)
{
	return num1 * num1;
}

int cal(int num1, int num2)
{
	return num1 * num2;
}

int cal(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}


/**********************************************************************************************
                                         函数重载
**********************************************************************************************/


// #include <iostream>

// using namespace std;
// int calc(int num);
// int calc(int num, int num1);
// int calc(int num, int num1, int num2);

// int calc(int num)
// {
//         return num * num;
// }

// int calc(int num, int num1)
// {
//         return num * num1;
// }

// int calc(int num, int num1, int num2)
// {
//         return num + num1 + num2;
// }

// int main()
// {
//     int a[4];  
//     int i = 0;  
//     char c;  
//     while((c = getchar()) != '\n')  
//     {  
//         if(c != ' ')
//         {  
//             ungetc(c,stdin);  
//             cin >> a[i++];  
//         }  
//     }  
//     if(i == 1)
//             cout << "num = " << calc(a[0]) << endl;
//         if (i == 2)
//                 cout << "num = " << calc(a[0], a[1]) << endl;
//         if (i == 3)
//                 cout << "num = " << calc(a[0], a[1], a[2]) << endl;
//         if (i > 3)
//                 cout << "输入过多" << endl; 
        
        
//         return 0;
// }



