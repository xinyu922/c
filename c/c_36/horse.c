#include <stdio.h>

#define X 8
#define Y 8

int chess[X][Y];

// 找到下一个可走的位置
int next(int *px, int *py, int count)
{
        int x = *px;
        int y = *py;

        switch(count)
        {
        case 0:
                if (x+2<=X-1 && y-1>=0 && chess[x+2][y-1] == 0)
                {
                        *px = x + 2;
                        *py = y - 1;
                        return 1;
                }
                break;
        case 1:
                if (x+2<=X-1 && y+1<=Y-1 && chess[x+2][y+1] == 0)
                {
                        *px = x + 2;
                        *py = y + 1;
                        return 1;
                }
                break;
        case 2:
                if (x+1<=X-1 && y-2>=0 && chess[x+1][y-2] == 0)
                {
                        *px = x + 1;
                        *py = y - 2;
                        return 1;
                }
                break;
        case 3:
                if (x+1<=X-1 && y+2<=Y-1 && chess[x+1][y+2] == 0)
                {
                        *px = x + 1;
                        *py = y + 2;
                        return 1;
                }
                break;
        case 4:
                if (x-2>=0 && y-1>=0 && chess[x-2][y-1] == 0)
                {
                        *px = x - 2;
                        *py = y - 1;
                        return 1;
                }
                break;
        case 5:
                if (x-2>=0 && y+1<=Y-1 && chess[x-2][y+1] == 0)
                {
                        *px = x - 2;
                        *py = y + 1;
                        return 1;
                }
                break;
        case 6:
                if (x-1>=0 && y-2>=0 && chess[x-1][y-2] == 0)
                {
                        *px = x - 1;
                        *py = y - 2;
                        return 1;
                }
                break;
        case 7:
                if (x-1>=0 && y+2<=Y-1 && chess[x-1][y+2] == 0)
                {
                        *px = x - 1;
                        *py = y + 2;
                        return 1;
                }
                break;
        }

        return 0;
}

int setHorse(int x, int y, int tag)
{
        int x1 = x, y1 = y, flag = 0, count = 0;

        // tag记录轨迹
        chess[x][y] = tag;
        // 如果tag等于64退出程序
        if (tag == X*Y)
        {
                return 1;
        }

        // 如果可以走，那么flag为1
        flag = next(&x1, &y1, count);
        // 否则尝试其他路径
        while (flag == 0 && count < 7)
        {
                count += 1;
                flag = next(&x1, &y1, count);
        }

        // 递归进入下一个坐标
        while (flag)
        {
                // 返回1表示成功找到落脚点
                if (setHorse(x1, y1, tag+1))
                {
                        return 1;
                }
                // 否则从上一步重新尝试
                x1 = x;
                y1 = y;
                count += 1;
                flag = next(&x1, &y1, count);
                while (flag == 0 && count < 7)
                {
                        count += 1;
                        flag = next(&x1, &y1, count);
                }
        }

        if (flag == 0)
        {
                chess[x][y] = 0;
        }

        return 0;
}

int main(void)
{
        int i, j;

        for (i = 0; i < X; i++)
        {
                for (j = 0; j < Y; j++)
                {
                        chess[i][j] = 0;
                }
        }

        // 讲道理，从 (2, 0) 坐标开始计算是比较容易出结果的
        // 如果你比较有耐心，或 CPU 特别强劲，可以尝试计算其它坐标
        if (setHorse(2, 0, 1))
        {
                for (i = 0; i < X; i++)
                {
                        for (j = 0; j < Y; j++)
                        {
                                printf("%02d  ", chess[i][j]);
                        }
                        putchar('\n');
                }
        }
        else
        {
                printf("可惜无解！\n");
        }

        return 0;
}