#include <bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
bool solve(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(gcd(arr[i],arr[j])<=2) return true;
        }
    }
    return false;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
     int t;
     cin>>t;
     while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(solve(arr,n)) cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }    
}
