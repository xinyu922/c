
/******************************************************************************************************
格式化写入、输出当前的年月日
******************************************************************************************************/

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int  main(int argc, char const *argv[])
// {
// 	FILE *fp;
// 	struct tm *p;
// 	time_t t;

// 	time(&t);
// 	p = localtime(&t);

// 	if ((fp = fopen("data.txt", "w")) == NULL)
// 	{
// 		printf("文件打开失败！！！\n");
// 		exit(EXIT_FAILURE);
// 	} 

// 	fprintf(fp, "%d-%d-%d\n", 1900 + p->tm_year, 1 + p->tm_mon, p->tm_mday);

// 	fclose(fp);

// 	int year, month, day;

// 	if ((fp = fopen("data.txt", "r")) == NULL)
// 	{
// 		printf("文件打开失败！！！\n");
// 		exit(EXIT_FAILURE);
// 	} 

// 	fscanf(fp, "%d-%d-%d", &year, &month, &day);
// 	printf("%d-%d-%d\n", year, month, day);

// 	fclose(fp);

// 	return 0;
// }





/******************************************************************************************************
以二进制的形式读取文件，并写入字符
******************************************************************************************************/

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int  main(int argc, char const *argv[])
// {
// 	FILE *fp;

// 	if ((fp = fopen("text.txt", "wb")) == NULL)
// 	{
// 		printf("文件打开失败！！！\n");
// 		exit(EXIT_FAILURE);
// 	}

// 	fputc('5', fp);
// 	fputc('2', fp);
// 	fputc('0', fp); 

// 	fclose(fp);

// 	return 0;
// }


/******************************************************************************************************
fread or fwrite函数 演示
******************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Date
{
	int year;
	int month;
	int day;
};

struct Book
{
	char name[40];
	char author[40];
	char publisher[40];
	struct Date date;
};


int  main(int argc, char const *argv[])
{
	FILE *fp;
	struct Book *book_for_write, *book_for_read;

	book_for_write = (struct Book *)malloc(sizeof(struct Book));
	book_for_read = (struct Book *)malloc(sizeof(struct Book));

	if (book_for_write == NULL || book_for_read == NULL)
	{
		printf("内存分配失败！！！\n");
		exit(EXIT_FAILURE);
	}

	strcpy(book_for_write->name, "《带你学c带你飞!》");
	strcpy(book_for_write->author, "小甲鱼");
	strcpy(book_for_write->publisher, "清华大学出版社");
	book_for_write->date.year = 2017;
	book_for_write->date.month = 11;
	book_for_write->date.day = 11;



	if ((fp = fopen("file.txt", "w")) == NULL)
	{
		printf("文件打开失败！！！\n");
		exit(EXIT_FAILURE);
	}

	fwrite(book_for_write, sizeof(struct Book), 1, fp);
	fclose(fp);

	if ((fp = fopen("file.txt", "r")) == NULL)
	{
		printf("文件打开失败！！！\n");
		exit(EXIT_FAILURE);
	}

	fread(book_for_read, sizeof(struct Book), 1, fp);
	printf("书名: %s\n", book_for_read->name);
	printf("作者: %s\n", book_for_read->author);
	printf("出版社: %s\n", book_for_read->publisher);
	printf("出版日期: %d-%d-%d\n", book_for_read->date.year, book_for_read->date.month, book_for_read->date.day);

	fclose(fp);



	return 0;
}























