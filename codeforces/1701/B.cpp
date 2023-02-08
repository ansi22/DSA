#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<"\n"<<1<<"\n";
    }
    else if(n==2){
        cout<<2<<"\n";
        cout<<1<<" "<<2<<"\n";
    }
    else{
    cout<<2<<"\n";
    bool vis[n+1]={0};
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            int x=i;
            while(x<=n){
                if(vis[x]==0)
                cout<<x<<" ";
                vis[x]=1;
                x*=2; 
            }
        }
    }
    }

}

void pre(){
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
     // pre();
     for(int tc=1;tc<=t;tc++)
     solve();
     return 0;
}
