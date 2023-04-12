void dfs(int s,vector<bool> &visited ,vector<int> &ans2){
        visited[s] = true;
        ans2.push_back(s);

        for(auto x:adj[s]){
            if(!visited[x]){
                dfs(x,visited,ans2);
            }
        }
    }