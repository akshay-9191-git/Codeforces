#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
void solve() {
    int n,m; cin>>n>>m;
    vector<int> arr(n+1,0);
    for(int i=0;i<m;i++){
        int u,v; cin>>u>>v;
        arr[u]++; arr[v]++;
    }
    int mini = *min_element(arr.begin()+1 , arr.end());
    int maxi = *max_element(arr.begin() , arr.end());
    if(mini == 0) cout<<"Brain Melt"<<endl;
    else if (m == n-1 && maxi == n-1) cout<<2<<endl;
    else cout<<"Many"<<endl;
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