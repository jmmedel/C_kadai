#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*

C����F�莎�������ۑ�@��38

�P�D���������^�P�����z�񂁂ɋ󔒂��܂ޕ������1�s�����͂���i�ő�P�O�O�������j
�Q�D�����̉p���������p�啶���ɁA�p�啶�����p�������ɕϊ�����B
�R�D���𕶎���o�͂���B

*/
void main(void)
{
char str[] = "KaGaya JOhN  ";


   printf("%s \n",str);
    for ( int i=0; str[i]!= '\0'; i++)
    {

        if (islower(str[i]) != 0){
            str[i]  = toupper(str[i]);

        }

        else if (isupper(str[i]) != 0){
            str[i]  = tolower(str[i]);

        }

    }
    printf("%s \n",str);


}

