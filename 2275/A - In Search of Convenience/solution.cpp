#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int a,b,c; cin>>a>>b>>c;
    int x = 0 , y = 0;
    y = b;
    x = a-c;
    cout<<x<<" "<<y<<endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}