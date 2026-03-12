#include <iostream>
using namespace std;


// String é Classe ->
int main(){

    // tipo primitivo não possui comportamento. Pois int não é uma classe é um primitivo 
    int x = 0; 

    // Fortemente tipada 
    string title = "Mr. ";
    string name("Jonh");
    string end(10, '!');


    // Quantidade de caracteres do name.
    cout << name.size() << endl;

    //Pegar a ultima letra da classe
    cout << name.back() << endl;

    cout << name[1] << endl;
    cout << end << endl;

    // String concatenation (concatenação)
    cout << title + name << endl;

    name += " Doe";

    name.append(" Souza");
    cout << name << endl;
    
    


    return 0;
}