#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*

C言語認定試験向け課題　問40

１．ｃｈａｒ型１次元配列ａに空白を含む文字列を1行分入力する（最大１００文字分）
２．ｃｈａｒ型変数ｂにデータを１文字入力する
3.ａの何文字目にｂがあるかを全て出力する（先頭を０文字目とする）なければ「なし」と出力する

*/


void main(void)
{
char str[100] = "KaGaya JOhN  koBa DenSha ";
char str2[] = "a";
int count = 0;


   printf("%s \n",str);
    for ( int i=0; str[i]!= '\0'; i++)
    {

      if(str[i] == str2[0]){
          count++;
      }

    }
    printf("%s = %d \n",str2,count);


}

