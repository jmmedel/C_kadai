#include <stdio.h>
#include <stdlib.h>




/*

C����F�莎�������ۑ�@��22

�P�D���������^�P�����z�񂁂ɋ󔒂��܂ޕ������1�s�����͂���i�ő�P�O�O�������j
�Q�D���𕶎���o�͂���
�R�D�k�������܂ł̂��̊e�v�f���R���łP�U�i�o�͂���i�������j

*/
int main()
{
    char a[101];
    int i;

    gets(a);
    printf("%s\n",a);
    i=0;
    while(a[i])
    {
    printf("%3x",a[i]);
    i++;

    }

}
