#include <stdio.h>
#include <stdlib.h>



/*
C����F�莎�������ۑ�@��16
3�Ԗڂ̕ϐ����g�킸��2�̐������ւ��܂��B
3�Ԗڂ̕ϐ����g�p������2�̐�������������ɂ́A
2�̈�ʓI�ȕ��@������܂��B

1. + ��  -


 */
 int main()
{
int a=10, b=20;
printf("�X���b�v�O a=%d b=%d",a,b);
a=a+b;//a=30 (10+20)
b=a-b;//b=10 (30-20)
a=a-b;//a=20 (30-10)
printf("\n������ a=%d b=%d",a,b);
return 0;
}
