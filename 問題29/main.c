#include <stdio.h>
#include <stdlib.h>



/*


CŒ¾Œê”F’èŒ±Œü‚¯‰Û‘è@–â29

‚PD‚‰‚‚”Œ^‚Å’ê•Ó‚Æ‚‚³‚ğó‚¯æ‚èAOŠpŒ`‚Ì–ÊÏ‚ğ‚‰‚‚”Œ^‚Å•Ô‚·ŠÖ”‚”‚’‚‰‚ğì¬‚·‚é
‚QD’ê•Ó‚Æ‚‚³‚ğ‚P‚Oi“ü—Í‚·‚é
‚RDŠÖ”‚”‚’‚‰‚ğ—p‚¢‚Ä–ÊÏ‚ğ‹‚ß‚Ä‚P‚Oio—Í‚·‚é


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


