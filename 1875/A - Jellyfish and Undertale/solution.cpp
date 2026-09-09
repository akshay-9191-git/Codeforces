#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;cin>>t;
    while(t--){
        long long a , b, c;
        cin>>a>>b>>c;
        vector<long long> arr(c);
        for(auto &x:arr) cin>>x;
        long long ans = b;
        for(long long x:arr){
            ans += min(x , a-1);
        }
        cout<<ans<<endl;
 
    }
}