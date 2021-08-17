#include<stdio.h>
void main()
{
    int i,n,sum=0,arr[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    printf("%d",sum);
}