
/***************************************************
单链表 :
实例化一个指针执行结构体本身

头插法

***************************************************/

// #include <stdio.h>
// #include <stdlib.h>

// struct Book
// {
// 	char title[128];
// 	char author[40];
// 	struct Book *next;
// };

// void getInput(struct Book *book);
// void addBook(struct Book **library);
// void printLibrary(struct Book *library);
// void releaseLibrary(struct Book **library);

// void getInput(struct Book *book)
// {
// 	printf("请输入书名：\n");
// 	scanf("%s", book->title);

// 	printf("请输入作者：\n");
// 	scanf("%s", book->author);
// }

// void addBook(struct Book **library)
// {
// 	struct Book *book, *temp;

// 	book = (struct Book *)malloc(sizeof(struct Book));

// 	if (book == NULL)
// 	{
// 		printf("内存分配失败了！！！\n");
// 		exit(1);
// 	}

// 	getInput(book);

// 	if (*library != NULL)
// 	{
// 		temp = *library;
// 		*library = book;
// 		book->next = temp;
// 	}
// 	else
// 	{
// 		*library = book;
// 		book->next = NULL;
// 	}

// }

// void printLibrary(struct Book *library)
// {
// 	struct Book *book;
// 	int count = 1;
// 	book = library;
// 	while(book != NULL)
// 	{
// 		printf("Book %d\n", count);
// 		printf("书名： %s\n", book->title);
// 		printf("作者： %s\n", book->author);

// 		book = book->next;
// 		count++;
// 	}
// }

// void releaseLibrary(struct Book **library)
// {
// 	struct Book *temp;

// 	while(library != NULL)
// 	{
// 		temp = *library;
// 		*library = (*library)->next;
// 		free(temp);
// 	}
// 	printf("内存已释放！！！\n");
// }

// int main()
// {
// 	struct Book *library = NULL;
// 	char ch;

// 	while(1)
// 	{
// 		printf("是否需要录入书籍信息(Y or N)：\n");
// 		do
// 		{
// 			ch = getchar();
// 		}while(ch != 'Y' && ch != 'N');

// 		if (ch == 'Y')
// 		{
// 			addBook(&library);
// 		}
// 		else
// 		{
// 			break;
// 		}

// 	}

// 	printf("是否需要打印书籍信息(Y or N)：\n");

// 	do
// 	{
// 		ch = getchar();
// 	}while(ch != 'Y' && ch != 'N');

// 	if (ch == 'Y')
// 	{
// 		printLibrary(library);
// 	}

// 	releaseLibrary(&library);


// 	return 0;
// }


// /***************************************************
// 单链表 :
// 实例化一个指针执行结构体本身

// 头插法(自己写)

// ***************************************************/

#include <stdio.h>
#include <stdlib.h>

struct Book
{
	char title[120];
	char author[40];
	struct Book *next;
};

void getInput(struct Book *book)
{
	printf("请输入书名：\n");
	scanf("%s", book->title);
	printf("请输入作者：\n");
	scanf("%s", book->author);
}

void addBook(struct Book **library)
{
	struct Book *book,*temp;

	book = (struct Book *)malloc(sizeof(struct Book));

	getInput(book);

	if (*library == NULL)
	{
		*library = book;
		book->next = NULL;
	}
	else
	{
		temp = *library;
		*library = book;
		book->next = temp;
	}
}

void printLibrary(struct Book *library)
{
	int count = 1;
	struct Book *book;

	book = library;

	while(book != NULL)
	{
		printf("第%d本书\n", count);
		printf("书名：%s\n", (book)->title);
		printf("作者：%s\n", (book)->author);

		book = book->next;
		count++;
	}
}

void releaseLibrary(struct Book **library)
{
	struct Book *temp;
	int count = 0;

	while (*library != NULL)
	{
		temp = *library;
		*library = (*library)->next;
		free(temp);	
		count++;
	}

	putchar('\n');
	putchar('\n');
	printf("您所申请的%d个内存已全部释放. >_< >_< \n", count);
	}

int main(void)
{
	struct Book *library = NULL;
	char ch;

	printf("欢迎进入图书馆录入系统！！！\n");
	putchar('\n');
	putchar('\n');
	
	while(1)
	{
		printf("是否需要录入书籍信息（Y or N）\n");
		do
		{
			ch = getchar();
		}while(ch != 'Y' && ch != 'N');

		if (ch == 'Y')
		{
			addBook(&library);//传入结构体指针的地址
		}
		else
		{
			break;
		}
	}

	putchar('\n');
	putchar('\n');
	printf("是否需要打印书籍信息（Y or N）\n");

	do
	{
		ch = getchar();
	}while(ch != 'Y' && ch != 'N');

	if (ch == 'Y')
	{
		printLibrary(library);//传入结构体指针
	}

	releaseLibrary(&library);//释放申请的动态内存，传入的是结构体指针的地址

	return 0;
}


