// #include <stdio.h>

// #define URL "http://www.fishc.com"
// #define NAME "鱼C工作室"
// #define BOSS "小甲鱼"
// #define YEAR 2010
// #define MONTH 5
// #define DAY 20

// int main()
// {
//         printf("%s成立于%d年%d月%d日\n", NAME, YEAR, MONTH, DAY);
//         printf("%s是%s创立的……\n", NAME, BOSS);
//         printf("%s的域名是%s\n", NAME, URL);

//         return 0;
// }

// #include <stdio.h>

// int main()
// {
//         printf("Line1\n");
//         printf("Line2\n");

//         return 0;
// }

// #include <stdio.h>

// #define NL '\n'

// int main()
// {
//         printf("Line1%c", NL);
//         printf("Line2%c", NL);

//         return 0;
// }

// #include <stdio.h>

// #define PI 3.14159
// #define S(r) PI * r * r
// #define C(R) 2 * PI * r

// int main()
// {
//         int r = 5;

//         printf("半径为%d的圆，面积是：%.2f，周长是：%.2f\n", r, S(r), C(r));

//         return 0;
// }

#include <stdio.h>

#define FANQIE  3.7
#define JIELAN  7
#define XIQIN   1.3
#define KONGXINCAI      8
#define YANGCONG        2.4
#define YOUCAI  9
#define HUANGGUA        6.3
#define BAILUOBO        0.5

int main()
{
        float price;

        price = (2 * FANQIE + KONGXINCAI + YOUCAI) * 0.5; // 1斤 == 0.5公斤
        printf("小明需要支付%.2f元\n", price);

        price = (3 * XIQIN + 0.5 * YANGCONG + 5 * HUANGGUA) * 0.5;
        printf("小红需要支付%.2f元\n", price);

        price = (20 * HUANGGUA + 20 * BAILUOBO) * 0.5;
        printf("小甲鱼需要支付%.2f元\n", price);

        return 0;
}

