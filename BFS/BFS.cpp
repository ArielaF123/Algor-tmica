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

    // Método BFS
    void BFS(int start) {
        vector<bool> visited(V, false); // Crea un vector para marcar los vértices visitados
        queue<int> q; // Crea una cola para el recorrido BFS
        visited[start] = true; // Marca el vértice de inicio como visitado
        q.push(start); // Agrega el vértice de inicio a la cola

        cout << "BFS traversal starting from vertex " << start << ": ";

        while (!q.empty()) { // Mientras la cola no esté vacía
            int u = q.front(); // Obtiene el vértice de la parte delantera de la cola
            q.pop(); // Elimina el vértice de la parte delantera de la cola
            cout << u << " "; // Imprime el vértice actual

            // Recorre todos los vértices adyacentes al vértice actual
            for (int v : adj[u]) {
                if (!visited[v]) { // Si el vértice adyacente no ha sido visitado
                    visited[v] = true; // Marca el vértice como visitado
                    q.push(v); // Agrega el vértice a la cola
                }
            }
        }

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

    // Realizar el recorrido BFS desde el vértice 0
    g.BFS(0);

    return 0; 
}

//BFS traversal starting from vertex 0: 0 1 2 3 4 