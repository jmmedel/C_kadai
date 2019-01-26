#include <stdio.h>
#include <stdlib.h>



/*

C言語認定試験向け課題　問30

１．ｆｌｏａｔ型で摂氏での温度を受け取り、華氏での温度をｆｌｏａｔ型で返す関数ｃｆを作成する（F=9/5・C+32）
２．摂氏での温度を入力する
３．関数ｃｆを用いて華氏での温度を求めて小数形式で出力する

*/
float cf(float);
int main()
{


    float sesshi,kashi;
    scanf("%f",&sesshi);
    kashi=cf(sesshi);
    printf("%f",kashi);


}


float cf (float sesshi)
{
    float kashi;
    kashi =(9.0/5.0) * sesshi + 32;
    return(kashi);

}


}
