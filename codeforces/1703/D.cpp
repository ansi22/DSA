#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void solve(){
     int n;
     cin>>n;
     vector<string> s;
     map<string,int> mp;
     string ans="";
     for(int i=0;i<n;i++){
          string a;
          cin>>a;
          s.push_back(a);
          mp[a]++;
     }
     for(auto x: s){
          int m=x.length();
          bool ok=0;
          for(int i=1;i<m;i++){
               string a=x.substr(0,i);
               string b=x.substr(i);
               // cout<<a<<" "<<b<<"\n";
               if(mp[a]&&mp[b]){
                    ok=1;break;
               }
          }
          ans+=(ok==1)?'1':'0';
     }
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
