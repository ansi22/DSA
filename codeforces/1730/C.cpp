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
     string s;
     cin>>s;
     int n=s.length();
     char ch=s[n-1];
     
     for(int i=n-2;i>=0;){
          if(s[i]>ch) {
               if(s[i]!='9') s[i]=(s[i]-'0'+1)+'0';
               i--;
          }
          else {
               ch=s[i];
               i--;
          }
     }
     sort(s.begin(),s.end());
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
