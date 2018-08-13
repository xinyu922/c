#include <stdio.h>

int main()
{
        char name[256];
        float height, weight;

        printf("请输入您的姓名：");
        scanf("%s", name);

        printf("请输入您的身高(cm)：");
        scanf("%f", &height);

        printf("请输入您的体重(kg)：");
        scanf("%f", &weight);

        printf("========== 正在为您转换 ==========\n");

        height = height / 2.54; // 厘米转换为英寸
        weight = weight / 0.453; // 公斤转换为磅

        printf("%s的身高是%.2f(in)，体重是%.2f(lb)。\n", name, height, weight);

        return 0;
}