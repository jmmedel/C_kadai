#include <stdio.h>
#include <stdlib.h>




/*


C����F�莎�������ۑ�@��42

�P�D�������Ƃ����t�@�C���|�C���^���g���āu���D�������v�Ƃ����t�@�C����ǂݍ��ݗp�ɃI�[�v������
�Q�D���������g���ăt�@�C���̓��e���A�W���o�͂ɏo�͂���
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
