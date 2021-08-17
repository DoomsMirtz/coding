#include<stdio.h>
int main()
{
    int n,i;
    float neg=0,pos=0,zero=0;
    int arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        pos++;
        else if(arr[i]<0)
        neg++;
        else
        zero++;
    }
    printf("%0.6f\n%0.6f\n%0.6f",pos/n,neg/n,zero/n);
    return 0;
}