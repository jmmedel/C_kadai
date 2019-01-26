#include <stdio.h>
#include <stdlib.h>




/*

CŒ¾Œê”F’èŒ±Œü‚¯‰Û‘è@–â31

‚PDintŒ^‚ÅŠÔ‚Æ•ª‚Æ•b‚ğó‚¯æ‚èA‘•b”‚ğlongŒ^‚Å•Ô‚·ŠÖ”sec‚ğì¬‚·‚é
‚QDŠÔ‚Æ•ª‚Æ•b‚ğ‚P‚Oi“ü—Í‚·‚é
‚RDŠÖ”‚“‚…‚ƒ‚ğ—p‚¢‚Ä‘•b”‚ğ‹‚ß‚Ä‚P‚Oio—Í‚·‚é

*/
long sec(int,int,int);
int main()
{
    int h,m,s;
    long sums;
    scanf("%d%d%d",&h,&m,&s);
    sums=sec(h,m,s);;
    printf("%ld",sums);

}

long sec(int h, int m , int s)
{
 long sums;
 sums = h*3600L+m*60L+s;
 return(sums);

}

