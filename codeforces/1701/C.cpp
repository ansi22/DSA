#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

bool check(int k,int b[],int m,int n){
    int x=0,y=0;
    for(int i=0;i<n;i++){
        int cur=min(b[i],k);
        x+=cur;
        y+=(k-cur)/2;
    }
    return x+y>=m;
}

void solve(){
    int n,m;
    cin>>n>>m;
    int a[m],ans=0;
    for(int i=0;i<m;i++)
        cin>>a[i];
    int b[n+1]={0};
    for(int i=0;i<m;i++){
        b[a[i]-1]++;
    }
    
    int st=0,en=2*m;
    while(st<en){
        int mid=(st+en)/2;
        if(check(mid,b,m,n)) en=mid;
        else st=mid+1;
    }
    cout<<st<<"\n";
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
