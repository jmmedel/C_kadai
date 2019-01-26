#include <stdio.h>
#include <stdlib.h>




/*
CŒ¾Œê”F’èŽŽŒ±Œü‚¯‰Û‘è@–â28


‚PD‚Œ‚‚Ž‚‡Œ^•Ï”‚‚Éƒf[ƒ^‚ð‚P‚Ui“ü—Í‚·‚é
‚QD‚Œ‚‚Ž‚‡Œ^•Ï”‚‚‚É‚‚Æ16i’è”‚O‚O‚†‚†‚O‚O‚†‚†‚Ìƒrƒbƒg‚²‚Æ‚Ì‚w‚n‚q‚ð‘ã“ü‚·‚é
‚RD‚Ps–Ú‚É‚‚ð‚R‚QŒ…‚Å‚Qio—Í‚·‚é
‚SD‚Qs–Ú‚É‚‚‚ð‚R‚QŒ…‚Å‚Qio—Í‚·‚é

*/
int main()
{


    int i;
    long a,b;
    scanf("%lx",&a);
    b=a^0x00ff00ff;
    for(i=31;i>=0;i--)
    {
    printf("%ld",((a>>i)&1));
    }

    printf("\n");
    for(i=31;i>=0; i--)
    {
    printf("%ld",((b>>i)&1));

    }



}
