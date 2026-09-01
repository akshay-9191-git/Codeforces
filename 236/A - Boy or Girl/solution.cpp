#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include <unordered_map>
 
int main(){
    string s;
    cin>>s;
    unordered_map<char , int> freq;
    int count = 0;
 
    for(char ch: s){
        if(freq.find(ch) != freq.end()){
            continue;
        }else{
            count++;
            freq[ch] =1;
        }
    }
 
    if(count %2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
}