/* Sample Output :- 1
                    2   3
                    4   5   6
                    7   8   9   10
                    11  12  13  14  15
*/


#include <stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            k = k + 1;
            printf("%d\t",k);
        }
        printf("\n");
    }
    return(0);
}