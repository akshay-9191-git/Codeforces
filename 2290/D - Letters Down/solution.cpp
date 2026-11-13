#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n ; string s;
     cin>>n>>s;
    set<int> st;
    for(int i=0;i<n/2;i++){
        int x = min(s[i] , s[n-i-1]) + 1;
        int y = max(s[i] , s[n-i-1]);
        for(int j=x;j<=y;j++){
            st.insert(j);
        }
    }
    cout<<st.size()<<endl;
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