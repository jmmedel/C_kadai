#include <stdio.h>
#include <stdlib.h>



/*

C����F�莎�������ۑ�@��21

�P�D�������������^�P�����z�񂁂Ƀf�[�^����͂���
�Q�D�d�n�e�łȂ��ԂP�D���J��Ԃ��i�ő�P�O�O��j
�R�D�������������^�ϐ����ɓ��͂��ꂽ�f�[�^�̍��v�����߂�5
�S�D�������������^�ϐ����ɓ��͂��ꂽ�f�[�^�̕��ς����߂�
�T�D�P�s�ڂɂ��������`���P�O���i�����_�ȉ��Q���j�ŏo�͂���
�U�D�Q�s�ڂɂ��������`���P�O���i�����_�ȉ��Q���j�ŏo�͂���

*/
int main()
{


    double a[100],work,b,c;
    int i,j;

    for(i=0;i<100;i++)
    {
    if(scanf("%lf",&work)==EOF)
        break;
    else
        a[i]=work;

    }

    b=c=0;
    for(j=0;j<i;j++)
    {
        b+=a[j];
    }

    c=b/i;

    printf("%10.2f\n%10.2f",b,c);


}
