#include <iostream>
#include <vector>

using namespace std;

// A structure to represent a node in the adjacency list
struct Node
{
    int dest;
    Node *next;
};

// A structure to represent a list of nodes
struct List
{
    Node *head;
};

// A structure to represent the graph
class Graph
{
private:
    int numVertices;
    vector<List> adjList;

public:
    // Constructor
    Graph(int numVertices)
    {
        this->numVertices = numVertices;
        adjList.resize(numVertices);
        for (int i = 0; i < numVertices; i++)
        {
            adjList[i].head = nullptr;
        }
    }

    // Function to add an edge to the graph
    void addEdge(int src, int dest)
    {
        // Add edge from src to dest
        Node *newNode = new Node;
        newNode->dest = dest;
        newNode->next = adjList[src].head;
        adjList[src].head = newNode;

        // Add edge from dest to src
        newNode = new Node;
        newNode->dest = src;
        newNode->next = adjList[dest].head;
        adjList[dest].head = newNode;
    }

    // Function to print the graph
    void printGraph()
    {
        for (int i = 0; i < numVertices; i++)
        {
            cout << "Adjacency list of vertex " << i << ": ";
            Node *temp = adjList[i].head;
            while (temp != nullptr)
            {
                cout << temp->dest << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

// Driver code
int main()
{
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
