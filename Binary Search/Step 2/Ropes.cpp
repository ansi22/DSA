#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
const int mod=1e9+7;

int check(int a[],double len,int n){
    int piece=0;
    for(int i=0;i<n;i++){
        piece+=floor(a[i]/len);
    }
    return piece;
}

void solve(){
    
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    double st=0,en=1e9,ans;
    int tempo=1000;
    while(tempo--){
        double mid=(st+en)/2;
        int pieces=check(a,mid,n);
        if(pieces>=k){
            ans=mid;
            st=mid;
        }
        else en=mid;
    }
    cout<<fixed<<setprecision(20)<<ans<<"\n";
}

void pre(){}
int32_t main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t=1;
    // cin>>t;
    // pre();
    while(t--)
    solve();
    return 0;
}