// असाध्य ते साध्य । करिता सायास । कारण अभ्यास |
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int


void solve(){
   
   int n,ans=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   for(int i=0;i<n;i++) {
   	   vector<int> tempo;
   	 for(int j=i;j<n;j++){
   	    tempo.pb(a[j]);
   	    ans+=tempo.size();
   	    for(int k=0;k<tempo.size();k++)
   	    	if(tempo[k]==0)
   	    		ans++;
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