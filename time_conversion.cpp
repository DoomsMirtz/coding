#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int i,hours;
    string time;
    cin >> time;
    hours = ((time[0] - '0') * 10) + (time[1] - '0');
    if(time[8] == 'P' && time[9] == 'M' && hours == 12) 
        cout << to_string(hours);
    else if (time[8] == 'P' && time[9] == 'M') 
        cout << to_string(hours + 12);
    else if(time[8]=='A'&&time[9]=='M'&&hours==12) 
        cout << "00";
    else 
        cout << time[0] << time[1];
    for(i=2;i<8;i++)
        cout<<time[i];
    cout<<endl;
    return 0;
}