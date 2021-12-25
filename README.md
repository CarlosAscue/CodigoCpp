# Algoritmica 

![](https://www.avantel.co/blog/wp-content/uploads/2019/04/11.Qu%C3%A9-es-un-algoritmo-en-programaci%C3%B3n-y-para-qu%C3%A9-sirve.jpg)

```c++
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
```