#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(k==1){
        int init=0;
        for(int i=1;i<n-1;i+=2)
            init+=1;
        cout<<init<<"\n";
        return;
    }
    int init=0;
    for(int i=0;i<n;i++){
        if(i==0||i==n-1) continue;
        if(a[i]>a[i+1]+a[i-1])
            init++;
    }
    cout<<init<<"\n";

}

void pre(){
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
