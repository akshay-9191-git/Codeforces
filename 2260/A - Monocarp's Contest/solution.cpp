#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int countzero = 0;
        vector<int> arr(n);
        for(auto &x:arr) {
            cin>>x;
            if(x == 0){
                countzero++;
            }
        }
        if(countzero<2){
            cout<<"-1"<<endl;
        }else{
            cout<<arr[0]+arr[n-1]<<endl;
        }
        
 
    }
}