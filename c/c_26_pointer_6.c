
/***************************************************
动动手：0. 分割字符串。用户输入一个英文句子，你的程序将这个字符串按空格进行分割，返回由单词组成的二维数组。
要求：
返回的二维数组必须尽可能地节省空间（利用C语言的变长数组来实现）
不能使用现成的函数帮忙（你只能 #include <stdio.h>）

***************************************************/


#include <stdio.h>

int main()
{
        char str[1024];
        char *p = str;          // 用于间接寻址
        char *pos[1024] = {0};  // 记录每个单词的地址
        int len = 0;
        int cChar = 0, cWord = 0; // cChar 统计字符数, cWord 统计单词数
        int max = 0, i = 0, j;

        printf("请输入一个英文句子：");
        // 接收输入，顺带统计用户实际输入了多少个字符
        while ((str[len++] = getchar()) != '\n' && len + 1 < 1024);
        
        str[len-1] = '\0'; // str[len]存放的是'\n'，将其替换为'\0'

        if (*p != ' ')
        {
                pos[i++] = p; // 记录第一个单词的地址
                cWord++;
        }

        while (len--)
        {
                if (*p++ == ' ')
                {
                        // 判断最大字符数
                        max = cChar > max ? cChar : max;
                        cChar = 0;

                        // 到底了，退出循环
                        if (*p == '\0')
                        {
                                break;
                        }

                        // 单词数加一
                        if (*p != ' ')
                        {
                                pos[i++] = p;
                                cWord++;
                        }
                }
                else // 没有else会把空格统计进去
                {
                        cChar++;
                }
        }
        max = --cChar > max ? cChar : max; // 最后会算多一个'\0'，所以减去

        // 申请可变长数组，max+1，否则'\0'放不下
        char result[cWord][max+1];

        // 将分割好的单词放进二维数组里
        for (i = 0; i < cWord; i++)
        {
                for (j = 0; *(pos[i]+j) != ' ' && *(pos[i]+j) != '\0'; j++)
                {
                        result[i][j] = *(pos[i]+j);
                }
                result[i][j] = '\0';
        }

        // 打印结果
        printf("分割结果已存放到result[%d][%d]的二维数组中...\n", cWord, max+1);
        printf("现在依次打印每个单词：\n");
        for (i = 0; i < cWord; i++)
        {
                printf("%s\n", result[i]);
        }

        return 0;
}


/***************************************************
动动手：1. 修改代码，使得程序允许用户指定分隔符
***************************************************/

// #include <stdio.h>

// int main()
// {
//         char str[1024];
//         char *p = str;          // 用于间接寻址
//         char *pos[1024] = {0};  // 记录每个单词的地址
//         int len = 0;
//         int cChar = 0, cWord = 0; // cChar 统计字符数, cWord 统计单词数
//         int max = 0, i = 0, j;
//         char delim = ' ';

//         printf("请输入一个英文句子：");
//         // 接收输入，顺带统计用户实际输入了多少个字符
//         while ((str[len++] = getchar()) != '\n' && len + 1 < 1024)
//                 ;
//         str[len-1] = '\0'; // str[len]存放的是'\n'，将其替换为'\0'

//         printf("请输入分割符：");
//         scanf("%c", &delim);

//         if (*p != delim)
//         {
//                 pos[i++] = p; // 记录第一个单词的地址
//                 cWord++;
//         }

//         while (len--)
//         {
//                 if (*p++ == delim)
//                 {
//                         // 判断最大字符数
//                         max = cChar > max ? cChar : max;
//                         cChar = 0;

//                         // 到底了，退出循环
//                         if (*p == '\0')
//                         {
//                                 break;
//                         }

//                         // 单词数加一
//                         if (*p != delim)
//                         {
//                                 pos[i++] = p;
//                                 cWord++;
//                         }
//                 }
//                 else // 没有else会把空格统计进去
//                 {
//                         cChar++;
//                 }
//         }
//         max = --cChar > max ? cChar : max; // 最后会算多一个'\0'，所以减去

//         // 申请可变长数组，max+1，否则'\0'放不下
//         char result[cWord][max+1];

//         // 将分割好的单词放进二维数组里
//         for (i = 0; i < cWord; i++)
//         {
//                 for (j = 0; *(pos[i]+j) != delim && *(pos[i]+j) != '\0'; j++)
//                 {
//                         result[i][j] = *(pos[i]+j);
//                 }
//                 result[i][j] = '\0';
//         }

//         // 打印结果
//         printf("分割结果已存放到result[%d][%d]的二维数组中...\n", cWord, max+1);
//         printf("现在依次打印每个单词：\n");
//         for (i = 0; i < cWord; i++)
//         {
//                 printf("%s\n", result[i]);
//         }

//         return 0;
// }

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	char a[4][3][2] = {
//         {
//                 {'a', 'b'}, {'c', 'd'}, {'e', 'f'}
//         },
//         {
//                 {'g', 'h'}, {'i', 'j'}, {'k', 'l'}
//         },
//         {
//                 {'m', 'n'}, {'o', 'p'}, {'q', 'r'}
//         },
//         {
//                 {'s', 't'}, {'u', 'v'}, {'w', 'x'}
//         }
// 		};
// 	char (*pa)[2] = &a[1][0];
// 	char (*ppa)[3][2] = &a[1];


// 	printf("%c\n", *(*(pa+8)+1));//输出字符x
// 	printf("%c\n",*(*(*(ppa+2)+2)+1));

// 	return 0;
// }









