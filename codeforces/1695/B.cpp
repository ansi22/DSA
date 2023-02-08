#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void solve(){
     int n;
     cin>>n;
     int a[n],sum=0,mini=inf,ind;
     for(int i=0;i<n;i++){
          cin>>a[i];
          if(mini>a[i]){
               mini=a[i];
               ind=i;
          }
     }
     if(n%2!=0) cout<<"Mike\n";
     else {
          if(ind%2==0) cout<<"Joe\n";
          else cout<<"Mike\n";
     }
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
     
     for(int tc=1;tc<=t;tc++)
     solve();
     return 0;
}
