#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n; cin>>n;
    vector<int> arr(n);
    for(auto &x:arr) cin>>x;
    int sum = 0;
    for(int x:arr){
        sum += x;
    }
    bool flag = false;
    for(int i=1;i<n-1;i++){
        if(arr[i] >= 2){
            flag = true;
        }
    }
    if(flag){
        cout<<sum-1<<endl;
    }else if(arr[0] >= 2 || arr[n-1] >= 2){
        cout<<sum-(n-1)<<endl;
    }else{
        cout<<-1<<endl;
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