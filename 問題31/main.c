#include <stdio.h>
#include <stdlib.h>




/*

C言語認定試験向け課題　問31

１．int型で時間と分と秒を受け取り、総秒数をlong型で返す関数secを作成する
２．時間と分と秒を１０進入力する
３．関数ｓｅｃを用いて総秒数を求めて１０進出力する

*/
long sec(int,int,int);
int main()
{
    int h,m,s;
    long sums;
    scanf("%d%d%d",&h,&m,&s);
    sums=sec(h,m,s);;
    printf("%ld",sums);

}

long sec(int h, int m , int s)
{
 long sums;
 sums = h*3600L+m*60L+s;
 return(sums);

}

