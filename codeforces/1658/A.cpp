#include<bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
  
   int n;
   cin>>n;
   string s;
   cin>>s;
   int ans=0;
   int i=0;
   while(i<n){
      if(s[i]=='0'){
         int j=i;
         i++;
         while(i<n&&s[i]!='0') i++;
         if(s[i]=='0'){
            // cout<<i<<" "<<j<<" "<<2-(i-j-1)<<"\n";
            if(i-j<=2) ans+=2-(i-j-1);
         }
         

      }
      else i++;
   } 
   cout<<ans<<"\n";  
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