#include <stdio.h>
#include <stdlib.h>


/*

C言語認定試験向け課題　問15

１．ｉｎｔ型変数ａに’Ａ’を代入する
２．ａを文字出力する
３．ａに１を足し込む
４．ａが’Ｚ’以下であれば２．へ戻る
https://github.com/jmmedel/C_kadai

*/
int main()
{


     int a,b;

    a='A';
    while(a<='Z')
    {
        printf("%c",a);
        a++;

    }

    return 0;
}
