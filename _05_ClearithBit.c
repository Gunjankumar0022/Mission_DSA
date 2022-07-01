#include <stdio.h>
int main()
{
    int num,pos,mask,res;
    printf("Enter Number and Position: ");
    scanf("%d %d",&num,&pos);
    mask = ~(1 << pos);
    res = num & mask;
    printf("Result=%d",res);
    return(0);
}