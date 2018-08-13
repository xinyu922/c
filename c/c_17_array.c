// #include <stdio.h>

// int main()
// {
// 	int arr_1[] = {31,28,31,30,31,30,31,31,30,31,30,31};
// 	int arr_2[] = {31,29,31,30,31,30,31,31,30,31,30,31};
// 	int year, i;

// 	printf("请输入年份：\n");
// 	scanf("%d\n",&year);

// 	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
// 	{
// 		for (i = 1; i <= 12; i++)
// 		{
// 			printf("%d月份： %d天\n", i, arr_2[i-1]);
// 		}
// 	}
// 	else
// 	{
// 		for (i = 1; i <= 12; i++)
// 		{
// 			printf("%d月份： %d天\n", i, arr_1[i-1]);
// 		}
// 	}

// 	return 0;

// }



#include <stdio.h>

int main()
{
        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int i, year;

        printf("请输入一个年份：");
        scanf("%d", &year);

        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
                days[1] = 29;
        }

        for (i = 0; i < sizeof(days) / sizeof(days[0]); i++)
        {
                printf("%2d月份：%d天\n", i+1, days[i]);
        }


        return 0;
}