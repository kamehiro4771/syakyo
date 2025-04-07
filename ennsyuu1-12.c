/*
上と左にかける数が点いた九九の表を表示するプログラムを作成せよ。
表示には、、縦線記号文字'|'、マイナス記号文字'-'、
プラス記号文字'+'を用いること。
*/
#include<stdio.h>
int main(void)
{
    int i,j;
    printf("   |");
    for(i = 1;i < 10;i++)
        printf("%3d",i);
    printf("\n");
    for(i  = 0;i <= 9;i++){
        for(j = 0;j <= 9;j++){
            if(i == 0 && j == 0)
                 printf("---+");
            else if(i == 0)
                printf("---");
            else if(j == 0)
                printf(" %d |",i);
            else
                printf("%3d",i * j);
        }
        putchar('\n');
    }
    return 0;
}