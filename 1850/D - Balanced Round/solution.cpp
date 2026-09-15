#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n,k; cin>>n>>k;
    vector<int> arr(n);
    for(auto &x:arr) cin>>x;
    sort(arr.begin() , arr.end());
    int count = 1;
    int len = 1;
    for(int i=1;i<n;i++){
        if(arr[i] - arr[i-1] <= k){
            count++;
        }else{
            count = 1;
        }
        len = max(len , count);
    }
    cout<<n-len<<endl;
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