#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back

const int max_sz=4e5+7;
const int mod=1e9+7;
const int inf=2e18;

void solve(){
      int n;
      cin>>n;
      if(n>=1900) cout<<"Division 1\n";
      else if(n>=1600&&n<=1899) cout<<"Division 2\n";
      else if(n>=1400&&n<=1599) cout<<"Division 3\n";
      else if(n<=1399) cout<<"Division 4\n";     
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