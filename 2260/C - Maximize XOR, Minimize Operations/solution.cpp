#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
 
        long long s = a+b;
        long long x= 0;
        bool smaller = false;
 
        for(int i=30;i>=0;i--){
            long long p = (1LL<<i);
            if(smaller){
                if(s&p)
                x |= p;
            }else{
                if((a & p) && (s&p)){
                    x |= p;
                }else if((a&p) && !(s&p)){
                    smaller = true;
                }
            }
        }
        cout<<s<<" "<<a-x<<endl;
 
    }
}