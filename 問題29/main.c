#include <stdio.h>
#include <stdlib.h>



/*


C言語認定試験向け課題　問29

１．ｉｎｔ型で底辺と高さを受け取り、三角形の面積をｉｎｔ型で返す関数ｔｒｉを作成する
２．底辺と高さを１０進入力する
３．関数ｔｒｉを用いて面積を求めて１０進出力する


*/
int tri(int,int);
int main()
{

int hen,takasa,menseki;
scanf("%d%d",&hen,&takasa);
menseki = tri(hen,takasa);
printf("%d",menseki);


}

int tri(int hen,int takasa)
{
    return(hen* takasa/2);

}


