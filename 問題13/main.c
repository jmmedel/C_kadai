#include <stdio.h>
#include <stdlib.h>


/*

C����F�莎�������ۑ�@��13

���[�v���Z�q�ƎZ�p���Z�q���g�p���āAc�̐��l���t�ɂ��邱�Ƃ��ł��܂��B
���̃v���O�����ł́A���[�U�[����̓��͂Ƃ��Ĕԍ����擾���A
���̔ԍ������ɖ߂��܂��B�^����ꂽ�����t�ɂ���ȒP��c�̗�����Ă݂܂��傤�B

https://github.com/jmmedel/C_kadai
*/


 int main()
{
int n, reverse=0, rem;
printf("�ԍ�����͂��Ă��������B");
  scanf("%d", &n);
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
  printf("�t���F %d",reverse);

return 0;
}
