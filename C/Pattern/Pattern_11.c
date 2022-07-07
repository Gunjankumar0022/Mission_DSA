/*
    Sample Output :-  5 4 3 2 1 1 2 3 4 5
                      5 4 3 2 * * 2 3 4 5 
                      5 4 3 * * * * 3 4 5 
                      5 4 * * * * * * 4 5
                      5 * * * * * * * * 5   
*/

#include <stdio.h>
int main()
{
    int i,j,k,m,n;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d ",j);
        }
        for(k=1;k<i;k++)
        {
            printf("* ");
        }
        for(m=1;m<i;m++)
        {
            printf("* ");
        }
        for(n=i;n<=5;n++)
        {
            printf("%d ",n);
        }
        printf("\n");
    }
    return(0);
}