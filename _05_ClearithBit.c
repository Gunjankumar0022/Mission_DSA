#include <stdio.h>
int main()
{
    int n,p,m,r;
    printf("Enter Number and Position: ");
    scanf("%d %d",&n,&p);
    m = ~(1 << p);
    r = n & m;
    printf("Result=%d",r);
    return(0);
}