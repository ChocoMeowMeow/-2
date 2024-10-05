#include <iostream>
#include <string>
#include <cmath>
using namespace std;
using byte = unsigned char;
int main(){
    pair <byte, byte> positionA;
    cin >> positionA.first >> positionA.second;
    pair <byte, byte> positionB;
    cin >> positionB.first >> positionB.second;

    if (positionA.first==positionB.first || positionA.second==positionB.second){
        cout << "Ладья на позиции A угрожает фигуре на позиции B" << endl;
    } else{
        cout << "Ладья на позиции A не угрожает фигуре на позиции B" << endl;
    }


    if (abs(positionA.first-positionB.first) == abs(positionA.second-positionB.second)){
        cout << "Слон на позиции A угрожает фигуре на позиции B" << endl;
    } else{
        cout << "Слон на позиции A не угрожает фигуре на позиции B" << endl;
    }


    if (abs(positionA.first-positionB.first)<=1 && abs(positionA.second-positionB.second)<=1){
        cout << "Король на позиции A угрожает фигуре на позиции B" << endl;
    } else{
        cout << "Король на позиции A не угрожает фигуре на позиции B" << endl;
    }


    if (positionA.first==positionB.first || positionA.second==positionB.second || abs(positionA.first-positionB.first) == abs(positionA.second-positionB.second)){
        cout << "Ферзь на позиции A угрожает фигуре на позиции B" << endl;
    } else{
        cout << "Ферзь на позиции A не угрожает фигуре на позиции B" << endl;
    }


    if ((positionA.first==2) && (positionA.second==positionB.second) && (positionB.first-positionA.first==1)){
        cout << "Пешка на позиции A может попасть на позицию B" << endl;
    } else if ((positionA.second==positionB.second) && (positionB.first-positionA.first==1 || positionB.first-positionA.first==2)){
        cout << "Пешка на позиции A может попасть на позицию B" << endl;
    } else{
        cout << "Пешка на позиции A не может попасть на позицию B" << endl;
    }


    if (positionB.first-positionA.first==1 && positionB.second-positionA.second==1){
        cout << "Пешка на позиции A угрожает фигуре на позиции B" << endl;
    } else{
        cout << "Пешка на позиции A не угрожает фигуре на позиции B" << endl;
    }

}