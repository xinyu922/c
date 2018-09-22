
/******************************************************************************************************
练习 1 函数返回指针类型
******************************************************************************************************/

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


/******************************************************************************************************
练习 1 函数指针
******************************************************************************************************/

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
// 	printf("%d * %d = %d \n", num, num, （*fp)(num));//fp是一个函数指针，并不是一个函数


// 	return 0;
// }


/******************************************************************************************************
练习 1 函数指针作为参数
******************************************************************************************************/

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


/******************************************************************************************************
练习 2 将函数指针作为返回值
要求：
让用户输入一个表达式，然后程序根据输入的运算符决定调用那个函数进行计算
******************************************************************************************************/

// #include <stdio.h>

// int add(int, int);
// int sub(int, int);
// int calc(int (*fp)(int, int), int, int);
// int (*select(char))(int, int);


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

// int (*select(char op))(int, int)
// {
// 	switch(op)
// 	{
// 		case '+': return add;
// 		case '-': return sub;
// 	}
// }

// int main(int argc, char const *argv[])
// {
// 	int num1, num2;
// 	char op;
// 	int (*fp)(int, int);

// 	printf("请输入一个表达式（加或减）：\n");
// 	scanf("%d%c%d", &num1, &op, &num2);

// 	fp = select(op);
// 	printf("%d %c %d = %d\n", num1, op, num2, calc(fp, num1, num2));

// 	return 0;
// }


/******************************************************************************************************
动动手：
2. 请编写一个程序，要求用户输入两个数，分别计算它们加减乘除的结果。
请确保你的代码符合下面要求：
加减乘除分别由四个函数实现：add、sub、mul 和 divi
定义一个函数指针数组指向上面四个函数
只能通过函数指针的形式访问上面四个函数
需要支持浮点数，注意除数不能为 0
******************************************************************************************************/

// #include <stdio.h>

// float add(float, float);
// float sub(float, float);
// float mul(float, float);
// float divi(float, float);
// float calc(int *fp(float, float), float, float);
// float (*select(char))(float, float);

// float add(float num1, float num2)
// {
// 	return num1 + num2;
// }

// float sub(float num1, float num2)
// {
// 	return num1 - num2;
// }

// float mul(float num1, float num2)
// {
// 	return num1 * num2;
// }

// float divi(float num1, float num2)
// {
// 	return num1 / num2;
// }

// float calc(int *fp(float, float), float num1, float num2)
// {
// 	return *fp(num1, num2);
// }

// float (*select(char op))(float num1, float num2)
// {
// 	switch(op)
// 	{
// 		case '+': return add;
// 		case '-': return sub;
// 		case '*': return mul;
// 		case '/': return divi;
// 	}
// }

// int main(int argc, char const *argv[])
// {
// 	float num1, num2;
// 	char op;
// 	float (*fp)(float, float);

// 	printf("请输入一个表达式（加或减）：\n");
// 	scanf("%f%c%f", &num1, &op, &num2);

// 	fp = select(op);
// 	printf("%f %c %f = %f\n", num1, op, num2, calc(fp, num1, num2));

// 	return 0;
// }


/******************************************************************************************************

******************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>

#define EPSINON 0.000001 // 定义允许的误差

double add(double x, double y);
double sub(double x, double y);
double mul(double x, double y);
double divi(double x, double y);

double add(double x, double y)
{
        return x + y;
}

double sub(double x, double y)
{
        return x - y;
}

double mul(double x, double y)
{
        return x * y;
}

double divi(double x, double y)
{
        // 不要对浮点数进行==或!=比较，因为IEEE浮点数是一个近似值
        if (y >= -EPSINON && y <= EPSINON)
        {
                printf("除数不能为0\n");
                // 如果除数为0，调用exit()函数直接退出程序
                exit(1);
        }
        else
        {
                return x / y;
        }
}

int main(void)
{
        int i;
        double x, y, result;
        double (*func_table[4])(double, double) = {add, sub, mul, divi};

        printf("请输入两个数：");
        scanf("%lf %lf", &x, &y);

        printf("对这两个数进行加减乘除后的结果是：");
        for (i = 0; i < 4; i++)
        {
                result = (*func_table[i])(x, y);
                printf("%.2f ", result);
        }
        putchar('\n');

        return 0;
}














