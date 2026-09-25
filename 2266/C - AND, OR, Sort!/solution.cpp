#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n ; cin>>n;
   string s;
    cin>>s;
    int count = 0;
    for(char ch : s){
        if(ch == '0') count++;
    }
    if(s[0] == '1'){
        cout<<count<<endl;
        return;
    }
    int one = 0; 
    int ans = n;
    int zero = count;
    for(char ch:s){
        if(ch == '1') one++;
        else zero--;
        ans = min(ans , one+zero);
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