#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char num = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          cout<<num<<"    ";
          num++;
          }
        cout<<endl;
    }
    cout<<"After pattern : "<<num<<endl;
    
    return 0;
}