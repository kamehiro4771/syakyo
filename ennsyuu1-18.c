/*
下を向いたn段の数字ピラミッドを表示する関数を作成せよ
*/
#include<stdio.h>

void nrpira(int n);
int main(void)
{
    int n;
    printf("何段のピラミッドですか？");
    do{
        scanf("%d",&n);
    }while(n <= 0);
    nrpira(n);
    return 0;
}

void nrpira(int n)
{
    int i,j;
    int width = (n -1) * 2 + 1;
    int space = 0;
    for(i = 1;i <= n;i++){
        for(j = 1;j <= width - space;j++){
            if(j <= space)
                putchar(' ');
            else{
                printf("%d",i % 10);
            }
        }
        space++;
        putchar('\n');
    }
}