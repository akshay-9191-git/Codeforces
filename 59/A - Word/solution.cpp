#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
 
int main(){
    string s;
    cin>>s;
    int big_count = 0;
    int small_count = 0;
     for(char ch: s){
        if(ch -'a' < 0 ){
           big_count++;
        }else{
        small_count++;
        }
    }
    if(big_count > small_count){
        transform(s.begin() , s.end() , s.begin() , ::toupper);
    }else{
        transform(s.begin() , s.end() , s.begin() , ::tolower);
    }
    cout<<s;
 
 
}