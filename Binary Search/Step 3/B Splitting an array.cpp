#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
const int mod=1e9+7;

bool check(int mid,int a[],int n,int k){
   int cnt=0;
   int s=0;
   for(int i=0;i<n;i++){
      if(a[i]>mid) return 0;
      s+=a[i];
      if(s>mid){
         cnt++;
         s=a[i];
      }
   }
   cnt++;
   if(cnt<=k) return 1;
   return 0;
}

void solve(){
   
   int n,k;
   cin>>n>>k;
   int a[n],s=0;
   for(int i=0;i<n;i++){
      cin>>a[i];
      s+=a[i];
   }
   int maxi=*max_element(a,a+n);
   int st=maxi;
   int en=s;
   int ans=0;
   while(st<=en){
      int mid=(st+en)/2;
      if(check(mid,a,n,k)){
         ans=mid;
         en=mid-1;
      }
      else st=mid+1;
   }
   cout<<ans<<"\n";
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
    for(int tc=1;tc<=t;tc++)
    solve();
    return 0;
}