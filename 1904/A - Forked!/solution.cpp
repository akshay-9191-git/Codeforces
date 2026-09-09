#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a , b;
        cin>>a>>b;
        int k1 , k2;
        cin>>k1>>k2;
        int q1,q2;
        cin>>q1>>q2;
 
        int dr[] = {-1 , 1 , -1 , 1};
        int dc[] = {-1 , 1 , 1 , -1};
 
        set<pair<int , int>> king;
        set<pair<int,int>> queen;
        for(int i=0;i<4;i++){
            king.insert({k1+dr[i]*a , k2+dc[i]*b});
            king.insert({k1+dr[i]*b , k2+dc[i]*a});
 
            queen.insert({q1+dr[i]*a , q2+dc[i]*b});
            queen.insert({q1+dr[i]*b ,q2+dc[i]*a});
        }
 
        int count = 0;
        for(auto it:king){
            if(queen.find(it) != queen.end()){
                count++;
            }
        }
        cout<<count<<endl;
 
 
    }
}