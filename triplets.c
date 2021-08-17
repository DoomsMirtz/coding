#include<stdio.h>
int main()
{
    int arr[3],brr[3],i,j,a=0,b=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&brr[i]);
    }
    // for(i=0;i<3;i++)
    // {
    //     printf("%d",arr[i]);
    // }
    // for(j=0;j<3;j++)
    // {
    //     printf("%d",brr[i]);
    // }
    for(i=0;i<3;i++)
    {
        if(arr[i]>brr[i])
        {
            a++;
        }
        else if(arr[i]<brr[i])
        {
            b++;
        }
    }
    printf("%d %d",a,b);
}