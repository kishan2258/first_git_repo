#include <iostream>
using namespace std;

int com(int n,int r){
    int num=1, dino=1 ,dino2=1;
    int c=1;
    if(r == 1
    ){
        for(int i=1;i<=n;i++){
            c *= i;
        }
    }else {
        for(int i=1;i<=n;i++){
                num *= i;
        }
        for(int i=1;i<=n-r;i++){
                dino *= i;
        }
        for(int i=1;i<=r;i++){
                dino2 *= i;
        }
            c = num/(dino*dino2);
        }
    return c;
}

int main() {
    int val = com(5,4);
    cout<<val<<endl;
    return 0;
}