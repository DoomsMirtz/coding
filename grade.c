#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int grade[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&grade[i]);
    }
    for(i=0;i<n;i++)
    {
        if(grade[i] >= 38)
        {
            if(grade[i] % 5 == 3)
                grade[i] = grade[i] + 2;
            else if(grade[i] % 5 == 4)
                grade[i] = grade[i] + 1;
        }
        printf("%d\n",grade[i]);
    }
    return 0;
}