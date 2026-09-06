#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
 
 
int main(){
    string s;
    cin>>s;
    transform(s.begin(), s.begin()+1, s.begin(), ::toupper);
    cout<<s;
}