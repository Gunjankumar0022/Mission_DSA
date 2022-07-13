#include <stdio.h>
int sum(int num)
{
    if(num == 1)
    return 1; 
    return num + sum(num - 1);
}
int main()
{
    int num;
    printf("Enter Natural No :- ");
    scanf("%d",&num);
    printf("%d",sum(num));
    return(0);
}