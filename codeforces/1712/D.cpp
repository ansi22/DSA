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
   int n,k;
   cin>>n>>k;
   vector<int> a(n),b(n);

   for(int i=0;i<n;i++){
      cin>>a[i];
      b[i]=a[i];
   }
   sort(b.begin(),b.end());
   int st=0,en=(int)1e9;
   while(st<en){
      int mid=(st+en+1)/2;
      bool found=0;
      for(int i=0;i<n-1;i++){
         int cnt=0;
         if(a[i]<mid) cnt+=1;
         if(a[i+1]<mid) cnt+=1;
         int val=(mid+1)/2;
         cnt+=lower_bound(b.begin(),b.end(),val)-b.begin();
         if(a[i]<val) cnt-=1;
         if(a[i+1]<val) cnt-=1;
         if(cnt<=k) {
            found=1;break;
         }
      }
      if(found) st=st=mid;
      else en=mid-1;
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
