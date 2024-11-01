#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,z;
        cin>>x>>y>>z;
        if((z%2==0 && y>=x)||(z%2==1 && y>x))
        {
            cout<<"Second\n";
        }
        else
        {
            cout<<"First\n";
        }
    }
    return 0;
}
