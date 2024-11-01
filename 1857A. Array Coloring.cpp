#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     int arr[n];
     int sum=0;
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
         sum+=arr[i];
         
     }
    //  int sum1=0,sum2=0,index=0;
    //  for(int i=0;i<n;i++)
    //  {
    //      sum1+=arr[i];
    //      if(sum1==6)
    //      {
    //          index=i;
    //          break;
    //          }
    //  }
    //  for(int i=index;index<n;index++)
    //  {
    //      sum2+=arr[index];
    //  }
    //  if(sum1==6 && sum2==18)
    //  {
    //      cout<<"yes"<<endl;
    //  }
    //  else
    //  {
    //      cout<<"no"<<endl;
    //  }
    if(sum%2==0)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    }
    return 0;
}
