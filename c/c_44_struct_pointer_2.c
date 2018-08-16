
/***************************************************
传递结构体变量
***************************************************/

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	struct Test
// 	{
// 		int x;
// 		int y;
// 	}t1, t2;

// 	t1.x = 3;
// 	t1.y = 4;

// 	t2 = t1;//在相同结构体类型下可以相互赋值

// 	printf("t2.x = %d, t2.y = %d\n", t2.x, t2.y);


// 	return 0;
// }


/***************************************************
给函数直接传递结构体
***************************************************/

// #include <stdio.h>

// struct Book getInput(struct Book book);
// void printBook(struct Book book);


// 	struct Date
// 	{
// 		int year;
// 		int month;
// 		int day;
// 	};

// 	struct Book
// 	{
// 		char title[128];
// 		char author[40];
// 		float price;
// 		struct Date data;
// 		char publisher[40];

// 	} ;

// 	struct Book getInput(struct Book book)
// 	{
// 		printf("请输入书名：\n");
// 		scanf("%s", book.title);

// 		printf("请输入作者：\n");
// 		scanf("%s", book.author);

// 		printf("请输入售价：\n");
// 		scanf("%f", &book.price);

// 		printf("请输入出版日期：\n");
// 		scanf("%d-%d-%d", &book.data.year, &book.data.month, &book.data.day);
// 		printf("请输入出版社：\n");
// 		scanf("%s", book.publisher);

// 		return book;

// 	}

// 	void printBook(struct Book book)
// 	{
// 		printf("第一本书书名 %s \n", book.title);
// 		printf("第一本书作者 %s \n",book.author);
// 		printf("第一本书售价 %.2f \n",book.price);
// 		printf("第一本书日期 %d-%d-%d \n",book.data.year, book.data.month, book.data.day);
// 		printf("第一本书出版社 %s \n",book.publisher);

// 	}

// int main(int argc, char const *argv[])
// {
// 	struct Book b1, b2;

// 	printf("请输入第一本书的信息...\n");
// 	b1 = getInput(b1);
// 	printf("\n");

// 	printf("请输入第二本书的信息...\n");
// 	b2 = getInput(b2);

// 	printf("\n\n 录入完成，现在开始打印");

// 	printf("打印第一本书的信息\n");
// 	printBook(b1);

// 	printf("\n");

// 	printf("打印第二本书的信息\n");
// 	printBook(b2);

// 	return 0;
// }


/***************************************************
给函数传递结构体指针
***************************************************/


// #include <stdio.h>

// struct Date
// {
// 	int year;
// 	int month;
// 	int day;
// };

// struct Book
// {
// 	char title[128];
// 	char author[40];
// 	float price;
// 	struct Date data;
// 	char publisher[40];

// } ;

// void getInput(struct Book *book);
// void printBook(struct Book *book);

// void getInput(struct Book *book)
// {
// 	printf("请输入书名：\n");
// 	scanf("%s", book->title);

// 	printf("请输入作者：\n");
// 	scanf("%s", book->author);

// 	printf("请输入售价：\n");
// 	scanf("%f", &book->price);

// 	printf("请输入出版日期：\n");
// 	scanf("%d-%d-%d", &book->data.year, &book->data.month, &book->data.day);
// 	printf("请输入出版社：\n");
// 	scanf("%s", book->publisher);

// }



// void printBook(struct Book *book)
// {
// 	printf("第一本书书名 %s \n", book->title);
// 	printf("第一本书作者 %s \n", book->author);
// 	printf("第一本书售价 %.2f \n", book->price);
// 	printf("第一本书日期 %d-%d-%d \n", book->data.year, book->data.month, book->data.day);
// 	printf("第一本书出版社 %s \n", book->publisher);

// }

// int main(int argc, char const *argv[])
// {
// 	struct Book b1, b2;

// 	printf("请输入第一本书的信息...\n");
// 	getInput(&b1);
// 	printf("\n");

// 	printf("请输入第二本书的信息...\n");
// 	getInput(&b2);

// 	printf("\n\n 录入完成，现在开始打印");

// 	printf("打印第一本书的信息\n");
// 	printBook(&b1);

// 	printf("\n");

// 	printf("打印第二本书的信息\n");
// 	printBook(&b2);

// 	return 0;
// }



/***************************************************
给函数传递结构体指针
***************************************************/

// #include <stdio.h>
// #include <stdlib.h>

