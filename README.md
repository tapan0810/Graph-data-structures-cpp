# Graph Data Structure in C++ 🚀

A complete collection of **Graph Data Structure algorithms**, traversals, and important coding interview questions implemented in **C++**.

This repository contains beginner to advanced graph problems with clean and understandable implementations.

---

# 📚 Topics Covered

## 🔹 Graph Basics
- Introduction to Graphs
- Types of Graphs
  - Directed Graph
  - Undirected Graph
  - Weighted Graph
  - Unweighted Graph
  - Cyclic Graph
  - Acyclic Graph
- Graph Representation
  - Adjacency Matrix
  - Adjacency List

---

# 🔁 Graph Traversals

## ✅ Breadth First Search (BFS)
- BFS Traversal
- BFS using Queue
- Connected Components using BFS

## ✅ Depth First Search (DFS)
- DFS Traversal
- Recursive DFS
- Iterative DFS using Stack

---

# 🌳 Topological Sorting

- Topological Sort using DFS
- Kahn’s Algorithm (BFS)

---

# 🔄 Cycle Detection

## In Undirected Graph
- BFS Method
- DFS Method

## In Directed Graph
- DFS + Recursion Stack
- Kahn’s Algorithm

---

# 🛣️ Shortest Path Algorithms

- Shortest Path in Undirected Graph
- Shortest Path in DAG
- Dijkstra’s Algorithm
- Bellman Ford Algorithm
- Floyd Warshall Algorithm

---

# 🌉 Minimum Spanning Tree (MST)

- Prim’s Algorithm
- Kruskal’s Algorithm
- Disjoint Set Union (DSU)

---

# 🔗 Advanced Graph Algorithms

- Kosaraju’s Algorithm
- Tarjan’s Algorithm
- Strongly Connected Components (SCC)
- Bridges in Graph
- Articulation Points

---

# 🧩 Grid Based Problems

- Number of Islands
- Rotten Oranges
- Flood Fill Algorithm
- Surrounded Regions

---

# 🔥 Important Interview Questions

- Detect Cycle in Graph
- Clone Graph
- Course Schedule
- Bipartite Graph
- Word Ladder
- Alien Dictionary
- Network Delay Time
- Cheapest Flights Within K Stops
- Graph Coloring
- Snake and Ladder Problem

---

# 🛠️ Technologies Used

- Language: **C++**
- STL Used:
  - vector
  - queue
  - stack
  - unordered_map
  - priority_queue
  - set

---

# 📂 Folder Structure

```bash
Graph-DSA/
│
├── BFS/
├── DFS/
├── Cycle Detection/
├── Topological Sort/
├── Shortest Path/
├── MST/
├── SCC/
├── Grid Problems/
└── Important Questions/
```

---

# ▶️ How to Run

## Compile

```bash
g++ filename.cpp -o output
```

## Execute

```bash
./output
```

---

# 💡 Example

## BFS Traversal

```cpp
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {

    vector<int> adj[5];

    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);

    vector<bool> vis(5,false);
    queue<int> q;

    q.push(0);
    vis[0] = true;

    while(!q.empty()) {

        int node = q.front();
        q.pop();

        cout << node << " ";

        for(auto nbr : adj[node]) {
            if(!vis[nbr]) {
                q.push(nbr);
                vis[nbr] = true;
            }
        }
    }
}
```

---

# 🎯 Goals of This Repository

- Strengthen Graph concepts
- Prepare for coding interviews
- Practice DSA systematically
- Build reusable graph templates

---

# ⭐ Contribution

Feel free to contribute by:
- Adding optimized solutions
- Improving code readability
- Adding new graph problems

---

# 📌 Recommended Practice Platforms

- LeetCode
- GeeksforGeeks
- CodeStudio
- HackerRank
- Codeforces

---

# 👨‍💻 Author

**Tapan Ray**

Passionate about:
- Data Structures & Algorithms
- Problem Solving
- Competitive Programming
- Full Stack Development

---

# ⭐ If you found this repository useful, don't forget to star it!
