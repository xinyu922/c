/***************************************************
动动手  内联函数
***************************************************/

#include <stdio.h>

int square(int);

int square(int x)
{
	return x * x;
}

int main(int argc, char const *argv[])
{
	
	int i = 1;
	while(i <= 100 )
	{
		printf("%d的平方是%d\n", i, square(i));
		i++;
	}

	return 0;
}







