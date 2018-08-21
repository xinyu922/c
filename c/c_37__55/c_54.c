#include <stdio.h>

int main(void)
{
	int mask = 0xFF;
	int v1 = 0xABCDEF;
	int v2 = 0xABCDEF;
	int v3 = 0xABCDEF;

	v1 &= mask;
	v2 |= mask;
	v3 ^= mask;//异或，相同取0，不同取1

	//v1 = v2 = v3 = 1010 1011 1100 1101 1110 1111;
	//mask = 0000 0000 0000 0000 1111 1111;

	printf("v1 = 0x%X\n", v1);//0xEF
	printf("v2 = 0x%X\n", v2);//0xABCDFF
	printf("v3 = 0x%X\n", v3);//0xABCD10


	return 0;
}