#include <stdio.h>
int main()
{
    int num,pos,mask,res;
    printf("Enter Number\nEnter Position: ");
    scanf("%d%d",&num,&pos);
    mask = 1 << pos;
    res = num & mask;
    if(res=0)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    return(0);
}