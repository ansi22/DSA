// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
    
   int n,ans=0;
   cin>>n;
   map<int, int> mp;
   for(int i=0;i<n;i++){
     int x;
     cin>>x;
     mp[abs(x)]++;
   }
   for(auto x: mp){
    if(x.second>=2){
        if(x.first==0) ans+=1;
        else ans+=2;
    }
    else ans++;
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

