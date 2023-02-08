#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod=1e9+7;

int bin(int x,int a[],int n){
    int st=0,en=n-1,ans=-1;
    while(st<=en){
        int mid=(st+en)/2;
        if(a[mid]>=x) {
            ans=mid;
            en=mid-1;
        }
        else st=mid+1;
    }
    return ans;
}

void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    while(k--){
        int x;
        cin>>x;
        int ans=bin(x,a,n);
        cout<<(ans==-1?n+1:ans+1)<<"\n";
    }
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