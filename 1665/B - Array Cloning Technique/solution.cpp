#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    long long n; cin>>n;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    map<ll, ll> mp;
    for(auto x:a){
        mp[x]++;
    }
    ll freq = 0;
    for(auto i:mp){
        freq = max(freq , i.second);
    }
    ll operations = 0;
    while(freq < n){
        operations++;
        if(freq * 2 <= n){
            operations += freq;
            freq = freq*2;
        }else{
            operations += n - freq;
            freq = n;
 
        }
    }
    cout<<operations<<endl;
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