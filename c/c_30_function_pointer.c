
/***************************************************
练习 1 函数返回指针类型
***************************************************/

// #include <stdio.h>

// char *getword(char c);

// char *getword(char c)
// {
// 	switch(c)
// 	{
// 		case 'A':
// 			return "Apple";
// 		case 'B':
// 			return "Banana";
// 		case 'C':
// 			return "Cat";
// 		case 'D':
// 			return "Dog";
// 		default:
// 			return "None";
// 	}
// }

// int main(int argc, char const *argv[])
// {
// 	char input;
// 	printf("请输入一个字母：\n");
// 	scanf("%c", &input);

// 	printf("%s\n", getword(input));

// 	return 0;
// }


/***************************************************
练习 1 函数指针
***************************************************/

// #include <stdio.h>

// int square(int);

// int square(int num)
// {
// 	return num * num;
// }

// int main(int argc, char const *argv[])
// {
// 	int num;
// 	int (*fp)(int);

// 	printf("请输入一个整数：\n");
// 	scanf("%d", &num);

// 	fp = square;

// 	printf("%d * %d = %d \n", num, num, fp(num));

// 	return 0;
// }


/***************************************************
练习 1 函数指针作为参数
***************************************************/

// #include <stdio.h>

// int add(int, int);
// int sub(int, int);
// int calc(int (*fp)(int, int), int, int);

// int add(int num1, int num2)
// {
// 	return num1 + num2;
// }

// int sub(int num1, int num2)
// {
// 	return num1 -num2;
// }

// int calc(int (*fp)(int, int), int num1, int num2)
// {
// 	return (*fp)(num1, num2);
// }

// int main(int argc, char const *argv[])
// {
// 	printf("3 + 5 = %d\n", calc(add, 3, 5));
// 	printf("8 - 5 = %d\n", calc(sub, 8, 5));

// 	return 0;
// }


/***************************************************
练习 2 将函数指针作为返回值
要求：
让用户输入一个表达式，然后程序根据输入的运算符决定调用那个函数进行计算
***************************************************/

#include <stdio.h>

int add(int, int);
int sub(int, int);
int calc(int (*fp)(int, int), int, int);
int (*select(char))(int, int);


int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 -num2;
}

int calc(int (*fp)(int, int), int num1, int num2)
{
	return (*fp)(num1, num2);
}

int (*select(char op))(int, int)
{
	switch(op)
	{
		case '+': return add;
		case '-': return sub;
	}
}

int main(int argc, char const *argv[])
{
	int num1, num2;
	char op;
	int (*fp)(int, int);

	printf("请输入一个表达式（加或减）：\n");
	scanf("%d%c%d", &num1, &op, &num2);

	fp = select(op);
	printf("%d %c %d = %d\n", num1, op, num2, calc(fp, num1, num2));

	return 0;
}


























