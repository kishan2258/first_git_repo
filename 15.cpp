#include <iostream>
using namespace std;

int even_or_odd(int n) {
    if(n%2 == 0){
        cout<<"EVEN";
    } else{
        cout<<"ODD";
    }
    return n;
}

int main() {
    even_or_odd(22);
    int val = even_or_odd(22);
    cout<<val;
        return 0;

}