#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
     int t;
     cin>>t;
     while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
      int maxi=0,cnt=0;
      for(int i=0;i<n;i++)
      {
          if(arr[i]==0){
          cnt++;
          maxi=max(maxi,cnt);
          }
          else{
          cnt=0;
          }
      }
      cout<<maxi<<endl;
    }  
    return 0;
}
