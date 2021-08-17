#include<stdio.h>
int main()
{
    int i,x1,x2,v1,v2,count=0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    int d1 = x1, d2 = x2;
    if (x1 + v1 == x2 + v2) 
    {
        count = 1;
    }
    for (i = 0; count == 0 && d1 <= d2; i++) 
    {
        d1 = d1 + v1;
        d2 = d2 + v2;
        
        if (d1 == d2) 
        {
            count = 1;
            break;
        }
    }
    
    if (count == 1) 
    {
        printf("YES");
    }
    else 
    {
        printf("NO");
    }
    return 0;
}