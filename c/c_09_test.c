// #include <stdio.h>

// int main()
// {
//         float fah, cel;

//         printf("请输入摄氏度：");
//         scanf("%f", &cel);

//         fah = 9.0 / 5.0 * cel + 32;
//         printf("转换为华摄度是：%.2f\n", fah);

//         return 0;
// }

/*****************************************/

// #include <stdio.h>

// int main()
// {
//         int a = 2, b = 1;

//         printf("%d\n", a / 'b');//输出->0

//         return 0;        
// }

/*****************************************/

// #include <stdio.h>

// int main()
// {
//         int a;
//         (a = 2) + 3 * 4;
//         printf("a = %d\n", a); //输出->2

//         return 0;
// }

/*****************************************/
//计算贷款买房的费用
/*****************************************/

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//         float price, area, yir, mir; // 单价、面积、年利率、月利率
//         float interest, loan; // 利息、贷款总额
//         float ave_repay, down_payment; // 月均还款、首期付款
//         float total_price, total_repay; // 房款总额、还款总额
//         int ratio, time; // 按揭成数、按揭年数

//         printf("请输入单价（元/平方）：");
//         scanf("%f", &price);
//         printf("请输入面积：");
//         scanf("%f", &area);
//         printf("请输入按揭成数：");
//         scanf("%d", &ratio);
//         printf("请输入按揭年数：");
//         scanf("%d", &time);
//         printf("请输入当前基准年利率：");
//         scanf("%f", &yir);

//         mir = yir / 100 / 12; // 年利率需要除以100得到，因为用户输入是5.4(%)，而不是0.054
//         time = time * 12;
//         total_price = price * area;
//         loan = total_price * ratio / 10; // 这里不能写成(ratio / 10)，否则结果会变成0
//         ave_repay = loan * mir * pow((1 + mir), time) / (pow((1 + mir), time) - 1);
//         interest = ave_repay * time - loan;
//         total_repay = loan + interest;
//         down_payment = total_price * (1 - (float)ratio / 10); // 强制转换ratio为浮点型

//         printf("========== 报告结果 ==========\n");
//         printf("房款总额：%.2f元\n", total_price);
//         printf("首期付款：%.2f元\n", down_payment);
//         printf("贷款总额：%.2f元\n", loan);
//         printf("还款总额：%.2f元\n", total_repay);
//         printf("支付利息：%.2f元\n", interest);
//         printf("月均还款：%.2f元\n", ave_repay);

//         return 0;
// }

/*****************************************/
//计算银行存款的费用
/*****************************************/

#include <stdio.h>
#include <math.h>

int main()
{
        float p0 = 10000, p1, p2, p3;
        float r1 = 0.0175, r2 = 0.0225, r3 = 0.0275, r5 = 0.0275;

        p1 = p0 * (1 + r5 * 5);
        p2 = p0 * (1 + r3 * 3) * (1 + r2 * 2);
        p3 = p0 * pow((1 + r1), 5);

        printf("第一种方案的本息和是：%.2f\n", p1);
        printf("第二种方案的本息和是：%.2f\n", p2);
        printf("第三种方案的本息和是：%.2f\n", p3);

        return 0;
}

