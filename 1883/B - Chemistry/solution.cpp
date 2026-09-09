#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
 
        vector<int> freq(26);
        for(char ch:s){
            freq[ch-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freq[i] % 2 == 0){
                freq[i] = 0;
            }else if(freq[i] % 2 == 1 && freq[i]>2){
                freq[i] %= 2;
            }
        }
        int count = 0;
 
        for(int i=0;i<26;i++){
            if(freq[i] == 1){
                count++;
            }
        }
        if(count != 0 && count-k > 1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
 
    }
}