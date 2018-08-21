#include <stdlib.h>
#include <stdio.h>

typedef struct Date
{	
	int year;
	int manth;
	int day;
	
} DATE, *PDATE;//利用typedef定义了一个struct Date 的数据类型和一个struct Date * 的数据类型

int main(void)
{
	struct Date *date;

	date = (PDATE)malloc(sizeof(DATE));
	if (date == NULL)
	{
		printf("分配内存失败！！！\n");
		exit(1);
	}

	date->year = 2018;
	date->manth = 8;
	date->day = 19;

	printf("今天的日期是：%d-%d-%d\n", (*date).year, (*date).manth, (*date).day);
	printf("今天的日期是：%d-%d-%d\n", date->year, date->manth, date->day);



}