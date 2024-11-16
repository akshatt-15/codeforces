#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(int a,int b, int c, int d){
       if(b>d) return -1;
       int up = d-b;
       int new_a = a+up;
       if(new_a<c) return -1;
       int left = new_a-c;
       return up+left;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
     cin>>t;
     while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<solve(a,b,c,d);
        cout<<endl;
    }    
}
