#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t; 
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
 
    
        if (n == 0) {
            cout << 0 << endl;
            continue;
        }
 
    
        long long minBlendRate = min(x, y);
 
        
        long long seconds = (n + minBlendRate - 1) / minBlendRate; 
        
        cout << seconds << endl;
    }
    return 0;
}
