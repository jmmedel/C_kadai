#include <stdio.h>
#include <stdlib.h>




/*
C����F�莎�������ۑ�@��28


�P�D���������^�ϐ����Ƀf�[�^���P�U�i���͂���
�Q�D���������^�ϐ����ɂ���16�i�萔�O�O�����O�O�����̃r�b�g���Ƃ̂w�n�q��������
�R�D�P�s�ڂɂ����R�Q���łQ�i�o�͂���
�S�D�Q�s�ڂɂ����R�Q���łQ�i�o�͂���

*/
int main()
{


    int i;
    long a,b;
    scanf("%lx",&a);
    b=a^0x00ff00ff;
    for(i=31;i>=0;i--)
    {
    printf("%ld",((a>>i)&1));
    }

    printf("\n");
    for(i=31;i>=0; i--)
    {
    printf("%ld",((b>>i)&1));

    }



}
