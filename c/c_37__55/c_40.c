#include <stdio.h>
#define PI 3.14
#define MUL(x) ((x)*(x)*PI)

int main(int argc, char const *argv[])
{
	int r;

	printf("请输入半径的值：\n");
	scanf("%d", &r);

	printf("圆的面积是:%.2f\n", MUL(r));

	return 0;
}
