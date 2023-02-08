#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    
    for(int i=0;i<n;i++){
        int x=0;
        for(int j=0;j<n;j++){
            if(j==i) continue;
            x^=a[j];
        }
        // cout<<x<<"\n";
        if(x==a[i]){
            cout<<x<<"\n";
            return;
        }
    }
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
