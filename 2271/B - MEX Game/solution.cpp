#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n, k; cin>>n>>k;
    vector<int> arr(n+2 , 0);
    for(int i=0;i<n;i++){
        int x ; cin>>x;
        arr[x]++;
    }
    int a = 0;
    while(arr[a] >= 2*k) a++;
    cout<<(arr[a] == 2*k-1? "YES":"NO")<<endl;
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