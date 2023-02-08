#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
const int mod=1e9+7;

void solve(){
   
    string s;
    cin>>s;
    int m=0;
    int n=(int) s.size();
    vector<bool> prev(26,0);
    for(auto x: s){
      if(prev[x-'a']){
         m+=2;
         for(int j=0;j<26;j++)
            prev[j]=0;
      }
      else prev[x-'a']=1;
    }
    cout<<n-m<<"\n";
}

void pre(){}
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