#include <stdio.h>
int main()
{
   int i,j,k=0;
   for(i=1;i<=5;i++)
   {
    for(j=i;j>=i;j--)
    {
        k = k + i;
        printf("%d\t",k);
    }
    printf("\n");
   }
   return(0); 
}