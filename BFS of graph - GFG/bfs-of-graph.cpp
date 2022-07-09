// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
void bfs(int node,unordered_map<int,bool> &visited,vector<int> adj[],vector<int>& ans)
{
    queue<int> q;
    q.push(node);
    //ans.push_back(node);
    visited[node]=1;
    while(!q.empty())
    {
        int frontnode=q.front();
        q.pop();
        ans.push_back(frontnode);
        for(auto it:adj[frontnode])
        {
            if(!visited[it])
            {
                q.push(it);
                visited[it]=1;
                //ans.push_back(it);
            }
        }
    }
}
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
    vector<int> ans;
    unordered_map<int,bool> visited;
    bfs(0,visited,adj,ans);
    return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends