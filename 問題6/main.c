#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問6
１．ｃｈａｒ型変数ａにデータを１文字入力する
２．１行目にａを２桁で１６進出力する（大文字）
３．２行目にａを文字出力する
４．ｉｎｔ型変数ｂにａを代入する
５．３行目にｂを２桁で１６進出力する
６．４行目にｂを文字出力する
*/
int main()
{
    char a;
    int b;
    scanf("%c",&a);
    printf("%2X\n",a);
    printf("%c\n",a);
    b=a;
    printf("%2X\n",b);
    printf("%c",b);
    return 0;
}
