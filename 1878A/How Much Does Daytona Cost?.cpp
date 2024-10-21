#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
   int n,k;
   cin>>n>>k;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   unordered_map<int,int>mp;
for(int i=0;i<n;i++)
{
    mp[arr[i]]++;
}
bool flag=false;
for(auto it:mp)
{
    if(it.second>=1 && it.first==k)
    {
        flag=true;
        break;
    }
}
   if(flag==true)
   {
       cout<<"YES"<<endl;
   }
   else
   cout<<"NO"<<endl;
    }
    return 0;
}
