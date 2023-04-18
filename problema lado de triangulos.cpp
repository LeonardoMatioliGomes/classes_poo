#include <iostream>
#include <cmath>

//definindo uma classe e variaveis
class Triangulo {
private:
    double a, b, c;
public:
    Triangulo(double lado1, double lado2, double lado3) {
        a= lado1;
        b= lado2;
        c= lado3;
    }
    //calculadora para medir os lados do X e Y
    double calculadoraArea() {
    double p= (a+b+c) / 2.0;
    double area = std::sqrt(p*(p-a)*(p-b)*(p-c));
    return area;
    }
    
    double getLado1() { return a; }
    double getLado2() { return b; }
    double getLado3() { return c; }
};

int main () {
    //interface para o usuario digitar os valores de X
    double a, b, c;
    std::cout << "digite as medidas dos lados do triangulo X: ";
    std::cin >> a >> b >> c;
    Triangulo X(a, b, c);
    
    //interface para o usuario digitar os valores de Y
    std::cout << "digite as medidas do triangulo Y: ";
    std::cin >> a >> b >> c;
    Triangulo Y(a, b, c);
    
    //pega as variaveis e manda para a calculadora
    double areaX = X.calculadoraArea();
    double areaY = Y.calculadoraArea();
    
    //caso X seja maior que Y
    if (areaX > areaY) {
        std::cout << "triangulo X tem a maior area." << std::endl;
    }
    //caso Y seja maior que X
    else if (areaY > areaX) {
        std::cout << "triangulo X tem a maior area." << std::endl;
    }
    //caso ambas sejam iguais
    else {
        std::cout << "ambos os triangulos tem a mesma area." << std::endl;
    }
    
    return 0;
}