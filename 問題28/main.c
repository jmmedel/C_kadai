#include <stdio.h>
#include <stdlib.h>




/*
C言語認定試験向け課題　問28


１．ｌｏｎｇ型変数ａにデータを１６進入力する
２．ｌｏｎｇ型変数ｂにａと16進定数００ｆｆ００ｆｆのビットごとのＸＯＲを代入する
３．１行目にａを３２桁で２進出力する
４．２行目にｂを３２桁で２進出力する

*/
int main()
{


    int i;
    long a,b;
    scanf("%lx",&a);
    b=a^0x00ff00ff;
    for(i=31;i>=0;i--)
    {
    printf("%ld",((a>>i)&1));
    }

    printf("\n");
    for(i=31;i>=0; i--)
    {
    printf("%ld",((b>>i)&1));

    }



}
