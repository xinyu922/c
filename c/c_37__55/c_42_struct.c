// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	struct Book

// 	{
// 		char title[128];
// 		char author[40];
// 		float price;
// 		unsigned int data;
// 		char publisher[40];

// 	};

// 	struct Book book;

// 	printf("请输入书名：\n");
// 	scanf("%s", book.title);

// 	printf("请输入作者：\n");
// 	scanf("%s", book.author);

// 	printf("请输入售价：\n");
// 	scanf("%f", &book.price);

// 	printf("请输入出版日期：\n");
// 	scanf("%d", &book.data);

// 	printf("请输入出版社：\n");
// 	scanf("%s", book.publisher);

// 	printf("==============数据录入完毕===============\n");

// 	printf("书名%s\n", book.title);
// 	printf("作者%s\n", book.author);
// 	printf("售价%.2f\n", book.price);
// 	printf("日期%d\n", book.data);
// 	printf("出版社%s\n", book.publisher);

// 	return 0;
// }



#include <stdio.h>

int main()
{
	struct A
	{
		char a;
		int b;
		char c;
	} a = {'x', 520, 'y'};

	printf("size of a = %lu\n", sizeof(a));//->12


	return 0;
}



















