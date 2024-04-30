#include<bits/stdc++.h>
using namespace std;

class Graph { // Definición de la clase Graph
private:
    int V; // Número de vértices
    vector<vector<int>> adj; // Lista de adyacencia

public:
    Graph(int vertices) : V(vertices) { // Constructor de la clase
        adj.resize(V); // Inicializa el tamaño del vector de listas de adyacencia
    }

    // Método para agregar una arista al grafo
    void addEdge(int u, int v) {
        adj[u].push_back(v); // Agrega v a la lista de adyacencia de u
        adj[v].push_back(u); // Agrega u a la lista de adyacencia de v (para grafos no dirigidos)
    }
};

int main() { // Función principal
    // Creación de un grafo con 5 vértices
    Graph g(5);

    // Agregar algunas aristas
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);

    return 0; 
}