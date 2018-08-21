
/******************************************************************************************************
fgetc fputc 读取写入一个字符，读取的返回值是一个整形（int)
******************************************************************************************************/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	FILE *fp1;
// 	FILE *fp2;
// 	int ch;

// 	if ((fp1 = fopen("hello.txt", "r")) == NULL)
// 	{
// 		printf("文件打开失败！！\n");
// 		exit(EXIT_FAILURE);
// 	}

// 	if ((fp2 = fopen("fishc.txt", "w")) == NULL)
// 	{
// 		printf("文件打开失败！！\n");
// 		exit(EXIT_FAILURE);
// 	}

// 	while((ch = fgetc(fp1)) != EOF)
// 	{
// 		fputc(ch, fp2);
// 	}

// 	fclose(fp1);
// 	fclose(fp2);

// 	return 0;
// }


/******************************************************************************************************
fgets fputs 读取写入字符串，
******************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

int main(void)
{
	FILE *fp;
	char buffer[MAX];

	if ((fp = fopen("hello.txt", "w")) == NULL)
	{
		printf("文件打开失败！！\n");
		exit(EXIT_FAILURE);
	}

	fputs("line one: hello world! \n",fp);
	fputs("line two: hello xinyu! \n",fp);

	fclose(fp);

	if ((fp = fopen("hello.txt", "r")) == NULL)
	{
		printf("文件打开失败！！\n");
		exit(EXIT_FAILURE);
	}

	while(!feof(fp))
	{
		fgets(buffer, MAX, fp);
		printf("%s", buffer);
	}

	return 0;
}


















