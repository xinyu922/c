
/***************************************************
结构体嵌套
***************************************************/

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
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

// 	} book = {
// 		"《带你学习带你飞》",
// 		"小甲鱼",
// 		48.8,
// 		{2017, 11, 11},
// 		"清华大学出版社" 
// 	} ;

// 	printf("书名%s \n", book.title);
// 	printf("作者%s \n", book.author);
// 	printf("售价%.2f \n", book.price);
// 	printf("日期%d-%d-%d \n", book.data.year, book.data.month, book.data.day);
// 	printf("出版社%s \n", book.publisher);

// 	return 0;
// }


/***************************************************
结构体指针
***************************************************/

#include <stdio.h>

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

	} book = {
		"《带你学习带你飞》",
		"小甲鱼",
		48.8,
		{2017, 11, 11},
		"清华大学出版社" 
	} ;

int main(int argc, char const *argv[])
{
	struct Book *pt;
	pt = &book;

	printf("书名 %s \n", book.title);
	printf("作者 %s \n", book.author);
	printf("售价 %.2f \n", book.price);
	printf("日期 %d-%d-%d \n", book.data.year, book.data.month, book.data.day);
	printf("出版社 %s \n", book.publisher);

	printf("书名 %s \n", (*pt).title);
	printf("作者 %s \n", (*pt).author);
	printf("售价 %.2f \n", (*pt).price);
	printf("日期 %d-%d-%d \n", (*pt).data.year, book.data.month, book.data.day);
	printf("出版社 %s \n", (*pt).publisher);

	printf("书名 %s \n", pt->title);
	printf("作者 %s \n", pt->author);
	printf("售价 %.2f \n", pt->price);
	printf("日期 %d-%d-%d \n", pt->data.year, book.data.month, book.data.day);
	printf("出版社 %s \n", pt->publisher);


	return 0;
}















