#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問5

１．ｌｏｎｇ型変数ａにデータを１０進入力する
２．ｌｏｎｇ型変数ｂにデータを１０進入力する
３．１行目にａとbの和を８桁で１０進出力する
４．２行目にａとbの差を８桁で１０進出力する
５．３行目にａとbの積を８桁で１０進出力する
６．４行目にａとbの商を８桁で１０進出力する
７．５行目にａとbの剰余を８桁で１０進出力する



*/
int main()
{

    long a,b;
    scanf("%ld",&a);
    scanf("%ld",&b);
    printf("%8ld\n",a+b);
    printf("%8ld\n",a-b);
    printf("%8ld\n",a*b);
    printf("%8ld\n",a/b);
    printf("%8ld\n",a%b);

    return 0;
}
