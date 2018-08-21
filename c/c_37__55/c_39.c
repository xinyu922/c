// #include <stdio.h>
// #include <stdlib.h>

// int global_uinit_var;
// int global_init_var1;
// int global_init_var2;

// void func(void);

// void func(void)
// {
// 	;
// }

// int main(void)
// {
// 	int local_var1;
// 	int local_var2;

// 	static int static_uninit_var;
// 	static int static_init_var = 456;

// 	char *str1 = "I love you!";
// 	char *str2 = "You are right!";

// 	int *malloc_var = (int *)malloc(sizeof(int));

// 	printf("addr of func -> %p\n", func);
// 	printf("addr of str1 -> %p\n", str1);
// 	printf("addr of str2 -> %p\n", str2);
// 	printf("addr of global_init_var1 -> %p\n", &global_init_var1);
// 	printf("addr of global_init_var2 -> %p\n", &global_init_var2);
// 	printf("addr of static_init_var -> %p\n", &static_init_var);
// 	printf("addr of static_uninit_var -> %p\n", &static_uninit_var);
// 	printf("addr of static_uninit_var -> %p\n", &static_uninit_var);
// 	printf("addr of malloc_var -> %p\n", malloc_var);
// 	printf("addr of local_var1 -> %p\n", &local_var1);
// 	printf("addr of local_var2 -> %p\n", &local_var2);

// 	return 0;

// }



/******************************************************************************************************
动动手  2. 有了上面两道题的“经验”，好戏正式开始：请编写一个程序，实现任意长度的整数加法运算。
******************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INCREMENT 10
#define INIT_SIZE INCREMENT

char *get_num(void);
char *reverse_str(char *str);
char *add_two_strs(char *str1, char *str2);
char *append_result(char *result, char ch);

// 获取用户输入的整数
char *get_num(void)
{
        char ch;
        char *num; // 存储整个数据的首地址
        char *last; // 最近一次迭代的起始地址
        int limit = 0; // 每次迭代的限制值
        long times = 1; // 记录重新申请多少次内存

        num = (char *)malloc(INIT_SIZE);
        if(num == NULL)
        {
                exit(1);
        }

        last = num;

        printf("请输入一个整数：");

        while((ch = getchar()) != '\n')
        {
                last[limit++] = ch;
                if(limit >= INCREMENT)
                {
                        int offset = last - num;
                        num = (char *)realloc(num, INIT_SIZE + INCREMENT * times++);
                        last = num;
                        last += offset;
                        last += INCREMENT;
                        limit = 0;
                }
        }
        last[limit] = '\0';

        return num;
}

// 前后翻转字符串
char *reverse_str(char *str)
{
        char *start = str;
        char *left = str;
        char ch;

        if(str != NULL)
        {
                // 定位到字符串的最后一个字符
                while(*str++)
                        ;
                str -= 2;

                while(left < str)
                {
                        ch = *left;
                        *left++ = *str;
                        *str-- = ch;
                }
        }

        return start;
}

char *append_result(char *result, char ch)
{
        char *last = result;
        int limit = 0;
        int times = 1;

        // 定位到字符串的末尾
        while(last[limit++] != '\0')
        {
                if(limit >= INCREMENT)
                {
                        limit = 0;
                        times++;
                        last += INCREMENT;
                }
        }

        last[limit - 1] = ch;
        if(limit >= INCREMENT)
        {
                int offset = last - result;
                result = (char *)realloc(result, INIT_SIZE + INCREMENT * times);
                last = result;
                last += offset;
                last += INCREMENT;
                limit = 0;                // reset
        }
        last[limit] = '\0';

        return result;
}

// 将两个字符串对应的数值相加
char *add_two_strs(char *str1, char *str2)
{
        int carry = 0; // 存放进位
        int num1, num2, num3;
        char *result;

        result = (char *)malloc(INIT_SIZE);
        if(result == NULL)
        {
                exit(1);
        }

        result[0] = '\0';                // 需要 '\0'

        // 字符串的存放顺序跟加法规则相反
        // 需要先反转字符串
        str1 = reverse_str(str1);
        str2 = reverse_str(str2);

        // 两个字符串按位相加
        while(*str1 != '\0' || *str2 != '\0')
        {
                num1 = *str1 - '0';
                num2 = *str2 - '0';

                if(*str1 == '\0')
                {
                        num1 = 0;
                }
                else
                {
                        str1++;
                }

                if(*str2 == '\0')
                {
                        num2 = 0;
                }
                else
                {
                        str2++;
                }

                num3 = num1 + num2 + carry;
                if(num3 > 9)
                {
                        result = append_result(result, num3 - 10 + '0');
                        carry = 1;
                }
                else
                {
                        result = append_result(result, num3 + '0');
                        carry = 0;
                }
        }
    
        if(carry)
        {
                append_result(result, carry + '0');
        }

        result = reverse_str(result);

        return result;
}

int main(void)
{
        char *num1;
        char *num2;
        char *result;

        num1 = get_num();
        num2 = get_num();

        result = add_two_strs(num1, num2);
        printf("计算结果是：%s\n", result);

        return 0;
}
