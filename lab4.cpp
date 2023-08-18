#include <iostream>
using namespace std;
const int INF = 1000000000;
// Defining the Infinity value

// Function to apply Floyd-Warshall algorithm
void floydWarshall(int vertex, int adjacency_matrix[][4])
{
    // Iterate over all vertices as intermediate nodes
    for (int k = 0; k < vertex; k++)
    {
        // For each pair of vertices (i, j), check if going through vertex k provides a shorter path
        for (int i = 0; i < vertex; i++)
        {
            for (int j = 0; j < vertex; j++)
            {
                // Relax the distance from i to j by allowing vertex k as an intermediate vertex
                // Consider which one is better, going through vertex k or the previous value
                adjacency_matrix[i][j] = min(adjacency_matrix[i][j], adjacency_matrix[i][k] + adjacency_matrix[k][j]);
            }
        }
    }

    // Pretty print the graph
    // o/d means the leftmost row is the origin vertex
    // and the topmost column as destination vertex
    cout << "o/d";
    for (int i = 0; i < vertex; i++)
    {
        cout << '\t' << i + 1;
    }
    cout << endl;

    //printing the Adjacency Matrix
    for (int i = 0; i < vertex; i++)
    {
        cout << i + 1;
        for (int j = 0; j < vertex; j++)
        {
            cout << '\t' << adjacency_matrix[i][j];
        }
        cout << endl;
    }
}

int main()
{
    // Number of vertices in the graph
    int vertex = 4;

    /*
    input is given as adjacency matrix,
    input represents this undirected graph
    A--1--B
    |    /
    3   /
    |  1
    | /
    C--2--D
    should set infinite value for each pair of vertex that has no edge
    */

    // The adjacency matrix representing the graph
    int adjacency_matrix[4][4] = {
        {0, 5, INF, 10},
        {INF, 0, 3, INF},
        {INF, INF, 0, 1},
        {INF, INF, INF, 0}};

    // Find the shortest paths using Floyd-Warshall algorithm by call the function
    floydWarshall(vertex, adjacency_matrix);

    return 0;
}
