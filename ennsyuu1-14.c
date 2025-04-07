/*
読み込んだ段数を一辺として持つ正方形を＊記号で
表示するプログラムを作成せよ
*/
#include<stdio.h>
int main(void)
{
    int ippenn,i,j;
    printf("正方形を表示します。\n段数は：");
    scanf("%d",&ippenn);
    for(i = 0;i < ippenn;i++){
        for(j = 0;j < ippenn;j++)
            putchar('*');
        putchar('\n');
    }
}