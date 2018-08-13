/***************************************************
0. 接受字符串 —— fgets 函数
***************************************************/

// #include <stdio.h>

// #define MAX 1024

// int main()
// {
//         char str[MAX];

//         printf("请输入一个字符串：");
//         fgets(str, MAX, stdin);

//         printf("您输入的内容是：%s", str);

//         return 0;
// }

/***************************************************
1. 获取字符串的长度 —— strlen 函数
***************************************************/


// #include <stdio.h>

// #define MAX 1024

// int main()
// {
//         char str[MAX];
//         char *target = str;
//         int length = 0;

//         printf("请输入一个字符串：");
//         fgets(str, MAX, stdin);  //stdin 标准输入流

//         while (*target++ != '\0')
//         {
//                 length++;
//         }

//         printf("您总共输入了 %d 个字符！\n", length - 1);

//         return 0;
// }


/***************************************************
1. 进阶代码
***************************************************/

// #include <stdio.h>

// #define MAX 1024

// int main()
// {
//         char str[MAX];
//         char *target = str;
//         char ch;
//         int length = 0;

//         printf("请输入一个字符串：");
//         fgets(str, MAX, stdin);

//         while (1)
//         {
//                 ch = *target++;
//                 if (ch == '\0')
//                 {
//                         break;
//                 }
//                 if ((int)ch < 0)
//                 {
//                         target += 2;//中文字符占3个字节，返回的int型值为负数
//                 }
//                 length++;
//         }

//         printf("您总共输入了 %d 个字符！\n", length - 1);

//         return 0;
// }


/***************************************************
测试中文字符所占的空间
***************************************************/

// #include <stdio.h>

// int main()
// {
//         char str[] = "中国";
//         int length, i;

//         length = sizeof(str) / sizeof(str[0]);

//         printf("length of str: %d\n", length);

//         for (i = 0; i < length; i++)
//         {
//                 printf("str[%d] = %d\n", i, str[i]);
//         }

//         return 0;
// }


/***************************************************
拷贝字符串 —— strcpy
***************************************************/

// #include <stdio.h>

// #define MAX 1024

// int main()
// {
//         char str1[MAX];
//         char str2[MAX];

//         char *target1 = str1;
//         char *target2 = str2;

//         printf("请输入一个字符串到 str1 中：");
//         fgets(str1, MAX, stdin);

//         printf("开始拷贝 str1 的内容到 str2 中...\n");
//         while ((*target2++ = *target1++) != '\0')
//                 ;

//         printf("拷贝完毕！");
//         printf("现在，str2 中的内容是：%s\n", str2);

//         return 0;
// }


/***************************************************
拷贝字符串 —— strncpy
***************************************************/
// #include <stdio.h>

// #define MAX 1024

// int main()
// {
//         char str1[MAX];
//         char str2[MAX];

//         char *target1 = str1;
//         char *target2 = str2;

//         char ch;
//         int n;

//         printf("请输入一个字符串到 str1 中：");
//         fgets(str1, MAX, stdin);

//         printf("请输入需要拷贝的字符个数：");
//         scanf("%d", &n);

//         printf("开始拷贝 str1 的内容到 str2 中...\n");
//         while (n--)
//         {
//                ch = *target2++ = *target1++;
//                if (ch == '\0')
//                {
//                        break;
//                }
//                if ((int)ch < 0)
//                {
//                        *target2++ = *target1++;
//                        *target2++ = *target1++;
//                }
//         }

//         *target2 = '\0';

//         printf("拷贝完毕！\n");
//         printf("现在，str2 中的内容是：%s\n", str2);

//         return 0;
// }


/***************************************************
拷贝字符串 —— strcat
***************************************************/

// #include <stdio.h>

// #define MAX 1024

// int main()
// {
//         char str1[2 * MAX]; // 确保连接后不越界
//         char str2[MAX];

//         char *target1 = str1;
//         char *target2 = str2;

