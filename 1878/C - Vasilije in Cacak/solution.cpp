#include <bits/stdc++.h>>
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
        long long n , k ,x;
        cin>>n>>k>>x;
        // formula of maxi and mini lagayenge ek baar normal k sum fir n and n-k sum
        long long min = (k*(k+1))/2;
        long long max = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
        if(x >= min && x <= max){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}