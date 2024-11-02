#include<bits/stdc++.h>
using namespace std;

void checkAndUpdate1100Set(const string& s, set<int>& patternIndices, int pos) {
    if (pos >= 0 && pos + 3 < s.size()) {
        if (s.substr(pos, 4) == "1100") {
            patternIndices.insert(pos);
        } else {
            patternIndices.erase(pos);
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int q;
        cin >> q;

        set<int> patternIndices;
        for (int i = 0; i + 3 < s.size(); ++i) {
            if (s.substr(i, 4) == "1100") {
                patternIndices.insert(i);
            }
        }

        while (q--) {
            int i, v;
            cin >> i >> v;
            --i;

            if (s[i] - '0' != v) {
                for (int j = i - 3; j <= i; ++j) {
                    checkAndUpdate1100Set(s, patternIndices, j);
                }

                s[i] = v + '0';

                for (int j = i - 3; j <= i; ++j) {
                    checkAndUpdate1100Set(s, patternIndices, j);
                }
            }

            cout << (patternIndices.empty() ? "NO" : "YES") << '\n';
        }
    }

    return 0;
}
