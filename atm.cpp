#include<bits/stdc++.h>
using namespace std;
int main()
{
    int amt;
    float bal;
    cin >> amt >> bal;
    if(amt % 5 == 0 && amt <= bal - 0.5)
    {
        bal = bal - amt - 0.5;
    }
    cout << fixed << setprecision(2) << bal << endl;
    return 0;
}