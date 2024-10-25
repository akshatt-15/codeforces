#include<bits/stdc++.h>
using namespace std;
int n, m;
map<int, bool> mp;
int main() {
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
while(t--) {
    mp.clear();
    cin >> n;
    int a[n];
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (mp[sum] || sum == 0) {
            ans++;
            mp.clear();
            sum = 0;
        }
        else
            mp[sum] = 1;
    }
    cout << ans << '\n';
}}
