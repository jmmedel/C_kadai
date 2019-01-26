#include <stdio.h>
#include <stdlib.h>



/*


CŒ¾Œê”F’èŽŽŒ±Œü‚¯‰Û‘è@–â25

‚PD‚‰‚Ž‚”Œ^•Ï”‚‚Éƒf[ƒ^‚ð‚P‚Oi“ü—Í‚·‚é
‚QD‚‚ð‚P‚UŒ…‚Å‚Qio—Í‚·‚é

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
