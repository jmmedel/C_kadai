#include <stdio.h>


/*

C����F�莎�������ۑ�@��20

�P�D�������������^�P�����z�񂁂Ƀf�[�^����͂���
�Q�D�d�n�e�łȂ��ԂP�D���J��Ԃ��i�ő�P�O�O��j
�R�D���̊e�v�f���A���͂��ꂽ�f�[�^�����A�����`���P�O���i�����_�ȉ��Q���j�ŏo�͂���
�S�D�f�[�^�S���Ƃɉ��s����

*/

void main(void)
{

double a[100],work;
int i,j;

for(i=0; i<100; i++)
{
    if(scanf("%lf",&work)==EOF)
        break;
    else
        a[i]=work;

}

for(j=0;j<i;j++)
{
    if(j%4==0){
        printf("\n");
    }

    printf("%10.2f",a[j]);

}

}
