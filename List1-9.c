//1,2,…nの総和を求める（do文によって正の整数値のみをnに読み込む）
#include <stdio.h>

int main(void)
{
    int n;
    puts("1からnまでの総和を求めます。");
    do{
        printf("nの値：");
        scanf("%d",&n);
    }while(n <= 0);
    int sum = 0;
    for(int i = 1; i <= n;i++)
        sum += i;
    printf("1から%dまでの総和は%dです。\n",n,sum);
    return 0;
}
/*
do文は、ループ本体の実行後に、繰り返しを続けるかどうか判定する跡判定繰り返しを行う
繰り返し文です(for文やwhile文とは、性質が全く異なります)。
　なお、（）の中の制御式を評価した値が０でない限り、ループ本体の分を繰り返し実行する点は、while文と同じです。
*/