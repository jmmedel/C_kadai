#include <stdio.h>
#include <stdlib.h>



/*
C言語認定試験向け課題　問26

１．ｉｎｔ型変数ａにデータを１０進入力する
２．ｉｎｔ型変数ｂにａ内の１であるビットの数を求める
３．ｂを１０進出力する

*/
int main()
{


    int a,b=0, cnt,i;
    cnt = sizeof(int);
    cnt = cnt*8-1;
    scanf("%d",&a);
    for(i = cnt; i>=0; i--)
    {
    b+= (a>>i)&i;

    }
    printf("%d",b);



}
