#include<bits/stdc++.h>
using namespace std;
int solve(string s)
{
    if(s.size()==1)return 1;
    int i=0,j=s.size()-1;
    while(i<=j)
    {
    if(s[i]==s[j])
    return j-i+1;
    else
    i++,j--;
    }
    return 0;
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;
        cin>>s;
        cout<<solve(s);
        cout<<endl;
        
    }
    return 0;
}
