#include <stdio.h>


/*

C言語認定試験向け課題　問20

１．ｄｏｕｂｌｅ型１次元配列ａにデータを入力する
２．ＥＯＦでない間１．を繰り返す（最大１００回）
３．ａの各要素を、入力されたデータだけ、小数形式１０桁（小数点以下２桁）で出力する
４．データ４個ごとに改行する

*/

void main(void)
{

double a[100],work;
int i,j;

for(i=0; i<100; i++)
{
    if(scanf("%lf",&work)==EOF)
        break;
    else
        a[i]=work;

}

for(j=0;j<i;j++)
{
    if(j%4==0){
        printf("\n");
    }

    printf("%10.2f",a[j]);

}

}
