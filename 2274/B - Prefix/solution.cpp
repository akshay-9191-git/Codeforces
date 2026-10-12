#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
 
    ll mx = a[0], mn = a[0];
    ll ans = a[0];
 
    for (int i = 1; i < n; i++) {
        ll big = max(llabs(mx), llabs(mn));
        ans = max(ans, a[i] + big);
 
        ll nmx = a[i] + max({0LL, mx, 2 * mx});
        ll nmn = a[i] + min({0LL, mn, 2 * mn});
        mx = nmx;
        mn = nmn;
    }
    cout << ans << "
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}