#include <stdio.h>

void selection_sort(int array[], int length);

void selection_sort(int array[], int length)
{
        int i, j, min, temp;

        for (i = 0; i < length - 1; i++)
        {
                min = i;
                for (j = i + 1; j < length; j++)
                {
                        if (array[min] > array[j])
                        {
                                min = j;
                        }
                }
                temp = array[min];
                array[min] = array[i];
                array[i] = temp;
        }
}

int main(void)
{
        int array[] = {73, 108, 111, 118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
        int i, length;

        length = sizeof(array) / sizeof(array[0]);
        selection_sort(array, length);

        printf("排序后的结果是：");
        for (i = 0; i < length; i++)
        {
                printf("%d ", array[i]);
        }
        putchar('\n');

        return 0;
}