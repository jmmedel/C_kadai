#include <stdio.h>
#include <stdlib.h>



/*
C言語認定試験向け課題　問12

１．ｉｎｔ型変数ａにデータを１０進入力する
２．ａが０以下の間１．を繰り返す
３．１からａまでの奇数の合計を１０桁で１０進出力する
https://github.com/jmmedel/C_kadai

 */
int main()
{

    int a=0,i,b=0;
    while(a<=0)
        scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2!=0)
            b+=i;
    }

    printf("%10d",b);



    return 0;
}
