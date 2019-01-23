#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問8
１．ｉｎｔ型変数ａにデータを１０進入力する
２．ｉｎｔ型変数ｂにデータを１０進入力する
３．ａとｂが等しければ”ｅｑｕａｌ”を出力する
https://github.com/jmmedel/C_kadai
*/
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a=b)
        printf("Equal");
    return 0;
}
