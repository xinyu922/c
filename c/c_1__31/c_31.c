
/******************************************************************************************************
练习 1 全局变量
******************************************************************************************************/

// #include <stdio.h>

// void a();
// void b();
// void c();

// int count = 0;//全局变量

//  void a()
//  {
//  	count++;
//  }

//  void b()
//  {
//  	count++;
//  }

// void c()
// {
// 	count++;
// }

// int main(int argc, char const *argv[])
// {
// 	a();
// 	b();
// 	c();
// 	printf("%d\n", count);
	
// 	return 0;
// }


/******************************************************************************************************
练习 2 全局变量被局部变量覆盖
******************************************************************************************************/

// #include <stdio.h>

// void func();
// int a, b =520;

// void func()
// {
// 	int b;
// 	a = 880;
// 	b = 120;

// 	printf("In func, a= %d, b = %d\n", a, b);
// }

// int main(int argc, char const *argv[])
// {

// 	printf("In main, a= %d, b = %d\n", a, b);
// 	func();
// 	printf("In main, a= %d, b = %d\n", a, b);

// 	return 0;
// }

/******************************************************************************************************
动动手 0. 实现一个洗牌程序。所谓洗牌程序，就是将所有的扑克牌放入
一个数组中，要求把数组内的扑克牌顺序随机打乱，然后输出。
******************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int array[], int length);//洗牌
void deal(int array[], int player[3][14]);//发牌
void show(char names[3][40], int player[3][14]);//显示

void shuffle(int array[], int length)
{
        int index, temp, i;

        srand(time(NULL));
        for (i = 0; i < length; i++)
        {
                index = rand() % (length - i) + i;
                if (index != i)
                {
                        temp = array[i];
                        array[i] = array[index];
                        array[index] = temp;
                }
        }
}

void deal(int array[], int player[3][14])
{
        int i, j, k = 0;

        // 模拟发牌：拿起一副无序的扑克每人轮流发一张牌
        for (i = 0; i < 14; i++)
        {
                for (j = 0; j < 3; j++)
                {
                        player[j][i] = array[k++];
                }
        }
}

void show(char names[3][40], int player[3][14])
{
        int i, j, poker;

        printf("\n方=方角，梅=梅花，红=红桃，黑=黑桃\n\n");

        for (i = 0; i < 3; i++)
        {
                printf("%s手上的牌是：", names[i]);
                for (j = 0; j < 14; j++)
                {
                       poker = player[i][j];

                       if (poker < 11 && 0 < poker)
                       {
                               printf("方%d ", poker);
                       }
                       else if (poker < 21 && 10 < poker)
                       {
                               printf("梅%d ", poker-10);
                       }
                       else if (poker < 31 && 20 < poker)
                       {
                               printf("红%d ", poker-20);
                       }
                       else if (poker < 41 && 30 < poker)
                       {
                               printf("黑%d ", poker-30);
                       }
                       else
                       {
                               switch (poker)
                               {
                                       case 41: printf("方J "); break;
                                       case 42: printf("方Q "); break;
                                       case 43: printf("方K "); break;
                                       case 44: printf("梅J "); break;
                                       case 45: printf("梅Q "); break;
                                       case 46: printf("梅K "); break;
                                       case 47: printf("红J "); break;
                                       case 48: printf("红Q "); break;
                                       case 49: printf("红K "); break;
                                       case 50: printf("黑J "); break;
                                       case 51: printf("黑Q "); break;
                                       case 52: printf("黑K "); break;
                                       case 53: printf("小王 "); break;
                                       case 54: printf("大王 "); break;
                               }
                       }

                }
                printf("\n\n");
        }

}

int main(void)
{
        int array[54];
        int player[3][14];
        int i, ch;
        char names[3][40];

        // 初始化扑克牌
        // 1~10代表方(角)1～10, 41、42、43代表方(角)J、Q、K 
        // 11~20代表梅(花)1～10, 44、45、46代表梅(花)J、Q、K 
        // 21~30代表红(桃)1～10, 47、48、49代表红(桃)J、Q、K 
        // 31~40代表黑(桃)1～10, 50、51、52代表黑(桃)J、Q、K 
        // 53、54当然就代表小王大王啦～
        for (i = 0; i < 54; i++)
        {
                array[i] = i + 1;
        }

        for (i = 0; i < 3; i++)
        {
                printf("\n请输入%d号玩家的名字：", i+1);
                scanf("%s", names[i]);
        }

        do
        {
                shuffle(array, 54);
                deal(array, player);
                show(names, player);

                printf("重新洗牌(Y/N)？");
                do
                {
                        ch = getchar(); // 过滤输入缓冲区的其他字符
                } while (ch != 'Y' && ch != 'N');
        } while (ch == 'Y');

        return 0;
}










