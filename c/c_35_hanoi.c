
/***************************************************
动动手  汉诺塔小游戏
***************************************************/


// #include <stdio.h>

// void hanoi(int n, char x, char y, char z);

// void hanoi(int n, char x, char y, char z)
// {
//         if (n == 1)
//         {
//                 printf("%c --> %c\n", x, z); // 剩下底部的那个圆盘
//         }
//         else
//         {
//                 hanoi(n-1, x, z, y); // 将n-1个圆盘从x移动到y
//                 printf("%c --> %c\n", x, z);
//                 hanoi(n-1, y, x, z); // 将n-1个圆盘从y移动到z
//         }
// }

// int main(void)
// {
//         int n;

//         printf("请输入汉诺塔的层数：");
//         scanf("%d", &n);

//         hanoi(n, 'X', 'Y', 'Z');

//         return 0;
// }





#include <stdio.h>

void fun(int, char, char, char);
long long int count;

void fun(int n, char x, char y, char z)
{
	if (n == 1)
	{
		count++;
		//printf("%c --> %c \n", x, z);
	}
	else
	{
		fun(n-1, x, z, y);
		//printf("%c --> %c \n", x, z);
		fun(n-1, y, x, z);
		count++;
	}
}

int main(void)
{
	int n;
	printf("请输入汉诺塔的层数：\n");
	scanf("%d", &n);

	fun(n, 'x', 'y', 'z');

	printf("调用了%lld次函数\n", count);

	return 0;
}



















