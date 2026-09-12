#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count = 0;
        string s = "";
        vector<int> arr(n);
        for(auto &x: arr){
            cin>>x;
            if(x == 0){
                count++;
            }
        }
        if(count == 1){
            cout<<"NO"<<endl;
            continue;
        }else{
            cout<<"YES"<<endl;
        }
        bool flag= true;
        for(auto x:arr){
                if(x){
                    s += 'A';
                }else if(flag){
                    s += 'B';
                    flag = false;
                }else{
                    s += 'C';
                }
            }
            cout<<s<<endl;
 
 
 
            
 
        }
 
    }