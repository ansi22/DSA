#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;
int dp[200005];


void solve(){
    int n,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    if(n==1){
        if(a[0]>1) cout<<"NO\n";
        else cout<<"YES\n";
        return;
    }
    // for(int i=n-1;i>=0;i--){
    //     // cout<<i<<" ";
    //     if(a[i]-a[i-1]>1) {
    //         cout<<"NO\n";
    //         return;
    //     }
    //     else i--;
    // }
    // cout<<"YES\n";
    if(a[n-1]-a[n-2]<2) cout<<"YES\n";
    else cout<<"NO\n";

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
    cin>>t;
    // pre();
    while(t--)
    solve();
    return 0;
}