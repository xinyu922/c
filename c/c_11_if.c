
/****************************************/
//排序
/****************************************/

// #include <stdio.h>

// int main()
// {
//         int a, b, c, t;

//         printf("请输入3个整数(使用空格隔开):");
//         scanf("%d%d%d", &a, &b, &c);

//         if (a > b)
//         {
//                 t = a;
//                 a = b;
//                 b = t;
//         }

//         if (a > c)
//         {
//                 t = a;
//                 a = c;
//                 c = t;
//         }

//         if (b > c)
//         {
//                 t = b;
//                 b = c;
//                 c = t;
//         }

//         printf("%d %d %d\n", a, b, c);

//         return 0;
// }


/****************************************/
//将小写字母转换为大写字母
/****************************************/

// #include <stdio.h>

// int main()
// {
//         char temp;

//         printf("请输入一个字母：\n");
//         scanf("%c\n",&temp);

//         if (temp >= 97)
//         {
//                 printf("%c\n", temp - 32);
//         }

//         return 0;
// }


#include <stdio.h>

int main()
{
        char ch;

        printf("请输入一个字符：");
        scanf("%c", &ch);

        if (ch >= 'A' && ch <= 'Z')
        {
                ch = ch + 32; // ch加32，变成小写，然后赋值回ch
        }
        else if (ch >= 'a' && ch <= 'z')
        {
                ch = ch - 32; // 同上
        }

        printf("%c\n", ch);

        return 0;
}

/****************************************/
//缺乏ssebtr1.h文件
/****************************************/

// #include <stdio.h>
// #include "ssebtr1.h"

// int main()
// {
//         int age, max_hr, bpm, hr; // hr即HeartRate，心率的意思

//         printf("请输入您的年龄：");
//         scanf("%d", &age);

//         max_hr = 220 - age;
//         bpm = 150;

//         playSound(bpm);
//         hr = getHeartRate();

//         if (hr > max_hr)
//         {
//                 printf("请马上停止跑步，否则会有绳命危险……\n");
//         }
//         else if (hr > max_hr * 0.85)
//         {
//                 printf("请放慢脚步\n");
//                 bpm = bpm - 20; // 注意，这里需要先修改bpm的值
//                 playSound(bpm); // 你不能在这里传入bpm-20 
//         }
//         else if (hr < max_hr * 0.75)
//         {
//                 printf("Come on，请加快节奏！\n");
//                 bpm = bpm + 20;
//                 playSound(bpm);
//         }
//         else
//         {
//                 playSound(bpm);
//         }

//         return 0;
// }
