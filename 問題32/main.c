#include <stdio.h>
#include <stdlib.h>



/*
C����F�莎�������ۑ�@��32

�P�D�������^�ŔN���󂯎��A���邤�N�ł���΂P�A���N�ł���΂O��Ԃ��֐������������쐬����i���邤�N�́A
�S�Ŋ���؂�āA�P�O�O�ł͊���؂ꂸ�A�������S�O�O�ł͊���؂�Ă��悢�A�Ƃ����N�ł��j
�Q�D�N���P�O�i���͂���
�R�D�֐�����������p���āA���邤�N�ł���΁u���邤�N�v�A���N�ł���΁u���N�v�Əo�͂���

*/
int main()
{


   int year;

    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
            if ( year%400 == 0)
                printf("%d ���邤�N.", year);
            else
                printf("%d ���N.", year);
        }
        else
            printf("%d ���邤�N.", year );
    }
    else
        printf("%d ���N.", year);



}
