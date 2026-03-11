#include <iostream>
using namespace std;

// Desafio de calcular a area do circulo!
// Usuario digitar o raio da cincurferencia 
// PI * raio * raio 

int main(){

    double pi = 3.1415;
    double raio;
    
    cout << "Informe o raio da cincurferencia: " << endl;
    cin >> raio;

    int calculo = pi * raio * raio;

    cout << "Resultado do calculo " << calculo;

    return 0;
}