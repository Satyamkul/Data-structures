#include <iostream>
using namespace std;
int main() {
   int V = 5; //number of vertices
   int adj[V][V]; //adjacency matrix
   //initialize all values to zero
   for(int i = 0; i < V; i++) {
      for(int j = 0; j < V; j++) {
         adj[i][j] = 0;
      }
   }
   //add edges between vertices
   adj[0][1] = 1;
   adj[1][0] = 1;
   adj[0][4] = 1;
   adj[4][0] = 1;
   adj[2][3] = 1;
   adj[3][2] = 1;
   
   //print the adjacency matrix
   cout << "The adjacency matrix is: \n";
   for(int i = 0; i < V; i++) {
      for(int j = 0; j < V; j++) {
         cout << adj[i][j] << " ";
      }
      cout << "\n";
   }
}