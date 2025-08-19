#include <iostream>
using namespace std;
 
int pri(int n){
    for(int i=2;i<n;i++){
        if(n%i != 0){
            cout<<"Prime No.";
            break;
        } else {
            cout<<"non-prime no.";
            break;
        }
    }
    return 0;
}

int main() {
    pri(8);
    cout<<endl;
    return 0;
}