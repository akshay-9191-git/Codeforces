#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
int cost(string s , char c){
    int left = 0; 
    int right = s.size()-1;
    int count = 0;
    while(left < right){
        if(s[left] != s[right] && (s[left] == c || s[right] == c)){
            count++;
        }else if(s[left] != s[right]){
            count +=2;
        }
        left++;
        right--;
    }
    return count;
}
void solve() {
    int n ; char c; cin>>n>>c;
    string s; cin>>s;
    int x = cost(s , c);
    cout<<x<<endl;
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