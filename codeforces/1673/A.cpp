#include<bits/stdc++.h>
using namespace std;

#define int long long int

void solve(){
     string s;
     cin>>s;
     int n=s.length();
     int ans=0;
     // cout<<s[0]-'a'<<"\n";
     for(int i=0;i<n;i++){
          ans+=s[i]-'a';
          ans+=1;
     }
     if(n%2==0) cout<<"Alice"<<" "<<ans<<"\n";
     else {
          int tempo=min(s[0]-'a',s[n-1]-'a');
          tempo+=1;
          ans-=tempo;
          if(tempo>ans) cout<<"Bob "<<abs(ans-tempo)<<"\n";
          else cout<<"Alice "<<abs(ans-tempo)<<"\n";
     }
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
