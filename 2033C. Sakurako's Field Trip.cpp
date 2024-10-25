#include<bits/stdc++.h>
using namespace std;
  
 
 
int main() {
    ios:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;cin >> t;
while(t--) {
    int n;
   cin >> n;
int a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n/2; i++)
        if (a[i] == a[i - 1] || a[n - i + 1] == a[n - i + 2])
            swap(a[i], a[n - i + 1]);
            
    int ans = 0;
    for (int i = 1; i < n; i++) {
        
        if (a[i] == a[i + 1])
            ans++;
    }
    cout << ans << '\n';
}}
