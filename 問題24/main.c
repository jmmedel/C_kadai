#include <stdio.h>
#include <stdlib.h>



/*

C����F�莎�������ۑ�@��24

�P�D�������^�ϐ����Ƀf�[�^���P�U�i���͂���
�Q�D�������^�ϐ����Ƀf�[�^���P�O�i���͂���
�R�D�����O�ȉ����P�U�ȏ�̊ԂQ�D���J��Ԃ�
�S�D�������^�ϐ����ɂ������r�b�g�E�V�t�g���đ������
�T�D���ƂP�U�i�萔�O�O�O�P�̃r�b�g���Ƃ̂`�m�c�����ɑ������
�U�D�����P�O�i�o�͂���

*/
int main()
{


    int a,b,c;
    scanf("%x",&a);
    scanf("%d",&b);
    while((b<=0)||(b>=16))
    {
    scanf("%d",&b);

    }

    c = a>>b;
    c = c & 0x001;
    printf("%d",c);

    return 0;
}
