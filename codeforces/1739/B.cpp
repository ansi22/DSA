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

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

void solve(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
          cin>>a[i];
     }
     for(int i=1;i<n;i++){
          if(a[i]>a[i-1]||a[i]==0) {
               a[i]+=a[i-1];
          }
          else {
               cout<<-1<<"\n";return ;
          }
     }
     for(int i=0;i<n;i++) cout<<a[i]<<" ";
     cout<<"\n";
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
