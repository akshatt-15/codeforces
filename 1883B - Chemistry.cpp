#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int odd=0;
        unordered_map<char,int>mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        for(auto x:mp)
        {
            int a=x.second;
            if(a%2!=0)odd++;
        }
        if(odd>k+1)cout<<"no"<<endl;
        else
        cout<<"yes"<<endl;
    }
    return 0;
}
