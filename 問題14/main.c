#include <stdio.h>
#include <stdlib.h>



/*

C����F�莎�������ۑ�@��14

�P�D�������^�ϐ����Ƀf�[�^���P�O�i���͂���
�Q�D�����O�ȉ����Q�P�ȏ�̊ԂP�D���J��Ԃ�
�R�D�P�s�ڂ��炁�s�ڂ܂Łf*�f�������ׂďo�͂���
https://github.com/jmmedel/C_kadai

*/
int main()
{


    int a,i,j;
    scanf("%d",&a);
    while(a<=0 || a>=21)
    scanf("%d",&a);
    for(i=0;i<a;i++){

    for(j=0;j<a;j++)
        printf("*");
    printf("\n");
    }


    return 0;
}
