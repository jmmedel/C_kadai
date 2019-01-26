#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*

C言語認定試験向け課題　問37

１．ｃｈａｒ型１次元配列aに空白で区切られた文字列を１つ入力する（最大１００文字分）
２．ａ内が数字だけなら「ｎｕｍｅｒｉｃ」と出力する。
３．ａ内が英文字だけなら「ａｌｐｈａｂｅｔｉｃ」と出力する。
４．それ以外なら「ｏｔｈｅｒ」と出力する。

*/


void main(void)
{
char str[] = "12abc12johnmede1235678kagaya   12 12 ";


   printf("%s \n",str);
    for ( int i=0; str[i]!= '\0'; i++)
    {
        // check for alphabets
        if (isalpha(str[i]) != 0)

            printf("Alphabetic_letters = %c, \n", str[i] );

        // check for decimal digits
        else if (isdigit(str[i]) != 0)

            printf("Decimal_digits = %c \n",str[i]);
        else
            printf("OTHER  = %c \n",str[i]);
    }



}

