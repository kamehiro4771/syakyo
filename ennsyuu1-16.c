/*
直角二等辺三角形を表示する部分を独立させて、次の形式の関数として実現せよ
void triangleLB(int n)//左下側が直角の二等辺三角形を表示
さらに、直角が左上側、右上側、右下側の二等辺三角形を表示する関数を作成せよ。
void triangleLU(int n);左上側
void triangleRU(int n);右上側
void triangleRB(int n);右下側
*/
#include<stdio.h>
void triangleLB(int n);
void triangleLU(int n);
void triangleRU(int n);
void triangleRB(int n);
int main(void)
{
    int n;
    printf("何段の三角形ですか：");
    do{
        scanf("%d",&n);
    }while(n <= 0);
    triangleLB(n);
    printf("何段の三角形ですか：");
    do{
        scanf("%d",&n);
    }while(n <= 0);
    triangleLU(n);
    printf("何段の三角形ですか：");
    do{
        scanf("%d",&n);
    }while(n <= 0);
    triangleRU(n);
    printf("何段の三角形ですか：");
    do{
        scanf("%d",&n);
    }while(n <= 0);
    triangleRB(n);
}

void triangleLB(int n)
{
    int i,j;
    for(i = 1;i <= n;i++){
            for(j = 1;j <= i;j++)
                putchar('*');
            putchar('\n');
    }
}

void triangleLU(int n)
{
    int i,j;
    for(i = n;i >= 1;i--){
        for(j = 1;j <= i;j++)
            putchar('*');
        putchar('\n');
    }
}

void triangleRU(int n)
{
    int i,j;
    for(i = 1;i <= n;i++){
        for(j = 1;j  <= n;j++){
            if(j >= i)
                putchar('*');
            else
               putchar(' ');
        }
        putchar('\n');
    }
}


void triangleRB(int n)
{
    int i,j;
    for(i = 1;i <= n;i++){
        for(j = n;j  >= 1;j--){
            if(j > i)
                putchar(' ');
            else
               putchar('*');
        }
        putchar('\n');
    }
}