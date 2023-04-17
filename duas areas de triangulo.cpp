#include <iostream>
#include <math.h>
using namespace std;

//calculadora que vai fazer a area do triangulo
double calculadoraAreaTriangulo(double a, double b, double c) {
    double p = (a + b +c) / 2;
    return sqrt (p* (p - a)* (p-b) * (p-c));
}

int main () {
    double xa, xb, xc, ya, yb, yc;
    
    //interface para usuario colocar as medidas do triangulo X
    cout << "Digite as medidas dos lados do triangulo X (separados com espaço): ";
    cin >> xa >> xb >> xc;
    
    //interface para usuario colocar as medidas do triangulo Y
    cout << "Digite as medids dos lados de triangulo Y (separado com espaço): ";
    cin >> ya >> yb >> yc;
    
    //envia os valores para a calculadora fazer a conta
    double areaX = calculadoraAreaTriangulo (xa, xb, xc);
    double areaY = calculadoraAreaTriangulo (ya, yb, yc);
    
    //interface para usuario mostrando a medida de cada triangulo
    cout <<"area do triangulo X: " << areaX << endl;
    cout <<"area do triangulo Y: " << areaY << endl;
    
    //caso X seja maior que Y
    if (areaX > areaY) {
        cout << "o triangulo X tem a maior area." << endl;
        //caso Y seja maior que X
    } else if (areaY > areaX) {
        cout << "o triangulo Y tem a maior area." << endl;
        //caso ambos sejam iguais
    } else {
        cout << "os triangulos tem a mesma area." << endl;
    }
    
    return 0;
}
    
        
    
    
