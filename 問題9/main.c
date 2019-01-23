#include <stdio.h>
#include <stdlib.h>

/*
CŒ¾Œê”F’èŽŽŒ±Œü‚¯‰Û‘è@–â9

‚PD‚‰‚Ž‚”Œ^•Ï”‚‚Éƒf[ƒ^‚ð‚P‚Oi“ü—Í‚·‚é
‚QD‚‚ª‚W‚OˆÈã‚Å‚ ‚ê‚Îf‚`f‚ðo—Í‚·‚é
‚RD‚‚ª‚U‚OˆÈã‚W‚O–¢–ž‚Å‚ ‚ê‚Îf‚af‚ðo—Í‚·‚é
‚SD‚‚ª‚S‚OˆÈã‚U‚O–¢–ž‚Å‚ ‚ê‚Îf‚bf‚ðo—Í‚·‚é
‚TD‚‚ª‚Q‚OˆÈã‚S‚O–¢–ž‚Å‚ ‚ê‚Îf‚cf‚ðo—Í‚·‚é
‚UD‚‚ª‚Q‚O–¢–ž‚Å‚ ‚ê‚Îf‚df‚ðo—Í‚·‚é
https://github.com/jmmedel/C_kadai

*/
int main()
{
     int a;
    scanf("%d",&a);
    if(a>=80)
        printf("A");

    else if (a>=60)
        printf("B");

    else if (a>=40)
        printf("C");
    else if (a>=20)
        printf("D");
    else
        printf("E");

    return 0;
}
