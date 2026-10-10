#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    string s , t;
    cin>>s>>t;
    int n = s.size();
    int m = t.size();
 
    vector<int> freq(26 , 0);
    for(int i=0;i<m;i++){
        freq[t[i] - 'A']++;
    }
    for(int i=n-1; i>= 0; i--){
        if(freq[s[i]-'A'] > 0){
            freq[s[i]-'A']--;
        }else{
            s[i] = '1';
        }
    }
    string ans = "";
    for(int i=0;i<n;i++){
        if(s[i] != '1'){
            ans += s[i];
        }
    }
    if(ans == t){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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