#include<iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int number;
        cin >> number;
        
        // Check if the number is even or odd
        if (number % 2 == 0) {
            cout << "Sakurako\n";  // If even, output "Sakurako"
        } else {
            cout << "Kosuke\n";    // If odd, output "Kosuke"
        }
    }
    
    return 0;
}
