
#include <stdio.h>
#include <stdlib.h>



/*

C����F�莎�������ۑ�@��18

C�̊K��v��Fn�̊K��́A���ׂĂ̐��̍~�������̐ςł��B n�̊K���n�I�ŕ\����܂��B�Ⴆ�΁F

5�I = 5 * 4 * 3 * 2 * 1 = 120
3�I = 3 * 2 * 1 = 6

*/
int main()
{
    int i,fact=1,number;
    printf("�ԍ�����͂��Ă��������B ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
      fact=fact*i;
  }
  printf("�̊K�� %d �ł��F %d",number,fact);
    return 0;
}
