#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
     int tc;
     cin>>tc;
     while(tc--){
        int n; cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
          arr[i]%=2;
      }
      int op=0,streak=1;
      for(int i=0;i<n;i++)
      {
          if(arr[i]==arr[i+1])
          {
            streak++;  
          }
          else
          {
              op+=streak-1;
              streak=1;
          }
      }
      op+=streak-1;
      cout<<op<<endl;
      cout<<endl;
    }    
}
