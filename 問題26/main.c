#include <stdio.h>
#include <stdlib.h>



/*
CŒ¾Œê”F’èŽŽŒ±Œü‚¯‰Û‘è@–â26

‚PD‚‰‚Ž‚”Œ^•Ï”‚‚Éƒf[ƒ^‚ð‚P‚Oi“ü—Í‚·‚é
‚QD‚‰‚Ž‚”Œ^•Ï”‚‚‚É‚“à‚Ì‚P‚Å‚ ‚éƒrƒbƒg‚Ì”‚ð‹‚ß‚é
‚RD‚‚‚ð‚P‚Oio—Í‚·‚é

*/
int main()
{


    int a,b=0, cnt,i;
    cnt = sizeof(int);
    cnt = cnt*8-1;
    scanf("%d",&a);
    for(i = cnt; i>=0; i--)
    {
    b+= (a>>i)&i;

    }
    printf("%d",b);



}
