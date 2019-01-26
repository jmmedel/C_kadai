#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*

C言語認定試験向け課題　問39

１．ｃｈａｒ型１次元配列ａに空白を含む文字列を1行分入力する（最大１００文字分）
２．ｃｈａｒ型１次元配列ｂにａ内の連続する空白を１つの空白に置換えた文字列を代入する
３．ｂを文字列出力する。
*/



char* uniq_spc(char* str){
    char *from, *to;
    int spc=0;
    to=from=str;
    while(1){
        if(spc && *from == ' ' && to[-1] == ' ')
            ++from;
        else {
            spc = (*from==' ')? 1 : 0;
            *to++ = *from++;
            if(!to[-1])break;
        }
    }
    return str;
}
void main(void)
{
char str[] = "KaGaya  JOhN   MeDeL";



    printf("%s \n",str);
    printf("%s \n", uniq_spc(str));

}
