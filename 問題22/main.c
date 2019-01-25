#include <stdio.h>
#include <stdlib.h>




/*

C言語認定試験向け課題　問22

１．ｃｈａｒ型１次元配列ａに空白を含む文字列を1行分入力する（最大１００文字分）
２．ａを文字列出力する
３．ヌル文字までのａの各要素を３桁で１６進出力する（小文字）

*/
int main()
{
    char a[101];
    int i;

    gets(a);
    printf("%s\n",a);
    i=0;
    while(a[i])
    {
    printf("%3x",a[i]);
    i++;

    }

}
