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
            printf("%d\t",j);
        }
        for(k=1;k<i;k++)
        {
            printf("*\t");
        }
        for(m=1;m<i;m++)
        {
            printf("*\t");
        }
        for(n=i;n<=5;n++)
        {
            printf("%d\t",n);
        }
        printf("\n");
    }
    return(0);
}