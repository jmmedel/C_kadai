#include <stdio.h>
#include <stdlib.h>



/*

C����F�莎�������ۑ�@��34
C�ł�10�i������2�i���ցFc�v���O�����ɂ���āA
�C�ӂ�10�i���ibase  -  10�i0����9�j�j
��2�i���ibase  -  2�i0�܂���1�j�j�ɕϊ��ł��܂��B

*/
int main(){

int a[10],n,i;

printf("�ϊ�����ԍ�����͂��Ă��������B");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i]=n%2;
n=n/2;
}
printf("\n�^����ꂽ���̃o�C�i����=");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
return 0;

}
