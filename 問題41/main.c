#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*

C言語認定試験向け課題　問41

１．ｃｈａｒ型１次元配列ａに空白を含む文字列を1行分入力する（最大１００文字分）
２．ａ内の単語を１行ごとに出力する（単語は空白を含まない文字列とする）

*/


void main(void)
{

char str[100]="KaGaya          nOHn              koBa DenSha ";
int c=0,j=0;
while(str[c]!='\0'){
    if(str[c]!=' '){
        str[j++]=str[c];
    }
    c++;
}
str[j]='\0';
printf("%s \n",str);

}

