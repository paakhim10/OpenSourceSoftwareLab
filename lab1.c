//This is a code for the solution class for the BFS of a graph.

class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>res;
        queue<int>q;
        q.push(0);
        map<int,int>vis;
        vis[0]=1;
        while(!q.empty()){
            int topp=q.front();
            q.pop();
            res.push_back(topp);
            for(auto child:adj[topp]){
                if(!vis[child]){
                    vis[child]=1;
                    q.push(child);
                }
            }
        }
        return res;
    }
};
