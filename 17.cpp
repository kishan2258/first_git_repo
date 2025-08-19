#include <iostream>
using namespace std;

int sum_of_digi(int n){
    int digisum = 0;
    int digi = 0;
    while(n>0){
        digi = n%10;
        n = n/10;
        digisum += digi;
    }
   
    return digisum;
}
int main() {
    int v = sum_of_digi(123456789);
    cout<<v<<endl;
    return 0;
}