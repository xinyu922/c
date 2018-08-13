/********************************************/
//统计一串字符中大写字母的个数
/********************************************/


// #include <stdio.h>

// int main()
// {
//         int ch, count = 0;

//         printf("请输入一行英文句子：");

//         while ((ch = getchar()) != '\n')
//         {
//                 if (ch >= 'A' && ch <= 'Z')
//                 {
//                         count = count + 1;
//                 }
//         }

//         printf("你总共输入了%d个大写字母！\n", count);

//         return 0;
// }

/********************************************/
//统计一串字符中的大小写兑换
/********************************************/

#include <stdio.h>

int main()
{
        int ch;

        printf("请输入一行英文句子：");

        while ((ch = getchar()) != '\n')
        {
                if (ch >= 'A' && ch <= 'Z')
                {
                        ch = ch - 'A' + 'a';
                }
                else if (ch >= 'a' && ch <= 'z')
                {
                        ch = ch - 'a' + 'A';
                }

                putchar(ch);
        }

        putchar('\n');

        return 0;
}