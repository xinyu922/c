#include <stdio.h>
#include <stdlib.h>

int *add_item(int *array, int count, int item);
void bucket_sort(int array[], int length);

struct Bucket
{
        int *data;
        int count;
};

int *add_item(int *array, int count, int item)
{
        int *newArray = (int *)malloc(sizeof(int) * (count + 1));
        int i;

        for (i = 0; i < count; i++)
        {
                newArray[i] = array[i];
        }

        newArray[count] = item;

        return newArray;
}

void bucket_sort(int array[], int length)
{
        int min = array[0];
        int max = array[0];
        int i, j, k, cap, size;
        struct Bucket *bucket = NULL;
        struct Bucket b;

        for (i = 1; i < length; i++)
        {
                if (array[i] > max)
                {
                        max = array[i];
                }

                if (array[i] < min)
                {
                        min = array[i];
                }
        }

        cap = max - min + 1;
        bucket = (struct Bucket *)malloc(sizeof(struct Bucket) * cap);

        for (i = 0; i < cap; i++)
        {
                bucket[i] = *(struct Bucket *)malloc(sizeof(struct Bucket));
        }

        for (i = 0; i < length; i++)
        {
                b = bucket[array[i] - min];
                if (b.count < 0)
                {
                        b.count = 0;
                }

                bucket[array[i] - min].data = add_item(b.data, b.count++, array[i]);
                bucket[array[i] - min].count = b.count;
        }

        for (i = 0, k = 0; i < cap; i++)
        {
                size = bucket[i].count;

                if (size > 0)
                {
                        for (j = 0; j < size; j++)
                        {
                                array[k] = bucket[i].data[j];
                                k++;
                        }
                }
        }
}

int main(void)
{
        int array[] = {73, 108, 111, 118, 101, 70, 105, 115, 104, 67, 46, 99, 111, 109};
        int i, length;

        length = sizeof(array) / sizeof(array[0]);
        bucket_sort(array, length);

        printf("排序后的结果是：");
        for (i = 0; i < length; i++)
        {
                printf("%d ", array[i]);
        }
        putchar('\n');

        return 0;
}