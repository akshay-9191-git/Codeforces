#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int last = 1;
    int sum = 0;
    int i=1;
    while(last <= n){
        last += i;
        sum = last;
         n -= sum;
         i++;
    }
    cout<<i-1<<endl;
}