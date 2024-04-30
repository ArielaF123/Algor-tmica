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

    // Método DFS recursivo
    void DFSUtil(int v, vector<bool>& visited) {
        visited[v] = true; // Marca el vértice como visitado
        cout << v << " "; // Imprime el vértice actual

        // Recorre todos los vértices adyacentes a este vértice
        for (int i : adj[v]) {
            if (!visited[i]) // Si el vértice adyacente no ha sido visitado, llama recursivamente a DFSUtil
                DFSUtil(i, visited);
        }
    }

    // Método DFS
    void DFS(int start) {
        vector<bool> visited(V, false); // Crea un vector para marcar los vértices visitados
        cout << "DFS traversal starting from vertex " << start << ": ";
        DFSUtil(start, visited); // Llama al método DFSUtil desde el vértice de inicio
        cout << endl;
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

    // Realizar el recorrido DFS desde el vértice 0
    g.DFS(0);

    return 0;
}

//DFS traversal starting from vertex 0: 0 1 3 2 4 