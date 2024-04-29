#include<bits/stdc++.h>
using namespace std;

int main() { // Función principal
    queue<int> colas; // Declara una cola de enteros llamada 'colas'

    // Enqueue
    colas.push(1); // Agrega el valor 1 a la cola
    colas.push(2); // Agrega el valor 2 a la cola
    colas.push(3); // Agrega el valor 3 a la cola

    // Front
    cout << "Elemento en el frente de la cola: " << colas.front() << endl; // Imprime el valor en el frente de la cola (sin sacarlo)

    // Dequeue
    colas.pop(); // Elimina el primer elemento de la cola
    cout << "Elemento en el frente después de dequeue: " << colas.front() << endl; // Imprime el nuevo valor en el frente de la cola

    // isEmpty
    cout << "La cola está vacía: " << (colas.empty() ? "Sí" : "No") << endl; // Imprime si la cola está vacía o no

    return 0; 
}

//Lo que imprime es:
//Elemento en el frente de la cola: 1
//Elemento en el frente después de dequeue: 2
//La cola está vacía: No