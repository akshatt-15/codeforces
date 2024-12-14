#include<bits/stdc++.h>
#define ll long long
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
        ll n;
        cin>>n;
        int len=0;
        for(int i=1;i<=1000;i++)
        {
            if(n%i==0)
            {
                len++;
            }
            else
            {
                break;
            }
        }
        cout<<len<<endl;
    }
    return 0;
}
