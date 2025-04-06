/*
買ってから長らく放置していた「新・明解C言語で学ぶアルゴリズムとデータ構造第2版」を見て写経して行こうと思う
特にデータ構造について理解を深めたい
VSCodeの使い方も理解するために全てVSCodeを使ってプログラミングする
*/
#include <stdio.h>

int main(void)
{
    int a, b, c;
    int max;
    printf("みっつの整数の最大値を求めます。\n");
    printf("aの値：");
    scanf("%d", &a);
    printf("bの値：");
    scanf("%d", &b);
    printf("cの値：");
    scanf("%d", &c);
    max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    printf("最大値は%dです。\n", max);

    return 0;
}