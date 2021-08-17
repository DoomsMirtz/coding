#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
int main()
{
    int i,j,n,arr[100][100],d1=0,d2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
            d1 += arr[i][j];
            if(i==n-j-1)
            d2 += arr[i][j];
        }
    }
    printf("%d",abs(d1-d2));
    return 0;
}