#include <stdio.h>
#include <stdlib.h>


/*

C����F�莎�������ۑ�@��23
�P�D�������^�ϐ����Ƀf�[�^���P�U�i���͂���
�Q�D�������^�ϐ����Ƀf�[�^���P�U�i���͂���
�R�D�P�s�ڂɂ��Ƃ��̃r�b�g���Ƃ̂n�q���S���łP�U�i�o�͂���i�������j
�S�D�Q�s�ڂɂ��Ƃ��̃r�b�g���Ƃ̂`�m�c���S���łP�U�i�o�͂���i�������j
�T�D�R�s�ڂɂ����S�r�b�g���V�t�g���ĂS���łP�U�i�o�͂���i�������j
�U�D�S�s�ڂɂ����S�r�b�g�E�V�t�g���ĂS���łP�U�i�o�͂���i�������j
*/
int main()
{

    int a,b;
    scanf("%x%x",&a,&b);
    printf("%4x\n",a|b);
    printf("%4x\n",a&b);
    printf("%4x\n",(a<<4));
    printf("%4x",(b>>4));

    return 0;
}
