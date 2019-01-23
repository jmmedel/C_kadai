#include <stdio.h>
#include <stdlib.h>


/*

C言語認定試験向け課題　問11

１．ｉｎｔ型変数ａにデータを１０進入力する
２．ａが０以下の間１．を繰り返す
３．ｉｎｔ型変数ｂに１からａまでの整数の合計を求める
４．ｌｏｎｇ型変数ｃに１からａまでの整数の合計を求める
５．１行目にｂを１０桁で１０進出力する
６．２行目にｃを１０桁で１０進出力する
https://github.com/jmmedel/C_kadai

*/


int main()
{

    int i,a=0,b=0;
    long c=0;

    while(a<=0)
        scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b+=i;
        c+=i;

    }

    printf("%10d\n%10ld",b,c);


    return 0;
}
