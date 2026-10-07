#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n; cin>>n;
    string s; cin>>s;
    vector<bool> done(n+1 , false);
    stack<int> st;
    for(int i=0;i<s.size();i++){
        int doc = i+1;
        if(s[i] == '1'){
            st.push(doc);
        }else if(s[i] == '2'){
            if(st.empty()){
                done[doc] = true;
            }else{
                done[st.top()] = true; st.pop();
            }
        }else{
                done[doc] = true;
        }
    }
    vector<int> ans;
   for(int i=1; i<=n; i++){
    if(!done[i]){
        ans.push_back(i);
    }
   }
   cout<<ans.size()<<endl;
   for(int x:ans){
    cout<<x<<" ";
   }
   cout<<endl;
 
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