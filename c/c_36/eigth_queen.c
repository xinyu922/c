#include <stdio.h>

int count = 0;

int check(int i, int j, int (*queen)[4]);
void setQueen(int i, int (*queen)[4]);

int check(int i, int j, int (*queen)[4])
{
        int s, t;

        // 判断行
        for (s = i, t = 0; t < 4; t++)
        {
                if (queen[s][t] == 1 && t != j)
                {
                        return 0;
                }
        }

        // 判断列
        for (t = j, s = 0; s < 4; s++)
        {
                if (queen[s][t] == 1 && s != i)
                {
                        return 0;
                }
        }

        // 判断左上方
        for (s = i-1, t = j-1; s >= 0 && t >= 0; s--, t--)
        {
                if (queen[s][t] == 1)
                {
                        return 0;
                }
        }

        // 判断右上方
        for (s = i+1, t = j+1; s < 4 && t < 4; s++, t++)
        {
                if (queen[s][t] == 1)
                {
                        return 0;
                }
        }

        // 经过上面层层关卡还能存活，那么说明符合条件,返回1
        return 1;
}

void setQueen(int col, int (*queen)[4])
{
        int i, j, row;

        // 所有皇后放置完毕
        if (col == 4)
        {
                for (i = 0; i < 4; i++)
                {
                        for (j = 0; j < 4; j++)
                        {
                                if (queen[i][j] != 0)
                                {
                                        printf("Q ");
                                }
                                else
                                {
                                        printf("* ");
                                }
                        }
                        putchar('\n');
                }

                putchar('\n');
                count++;

                return;
        }

        // 迭代每一行
        for (row = 0; row < 4; row++)
        {
                // 检查每一行中对应的每一列能否放置皇后
                if (check(row, col, queen))
                {
                        // 如果queen[row][col]符合条件，则放置皇后
                        queen[row][col] = 1;
                        // col+1，进入下一层递归
                        setQueen(col+1, queen);
                        // 只有两种情况会执行下面语句
                        // 1. col+1遇到所有的row都不合适
                        // 2. 完成整个二维数组的放置
                        // 无论哪种情况，
                        queen[row][col] = 0;
                }
        }
}

int main(void)
{
        int queen[4][4];
        int i, j;

        // 初始化二维数组，1表示已放置皇后，0表示没有
        for (i = 0; i < 4; i++)
        {
                for (j = 0; j < 4; j++)
                {
                        queen[i][j] = 0;
                }
        }

        setQueen(0, queen);

        return 0;
}