#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Graph {
    int V; 
    vector<vector<int>> adj; // Adjacency list

public:
    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    void DFS(int start) {
        vector<bool> visited(V, false);
        stack<int> s;

        s.push(start);
        visited[start] = true;

        while (!s.empty()) {
            int node = s.top();
            s.pop();
            cout << node << " ";

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    s.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }
};

int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);
    g.addEdge(5, 4);
    g.addEdge(5, 1);

    cout << "DFS Traversal DEez Nuttttssss: ";
    g.DFS(0); 

    return 0;
}
