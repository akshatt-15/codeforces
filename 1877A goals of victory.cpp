#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long sum=0;
        for(int i=0;i<n-1;i++)
        {
            long long temp;
            cin>>temp;
            sum+=temp;
        }
        cout<<-(sum)<<endl;
    }
    return 0;
}
