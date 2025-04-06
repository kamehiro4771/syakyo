//みっつの整数値を読み込んで中央値を求める
#include <stdio.h>

/*---a,b,cの中央値を求める*/
int med3(int a, int b, int c)
{
    if(a >= b){
        if(b >= c)
            return b;
        else if(a <= c)
            return a;
        else
            return c;
    }else if(a > c)
        return a;
    else if(b > c)
        return c;
    else
        return b;
}

int main(void)
{
    int a,b,c;

    printf("みっつの整数の中央値を求めます。\n");
    printf("aの値：");
    scanf("%d",&a);
    printf("bの値：");
    scanf("%d",&b);
    printf("c の値：");
    scanf("%d",&c);

    printf("中央値は%dです。\n",med3(a,b,c));
    return 0;
}
/*3値の大小関係の組み合わせ13種類を列挙するのが、Fig.1C-4です。この図は、木の形（左端が根で
そこから枝分かれする）であることから決定木（decision tree)とよばれます
左端の枠（a>=b）からスタートして右側へと進みましょう。〇内の条件が成立すれば上側の線
をたどり、成立しなければ下側の線をたどっていきます。*/