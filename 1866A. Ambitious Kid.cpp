#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin>>n;
    int arr[n];
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mini=min(mini,abs(arr[i]));
    }
    int operations=0;
    // if(mini==0)
    // {
    //     cout<<operations;
    // }
    while(mini!=0)
    {
        if(mini>0)
        {
            mini--;
            operations++;
        }
        else 
        {
            mini++;
            operations++;
        }
    }
cout<<operations<<endl;
    return 0;
}
