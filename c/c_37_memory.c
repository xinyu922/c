
/***************************************************
练习 动态申请内存
***************************************************/

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	int *ptr;
// 	ptr = (int *)malloc(sizeof(int));//malloc申请一个int类型（四个字节）的内存，申请的内存需要释放

// 	if (ptr == NULL)//判断是否申请成功
// 	{
// 		printf("分配内存失败\n");
// 		exit(1);
// 	}

// 	printf("请输入一个整数：\n");
// 	scanf("%d", ptr);

// 	printf("你输入的整数是：%d\n", *ptr);
// 	free(ptr);

// 	return 0;
// }


/***************************************************
练习 动态申请内存,查看指针的地址
***************************************************/

/*答：第二行代码打印的是“After free, ptr = 0x8b23008”。
有鱼油可能会疑惑：”难道调用 free() 函数释放内存后，ptr 不是应该指向 NULL 的吗？“。
这里务必要注意一点，free() 函数释放的是 ptr 指向的内存空间，但它并不会修改 ptr 指
针的值。也就是说，ptr 现在虽然指向 0x8b23008，但该空间已经被 free() 函数释放了，
所以对于该空间的引用已经失去了意义（会报错）。因此，为了防止后面再次对 ptr 指向的
空间进行访问，建议在调用 free() 函数后随即将 ptr 赋值为 NULL。*/


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//         int *ptr = NULL;

//         ptr = (int *)malloc(sizeof(int));
//         if (ptr == NULL)
//         {
//                 printf("内存分配失败！\n");
//                 exit(1);
//         }

//         printf("Before free, ptr = %p\n", ptr);
//         free(ptr);
//         printf("After free, ptr = %p\n", ptr);

//         return 0;
// }


/***************************************************
动动手 0. 编写一个程序，让用户决定要录入的整数个数，然后再申请相应的内存空间来存放（要求使用 malloc 函数来申请内存空间）。
***************************************************/

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char const *argv[])
// {
// 	int *pr = NULL;
// 	int num;

// 	printf("请输入整数的个数：\n");
// 	scanf("%d", &num);

// 	pr = (int *)malloc(num * sizeof(int));

// 	for (int i = 0; i < num; i++)
// 	{
// 		printf("请输入第%d个整数：", i+1);
// 		scanf("%d", &pr[i]);

// 	}

// 	if (pr == NULL)
// 	{
// 		printf("内存申请失败！！！\n");
// 		exit(1);
// 	}

// 	for (int i = 0; i < num; i++)
// 	{
// 		printf("您输入的整数为：%d\n", pr[i]);
// 	}

// 	free(pr);

// 	return 0;
// }

/***************************************************
动动手 1. 坊间有传闻，说 malloc 最大可以申请 1GB 的内存空间……
但是，有的鱼油说可以成功申请到 2GB 的空间
这样吧，咱自己写一个程序，计算 malloc 函数最大可以申请多少内存才能空间？
***************************************************/


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        void *block;
        int i, count;
        size_t maximum = 0;
        size_t blocksize[] = {1024 * 1024, 1024, 1};

        // 下面从大到小依次尝试
        // 先尝试以1024 * 1024为扩大粒度去申请内存空间
        // 当malloc返回NULL时，将扩大的粒度缩小为1024继续尝试
        // 最终精确到1个字节的粒度扩大maximum的尺寸
        for (i = 0; i < 3; i++)
        {
                for (count = 1; ;count++)
                {
                        block = malloc(maximum + blocksize[i] * count);
                        if (block)
                        {
                                maximum += blocksize[i] * count;
                                free(block);
                        }
                        else
                        {
                                break;
                        }
                }
        }

        printf("malloc在当前环境下申请到的最大空间是：%.2fGB\n", maximum * 1.0 / 1024 / 1024 / 1024);

        return 0;
}












