#include <stdio.h>
#include <stdlib.h>

/*
C����F�莎�������ۑ�@��9

�P�D�������^�ϐ����Ƀf�[�^���P�O�i���͂���
�Q�D�����W�O�ȏ�ł���΁f�`�f���o�͂���
�R�D�����U�O�ȏ�W�O�����ł���΁f�a�f���o�͂���
�S�D�����S�O�ȏ�U�O�����ł���΁f�b�f���o�͂���
�T�D�����Q�O�ȏ�S�O�����ł���΁f�c�f���o�͂���
�U�D�����Q�O�����ł���΁f�d�f���o�͂���
https://github.com/jmmedel/C_kadai

*/
int main()
{
     int a;
    scanf("%d",&a);
    if(a>=80)
        printf("A");

    else if (a>=60)
        printf("B");

    else if (a>=40)
        printf("C");
    else if (a>=20)
        printf("D");
    else
        printf("E");

    return 0;
}
