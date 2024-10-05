#include <iostream>
#include<string>
using namespace std;
int main(){
    int x;
    int y;
    int z;
    cin>>x;
    cin>>y;
    cin>>z;

    if (x%2==1 && y%2==1){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    if ((x<20 && y>=20) || (x>=20 && y<20)){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    if (x==0 || y==0){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    if (x<0 && y<0 && z<0){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    if ((x%5==0 && y%5!=0 && z%5!=0) || (x%5!=0 && y%5==0 && z%5!=0) || (x%5!=0 && y%5!=0 && z%5==0)){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    if (x>100 || y>100 || z>100){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }


}
