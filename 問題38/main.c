#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*

C言語認定試験向け課題　問38

１．ｃｈａｒ型１次元配列ａに空白を含む文字列を1行分入力する（最大１００文字分）
２．ａ内の英小文字を英大文字に、英大文字を英小文字に変換する。
３．ａを文字列出力する。

*/
void main(void)
{
char str[] = "KaGaya JOhN  ";


   printf("%s \n",str);
    for ( int i=0; str[i]!= '\0'; i++)
    {

        if (islower(str[i]) != 0){
            str[i]  = toupper(str[i]);

        }

        else if (isupper(str[i]) != 0){
            str[i]  = tolower(str[i]);

        }

    }
    printf("%s \n",str);


}

