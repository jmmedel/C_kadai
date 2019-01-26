#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問34
Cでの10進数から2進数へ：cプログラムによって、
任意の10進数（base  -  10（0から9））
を2進数（base  -  2（0または1））に変換できます。

*/
int main(){

int a[10],n,i;

printf("変換する番号を入力してください。");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\n与えられた数のバイナリは=");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;

}
