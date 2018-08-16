#include <stdio.h>
#include <stdlib.h>

void counting_sort(int array[], int length);

void counting_sort(int array[], int length)
{
        int i, max;
        int *buffer = NULL;
        int *sorted = NULL;

        max = array[0];
        for (i = 1; i < length; i++)
        {
                if (array[i] > max)
                {
                        max = array[i];
                }
        }

        buffer = (int *)malloc((max + 1) * sizeof(int));
        for (i = 0; i < max + 1; i++)
        {
                buffer[i] = 0;
        }

        for (i = 0; i < length; i++)
        {
                buffer[array[i]]++;
        }

        for (i = 1; i < max+1; i++)
        {
                buffer[i] += buffer[i-1];
        }

        sorted = (int *)malloc(length * sizeof(int));
        for (i = length; i > 0; i--)
        {
                sorted[--buffer[array[i-1]]] = array[i-1];
        }

        for (i = 0; i < length; i++)
        {
                array[i] = sorted[i];
        }

        free(buffer);
        free(sorted);
}

int main(void)
{
        int array[] = {73, 108, 111, 118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
        int i, length;

        length = sizeof(array) / sizeof(array[0]);
        counting_sort(array, length);

        printf("排序后的结果是：");
        for (i = 0; i < length; i++)
        {
                printf("%d ", array[i]);
        }
        putchar('\n');

        return 0;
}