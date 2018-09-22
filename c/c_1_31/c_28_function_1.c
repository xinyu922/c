// #include <stdio.h>

// void print_c();

// void print_c()
// {
// 	printf(" ###### \n");
// 	printf("##    ##\n");
// 	printf("##      \n");
// 	printf("##      \n");
// 	printf("##      \n");
// 	printf("##    ##\n");
// 	printf(" ###### \n");

// }
// int main(int argc, char const *argv[])
// {
	
// 	print_c();
// 	print_c();

// 	return 0;
// }

/******************************************************************************************************

******************************************************************************************************/

// #include <stdio.h>

// int sum(int n);

// int main(int argc, char const *argv[])
// {
// 	int n,s;
// 	printf("请输入n的值：\n");
// 	scanf("%d",&n);
// 	s = sum(n);
// 	printf("1+2+3+...+(n-1)+n的值为：%d\n",s);

// 	return 0;
// }

// int sum(int n)
// {
// 	int temp = 0;

// 	while(n > 0)
// 	{
// 		temp += n;
// 		n--;
// 	}

// 	// for (int i ; i <= n; i++)
// 	// {
// 	// 	temp += i;
// 	// }

// 	// do
// 	// {
// 	// 	temp += n;
// 	// }while(n-- >0);

// 	return temp;
// }

/******************************************************************************************************
动动手：0. 
******************************************************************************************************/

// #include <stdio.h>

// void print_F();
// void print_I();
// void print_S();
// void print_H();
// void print_C();

// int main()
// {
//         print_F();
//         printf("\n");
//         print_I();
//         printf("\n");
//         print_S();
//         printf("\n");
//         print_H();
//         printf("\n");
//         print_C();
//         printf("\n");

//         return 0;
// }

// void print_F()
// {
//         printf("########\n");
//         printf("##      \n");
//         printf("##      \n");
//         printf("######  \n");
//         printf("##      \n");
//         printf("##      \n");
//         printf("##      \n");
// }

// void print_I()
// {
//         printf("####\n");
//         printf(" ## \n");
//         printf(" ## \n");
//         printf(" ## \n");
//         printf(" ## \n");
//         printf(" ## \n");
//         printf("####\n");
// }

// void print_S()
// {
//         printf(" ###### \n");
//         printf("##    ##\n");
//         printf("##      \n");
//         printf(" ###### \n");
//         printf("      ##\n");
//         printf("##    ##\n");
//         printf(" ###### \n");
// }

// void print_H()
// {
//         printf("##    ##\n");
//         printf("##    ##\n");
//         printf("##    ##\n");
//         printf("########\n");
//         printf("##    ##\n");
//         printf("##    ##\n");
//         printf("##    ##\n");
// }

// void print_C()
// {
//         printf(" ###### \n");
//         printf("##    ##\n");
//         printf("##      \n");
//         printf("##      \n");
//         printf("##      \n");
//         printf("##    ##\n");
//         printf(" ###### \n");
// }


/******************************************************************************************************
动动手：1 
******************************************************************************************************/

#include <stdio.h>
#include <string.h>

#define HEIGHT 7  // 根据下面定义，每个字母高度均是7行

const char *letters[] = {
"\
########@\
##      @\
##      @\
######  @\
##      @\
##      @\
##      @\
",
"\
####@\
 ## @\
 ## @\
 ## @\
 ## @\
 ## @\
####@\
",
"\
 ###### @\
##    ##@\
##      @\
 ###### @\
      ##@\
##    ##@\
 ###### @\
",
"\
##     ##@\
##     ##@\
##     ##@\
#########@\
##     ##@\
##     ##@\
##     ##@\
",
"\
 ###### @\
##    ##@\
##      @\
##      @\
##      @\
##    ##@\
 ###### @\
"
};

int main()
{
        int i, j;
        int gap;

        printf("请输入字母的间隔(空格数)：");
        scanf("%d", &gap);

        // 一行一行打印
        for (i = 0; i < HEIGHT; i++)
        {
                // 打印所有字母的某一行
                for (j = 0; j < 5; j++)
                {
                        // k 用于迭代每一行的‘#’字符
                        int k = 0;
                        // 计算出该字母每一行有多少个字符
                        int len = strlen(letters[j]) / HEIGHT;
                        // 计算当前打印第几行
                        int line = i * len;

                        // @标志着该行结束
                        while (letters[j][line+k] != '@')
                        {
                                putchar(letters[j][line+k]);
                                k++;
                        }

                        // 打印字母间的间隔(空格)
                        int temp = gap;
                        while (temp--)
                        {
                                putchar(' ');
                        }
                }
                putchar('\n');
        }

        return 0;
}


