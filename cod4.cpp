//Problema 1

#include <iostream>

using namespace std;

int sumar(){
    int num1, num2, r;
    cout << "Numero 1:"; cin >>num1;
    cout << "Numero 2:"; cin >>num2;
    r = num1 + num2;
    return 0;
}

int main(){
    int r;
    r = sumar();
    cout << "La suma es : " << r;
}
