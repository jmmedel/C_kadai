#include <stdio.h>
#include <stdlib.h>

/*
C言語認定試験向け課題　問9

１．ｉｎｔ型変数ａにデータを１０進入力する
２．ａが８０以上であれば’Ａ’を出力する
３．ａが６０以上８０未満であれば’Ｂ’を出力する
４．ａが４０以上６０未満であれば’Ｃ’を出力する
５．ａが２０以上４０未満であれば’Ｄ’を出力する
６．ａが２０未満であれば’Ｅ’を出力する
https://github.com/jmmedel/C_kadai

*/
int main()
{
     int a;
    scanf("%d",&a);
    if(a>=80)
        printf("A");

    else if (a>=60)
        printf("B");

    else if (a>=40)
        printf("C");
    else if (a>=20)
        printf("D");
    else
        printf("E");

    return 0;
}
