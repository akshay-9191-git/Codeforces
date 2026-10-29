#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
 
void solve() {
    long long n ; cin>>n;
    long long count = INT_MAX;;
    string s = to_string(n);
    int x = s.size();
    vector<string> end = {"00" , "25" , "50" , "75"};
    for(auto e : end){
        int i = x-1;
        while(i >= 0 && s[i] != e[1]){
            i--;
        }
        if(i < 0) continue;
        i--;
        while(i >= 0 && s[i] != e[0]){
            i--;
        }
        if(i >= 0){
        long long ans = (x-1-i)-1;
        count = min(count , ans);
        }
 
    }
    cout<<count<<endl;
 
 
    
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