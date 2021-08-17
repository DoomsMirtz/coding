#include<stdio.h>
int main()
{
    int i,n,a[100],max=0,count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}