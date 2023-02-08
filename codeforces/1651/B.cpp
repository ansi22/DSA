#include<bits/stdc++.h>
using namespace std;
#define int long long int

vector<int> g[1000];
int parent[200001];
int dep[1000];
int vis[200001];

void dfs(){
    
   
}


void solve(){
   
    int n;
    cin>>n;
    int x=1;
    vector<int> a;
    while(x<=1000000000){
        a.push_back(x);
        x*=3;
    }
   int tempo=a.size();
   if(n>tempo) cout<<"NO"<<"\n";
   else{
    cout<<"YES"<<"\n";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
   }

}

int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    solve();
    return 0;
}
