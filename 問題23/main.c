#include <stdio.h>
#include <stdlib.h>


/*

C言語認定試験向け課題　問23
１．ｉｎｔ型変数ａにデータを１６進入力する
２．ｉｎｔ型変数ｂにデータを１６進入力する
３．１行目にａとｂのビットごとのＯＲを４桁で１６進出力する（小文字）
４．２行目にａとｂのビットごとのＡＮＤを４桁で１６進出力する（小文字）
５．３行目にａを４ビット左シフトして４桁で１６進出力する（小文字）
６．４行目にｂを４ビット右シフトして４桁で１６進出力する（小文字）
*/
int main()
{

    int a,b;
    scanf("%x%x",&a,&b);
    printf("%4x\n",a|b);
    printf("%4x\n",a&b);
    printf("%4x\n",(a<<4));
    printf("%4x",(b>>4));

    return 0;
}
