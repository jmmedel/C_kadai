#include <stdio.h>
#include <stdlib.h>


/*

C言語認定試験向け課題　問13

１．ｆｌｏａｔ型変数ａにデータを入力する
２．１行目にａを小数形式（小数点以下２桁）で出力する
３．２行目にａを指数形式（小数点以下２桁）で出力する
（小文字）
https://github.com/jmmedel/C_kadai
*/

int main()
{

    float a;
    scanf("%f",&a);
    printf("%.2f\n",a);
    printf("%.2e\n",a);


    return 0;
}
