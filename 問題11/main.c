#include <stdio.h>
#include <stdlib.h>


/*

C����F�莎�������ۑ�@��11

�P�D�������^�ϐ����Ƀf�[�^���P�O�i���͂���
�Q�D�����O�ȉ��̊ԂP�D���J��Ԃ�
�R�D�������^�ϐ����ɂP���炁�܂ł̐����̍��v�����߂�
�S�D���������^�ϐ����ɂP���炁�܂ł̐����̍��v�����߂�
�T�D�P�s�ڂɂ����P�O���łP�O�i�o�͂���
�U�D�Q�s�ڂɂ����P�O���łP�O�i�o�͂���
https://github.com/jmmedel/C_kadai

*/


int main()
{

    int i,a=0,b=0;
    long c=0;

    while(a<=0)
        scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b+=i;
        c+=i;

    }

    printf("%10d\n%10ld",b,c);


    return 0;
}
