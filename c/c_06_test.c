// #include <stdio.h>
// #include <math.h>

// unsigned long long sum = 0;
// unsigned long long temp;
// unsigned long long weigth;
// int i;

// int main()
// {
// 	for(i=0; i < 64; i ++)
// 	{
// 		temp = pow(2,i);
// 		sum = sum +temp;
// 	}

// 	weigth = sum / 25000;

// 	printf("共%llu\n粒麦子", sum);
// 	printf("重量是%.2llu\nkg",weigth);

// 	return 0;
// }


#include <stdio.h>
#include <math.h>

int main()
{
        unsigned long long sum = 0;
        unsigned long long temp;
        unsigned long long weight;
        int i;

        for (i=0; i < 64; i++)
        {
                temp = pow(2, i);
                sum = sum + temp;
        }

        weight = sum / 25000;

        printf("舍罕王应该给予达依尔%llu粒麦子！\n", sum);
        printf("如果每25000粒麦子为1kg，那么应该给%llu公斤麦子！\n", weight);

        return 0;
}