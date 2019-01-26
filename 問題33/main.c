#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問33

main（）関数を使わずにcプログラムを書くことができます。
そのためには、＃defineinプリプロセッサディレクティブを
使用する必要があります。

*/
#define start main
void start() {

   printf("Hello");

}
