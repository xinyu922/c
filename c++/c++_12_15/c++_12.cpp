
/*********************************************************************************************
函数传进去的是数值，并不会改变原函数的数值
*********************************************************************************************/
// #include <iostream>
// using namespace std;

// void changeAge(int, int);

// int main(void)
// {
// 	int age = 24;
// 	cout << "My age is " << age << "\n";

// 	changeAge(age, age+1);

// 	cout << "Now my age is " << age << "\n";

// 	return 0;
// }

// void changeAge(int age, int newAge)
// {
// 	age = newAge;
// 	cout << "In this, my age is " << age << "\n";
// }


/*********************************************************************************************
通过传入指针，能够修改传入函数的值的大小
*********************************************************************************************/

// #include <iostream>
// using namespace std;

// void changeAge(int, int);
// void changeAge(int *, int);

// int main(void)
// {
// 	int age = 24;
// 	cout << "My age is " << age << "\n";

// 	changeAge(age, age+1);

// 	changeAge(&age, age+1);

// 	cout << "Now my age is " << age << "\n";

// 	return 0;
// }

// void changeAge(int age, int newAge)
// {
// 	age = newAge;
// 	cout << "In this, my age is " << age << "\n";
// }

// void changeAge(int *age, int newAge)
// {
// 	*age = newAge;
// 	cout << "In this, my age is " << *age << "\n";
// }


/*********************************************************************************************
通过传入指针，交换连个参数的值（通过一个临时变量）
*********************************************************************************************/

// #include <iostream>
// using namespace std;

// void swap(int *, int *);

// int main(int argc, char const *argv[])
// {
// 	int x, y;

// 	cout << "请输入两个整数数字" << "\n";

// 	cin >> x >> y;

// 	swap(&x, &y);
// 	cout << "交换后的两个数字是：" << x << "<->"<< y <<"\n";

// 	return 0;
// }

// void swap(int *x, int *y)
// {
// 	int temp;
// 	temp = *x;
// 	*x = *y;
// 	*y = temp;
// }

/*********************************************************************************************
通过传入指针，交换连个参数的值（不通过临时变量，实用异或操作）
*********************************************************************************************/

#include <iostream>
using namespace std;

void swap(int *, int *);

int main(int argc, char const *argv[])
{
	int x, y;

	cout << "请输入两个整数数字" << "\n";

	cin >> x >> y;

	swap(&x, &y);
	cout << "交换后的两个数字是：" << x << "<->"<< y <<"\n";

	return 0;
}

void swap(int *x, int *y)
{
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
}





























