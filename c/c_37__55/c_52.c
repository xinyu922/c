// #include <stdio.h>
// #include <time.h>

// #define SUN 0
// #define MON 1
// #define TUE 2
// #define WED 3
// #define THU 4
// #define FRI 5
// #define SAT 6

// int main(void)
// {
//         struct tm *p;
//         time_t t;

//         time(&t);
//         p = localtime(&t);

//         switch(p->tm_wday)
//         {
//                 case MON:
//                 case TUE:
//                 case WED:
//                 case THU:
//                 case FRI:
//                         printf("干活！T_T\n");
//                         break;
//                 case SAT:
//                 case SUN:
//                         printf("放假！^_^\n");
//                         break;
//                 default:
//                         printf("Error！\n");
//         }

//         return 0;
// }


/******************************************************************************************************

枚举类型

******************************************************************************************************/


#include <stdio.h>
#include <time.h>

int main()
{
        enum Week {sun, mon, tue, wed, thu, fri, sat};//默认数据类型是整形，从0开始，依次加1
        enum Week today;

        struct tm *p;
        time_t t;

        today = p->tm_wday;

        switch(today)
        {
                case mon:
                case tue:
                case wed:
                case thu:
                case fri:
                        printf("干活！T_T\n");
                        break;
                case sat:
                case sun:
                        printf("放假！^_^\n");
                        break;
                default:
                        printf("Error！\n");
        }

        return 0;
}




















