#include<stdio.h>
int main()
{
    int x1,x2,v1,v2;
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    for(int i=0;i<10;i++)
    {
        if((x1 + v1) == (x2 + v2))
        {
            printf("YES");
            x1 = x1 + v1;
            x2 = x2 + v2;
            break;
        }
        else
        {
            if((x1 + v1) == (x2 + v2))
            {
                printf("YES");
                break;
            }
            else 
            {
                printf("NO");
                break;
            }
            break;
        }
    }
    return 0;
}