// struct Date
// {
// 	int year;
// 	int month;
// 	int day;
// };

// struct Book
// {
// 	char title[128];
// 	char author[40];
// 	float price;
// 	struct Date data;
// 	char publisher[40];

// } ;

// void getInput(struct Book *book);
// void printBook(struct Book *book);

// void getInput(struct Book *book)
// {
// 	printf("请输入书名：\n");
// 	scanf("%s", book->title);

// 	printf("请输入作者：\n");
// 	scanf("%s", book->author);

// 	printf("请输入售价：\n");
// 	scanf("%f", &book->price);

// 	printf("请输入出版日期：\n");
// 	scanf("%d-%d-%d", &book->data.year, &book->data.month, &book->data.day);
// 	printf("请输入出版社：\n");
// 	scanf("%s", book->publisher);

// }



// void printBook(struct Book *book)
// {
// 	printf("第一本书书名 %s \n", book->title);
// 	printf("第一本书作者 %s \n", book->author);
// 	printf("第一本书售价 %.2f \n", book->price);
// 	printf("第一本书日期 %d-%d-%d \n", book->data.year, book->data.month, book->data.day);
// 	printf("第一本书出版社 %s \n", book->publisher);

// }

// int main(int argc, char const *argv[])
// {
// 	struct Book *b1, *b2;

// 	b1 = (struct Book *)malloc(sizeof(struct Book));
// 	b2 = (struct Book *)malloc(sizeof(struct Book));

// 	if (b1 == NULL || b2 == NULL)
// 	{
// 		printf("内存分配失败！！！\n");
// 		exit(1);
// 	}

// 	printf("请输入第一本书的信息...\n");
// 	getInput(b1);
// 	printf("\n");

// 	printf("请输入第二本书的信息...\n");
// 	getInput(b2);

// 	printf("\n\n 录入完成，现在开始打印");

// 	printf("打印第一本书的信息\n");
// 	printBook(b1);

// 	printf("\n");

// 	printf("打印第二本书的信息\n");
// 	printBook(b2);

// 	free(b1);
// 	free(b2);

// 	return 0;
// }


/***************************************************
图书馆信息录入系统
version:0.1
author:xinyu
time:2018-8-16
***************************************************/

#include <stdio.h>
#include <stdlib.h>

#define num 2 //图书的数目

struct Date
{
	int year;
	int month;
	int day;
};

struct Book
{
	char title[128];
	char author[40];
	float price;
	struct Date data;
	char publisher[40];

} ;

void getInput(struct Book *book);
void printBook(struct Book *book);

void getInput(struct Book *book)
{
	printf("请输入书名：\n");
	scanf("%s", book->title);

	printf("请输入作者：\n");
	scanf("%s", book->author);

	printf("请输入售价：\n");
	scanf("%f", &book->price);

	printf("请输入出版日期：\n");
	scanf("%d-%d-%d", &book->data.year, &book->data.month, &book->data.day);
	printf("请输入出版社：\n");
	scanf("%s", book->publisher);

}



void printBook(struct Book *book)
{
	printf("第一本书书名 %s \n", book->title);
	printf("第一本书作者 %s \n", book->author);
	printf("第一本书售价 %.2f \n", book->price);
	printf("第一本书日期 %d-%d-%d \n", book->data.year, book->data.month, book->data.day);
	printf("第一本书出版社 %s \n", book->publisher);

}

int main(int argc, char const *argv[])
{
	struct Book book[num];//结构体数组
	char ch;
	int i,j;

	printf("==========欢迎进入图书馆管理系统==========\n");
	A:
	printf("请进行功能选择：\n");
	printf("1 图书信息录取\n");
	printf("2 图书信息查询\n");
	printf("3 离开系统\n");
	
	while(1)
	{
		scanf("%c", &ch);

		switch(ch)
		{
			case '1':
				printf("请输入第%d本书的信息...\n", i+1);
				getInput(&book[i++]);
				printf("\n");
				j++;//统计录入的书的数目
				goto A;
			case '2':

				if (j == 0)
				{
					printf("请先录入图书信息！！！\n");
					goto A;
				}
				else
				{
					for (int i = 0; i < j; i++)
					{
						printf("打印第%d本书的信息\n", i+1);
						printBook(&book[i]);
						printf("\n");

					}

				}
				goto A;

			case '3':
				exit(1);

	}

	}
		

	return 0;
}















