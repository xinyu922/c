#include <stdio.h>

void merge_sort(int array[], int length);
void merge_sort_recursive(int array[], int reg[], int start, int end);

void merge_sort_recursive(int array[], int reg[], int start, int end)
{
        if (start >= end)
        {
                return;
        }

        int k = start;
        int length = end - start;
        int mid = (length / 2) + start;
        int start1 = start, end1 = mid;
        int start2 = mid + 1, end2 = end;

        merge_sort_recursive(array, reg, start1, end1);
        merge_sort_recursive(array, reg, start2, end2);

        while (start1 <= end1 && start2 <= end2)
        {
                reg[k++] = array[start1] < array[start2] ? array[start1++] : array[start2++];
        }

        while (start1 <= end1)
        {
                reg[k++] = array[start1++];
        }

        while (start2 <= end2)
        {
                reg[k++] = array[start2++];
        }

        for (k = start; k <= end; k++)
        {
                array[k] = reg[k];
        }
}

void merge_sort(int array[], int length)
{
        int reg[length];
        merge_sort_recursive(array, reg, 0, length-1);
}

int main(void)
{
        int array[] = {73, 108, 111, 118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
        int i, length;

        length = sizeof(array) / sizeof(array[0]);
        merge_sort(array, length);

        printf("排序后的结果是：");
        for (i = 0; i < length; i++)
        {
                printf("%d ", array[i]);
        }
        putchar('\n');

        return 0;
}