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
    string s;
    cin>>s;

    int streak=1,cnt=1;
    for(int i=0;i<n-1;i++)
    {
      if(s[i+1]==s[i])
      
        streak++;
      
      else
      {
        cnt=max(cnt,streak);
        streak=1;
      }
     }
     cnt=max(cnt,streak);
    cout<<cnt+1<<endl;
  }

}
