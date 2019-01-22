#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問3
toi03.c を提出してください。

１．ｌｏｎｇ型変数ａにデータを１０進入力する
２．ｉｎｔ型変数ｂにａを代入する
３．１行目にａを８桁で１０進出力する
４．２行目にｂを８桁で１０進出力する
５．３行目にｂを８桁で１６進出力する（小文字）
６．４行目にａを８桁で１６進出力する（小文字）


*/
int main()
{
    printf("ｌｏｎｇ型変数ａにデータを１０進入力する");
    long a;
    int b;
    scanf("%ld",&a);
    b=a;
    printf("%8ld\n",a);
    printf("%8d\n",b);
    printf("%8x\n",b);
    printf("%8lx\n",a);

    return 0;
}
