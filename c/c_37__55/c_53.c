#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct Test
	{
		unsigned int a:1;//位域
		unsigned int b:1;
		unsigned int c:2;

	};

	int a = 520;

	struct Test test;

	test.a = 0;
	test.b = 1;
	test.c = 3;

	printf("a = %d, b = %d, c = %d \n", test.a, test.b, test.c);
	printf("size of test = %lu\n", sizeof(test));//-------->>占4个字节

	printf("size of a = %lu\n", sizeof(a));

	return 0;
}




// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	struct Test
// 	{
// 		unsigned int a;
// 		unsigned int b;
// 		unsigned int c;

// 	};

// 	struct Test test;

// 	test.a = 0;
// 	test.b = 1;
// 	test.c = 2;

// 	printf("a = %d, b = %d, c = %d \n", test.a, test.b, test.c);
// 	printf("size of test = %lu\n", sizeof(test));//-------->>占12个字节

// 	return 0;
// }






