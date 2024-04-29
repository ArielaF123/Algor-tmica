#include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> pila; //Declara una pila llamada "pila"

    // Push - agrega valores
    pila.push(1); //Agrega a la pila el valor 1
    pila.push(2); //Agrega a la pila el valor 2
    pila.push(3); //Agrega a la pila el valor 3

    // Peek - consultar el elemento en la cima de la pila sin sacarlo con el comando top()
    cout << "Elemento en la cima de la pila: " << pila.top() << endl;

    // Pop - elimina el elemento en la cima de la pila utilizando pop()
    pila.pop();
    cout << "Elemento en la cima después de pop: " << pila.top() << endl;

    // isEmpty
    cout << "La pila está vacía: " << (pila.empty() ? "Sí" : "No") << endl; 
    //Imprime si la pila está vacía o no utilizando la función empty(), que devuelve true si la pila está vacía y false en caso contrario.
    
    return 0;
}
//Todo este codigo imprime
//Elemento en la cima de la pila: 3
//Elemento en la cima después de pop: 2
//La pila está vacía: No