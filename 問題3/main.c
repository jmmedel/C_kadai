#include <stdio.h>
#include <stdlib.h>



/*

C����F�莎�������ۑ�@��3
toi03.c ���o���Ă��������B

�P�D���������^�ϐ����Ƀf�[�^���P�O�i���͂���
�Q�D�������^�ϐ����ɂ���������
�R�D�P�s�ڂɂ����W���łP�O�i�o�͂���
�S�D�Q�s�ڂɂ����W���łP�O�i�o�͂���
�T�D�R�s�ڂɂ����W���łP�U�i�o�͂���i�������j
�U�D�S�s�ڂɂ����W���łP�U�i�o�͂���i�������j


*/
int main()
{
    printf("���������^�ϐ����Ƀf�[�^���P�O�i���͂���");
    long a;
    int b;
    scanf("%ld",&a);
    b=a;
    printf("%8ld\n",a);
    printf("%8d\n",b);
    printf("%8x\n",b);
    printf("%8lx\n",a);

    return 0;
}
