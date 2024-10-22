#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n;
    cin>>n;
    string s;
    cin>>s;
    
    set<char>st;
    for(int i=0;i<s.length();i++)st.insert(s[i]);
    vector<char>v;
    for(auto i:st)v.push_back(i);
    
    int k=v.size();
    unordered_map<char,char>mp;
    for(int i=0;i<k;i++)mp[v[i]]=v[k-i-1];
    for(auto it:s)cout<<mp[it];
    cout<<"\n";
    
}
int main()
{
   long long int ts;
   cin>>ts;
   while(ts--)
   solve();
    
}
