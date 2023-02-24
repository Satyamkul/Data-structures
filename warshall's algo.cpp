#include <iostream>

using namespace std;

// A function to print the adjacency matrix
void printMatrix(int **matrix, int numVertices)
{
    cout << "The transitive closure matrix is: " << endl;
    for (int i = 0; i < numVertices; i++)
    {
        for (int j = 0; j < numVertices; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to compute the transitive closure using Warshall's algorithm
void transitiveClosure(int **matrix, int numVertices)
{
    for (int k = 0; k < numVertices; k++)
    {
        for (int i = 0; i < numVertices; i++)
        {
            for (int j = 0; j < numVertices; j++)
            {
                if (matrix[i][k] && matrix[k][j])
                {
                    matrix[i][j] = 1;
                }
            }
        }
    }
}

// Driver code
int main()
{
    int numVertices = 4;
    int **matrix = new int *[numVertices];
    for (int i = 0; i < numVertices; i++)
    {
        matrix[i] = new int[numVertices];
        for (int j = 0; j < numVertices; j++)
        {
            cin >> matrix[i][j];
        }
    }

    transitiveClosure(matrix, numVertices);
    printMatrix(matrix, numVertices);

    return 0;
}
