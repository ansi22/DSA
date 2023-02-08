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

// const int mod=1e9+7;
// const int inf=2e18;

void solve(){
     int n,m;
     cin>>n>>m;
     int a[n];
     for(int i=0;i<n;i++)
          cin>>a[i];
     string s(m,'B');
     for(int i=0;i<n;i++){
          int ind1=min(a[i],(m+1-a[i]));
          int ind2=max(a[i],(m+1-a[i]));
          if(s[ind1-1]=='A') s[ind2-1]='A';
          else s[ind1-1]='A';
     }
     cout<<s<<"\n";
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
