#include<bits/stdc++.h>
using namespace std;
#define int long long int

const int mod=1e9+7;
const int inf=2e18;

void solve(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
          cin>>a[i];
     for(int i=0;i<n;i++){
          int x;
          cin>>x;
          string s;
          cin>>s;
          int m=s.length();
          
          for(int j=0;j<m;j++){
               if(s[j]=='D'){
                    if(a[i]==9) a[i]=0;
                    else a[i]+=1;
               }
               else if(s[j]=='U'){
                    if(a[i]==0) a[i]=9;
                    else a[i]-=1;
               }
          }
          
     }
     for(int i=0;i<n;i++)
          cout<<a[i]<<" ";
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
     // pre();
     for(int tc=1;tc<=t;tc++)
     solve();
     return 0;
}
