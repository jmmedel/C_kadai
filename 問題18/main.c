
#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問18

Cの階乗計画：nの階乗は、すべての正の降順整数の積です。 nの階乗はn！で表されます。例えば：

5！ = 5 * 4 * 3 * 2 * 1 = 120
3！ = 3 * 2 * 1 = 6

*/
int main()
{
    int i,fact=1,number;
    printf("番号を入力してください。 ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
      fact=fact*i;
  }
  printf("の階乗 %d です： %d",number,fact);
    return 0;
}
