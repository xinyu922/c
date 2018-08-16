#include <stdio.h>

void bubble_sort(int array[], int length);

void bubble_sort(int array[], int length)
{
        int i, j, temp;

        for (i = 0; i < length - 1; i++)
        {
                for (j = 0; j < length - 1 - i; j++)
                {
                        if (array[j] > array[j+1])
                        {
                                temp = array[j];
                                array[j] = array[j + 1];
                                array[j+1] = temp;
                        }
                }
        }
}

int main(void)
{
        int array[] = {73, 108, 111, 118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
        int i, length;

        length = sizeof(array) / sizeof(array[0]);
        bubble_sort(array, length);

        printf("排序后的结果是：");
        for (i = 0; i < length; i++)
        {
                printf("%d ", array[i]);
        }
        putchar('\n');

        return 0;
}