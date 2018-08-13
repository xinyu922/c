
/***************************************************
练习 1 交换x,y的值
***************************************************/

// #include <stdio.h>

// void swap(int x, int y);

// void swap(int x, int y)
// {
// 	int temp;

// 	printf("in swap ，互换前的值为：x = %d, y = %d\n", x, y);

// 	temp = x;
// 	x = y;
// 	y = temp;

// 	printf("in swap ，互换后的值为：x = %d, y = %d\n", x, y);
// }

// int main(int argc, char const *argv[])
// {
// 	int x = 3;
// 	int y = 5;

// 	printf("in main ，互换前的值为：x = %d, y = %d\n", x, y);
// 	swap(x, y);//主函数里面的x,y值不变
// 	printf("in main ，互换前的值为：x = %d, y = %d\n", x, y);

// 	return 0;
// }


/***************************************************
练习 2 验证传入的整形数值和指针的区别
***************************************************/

// #include <stdio.h>

// void swap(int *x, int *y);

// void swap(int *x, int *y)
// {
// 	int temp;

// 	printf("in swap ，互换前的值为：x = %d, y = %d\n", *x, *y);

// 	temp = *x;
// 	*x = *y;
// 	*y = temp;

// 	printf("in swap ，互换后的值为：x = %d, y = %d\n", *x, *y);
// }

// int main(int argc, char const *argv[])
// {
// 	int x = 3;
// 	int y = 5;

// 	printf("in main ，互换前的值为：x = %d, y = %d\n", x, y);
// 	swap(&x, &y);
// 	printf("in main ，互换前的值为：x = %d, y = %d\n", x, y);

// 	return 0;
// }


/***************************************************
练习 3  验证传入的数组是一个地址
***************************************************/

// #include <stdio.h>

// void get_array(int a[10]);

// void get_array(int a[10])
// {
// 	int i;
// 	a[5] = 520;

// 	for (i = 0; i < 10; i++)
// 	{
// 		printf("a[%d] = %d \n", i, a[i]);
// 	}

// }

// int main(int argc, char const *argv[])
// {
// 	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

// 	get_array(a);//传入的是数组的首地址，并不是整个数组

// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("a[%d] = %d \n", i, a[i]);
// 	}

// 	return 0;
// }


/***************************************************
练习 4 可变参数
***************************************************/

// #include <stdio.h>
// #include <stdarg.h>

// int sum(int n, ...);

// int sum(int n, ...)
// {
// 	int i, sum = 0;
// 	va_list vap;  //定义一个字符指针

// 	va_start(vap, n);

// 	for (i = 0; i < n; i++)
// 	{
// 		sum += va_arg(vap,int);
// 	}

// 	va_end(vap);

// 	return sum;

// }

// int main(int argc, char const *argv[])
// {
// 	int result;

// 	result = sum(3, 1, 2, 3); //第一个参数是要传入计算的参数的个数，
// 	printf("result = %d\n", result);

// 	return 0;
// }


/***************************************************
练习 5 请问下面代码会打印什么 
***************************************************/

// #include <stdio.h>

// void func(int b[][3]);

// void func(int b[][3])
// {
//         printf("%d\n", b[2][2]);
// }

// int main(void)
// {
//         int a[3][4] = {
//                 {1, 2, 3, 4},
//                 {5, 6, 7, 8},
//                 {9, 10, 11, 12}
//         };

//         func(a);

//         return 0;
// }


/***************************************************
动动手：
1. 这节课终于学到了可变参数，现在尝试自己模拟实现 printf 格式化输出的基本功能。
要求：
自己写一个函数 myprintf，模拟实现 printf 函数的可变参数特性
输出第一个参数中除了格式化占位符外的所有字符
实现 %d 的格式化输出
实现 %c 的格式化输出
实现 %s 的格式化输出
实现 myprintf 函数返回打印了多少字符
全程仅能使用 putchar 唯一一个标准库函数

***************************************************/

#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int myprintf(char *format, ...);
int countInt(int num);
void printInt(int num);
void printStr(char *str);

// 这里我们使用迭代的方式打印整数
// 等后面学了递归，用递归会更方便呢
void printInt(int num)
{
        int dec = 1;
        int temp;

        if (num < 0)
        {
                putchar('-');
                num = -num;
        }

        temp = num;

        while (temp > 9)
        {
                dec *= 10;
                temp /= 10;
        }        

        while (dec != 0)
        {
                putchar(num / dec + '0');
                num = num % dec;
                dec /= 10;
        }
}

// 计算整数占多少个字符
int countInt(int num)
{
        int count = 0;

        if (num < 0)
        {
                count++;
                num = -num;
        }

        do
        {
                count++;
        } while (num /= 10);

        return count;
}

void printStr(char *str)
{
        int i = 0;

        while (str[i] != '\0')
        {
                putchar(str[i]);
                i++;
        }
}

int myprintf(char *format, ...)
{
        int i = 0;
        int count = 0;
        int darg; 
        char carg;
        char *sarg; 
        va_list vap;

        va_start(vap, format);

        while (format[i] != '\0')
        {
                // 如果不是格式化占位符，直接打印字符串
                if (format[i] != '%')
                {
                        putchar(format[i]);
                        i++;
                        count++;
                }
                // 如果是格式化占位符...
                else
                {
                        switch (format[i+1])
                        {
                                case 'c':
                                        {
                                                carg = va_arg(vap, int);
                                                putchar(carg);
                                                count++;
                                                break;
                                        }
                                case 'd':
                                        {
                                                darg = va_arg(vap, int);
                                                printInt(darg);
                                                count += countInt(darg);
                                                break;
                                        }
                                case 's':
                                        {
                                                sarg = va_arg(vap, char *);
                                                printStr(sarg);
                                                count += strlen(sarg);
                                                break;
                                        }
                        }
                        i += 2;
                }
        }

        va_end(vap);

        return count;
}

int main(void)
{
        int i;

        i = myprintf("Hello %s\n", "FishC");
        myprintf("共打印了%d个字符(包含\\n)\n", i);
        i = myprintf("int: %d, char: %c\n", -520, 'H');
        myprintf("共打印了%d个字符(包含\\n)\n", i);
        
        return 0;
}


















