#include <stdio.h>
#include <string.h>

#define MAX 21 // 包含结束符就是21个字符

int main()
{
        int ch, space, i = 0;
        char str[MAX];

        space = MAX - 1;

        printf("请输入一行文本：");
        while ((ch = getchar()) != '\n')
        {
                str[i++] = ch;
                if (i == MAX - 1)
                {
                        break; // 到了字符数组最后一个位置
                }
                if (ch == ' ')
                {
                        space = i; // 记录最后一个空格的位置
                }
        }

        if (i >= MAX - 1)
        {
                str[space] = '\0';
        }
        else
        {
                str[i] = '\0';
        }

        printf("你输入的文本是：%s\n", str);

        return 0;
}