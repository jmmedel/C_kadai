#include <stdio.h>
#include <stdlib.h>



/*


C����F�莎�������ۑ�@��29

�P�D�������^�Œ�ӂƍ������󂯎��A�O�p�`�̖ʐς��������^�ŕԂ��֐����������쐬����
�Q�D��ӂƍ������P�O�i���͂���
�R�D�֐���������p���Ėʐς����߂ĂP�O�i�o�͂���


*/
int tri(int,int);
int main()
{

int hen,takasa,menseki;
scanf("%d%d",&hen,&takasa);
menseki = tri(hen,takasa);
printf("%d",menseki);


}

int tri(int hen,int takasa)
{
    return(hen* takasa/2);

}


