#include <iostream>
using namespace std;
#include <string>
 
 
int main(){
    string s;
    int n;
    cin>>n;
    cin>>s;
    int count =0;
    int decount = 0;
    for(char c:s){
        if(c == 'A'){
            count++;
        }else{
            decount++;
        }
    }
    if(count>decount){
        cout<<"Anton";
 
    }else if(decount>count){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
}