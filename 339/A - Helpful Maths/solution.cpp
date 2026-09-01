#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    vector<char> digit;
 
    for (char c : s) {
        if (c != '+') {
            digit.push_back(c);
        }
    }
 
    sort(digit.begin(), digit.end());
 
    for (int i = 0; i < digit.size(); i++) {
        cout << digit[i];
        if (i != digit.size() - 1)
            cout << "+";
    }
 
    return 0;
}