#include <stdio.h>
#include <stdlib.h>



/*

C����F�莎�������ۑ�@��5

�P�D���������^�ϐ����Ƀf�[�^���P�O�i���͂���
�Q�D���������^�ϐ����Ƀf�[�^���P�O�i���͂���
�R�D�P�s�ڂɂ���b�̘a���W���łP�O�i�o�͂���
�S�D�Q�s�ڂɂ���b�̍����W���łP�O�i�o�͂���
�T�D�R�s�ڂɂ���b�̐ς��W���łP�O�i�o�͂���
�U�D�S�s�ڂɂ���b�̏����W���łP�O�i�o�͂���
�V�D�T�s�ڂɂ���b�̏�]���W���łP�O�i�o�͂���



*/
int main()
{

    long a,b;
    scanf("%ld",&a);
    scanf("%ld",&b);
    printf("%8ld\n",a+b);
    printf("%8ld\n",a-b);
    printf("%8ld\n",a*b);
    printf("%8ld\n",a/b);
    printf("%8ld\n",a%b);

    return 0;
}
