#include <stdio.h>
#include <stdlib.h>



/*

C����F�莎�������ۑ�@��19

C�ԍ����������v���O����Triangle
�A���t�@�x�b�g�̎O�p�`�̂悤�ɁA�����̎O�p�`���������悤��
c�v���O�������������Ƃ��ł��܂��B�O�p�`�̐����͂��܂��܂ȕ��@�ň���ł��܂��B

�͈͂���͂��Ă�������= 5
    1
   121
  12321
 1234321
123454321

*/
int main()
{


    int i,j,k,l,n;
    printf("�͈͂���͂��Ă�������=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=n-i;j++)
    {
    printf(" ");
    }
    for(k=1;k<=i;k++)
    {
    printf("%d",k);
    }
    for(l=i-1;l>=1;l--)
    {
    printf("%d",l);
    }
    printf("\n");
    }
return 0;

}
