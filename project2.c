#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    sum=sum+i;
    printf("The sum of the series is %d",sum);
    return 0;
}
