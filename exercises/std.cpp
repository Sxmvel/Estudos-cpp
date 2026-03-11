#include <iostream>
using namespace std;


// sdt: Scope Resolution operator 
int main(){

    std::cout<<"Good Morning!"<< std::endl; // Sem declaração do std
    cout<<"Good Morning!"<< endl; // Com declaração do std -> using nameSpace.
    return 0; 
}