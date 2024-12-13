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
        long long a,b,n;
        cin>>a>>b>>n;
      long long ans=b-1;
      long long c=1;
      for(long long i=0;i<n;i++)
      {
          long long x;
          cin>>x;
          ans=ans+min(c+x,a)-1;
      }
      cout<<ans+1<<endl;
    }
    return 0;
}
