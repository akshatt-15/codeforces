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
        int neg = 0, pos = 0;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(x==1) pos++;
            else neg++;
        }
        int sum = pos-neg, ans = 0;
        if(sum<0) ans = (abs(sum)+1)/2;
        neg-=ans;
        cout<<ans+(neg%2)<<endl;
    }    
}
