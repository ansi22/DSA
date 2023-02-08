// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
    
    int n,x,y;
    cin>>n>>x>>y;
    int a[n],s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    if((x+s+y)%2==0) cout<<"Alice\n";
    else cout<<"Bob\n";

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
