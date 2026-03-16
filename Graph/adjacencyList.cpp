#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Graph
{
public:
    // Adjacency List container
    unordered_map<int, vector<int>> adjList;

    // direction = 1 -> directed graph
    // direction = 0 -> undirected graph

    void addEdge(int u, int v, bool direction)
    {
        if (direction == 1)
        {
            // directed edge : u ->v
            adjList[u].push_back(v);
        }
        else
        {
            // undirected edge
            // u -- v  == > u <--> v

            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }

    void printAdjList()
    {
        for (auto i : adjList)
        {
            // i.first -> int //node
            // i.second -> vector<int> //neighbour

            cout << i.first << ":";
            cout << "[";
            for (auto it : i.second)
            {
                cout << it << ", ";
            }
            cout << "]" << endl;
        }
    }
};

int main()
{
    Graph g;

    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(2, 3, 0);
    g.addEdge(3, 4, 0);
    g.addEdge(4, 0, 0);

    g.printAdjList();

    return 0;
}