#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int countzero = 0;
        int countone = 0;
        vector<int> arr(n);
        for(auto &x:arr) {
            cin>>x;
            if(x == 0){
                countzero++;
            }else{
                countone++;
            }
        }
        int count = 0;
        bool flag = false;
        int left = 0;
        int right = n-1;
        if(countzero < 2){
                cout<<"-1"<<endl;
            }else if(arr[left] != 0 && arr[right] != 0){
            cout<<"2"<<endl;
        }else if(arr[left] == 0 && arr[right] == 0){
            cout<<"0"<<endl;
        }else{
            cout<<"1"<<endl;
        }
 
    }
}