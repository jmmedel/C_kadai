#include <stdio.h>
#include <stdlib.h>




/*

C����F�莎�������ۑ�@��7


�P�D�������^�ϐ����Ƀf�[�^���P�O�i���͂���
�Q�D�������^�ϐ����Ƀf�[�^���P�O�i���͂���
�R�D���Ƃ��̓��e�����ւ���
�S�D�P�s�ڂɂ����T���łP�O�i�o�͂���
�T�D�Q�s�ڂɂ����T���łP�O�i�o�͂���
https://github.com/jmmedel/C_kadai
*/
int main()
{
    int a,b,work;
    scanf("%d",&a);
    scanf("%d",&b);
    work = a;
    a=b;
    b=work;
    printf("%5d\n",a);
    printf("%5d",b);

    return 0;
}
