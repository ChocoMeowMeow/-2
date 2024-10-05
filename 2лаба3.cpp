#include <iostream>
#include <string>
using namespace std;
int main(){
    for (int i=0; i<10; i++){
        cout << i << " * 7 =" << i*7 << endl;
    }  
    int x;
    cin>>x;
    for (int i=0; i<10; i++){
        cout << i << " * " << x << " = " << i*x << endl;
    } 
}