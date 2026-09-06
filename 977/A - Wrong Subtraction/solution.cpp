#include <iostream>
using namespace std;
 
int lastdig(int n){
    n =n%10;
    return n;
}
 
int main(){
    int n,k;
    cin>>n>>k;
 
    while(k>0){
        if(lastdig(n) == 0){
            n = n/10;
        }else{
            n = n -1;
        }
        k--;
    }
    cout<<n;
}