#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x , y , k;
        cin>>x>>y>>k;
        long long count = 0;
        long long d = y-x;
        long long special = min(k , max(0LL , d-x+1));
        for(long long i=0;i<special;i++){
            count += d%(x+i);
        }
        count += (k-special)*d;
        cout<<count<<endl;
    }
}