#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n; cin>>n;
    int m =0 ;
    while((1 << m) <= n) m++;
    int size = 1 << m;
 
    vector<int> arr;
    arr.reserve(2*size);
    for(int i=0;i<size;i++){
        int x = i ^ (i >> 1);
        arr.push_back(x);
        arr.push_back(x);
    }
    int k = arr.size()-1;
    cout<<k<<endl;
    for(int i=1; i <= k; i++){
        cout<< (arr[i]^ arr[i-1])<<" 
"[i==k];
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