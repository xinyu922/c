#include <stdio.h>

void insertion_sort(int array[], int length);

void insertion_sort(int array[], int length)
{
        int i, j, temp;

        for (i = 1; i < length; i++)
        {
                temp = array[i];
                j = i - 1;
                for ( ; j >= 0 && array[j] > temp; j--)
                {
                        array[j+1] = array[j];
                }
                array[j+1] = temp;
        }
}

int main(void)
{
        int array[] = {73, 108, 111, 118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
        int i, length;

        length = sizeof(array) / sizeof(array[0]);
        insertion_sort(array, length);

        printf("排序后的结果是：");
        for (i = 0; i < length; i++)
        {
                printf("%d ", array[i]);
        }
        putchar('\n');

        return 0;
}