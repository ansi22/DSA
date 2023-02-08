#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<iomanip>


using namespace std;
#define int long long int

void solve(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
      cin>>a[i];
   if(is_sorted(a,a+n)){
      cout<<0<<"\n";return;
   }
   int pos=n;
   for(int i=n-1;i>=0;i--){
      if(i!=0&&a[i-1]>a[i]) {
         pos=i;
         break;
      } 
   }
  
   map<int,int> mp;
   for(int i=0;i<pos;i++){
      mp[a[i]]++;
   }
   int last=n;
   for(int i=pos;i<n;i++){
      if(mp.find(a[i])!=mp.end()) {
         a[i]=0;
         last=i;
      }
   }
   
   
   if(last<n){
      for(int i=last;i>=pos;i--){
        if(a[i]!=0) mp[a[i]]++;
      }
   }
   
   int ans=mp.size();
   cout<<ans<<"\n";
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
