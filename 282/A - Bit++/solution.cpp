#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string s;
    int x = 0;
    for(int i=0;i<n;i++){
        cin>>s;
        if( s == "++X" || s == "X++"){
        x = x+1;
    }else{
        x = x-1;
    }
    }
 
    
    cout<<x;
}