#include <stdio.h>
#include <stdlib.h>



/*

C����F�莎�������ۑ�@��43
�P�D���������Ƃ����t�@�C���|�C���^���g���āu���D�������v�Ƃ����t�@�C�����������ݗp�ɃI�[�v������
�Q�D�����������g���āA�W�����͂̓��e��d�n�e�܂ŁA�t�@�C���ɏo�͂���
�R�D�t�@�C�����N���[�Y����

*/


void main(void)
{

    int c;
    FILE *fin;
    fin = fopen("./test.txt", "r");
    if (fin) {
    while ((c = getc(fin)) != EOF)
        putchar(c);
    fclose(fin);
}


}

