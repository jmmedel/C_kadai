#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問43
１．ｆｏｕｔというファイルポインタを使って「ｂ．ｄａｔ」というファイルを書き込み用にオープンする
２．ｆｏｕｔを使って、標準入力の内容を､ＥＯＦまで、ファイルに出力する
３．ファイルをクローズする

*/


void main(void)
{

    int c;
    FILE *fin;
    fin = fopen("./test.txt", "r");
    if (fin) {
    while ((c = getc(fin)) != EOF)
        putchar(c);
    fclose(fin);
}


}

