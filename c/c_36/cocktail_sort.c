#include <stdio.h>

void cocktail_sort(int array[], int length);

void cocktail_sort(int array[], int length)
{
        int i, left = 0, right = length - 1;
        int temp;

        while (left < right)
        {
                for (i = left; i < right; i++)
                {
                        if (array[i] > array[i+1])
                        {
                                temp = array[i];
                                array[i] = array[i+1];
                                array[i+1] = temp;
                        }
                }
                right--; 
                for (i = right; i > left; i--)
                {
                        if (array[i-1] > array[i])
                        {
                                temp = array[i];
                                array[i] = array[i-1];
                                array[i-1] = temp;
                        }
                }
                left++;
        }
}

int main(void)
{
        int array[] = {73, 108, 111, 118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
        int i, length;

        length = sizeof(array) / sizeof(array[0]);
        cocktail_sort(array, length);

        printf("排序后的结果是：");
        for (i = 0; i < length; i++)
        {
                printf("%d ", array[i]);
        }
        putchar('\n');

        return 0;
}