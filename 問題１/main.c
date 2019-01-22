#include <stdio.h>
#include <stdlib.h>

/*

C言語認定試験向け課題　問1

１．ｉｎｔ型変数ａにデータを１０進入力する
２．１行目にａを８桁で８進出力する
３．２行目にａを８桁で１０進出力する
４．３行目にａを８桁で１６進出力する（大文字）



*/


int main()
{
    printf("ｉｎｔ型変数ａにデータを１０進入力する\n");
    int a;
    scanf("%d",&a);
    printf("%8o\n",a);
    printf("%8d\n",a);
    printf("%8X\n",a);
    return 0;
}
