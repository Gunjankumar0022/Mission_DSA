#include <stdio.h>
int main()
{
    int n,p,m,r;
    printf("Enter Number\nEnter Position: ");
    scanf("%d%d",&n,&p);
    m = 1 << p;
    r = n & m;
    if(r=0)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    return(0);



}