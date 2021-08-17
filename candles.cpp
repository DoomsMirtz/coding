#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,a[n],max=INT_MIN,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
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
    cout<<count;
    return 0;
}
