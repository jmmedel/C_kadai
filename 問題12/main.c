#include <stdio.h>
#include <stdlib.h>



/*
C����F�莎�������ۑ�@��12

�P�D�������^�ϐ����Ƀf�[�^���P�O�i���͂���
�Q�D�����O�ȉ��̊ԂP�D���J��Ԃ�
�R�D�P���炁�܂ł̊�̍��v���P�O���łP�O�i�o�͂���
https://github.com/jmmedel/C_kadai

 */
int main()
{

    int a=0,i,b=0;
    while(a<=0)
        scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2!=0)
            b+=i;
    }

    printf("%10d",b);



    return 0;
}
