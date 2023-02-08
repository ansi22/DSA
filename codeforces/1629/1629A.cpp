// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
    
    int n,k,tempo=0;
    cin>>n>>k;
    int a[n],b[n];
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    for(int i=0;i<n;i++){
    	v.pb(make_pair(a[i],b[i]));
    }
    sort(v.begin(),v.end());
    for(auto x: v){
    	if(x.first<=k)
    	k+=x.second;
    }
    cout<<k<<"\n";
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