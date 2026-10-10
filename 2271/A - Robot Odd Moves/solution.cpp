#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int a, b; cin>>a>>b;
    if((a%2) == (b%2)){
        cout<< (b<=a ? a:-1)<<endl;
    }else{
        cout<< (b <= a+1 ? a+1 : -1)<<endl;
    }
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