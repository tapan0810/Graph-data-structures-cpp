#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Graph{

    public:
        unordered_map<int, vector<pair<int,int>>> adjList;

        void addEdge(int u, int v,int wt,bool direction){

            if(direction == 1){
                //directed edge : u->v
                //u -> (v,wt)

                adjList[u].push_back(make_pair(v,wt));
            }
            else{
                //undirected edge : u -- v
                //u -> (v,wt) and v -> (u,wt)

                adjList[u].push_back(make_pair(v,wt));
                adjList[v].push_back(make_pair(u,wt));
            }
        }

        void printAdjList(){
            //i.first -> int
            //i.second -> vector<pairr<int,int>>

           for(auto i : adjList){
                cout << i.first <<":";
                cout<<"{ ";

                for(auto it: i.second){
                    //it.first -> v
                    //it.second -> wt

                    cout<<"("<<it.first<<","<<it.second<<"), ";
                }

                cout<<"}"<<endl;
            }
        }
    
};

int main(){
    Graph g;

   
    g.addEdge(0,1,5,0);
    g.addEdge(1,2,3,0);
    g.addEdge(2,3,7,0);
    g.addEdge(3,4,2,0);

    g.printAdjList();
    return 0;
}