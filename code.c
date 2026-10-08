#include<stdio.h>
int main()
{
    int n,i;
    int sum = 0 ;
    printf("enter a positive number : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum+=1;
    
    }
    printf("sum of the first %d number is:%d\n",n,sum); 
    return 0;
}