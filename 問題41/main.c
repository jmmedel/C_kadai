#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*

C����F�莎�������ۑ�@��41

�P�D���������^�P�����z�񂁂ɋ󔒂��܂ޕ������1�s�����͂���i�ő�P�O�O�������j
�Q�D�����̒P����P�s���Ƃɏo�͂���i�P��͋󔒂��܂܂Ȃ�������Ƃ���j

*/


void main(void)
{

char str[100]="KaGaya          nOHn              koBa DenSha ";
int c=0,j=0;
while(str[c]!='\0'){
    if(str[c]!=' '){
        str[j++]=str[c];
    }
    c++;
}
str[j]='\0';
printf("%s \n",str);

}

