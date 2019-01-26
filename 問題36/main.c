#include <stdio.h>
#include <stdlib.h>




/*


C言語認定試験向け課題　問36

１．ｉｎｔ型１次元配列を受け取り、ＥＯＦまでデータを、
配列の先頭から順に１０進入力し、
入力されたデータの個数をｉｎｔ型で返す関数ｉｎａｉを作成する
２．ｉｎｔ型１次元配列とデータの個数をｉｎｔ型で受け取り、
配列の先頭からデータの個数分、
各要素を合計した値をｉｎｔ型で返す関数ｉｓｕｍを作成する
３．ｉｎｔ型１次元配列ａ（要素８０個）
に関数ｉｎａｉを用いてデータを入力する
４．入力されたデータの合計を関数
ｉｓｕｍを用いて１０進出力する

*/
int print_Array(int arr[] , int size){

       int  sum = 0;
       for(int i = 0; i < size; i++)
       {
           /* code */
           sum  = sum + arr[i];
       }
       return sum;
 }

void get_Array(int arr[] ,int size){


    for(int i = 0; i < size; i++)
    {
        /* code */
         printf("整数を入力ください");
         scanf("%d",&arr[i]);
    }

}
void main(void)
{
    int Array[80];
    int size = 0;
    int sum ;
    printf("配列のサイズ入力ください");
    scanf("%d",&size);
    get_Array(Array,size);
    sum =  print_Array(Array,size);
    printf("合計　＝　%d",sum);

}
