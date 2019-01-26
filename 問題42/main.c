#include <stdio.h>
#include <stdlib.h>




/*


C言語認定試験向け課題　問42

１．ｆｉｎというファイルポインタを使って「ａ．ｄａｔ」というファイルを読み込み用にオープンする
２．ｆｉｎを使ってファイルの内容を、標準出力に出力する
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
