#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int cnt1 = 0, cnt2 = 0;

    // Count lowercase and uppercase characters
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            cnt1++;  // Count of lowercase letters
        } 
        else {
            cnt2++;  // Count of uppercase letters
        }
    }

    string ans = "";

    // Convert the string based on the counts
    if (cnt1<cnt2) {
        
        for (int i = 0; i < s.length(); i++) {
            ans += toupper(s[i]);
        }
    }else {
       
             for (int i = 0; i < s.length(); i++) {
            ans += tolower(s[i]);
        }
        
    }

    cout << ans;
    return 0;
}