//         printf("请输入第一个字符串：");
//         fgets(str1, MAX, stdin);

//         printf("请输入第二格字符串：");
//         fgets(str2, MAX, stdin);

//         // 将指针指向 str1 的末尾处
//         while (*target1++ != '\0')
//                 ;

//         // 我们希望 str1 最后边的 '\0' 和 '\n' 都被覆盖掉
//         target1 -= 2;

//         // 连接字符串
//         while ((*target1++ = *target2++) != '\0')
//                 ;

//         printf("连接后的结果是：%s", str1);

//         return 0;
// }


/***************************************************
拷贝字符串 —— strncat
***************************************************/

// #include <stdio.h>

// #define MAX 1024

// int main()
// {
//         char str1[2 * MAX]; // 确保连接后不越界
//         char str2[MAX];

//         char *target1 = str1;
//         char *target2 = str2;

//         char ch;
//         int n;

//         printf("请输入第一个字符串：");
//         fgets(str1, MAX, stdin);

//         printf("请输入第二格字符串：");
//         fgets(str2, MAX, stdin);

//         printf("请输入需要连接的字符个数：");
//         scanf("%d", &n);

//         // 将指针指向 str1 的末尾处
//         while (*target1++ != '\0')
//                 ;
//         // 我们希望 str1 最后边的 '\0' 和 '\n' 都被覆盖掉
//         target1 -= 2;

//         while (n--)
//         {
//                 ch = *target1++ = *target2++;
//                 if (ch == '\0')
//                 {
//                         break;
//                 }
//                 if ((int)ch < 0)
//                 {
//                         *target1++ = *target2++;
//                         *target1++ = *target2++;
//                 }
//         }

//         *target1 = '\0';

//         printf("连接后的结果是：%s\n", str1);

//         return 0;
// }


/***************************************************
拷贝字符串 —— strcmp
***************************************************/

// #include <stdio.h>

// #define MAX 1024

// int main()
// {
//         char str1[MAX];
//         char str2[MAX];

//         char *target1 = str1;
//         char *target2 = str2;

//         int index = 1;

//         printf("请输入第一个字符串：");
//         fgets(str1, MAX, stdin);

//         printf("请输入第二个字符串：");
//         fgets(str2, MAX, stdin);

//         while (*target1 != '\0' && *target2 != '\0')
//         {
//                 if (*target1++ != *target2++)
//                 {
//                        break;
//                 }
//                 index++;
//         }

//         if (*target1 == '\0' && *target2 == '\0')
//         {
//                 printf("两个字符串完全一致！\n");
//         }
//         else
//         {
//                 printf("两个字符串不完全相同，第 %d 个字符出现不同！\n", index);
//         }

//         return 0;
// }


/***************************************************
拷贝字符串 —— strncmp
***************************************************/

#include <stdio.h>

#define MAX 1024

int main()
{
        char str1[MAX];
        char str2[MAX];

        char *target1 = str1;
        char *target2 = str2;

        char ch;
        int index = 1, n;

        printf("请输入第一个字符串：");
        fgets(str1, MAX, stdin);

        printf("请输入第二个字符串：");
        fgets(str2, MAX, stdin);

        printf("请输入需要对比的字符个数：");
        scanf("%d", &n);

        while (n && *target1 != '\0' && *target2 != '\0')
        {
                ch = *target1;
                if (ch < 0)
                {
                        if (*target1++ != *target2++ || *target1++ != *target2++)
                        {
                                break;
                        }
                }
                if (*target1++ != *target2++)
                {
                       break;
                }
                index++;
                n--;
        }

        if ((n == 0) || (*target1 == '\0' && *target2 == '\0'))
        {
                printf("两个字符串的前 %d 个字符完全相同！\n", index);
        }
        else
        {
                printf("两个字符串不完全相同，第 %d 个字符出现不同！\n", index);
        }

        return 0;
}










