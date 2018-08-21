
/******************************************************************************************************
动动手：0.猴子算法
******************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int in_order(int array[], int length);
void shuffle(int array[], int length);
void bogo_sort(int array[], int length);

int in_order(int array[], int length)
{
        int i = 0;

        while (array[i] <= array[i+1] && ++i < length - 1)
                ;

        if (i == length - 1)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}

void shuffle(int array[], int length)
{
        int index, temp, i;
        static int t1, t2;

        srand(t1);
        t1 = rand();

        t2 = time(NULL);
        srand(t1+t2);

        for (i = 0; i < length; i++)
        {
                index = rand() % (length - i) + i;
                if (index != i)
                {
                        temp = array[i];
                        array[i] = array[index];
                        array[index] = temp;
                }
        }
}

void bogo_sort(int array[], int length)
{
        while (!in_order(array, length))
        {
                shuffle(array, length);
        }
}

int main(void)
{
        int array[] = {73, 108, 111, 118, 101, 70, 105, 104, 67};
        int i, length;
        time_t begin, end;

        begin = time(NULL);

        length = sizeof(array) / sizeof(array[0]);
        bogo_sort(array, length);

        printf("排序后的结果是：");
        for (i = 0; i < length; i++)
        {
                printf("%d ", array[i]);
        }
        putchar('\n');

        end = time(NULL);
        printf("总共耗时：%ld秒\n", end - begin);

        return 0;
}