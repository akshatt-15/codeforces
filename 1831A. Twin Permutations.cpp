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
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>b(n);
        int maxi=n+1;
        for(int i=0;i<n;i++)
        {
            b[i]=maxi-a[i];
        }
        for(auto it:b)
        {
            cout<<it<<" ";
        }
    }
    return 0;
}
