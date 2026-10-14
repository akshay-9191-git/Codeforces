#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    string s ; cin>>s;
    bool flag1 = false; 
    bool flag2 = false;
    for(int i=1;i<s.size()-1;i++){
        if(s[i-1] == s[i] && s[i] == s[i+1]){
            flag1 = true;
        }
        if(s[i-1] != s[i] && s[i] != s[i+1]){
            flag2 = true;
        }
    }
    cout<<1+flag1+flag2<<endl;
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