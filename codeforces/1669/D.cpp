#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back

const int max_sz=4e5+7;
const int mod=1e9+7;
const int inf=2e18;

void solve(){
      int n,cnt=0;
      cin>>n;
      string s;
      cin>>s;
      for(int i=0;i<n;i++){
            if(s[i]=='W') cnt++;
      }
      if(cnt==n){
            cout<<"YES\n";
            return;
      }
      vector<string> check;
      for(int i=0;i<n;i++){
            string p="";
            while(i<n&&s[i]=='W') i++;
            while(i<n&&s[i]!='W'){
             p+=s[i];
             i++;
            }
            // cout<<p<<"\n";
            check.pb(p); 
      }
      for(auto x: check){
            if(x=="") continue;
            int m=x.length();
            int b=0,r=0;
            for(int i=0;i<m;i++){
                if(x[i]=='R') r++;
                else if(x[i]=='B') b++;
            }
            if(r==0||b==0) {
                  cout<<"NO\n";
                  return;
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