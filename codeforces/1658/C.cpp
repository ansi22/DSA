#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
  
  int n;
  cin>>n;
  vector<int> c(n);
  int one=0;
  for(int i=0;i<n;i++){
   cin>>c[i];
   if(c[i]==1) one++;
  }
  if(one!=1){
   cout<<"NO\n";
   return;
  }
  int pos=0;
  for(int i=0;i<n;i++)
   if(c[i]==1){
      pos=i;
      break;
   }
   rotate(c.begin(),c.begin()+pos,c.end());
   for(int i=0;i<n-1;i++){
      if(c[i+1]-c[i]>1){
         cout<<"NO\n";
         return;
      }
   }
   cout<<"YES\n";
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
   while(t--)
   solve();
   return 0;
}