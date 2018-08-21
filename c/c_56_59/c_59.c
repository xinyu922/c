/******************************************************************************************************
文件内容的随机读取
******************************************************************************************************/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	FILE *fp;

// 	if ((fp = fopen("hello.txt", "w")) == NULL)
// 	{
// 		printf("文件打开失败！！！\n");
// 		exit(EXIT_FAILURE);
// 	}

// 	printf("%ld\n", ftell(fp));
// 	fputc('F', fp);
// 	printf("%ld\n", ftell(fp));
// 	fputs("ishC\n", fp);
// 	printf("%ld\n", ftell(fp));

// 	rewind(fp);//重置文件字符位置
// 	fputs("hello\n", fp);

// 	fclose(fp);

// 	return 0;
// }


/******************************************************************************************************
文件内容的随机读取
******************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define N 4

struct Stu
{
	char name[24];
	int num;
	float score;
}stu[N], sb;

int main(int argc, char const *argv[])
{
	FILE *fp;

	if ((fp = fopen("sorce.txt", "wb")) == NULL)
	{
		printf("文件打开失败！！！\n");
		exit(EXIT_FAILURE);
	}

	printf("请开始录入成绩（格式：姓名 学号 成绩）\n");

	for (int i = 0; i < N; i++)
	{
		scanf("%s %d %f", stu[i].name, &stu[i].num, &stu[i].score);
	}

	fwrite(stu,sizeof(struct Stu), N, fp);
	fclose(fp);

	if ((fp = fopen("sorce.txt", "rb")) == NULL)
	{
		printf("文件打开失败！！！\n");
		exit(EXIT_FAILURE);
	}

	fseek(fp, sizeof(struct Stu), SEEK_SET);
	fread(&sb, sizeof(struct Stu), 1, fp);
	printf("%s(%d)的成绩是：%f\n", sb.name, sb.num, sb.score);
	fclose(fp);

	return 0;
}































