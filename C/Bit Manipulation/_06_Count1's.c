#include <stdio.h>
int main()
{
    int num,count=0;
    printf("Enter Number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        count = count + 1;
        num = num & (num-1);
    }
    printf("%d",count);
    return(0);
}