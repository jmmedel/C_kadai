#include <stdio.h>
#include <stdlib.h>



/*
C言語認定試験向け課題　問17

１．ｉｎｔ型変数ａにデータを１０進入力する
２．ａが１であれば”ｖｉｎ”を出力する
３．ａが２であれば”ｈｅｌｐａｓ　ｖｉｎ”を出力する
４．ａが３であれば”ｎｅ　ｈｅｌｐａｓ　ｖｉｎ”を出力する
５．ａが４であれば”Ｍｉ　ｎｅ　ｈｅｌｐａｓ　ｖｉｎ”を出力する
６．ａが１から４以外であれば”ｅｒｒｏｒ”を出力する
https://github.com/jmmedel/C_kadai
 */
int main()
{


    int a;
    scanf("%d",&a);
    switch(a){

    case 4:
        printf("Mi");
    case 3:
        printf("ne");
    case 2:
        printf("helpas");
    case 1:
        printf("Vin");
        break;
    default:
        printf("Error");

}

}
