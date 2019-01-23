#include <stdio.h>
#include <stdlib.h>



/*

CŒ¾Œê”F’èŽŽŒ±Œü‚¯‰Û‘è@–â10
‚PD‚P‚O‚O‚©‚ç‚P‚Ü‚Å‚Ì®”‚ð‚TŒ…‚Å‚P‚Oio—Í‚·‚é
‚QD®”‚TŒÂ‚¸‚Â‚Å‰üs‚·‚é
https://github.com/jmmedel/C_kadai
*/

int main()
{

    int i;
    for(i = 100; i>0; i--){
    if((i!=100)&&(i%5==0))
    printf("\n");
    printf("%5d",i);
    }


    return 0;
}
