/*-----------------------------UnionFind----------------------------------*/ 
class UnionFind{
    public:
      int parent[1001];
      int sz[1001];
      
      UnionFind(int n){
          for(int i=0;i<n;i++){
              parent[i]=i;
              sz[i]=1;
          }
      }
    
      int find_set(int v){
          if(v==parent[v]) return v;
          return parent[v]=find_set(parent[v]);
      }
    
      void union_sets(int a,int b){
          a=find_set(a);
          b=find_set(b);
          if(a!=b){
              if(sz[a]>sz[b]) swap(a,b);
              parent[b]=a;
              sz[a]+=sz[b];
          }
      }
};
