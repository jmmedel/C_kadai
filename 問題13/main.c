#include <stdio.h>
#include <stdlib.h>


/*

C言語認定試験向け課題　問13

ループ演算子と算術演算子を使用して、cの数値を逆にすることができます。
このプログラムでは、ユーザーからの入力として番号を取得し、
その番号を元に戻します。与えられた数を逆にする簡単なcの例を見てみましょう。

https://github.com/jmmedel/C_kadai
*/


 int main()
{
int n, reverse=0, rem;
printf("番号を入力してください。");
  scanf("%d", &n);
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
  printf("逆数： %d",reverse);

return 0;
}
