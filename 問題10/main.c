#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問10
１．１００から１までの整数を５桁で１０進出力する
２．整数５個ずつで改行する
https://github.com/jmmedel/C_kadai
*/

int main()
{

    int i;
    for(i = 100; i>0; i--){
    if((i!=100)&&(i%5==0))
    printf("\n");
    printf("%5d",i);
    }


    return 0;
}
