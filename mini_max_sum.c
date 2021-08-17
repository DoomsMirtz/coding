#include<stdio.h>
int main()
{
    int i,a[5],min=a[0],max=a[0];
    long int s=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        s = s+a[i];
    }
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%ld %ld",s-max,s-min);
    return 0;
}