#include <stdio.h>
#include <stdlib.h>



/*
C言語認定試験向け課題　問35

セミコロンを使わずに、「Hello world」や「Hello World」
など何でもCで印刷できます。それにはさまざまな方法があります。

ifを使う
switchを使う
whileなどを使う
*/


int main()
{
 if(printf("hello world")){}
    printf("\n");
 switch(printf("hello world")){}
    printf("\n");
 while(!printf("hello world")){}
    printf("\n");
}


