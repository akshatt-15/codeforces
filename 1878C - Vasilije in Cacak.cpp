#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;cin>>t;
    while(t--)
    {
    long long n,k,x;
    cin>>n>>k>>x;
    long long mini=(k*(k+1))/2;
    long long maxi=(k*(2*n+1-k))/2;
    if(x>=mini && x<=maxi)
    cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
    }
    return 0;
}
