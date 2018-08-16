
/***************************************************
动动手 0 编写一个程序，反向打印用户输入的英文句子。
***************************************************/

// #include <stdio.h>

// void getInput();

// void getInput()
// {
//         int ch;

//         if ((ch = getchar()) != '!')
//         {
//                 getInput();
//         }
//         else
//         {
//                 printf("反向输出：");
//         }

//         putchar(ch);
// }

// int main(void)
// {
//         printf("请输入一句以感叹号结尾的英文句子：");
//         getInput();
//         putchar('\n');

//         return 0;
// }


/***************************************************
动动手 1 编写一个程序，用递归实现斐波那契数列
***************************************************/

// #include <stdio.h>

// unsigned int fibonacci(unsigned int n);
// int count;//用来统计调用函数的次数

// unsigned int fibonacci(unsigned int n)
// {
//         if (n == 1 || n == 2)
//         {
//                 count++;
//                 return 1;
//         }
//         else
//         {
//                 count++;
//                 return fibonacci(n-1) + fibonacci(n-2);


//         }
// }

// int main(void)
// {
//         unsigned int number, i;

//         printf("请输入一个整数：");
//         scanf("%u", &number);

//         printf("斐波那契数列的前 %d 个数字是：", number);
//         for (i = 1; i <= number; i++)
//         {
//                 printf("%u ", fibonacci(i));
//         }
//         putchar('\n');

//         printf("总共调用了%d次fibonacci函数\n", count);

//         return 0;
// }


/***************************************************
动动手 2 编写一个程序，用递归实现将一个十进制的正整数转换成二进制的形式显示
***************************************************/

#include <stdio.h>

void binary(unsigned long n);

void binary(unsigned long n)
{
        int r;

        r = n % 2;
        if (n >= 2)
        {
                binary(n / 2);
        }

        putchar('0' + r); // '0' + 1 == '1'
}

int main(void)
{
        unsigned long number;

        printf("请输入一个正整数：");
        scanf("%lu", &number);

        binary(number);
        putchar('\n');

        return 0;
}



















