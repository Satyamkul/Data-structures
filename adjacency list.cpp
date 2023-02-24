#include <iostream>
#include <list>

using namespace std;

// A class to represent the graph
class Graph {
private:
    int numVertices; // number of vertices in the graph
    list<int>* adjList; // adjacency list

public:
    // Constructor
    Graph(int numVertices) {
        this->numVertices = numVertices;
        adjList = new list<int>[numVertices];
    }

    // Function to add an edge to the graph
    void addEdge(int src, int dest) {
        adjList[src].push_back(dest);
        adjList[dest].push_back(src);
    }

    // Function to print the graph
    void printGraph() {
        for (int i = 0; i < numVertices; i++) {
            cout << "Adjacency list of vertex " << i << ": ";
            for (int v : adjList[i]) {
                cout << v << " ";
            }
            cout << endl;
        }
    }
};

// Driver code
int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.printGraph();

    return 0;
}
