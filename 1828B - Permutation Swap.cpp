#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int diff=0,ans=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==i+1)continue;
       else
       {
           diff=abs(arr[i]-(i+1));
           ans=gcd(diff,ans);
       }
   }
   cout<<ans<<endl;
  }

}
