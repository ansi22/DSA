// असाध्य ते साध्य । करिता सायास । कारण अभ्यास 
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){

     int n,cnt=0,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    if(n==3){
        if(a[1]%2==0) cout<<1<<"\n";
        else cout<<-1<<"\n";
        return;
    }
    bool ok=1;
    for(int i=1;i<n-1;i++){
        ans+=(a[i]+1)/2;
        ok&=(a[i]==1);
    }
   if(ok) cout<<-1<<"\n";
   else cout<<ans<<"\n";
   
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

