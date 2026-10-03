#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n; cin>>n;
    vector<int> arr(n);
    for(auto &x:arr) cin>>x;
    int count = 0;
    for(int i=n-2 ; i>=0;i--){
        while(arr[i] >0 && arr[i] >= arr[i+1] ){
            arr[i] /= 2;
            count++;
        }
 
    }
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i] >= arr[i+1]){
           flag = false;
        }
    }
    if(flag){
        cout<<count<<endl;
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