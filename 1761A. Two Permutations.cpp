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
        int n,a,b;
        cin>>n>>a>>b;
        if(n==a && n==b)cout<<"yes"<<endl;
        else
        {
            if(n-a-b>1)cout<<"yes"<<endl;
            else
            cout<<"no"<<endl;
        }
    }
    return 0;
}