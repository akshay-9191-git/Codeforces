#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    ll n; cin>>n;
    if(n < 4 || n % 2 == 1){
        cout<<-1<<endl;
    }else{
        ll maxi = (n+5)/6;
        ll mini = n/4;
        cout<<maxi<<" "<<mini<<endl;
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