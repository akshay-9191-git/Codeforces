#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    string s; cin>>s;
    int n = s.length();
    if(s[0] == s[n-1]){
        cout<<s<<endl;
    }else{
        s[n-1] = s[0];
        cout<<s<<endl;
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