#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*

C����F�莎�������ۑ�@��39

�P�D���������^�P�����z�񂁂ɋ󔒂��܂ޕ������1�s�����͂���i�ő�P�O�O�������j
�Q�D���������^�P�����z�񂂂ɂ����̘A������󔒂��P�̋󔒂ɒu�������������������
�R�D���𕶎���o�͂���B
*/



char* uniq_spc(char* str){
    char *from, *to;
    int spc=0;
    to=from=str;
    while(1){
        if(spc && *from == ' ' && to[-1] == ' ')
            ++from;
        else {
            spc = (*from==' ')? 1 : 0;
            *to++ = *from++;
            if(!to[-1])break;
        }
    }
    return str;
}
void main(void)
{
char str[] = "KaGaya  JOhN   MeDeL";



    printf("%s \n",str);
    printf("%s \n", uniq_spc(str));

}
