#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	FILE *fp;

	if ((fp = fopen("hhhhh.txt", "r")) == NULL)
	{
		printf("标准输出！\n");
		fputs("打开文件失败！\n", stderr);
		exit(EXIT_FAILURE);
	}

	fclose(fp);


	return 0;
}