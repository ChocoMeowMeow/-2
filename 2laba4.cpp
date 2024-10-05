#include <iostream>
#include <string>
using namespace std;
int main(){
    int a;
    int b;
    cin >> a;
    cin >> b;
    b = b + 1;
    long s = 1;
    for (int i=8; i<16; i++){
        s = s*i;
    }
    cout << s << endl;

    s = 1;
    for (int i=a; i<21; i++){
        s = s*i;
    }
    cout << s << endl;

    s = 1;
    for (int i=1; i<b; i++){
        s = s*i;
    }
    cout << s << endl;

    s = 1;
    for (int i=a; i<b; i++){
        s = s*i;
    }
    cout << s << endl;
}