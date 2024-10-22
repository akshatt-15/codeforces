#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s="";
    map<char,int>mp;
    char c='a';
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            s.push_back(c);
            mp[c]++;
            c++;
        }
        else
        {
            for(auto it:mp)
            {
                if(it.second==x)
                {
                    s.push_back(it.first);
                    mp[it.first]++;
                    break;
                }
            }
        }
    }
    cout<<s<<endl;
}
int main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
    solve();
}
