#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問19

C番号を印刷するプログラムTriangle
アルファベットの三角形のように、数字の三角形を印刷するように
cプログラムを書くことができます。三角形の数字はさまざまな方法で印刷できます。

範囲を入力してください= 5
    1
   121
  12321
 1234321
123454321

*/
int main()
{


    int i,j,k,l,n;
    printf("範囲を入力してください=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n-i;j++)
    {
    printf(" ");
    }
    for(k=1;k<=i;k++)
    {
    printf("%d",k);
    }
    for(l=i-1;l>=1;l--)
    {
    printf("%d",l);
    }
    printf("\n");
    }
return 0;

}
