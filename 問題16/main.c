#include <stdio.h>
#include <stdlib.h>



/*
C言語認定試験向け課題　問16
3番目の変数を使わずに2つの数を入れ替えます。
3番目の変数を使用せずに2つの数字を交換するには、
2つの一般的な方法があります。

1. + と  -


 */
 int main()
{
int a=10, b=20;
printf("スワップ前 a=%d b=%d",a,b);
a=a+b;//a=30 (10+20)
b=a-b;//b=10 (30-20)
a=a-b;//a=20 (30-10)
printf("\n交換後 a=%d b=%d",a,b);
return 0;
}
