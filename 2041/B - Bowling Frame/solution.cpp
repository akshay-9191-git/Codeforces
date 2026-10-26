#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int w, b; cin>>w>>b;
    ll ans;
    for(ll i=0; i*(i+1)/2 <= w+b; i++){
        ans = i;
    }
    cout<<ans<<endl;
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