#include <stdio.h>
#include <stdlib.h>




/*

C言語認定試験向け課題　問7


１．ｉｎｔ型変数ａにデータを１０進入力する
２．ｉｎｔ型変数ｂにデータを１０進入力する
３．ａとｂの内容を入れ替える
４．１行目にａを５桁で１０進出力する
５．２行目にｂを５桁で１０進出力する
https://github.com/jmmedel/C_kadai
*/
int main()
{
    int a,b,work;
    scanf("%d",&a);
    scanf("%d",&b);
    work = a;
    a=b;
    b=work;
    printf("%5d\n",a);
    printf("%5d",b);

    return 0;
}
