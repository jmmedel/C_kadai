#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*

C����F�莎�������ۑ�@��40

�P�D���������^�P�����z�񂁂ɋ󔒂��܂ޕ������1�s�����͂���i�ő�P�O�O�������j
�Q�D���������^�ϐ����Ƀf�[�^���P�������͂���
3.���̉������ڂɂ������邩��S�ďo�͂���i�擪���O�����ڂƂ���j�Ȃ���΁u�Ȃ��v�Əo�͂���

*/


void main(void)
{
char str[100] = "KaGaya JOhN  koBa DenSha ";
char str2[] = "a";
int count = 0;


   printf("%s \n",str);
    for ( int i=0; str[i]!= '\0'; i++)
    {

      if(str[i] == str2[0]){
          count++;
      }

    }
    printf("%s = %d \n",str2,count);


}

