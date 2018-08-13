#include <stdio.h>

int main()
{
        int op1, op2;
        char ch;
        float result;

        printf("请输入式子：");
        scanf("%d %c %d", &op1, &ch, &op2);

        switch (ch)
        {
                case '-': op2 = -op2; // no break
                case '+': result = op1 + op2; break;
                case '*': result = op1 * op2; break;
                case '/': 
                        if (op2 != 0)
                        {
                                result = (float)op1 / op2;
                                break;
                        }
                        else
                        {
                                printf("除数不能为零！\n");
                                break;
                        }
        }
        printf("结果是：%.2f\n", result);

        return 0;
}