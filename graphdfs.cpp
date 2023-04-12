#include<bits/stdc++.h>
using namespace std;

class graph{
    int V;
    vector<vector<int>> adj;

    public:

    graph(int V){
        this->V = V;
        adj.resize(V);
    }
     
    void addedge(int u ,int v){
         adj[u].push_back(v);
         adj[v].push_back(u);
    }

    void dfs(int s,vector<bool> &visited ,vector<int> &ans2){
        visited[s] = true;
        ans2.push_back(s);

        for(auto x:adj[s]){
            if(!visited[x]){
                dfs(x,visited,ans2);
            }
        }
    }

};

int main(){
   
    graph g(7);

    g.addedge(0,1);
    g.addedge(0,3);
    g.addedge(1,2);
    g.addedge(2,4);
    g.addedge(3,2);
    g.addedge(2,5);
    g.addedge(1,6);
    
    vector<bool> visited(7+1,false);
    vector<int> ans;
    for(int i = 0 ;i<7;i++){
        if(!visited[i]){
            g.dfs(i,visited,ans);
        }
    }
    cout<<endl;
    cout<<"dfs of graph"<<endl;
    for(auto it:ans){
        cout<<it<<" ";
    }


    return 0;
}