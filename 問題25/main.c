#include <stdio.h>
#include <stdlib.h>



/*


C����F�莎�������ۑ�@��25

�P�D�������^�ϐ����Ƀf�[�^���P�O�i���͂���
�Q�D�����P�U���łQ�i�o�͂���

*/
int main()
{

    int a,i;
    scanf("%d",&a);
    for(i =15,i>=0;i--;)
    {
    printf("%d",((a>>i)&0X0001));

    }

}
