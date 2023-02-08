#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
const int mod=1e9+7;

bool canplace(int dist,int n,int stall[],int cows){
   int lastpos=stall[0],cnt=1;
   for(int i=1;i<n;i++){
      if(stall[i]-lastpos>=dist){
         cnt++;
         lastpos=stall[i];
      }
   }
   return cnt>=cows?1:0;
}

void solve(){
   int n,k;
   cin>>n>>k;
   int stall[n];
   for(int i=0;i<n;i++)
      cin>>stall[i];
   sort(stall,stall+n);
   int st=0,en=1e9;
   while(st<=en){
      int mid=(st+en)/2;
      if(canplace(mid,n,stall,k)) st=mid+1;
      else en=mid-1;
   }
   // cout<<st<<" "<<en<<" "<<canplace(st,n,stall,k)<<"\n";
   
   cout<<en<<"\n"; 

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
    // cin>>t;
    // pre();
    for(int tc=1;tc<=t;tc++)
    solve();
    return 0;
}