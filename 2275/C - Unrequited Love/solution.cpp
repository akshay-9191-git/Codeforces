#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void solve() {
    int n; cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
 
    int m = n - 4;
    vector<ll> val(m);
    for (int i = 0; i < m; i++)
        val[i] = a[i] + a[i + 2] - a[i + 4];
 
    map<ll, ll> all[2];
    map<ll, ll> far[2];
    ll ans = 0;
 
    for (int j = 0; j < m; j++) {
        int p = j & 1;
        if (j - 6 >= 0) far[(j - 6) & 1][val[j - 6]]++;
 
        auto it = all[1 - p].find(val[j]);
        if (it != all[1 - p].end()) ans += it->second;
 
        auto it2 = far[p].find(val[j]);
        if (it2 != far[p].end()) ans += it2->second;
 
        all[p][val[j]]++;
    }
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
}