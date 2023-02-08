#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve(){
     string s;
     cin>>s;
     set<char> unique(s.begin(),s.end());
     int n=s.length();
     int m=unique.size();
     for(int i=m;i<n;i++){
          if(s[i]!=s[i-m]){
               cout<<"NO\n";return;
          }
     }
     cout<<"YES\n";
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
