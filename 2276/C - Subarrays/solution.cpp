#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n, k; cin>>n>>k;
    vector<int> arr(n+1);
    arr[0] = 0;
    for(int i=1;i<=n;i++){
        ll x ; cin>>x;
        arr[i] = (arr[i-1]+x) %k;
    }
    vector<int> ans(k , 0);
    ll count = 0;
    for(int i= k+1 ; i<=n;i++){
        int l = i-k-1;
        ans[arr[l]]++;
        count += ans[arr[i]];
    }
    cout<<count<<"
";
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