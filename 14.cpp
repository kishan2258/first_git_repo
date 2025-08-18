#include <iostream>
using namespace std;

int main() {
    int n = 8;
    int o;
    //top
    for(int i=0;i<n;i++) {
        //spaces n-i-1
         for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
        cout<<"*";

        if(i != 0){
            //spaces 2*i-1
            o = (2*i) - 1;
            for(int j=0;j<o;j++){
            cout<<" ";
            }
            cout<<"*";
        }

        cout<<endl;
    }
    //bottom
    int m = n-1;
    for(int i=0;i<m;i++){
        //spaces
        for(int j=0;j<i+1;j++){
            cout<<" ";
        }

        cout<<"*";
        if(i != m-1){
            //spacess
            for(int j=0;j<(2*(m-1-i))-1;j++){
                cout<<" ";
            }

            cout<<"*";
        }cout<<endl;

    }
    return 0;
}