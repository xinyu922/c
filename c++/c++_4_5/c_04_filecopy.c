#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
	FILE *in, *out;
	int ch;//后面getc函数的返回值是int类型，所以定义ch为int类型

	if (argc != 3)
	{
		fprintf(stderr, "输入有误！！！\n正确的输入形式为：c_04_copyfile 源文件 目标文件名 \n");
		exit(EXIT_FAILURE);
	}

	if ((in = fopen(argv[1], "rb"))== NULL)
	{
		fprintf(stderr, "打不开文件：%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((out = fopen(argv[2],"wb")) == NULL)
	{
		fprintf(stderr, "打不开文件：%s\n", argv[2]);
		fclose(in);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(in)) != EOF)//EOF == end of file
	{
		if(putc(ch, out) == EOF)
		{
			break;
		}
	}

	if (ferror(in))
	{
		printf("读取文件 %s 失败！\n", argv[1]);
	}

	if (ferror(out))
	{
		printf("写入文件 %s 失败！\n", argv[2]);
	}

	printf("成功复制了1个文件！\n");

	return 0;
}