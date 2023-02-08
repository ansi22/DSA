#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back

const int max_sz=4e5+7;
const int mod=1e9+7;
const int inf=2e18;

void solve(){
      string s;
      cin>>s;
      int n=s.length();
      if(s[0]=='B'||s[n-1]=='A') {
            cout<<"NO\n";return;
      }
      int a=0,b=0;
      for(int i=0;i<n;i++){
            if(s[i]=='A') a++;
            else b++;
            if(b>a) {
                  cout<<"NO\n";return;
            }
      }
      cout<<"YES\n";
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