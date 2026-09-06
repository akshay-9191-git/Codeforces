#include <iostream>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    int count = 0;
 
    // Count lucky digits (4 and 7)
    while (n > 0) {
        int digit = n % 10;
 
        if (digit == 4 || digit == 7)
            count++;
 
        n /= 10;
    }
 
    // Check if count itself is a lucky number
    if (count == 0) {
        cout << "NO";
        return 0;
    }
 
    int temp = count;
 
    while (temp > 0) {
        int digit = temp % 10;
 
        if (digit != 4 && digit != 7) {
            cout << "NO";
            return 0;
        }
 
        temp /= 10;
    }
 
    cout << "YES";
 
    return 0;
}