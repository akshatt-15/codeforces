#include<bits/stdc++.h>
using namespace std;
int main() {
    ios:: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    map<int, int> mp;
while(t--) {
    mp.clear();
    int n;
cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            mp[i - j] = min(mp[i - j], a[i][j]);
        }

    long long ans = 0;
    for(auto it:mp) {
        ans -= it.second;
    }
    cout << ans <<endl;
}
return 0;
}
