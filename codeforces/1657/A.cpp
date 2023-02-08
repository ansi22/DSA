#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    
   int x,y;
   cin>>x>>y;

   if(x==0&&y==0) cout<<0<<"\n";
   else {
      int tempo=0;
      tempo=pow(x,2)+pow(y,2);
       if (ceil((double)sqrt(tempo))==floor((double)sqrt(tempo))) cout<<1<<"\n";
       else cout<<2<<"\n";
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
   while(t--)
   solve();
   return 0;
}