#include <stdio.h>
#include <stdlib.h>




/*


C����F�莎�������ۑ�@��36

�P�D�������^�P�����z����󂯎��A�d�n�e�܂Ńf�[�^���A
�z��̐擪���珇�ɂP�O�i���͂��A
���͂��ꂽ�f�[�^�̌����������^�ŕԂ��֐������������쐬����
�Q�D�������^�P�����z��ƃf�[�^�̌����������^�Ŏ󂯎��A
�z��̐擪����f�[�^�̌����A
�e�v�f�����v�����l���������^�ŕԂ��֐������������쐬����
�R�D�������^�P�����z�񂁁i�v�f�W�O�j
�Ɋ֐�����������p���ăf�[�^����͂���
�S�D���͂��ꂽ�f�[�^�̍��v���֐�
����������p���ĂP�O�i�o�͂���

*/
int print_Array(int arr[] , int size){

       int  sum = 0;
       for(int i = 0; i < size; i++)
       {
           /* code */
           sum  = sum + arr[i];
       }
       return sum;
 }

void get_Array(int arr[] ,int size){


    for(int i = 0; i < size; i++)
    {
        /* code */
         printf("��������͂�������");
         scanf("%d",&arr[i]);
    }

}
void main(void)
{
    int Array[80];
    int size = 0;
    int sum ;
    printf("�z��̃T�C�Y���͂�������");
    scanf("%d",&size);
    get_Array(Array,size);
    sum =  print_Array(Array,size);
    printf("���v�@���@%d",sum);

}
