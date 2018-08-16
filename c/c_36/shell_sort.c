#include <stdio.h>

void shell_sort(int array[], int length);

void shell_sort(int array[], int length)
{
        int i, j, step, temp;

        for (step = length / 2; step > 0; step /= 2)
        {
                for (i = step; i < length; i++)
                {
                        temp = array[i];
                        for (j = i - step; j >= 0 && array[j] > temp; j -= step)
                        {
                                array[j+step] = array[j];
                        }
                        array[j+step] = temp;
                }
        }
}

int main(void)
{
        int array[] = {73, 108, 111, 118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
        int i, length;

        length = sizeof(array) / sizeof(array[0]);
        shell_sort(array, length);

        printf("排序后的结果是：");
        for (i = 0; i < length; i++)
        {
                printf("%d ", array[i]);
        }
        putchar('\n');

        return 0;
}