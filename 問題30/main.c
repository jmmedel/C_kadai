#include <stdio.h>
#include <stdlib.h>



/*

C����F�莎�������ۑ�@��30

�P�D�����������^�Őێ��ł̉��x���󂯎��A�؎��ł̉��x�������������^�ŕԂ��֐��������쐬����iF=9/5�EC+32�j
�Q�D�ێ��ł̉��x����͂���
�R�D�֐�������p���ĉ؎��ł̉��x�����߂ď����`���ŏo�͂���

*/
float cf(float);
int main()
{


    float sesshi,kashi;
    scanf("%f",&sesshi);
    kashi=cf(sesshi);
    printf("%f",kashi);


}


float cf (float sesshi)
{
    float kashi;
    kashi =(9.0/5.0) * sesshi + 32;
    return(kashi);

}


}
