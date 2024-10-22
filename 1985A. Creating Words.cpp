#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
     string s,t;
     cin>>s>>t;
     int i=0;
     while(i<1)
     {
         swap(s[i],t[i]);
         i++;
     }
     cout<<s<<" "<<t<<endl;
    }
    return 0;
}
