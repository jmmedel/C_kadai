#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問27


１．ｉｎｔ型変数ａにデータを１０進入力する
２．１行目にａを4桁で１６進出力する（小文字）
３．ｉｎｔ型変数ｂにａのビットの反転を代入する
４．ｂに１を加算する
５．２行目にｂを4桁で１６進出力する（小文字）
６．３行目にｂを１０進出力する

*/
int main()
{


    int a,b;
    scanf("%d",&a);
    printf("%4x\n",a);
    b = a;
    b+=1;
    printf("%4x\n",b);
    printf("%d\n",b);

}
