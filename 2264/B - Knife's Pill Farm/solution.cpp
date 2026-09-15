#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        vector<long long> arr(n);
        for(auto &x : arr) cin>>x;
        priority_queue<long long> pq;
        long long sum = 0 ;
        long long ans = LLONG_MIN;
        for(int i=0;i<n;i++){
            if(pq.size() == k-1){
                ans = max(ans , 1LL*k*arr[i]-sum);
            }
            pq.push(arr[i]);
            sum += arr[i];
 
            if(pq.size()>k-1){
                sum -= pq.top();
                pq.pop();
            }
        }
        cout<<ans<<endl;
 
    }
}