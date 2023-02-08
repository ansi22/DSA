/*-------------------------------------Bipartite-----------------------------------------*/
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> side(n,-1);
        bool isbipartite=1;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(side[i]==-1){
                q.push(i);
                side[0]=0;
                while(!q.empty()){
                    int v=q.front();
                    q.pop();
                    for(int u: graph[v]){
                        if(side[u]==-1){
                            side[u]=side[v]^1;
                            q.push(u);
                        }
                        else{
                            isbipartite&=side[u]!=side[v];
                        }
                    }
                }
            }
        }
        return isbipartite;
    }
};
