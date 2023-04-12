#include <bits/stdc++.h>
using namespace std;

class graph
{
    int V;
    vector<vector<int>> adj;

public:
    graph(int V)
    {
        this->V = V;
        adj.resize(V);
    }

    void addedge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void bfs(int s, vector<int> &ans)
    {
        vector<bool> vis(V + 1, false);
        queue<int> q;
        q.push(s);
        vis[s] = true;

        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            ans.push_back(u);

            for (auto x : adj[u])
            {
                if (!vis[x])
                {
                    q.push(x);
                    vis[x] = true;
                }
            }
        }
    }
};

int main()
{

    graph g(7);

    g.addedge(0, 1);
    g.addedge(0, 3);
    g.addedge(1, 2);
    g.addedge(2, 4);
    g.addedge(3, 2);
    g.addedge(2, 5);
    g.addedge(1, 6);

    vector<int> ans;
    g.bfs(0, ans);

    cout << "bfs of graph" << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}