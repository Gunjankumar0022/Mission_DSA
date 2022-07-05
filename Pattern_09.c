#include <stdio.h>
int main()
{
   int i,j,k=0;
   for(i=1;i<=5;i++)
   {
    for(j=i;j<=i*5;j++)
    {
        k = k + 1;
        printf("%d\t",k);
    }
    printf("\n");
   }
   return(0); 
}