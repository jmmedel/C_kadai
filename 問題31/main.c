#include <stdio.h>
#include <stdlib.h>




/*

C����F�莎�������ۑ�@��31

�P�Dint�^�Ŏ��Ԃƕ��ƕb���󂯎��A���b����long�^�ŕԂ��֐�sec���쐬����
�Q�D���Ԃƕ��ƕb���P�O�i���͂���
�R�D�֐���������p���đ��b�������߂ĂP�O�i�o�͂���

*/
long sec(int,int,int);
int main()
{
    int h,m,s;
    long sums;
    scanf("%d%d%d",&h,&m,&s);
    sums=sec(h,m,s);;
    printf("%ld",sums);

}

long sec(int h, int m , int s)
{
 long sums;
 sums = h*3600L+m*60L+s;
 return(sums);

}

