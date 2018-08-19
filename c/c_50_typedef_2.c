// #include <stdio.h>

// typedef int (*PTR_TO_ARRAY)[3];//指向拥有三个整形变量的数组的指针

// int main(int argc, char const *argv[])
// {
// 	int array[3] = {1, 2, 3};
// 	PTR_TO_ARRAY ptr_to_array = &array;

// 	int i;
// 	for (i = 0; i <3; i++)
// 	{
// 		printf("%d\n", (*ptr_to_array)[i]);
// 	}

// 	return 0;
// }



// #include <stdio.h>

// typedef int (*PTR_TO_FUN)(void);

// int fun(void)
// {
// 	return 520;
// }

// int main(void)
// {
// 	PTR_TO_FUN ptr_to_fun = &fun;

// 	printf("fun的返回值是:%d\n", (*ptr_to_fun)());

// 	return 0;
// }


// #include <stdio.h>

// typedef int *(*PTR_TO_FUN)(int);

// int *funA(int num)
// {
// 	printf("%d\n", num);

// 	return &num;
// }

// int *funB(int num)
// {
// 	printf("%d\n", num);

// 	return &num;
// }

// int *funC(int num)
// {
// 	printf("%d\n", num);

// 	return &num;
// }


// int main(int argc, char const *argv[])
// {
// 	PTR_TO_FUN array[3] = {&funA, &funB, &funC};

// 	for (int i = 0; i < 3; i++)
// 	{
// 		printf("addr of num: %p\n", (*array[i])(i));
// 	}

// 	return 0;
// }


/***************************************************
c_30_fuction_pointer
练习 2 将函数指针作为返回值
要求：
让用户输入一个表达式，然后程序根据输入的运算符决定调用那个函数进行计算
***************************************************/

#include <stdio.h>

typedef int (*PTR_TO_FUN)(int, int);

int add(int, int);
int sub(int, int);
int calc(PTR_TO_FUN, int, int);
PTR_TO_FUN select(char);

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

	printf("请输入一个表达式（1 + 3）：\n");
	scanf("%d%c%d", &num1, &op, &num2);

	fp = select(op);
	printf("%d %c %d = %d\n", num1, op, num2, calc(fp, num1, num2));

	return 0;
}
























