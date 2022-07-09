/* Sample Output :- 1   
                    2   3
                    3   4   5
                    4   5   6   7
                    5   6   7   8   9
*/


#include <stdio.h>
int main()
{
   int i,j,k;
   for(i=1;i<=5;i++)
   {
    for(j=0;j<i;j++)
    {
        k = i + j;
        printf("%d\t",k);
    }
    printf("\n");
   }
   return(0); 
}