#include <stdio.h>
#include <string.h>

union Test
{
	int i;
	double pi;
	char str[6];
};

int main(int argc, char const *argv[])
{
	union Test test;
	char str1[6] = "xinyu";


	test.i = 520;
	test.pi = 3.14;
	//str1 = "xinyu";
	strcpy(test.str, "xinyu");

	printf("addr of test.i %p\n", &test.i);
	printf("addr of test.pi %p\n", &test.pi);
	printf("addr of test.str %p\n", &test.str);
	printf("str1: %s\n", str1);

	return 0;
}