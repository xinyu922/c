#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int sum = 0;
	char ch;

	printf("请输入一串整数和任意数目的空格：\n");

	while(scanf("%d",&i) == 1)
	{
		sum += i;

		while((ch=getchar()) == ' ')//屏蔽空格
			;

		if(ch == '\n')
		{
			break;
		}

		ungetc(ch, stdin);//将变量ch中存放的字符退后给stdin输入流。

	}

	printf("结果是：%d\n", sum);
	printf("\n");
	//system("pause");

	return 0;
}