#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n ; cin>>n;
    vector<ll> a(n);
    int count = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] == 0) count++;
    }
    bool found = false;
    int left = 0;
    int right = n-1;
    while(a[left ] == 0){
        left++;
    }
    while(a[right] == 0){
        right--;
    }
    for(int i=left ; i<=right;i++){
        if(a[i] == 0){
            found = true;
        }
    }
    if(count == n){
        cout<<0<<endl;
    }else if(!found){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
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