#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*

C����F�莎�������ۑ�@��37

�P�D���������^�P�����z��a�ɋ󔒂ŋ�؂�ꂽ��������P���͂���i�ő�P�O�O�������j
�Q�D���������������Ȃ�u���������������v�Əo�͂���B
�R�D�������p���������Ȃ�u���������������������v�Əo�͂���B
�S�D����ȊO�Ȃ�u�����������v�Əo�͂���B

*/


void main(void)
{
char str[] = "12abc12johnmede1235678kagaya   12 12 ";


   printf("%s \n",str);
    for ( int i=0; str[i]!= '\0'; i++)
    {
        // check for alphabets
        if (isalpha(str[i]) != 0)

            printf("Alphabetic_letters = %c, \n", str[i] );

        // check for decimal digits
        else if (isdigit(str[i]) != 0)

            printf("Decimal_digits = %c \n",str[i]);
        else
            printf("OTHER  = %c \n",str[i]);
    }



}

