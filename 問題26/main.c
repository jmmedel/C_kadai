#include <stdio.h>
#include <stdlib.h>



/*
C����F�莎�������ۑ�@��26

�P�D�������^�ϐ����Ƀf�[�^���P�O�i���͂���
�Q�D�������^�ϐ����ɂ����̂P�ł���r�b�g�̐������߂�
�R�D�����P�O�i�o�͂���

*/
int main()
{


    int a,b=0, cnt,i;
    cnt = sizeof(int);
    cnt = cnt*8-1;
    scanf("%d",&a);
    for(i = cnt; i>=0; i--)
    {
    b+= (a>>i)&i;

    }
    printf("%d",b);



}
