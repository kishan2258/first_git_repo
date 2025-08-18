#include <iostream>
using namespace std;

int main() {
    int n=4;
    int m= n - 1;
    for(int i=0;i<m;i++){
        //space
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        
        {
        //if(i != m-1){
          //  cout<<"*";
        //}
        //space
        for(int j=(2*i)-1;j>=0;j--){
            cout<<".";
        }
        cout<<"*";
    }
        cout<<endl;
    }
    return 0;
}