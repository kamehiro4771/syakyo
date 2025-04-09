/*
n団のピラミッドを表示する関数を作成せよ
void spira(int n)
第i行目には(i - 1) * 2 + 1個の記号文字を表示すること（そのため、最終行の
第n行目には(i - 1) * 2 + 1個の記号文字を表示することになる
*/
#include<stdio.h>

void spira(int n);
int main(void)
{
    int n;
    printf("何段のピラミッドですか？");
    do{
        scanf("%d",&n);
    }while(n <= 0);
    spira(n);
    return 0;
}
//何個目に＊を出力するか？
void spira(int n)
{
    int i,j;
    int width = (n -1) * 2 + 1;
    int space;
    for(i = 0;i < n;i++){
        space = (width - 1) / 2 - i;
        for(j = 1;j <= width - space;j++){
            if(j <= space)
                putchar(' ');
            else
                putchar('*');
        }
        putchar('\n');
    }
}