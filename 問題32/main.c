#include <stdio.h>
#include <stdlib.h>



/*
C言語認定試験向け課題　問32

１．ｉｎｔ型で年を受け取り、うるう年であれば１、平年であれば０を返す関数ｌｅａｐを作成する（うるう年は、
４で割り切れて、１００では割り切れず、ただし４００では割り切れてもよい、という年です）
２．年を１０進入力する
３．関数ｌｅａｐを用いて、うるう年であれば「うるう年」、平年であれば「平年」と出力する

*/
int main()
{


   int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d うるう年.", year);
            else
                printf("%d 平年.", year);
        }
        else
            printf("%d うるう年.", year );
    }
    else
        printf("%d 平年.", year);



}
