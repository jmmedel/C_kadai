#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問4

１．ｄｏｕｂｌｅ型変数ａにデータを入力する
２．ｉｎｔ型変数ｂにａを代入する
３．１行目にａを小数形式（小数点以下２桁）で出力する
４．２行目にｂを１０進出力する

*/
int main()
{


    double a;
    int b;
    scanf("%lf",&a);
    b = a;
    printf("%.2f\n",a);
    printf("%d",b);

    return 0;
}
