#include <iostream>
using namespace std;

int fac(int n){
    int f = 1;
    if(n == 0 || n == 1){
        cout<<1;
    } else {
        for(int i=1;i<=n;i++){
            f *= i;
        }
       
    }
    return f;   
}
int main() {
    int val = fac(4);
    cout<<val<<endl;
    return 0;
}