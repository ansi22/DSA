// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
    
    int n,k;
    cin>>n>>k;
    map<int,int> mp;
    if(k==0){
        for(int i=0;i<n/2;i++)
            mp[i]=i^(n-1);
    }
    else if(k>0&&k<n-1){
        mp[0]=k^(n-1);
        mp[k]=n-1;
        int j=min(k,k^(n-1));
        for(int i=1;i<n/2;i++){
            if(i!=j)
            mp[i]=i^(n-1);
        }
        
    }
    else if(k==n-1){
        if(n==4) {
            cout<<-1<<"\n";
            return;
        }
        mp[0]=2;
        mp[1]=n-3;
        mp[n-1]=n-2;
        for(int i=3;i<n/2;i++)
            mp[i]=i^(n-1);
    }
    for(auto x: mp)
        cout<<x.first<<" "<<x.second<<"\n";
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