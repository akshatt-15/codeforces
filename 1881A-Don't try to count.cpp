#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;  
        string s1, s2;
        cin >> s1 >> s2;

        int cnt = 0;
        for (int i = 0; i < 6; i++) {
            size_t res = s1.find(s2);  
            if (res != string::npos) {
                cout << cnt << endl;   
                break;
            }
            cnt++;      
            s1 += s1;   

            if (i == 5) {  
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}