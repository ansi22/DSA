#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    
  int n,b,x,y;
  cin>>n>>b>>x>>y;
  int tempo=0,ans=0;
  for(int i=0;i<=n;i++){
  	if(tempo+x<=b){
  		ans+=tempo;
  		tempo+=x;
  	}
  	else if(tempo+x>b){
  		ans+=tempo;
  		tempo-=y;
  	}
  }
  cout<<ans<<"\n";
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