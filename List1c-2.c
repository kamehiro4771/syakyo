/*
ターミナル文字化けはコンパイル時に下記のオプションをつける
gcc -o List1-9.exe List1-9.c -finput-charset=UTF-8 -fexec-charset=CP932
*/
/*
単一の入口点と単一の出口点戸を持つ構成要素だけを階層的に配置してプログラムを構成する手法が、構造化プログラミング
（structured programming)です。構造化プログラミングでは、順次、選択、繰り返しの3種類の制御の流れを利用します。
構造化プログラミングは、整構造プログラミングとも呼ばれます。
*/
//2桁の正の整数値（１０～９９）を読み込む
#include<stdio.h>

int main(void)
{
    int no;
    printf("2桁の正の整数値を入力せよ。\n");
    do{
        printf("値は：");
        scanf("%d",&no);
    }while(no < 10 || no > 99);

    printf("変数noの値は%dになりました。\n",no);
    return 0;
}