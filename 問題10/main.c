#include <stdio.h>
#include <stdlib.h>



/*

C����F�莎�������ۑ�@��10
�P�D�P�O�O����P�܂ł̐������T���łP�O�i�o�͂���
�Q�D�����T���ŉ��s����
https://github.com/jmmedel/C_kadai
*/

int main()
{

    int i;
    for(i = 100; i>0; i--){
    if((i!=100)&&(i%5==0))
    printf("\n");
    printf("%5d",i);
    }


    return 0;
}
