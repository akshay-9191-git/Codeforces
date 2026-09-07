#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        int l = -1, r = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                l = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != 0) {
                r = i;
                break;
            }
        }
        if (l == -1) {
            for (int i = 0; i < n; i++) {
                cout << 0 << " ";
            }
            cout << '
';
            continue;
        }
        if (l == r) {
            // Make it 1
            a[l] = 1;
 
            for (int i = 0; i < n; i++) {
                if (a[i] == -1)
                    a[i] = 0;
            }
        }
        else {
            a[l] = 1;
            a[r] = 1;
            for (int i = 0; i < n; i++) {
                if (a[i] == -1)
                    a[i] = 0;
            }
        }
 
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
 
        cout << endl;
    }
 
    return 0;
}