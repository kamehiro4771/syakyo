/*
読み込んだ高さと横幅を持つ長方形を＊記号で
表示するプログラムを作成せよ
*/
#include<stdio.h>

int main(void)
{
    int takasa,yokohaba;
    int i,j;
    printf("長方形を表示します。\n");
    printf("高さは：");
    scanf("%d",&takasa);
    printf("横幅は：");
    scanf("%d",&yokohaba);
    for(i = 0;i < takasa;i++){
        for(j = 0;j < yokohaba;j++)
            putchar('*');
        putchar('\n');
    }
    return 0;
}