#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問14

１．ｉｎｔ型変数ａにデータを１０進入力する
２．ａが０以下か２１以上の間１．を繰り返す
３．１行目からａ行目まで’*’をａ個並べて出力する
https://github.com/jmmedel/C_kadai

*/
int main()
{


    int a,i,j;
    scanf("%d",&a);
    while(a<=0 || a>=21)
    scanf("%d",&a);
    for(i=0;i<a;i++){

    for(j=0;j<a;j++)
        printf("*");
    printf("\n");
    }


    return 0;
}
