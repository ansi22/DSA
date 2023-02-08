#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
   
  int n,m;
  cin>>n>>m;
  int mat[n][m];
  for(int i=0;i<n;i++){
  	string s;
  	cin>>s;
  	for(int j=0;j<m;j++)
  	mat[i][j]=s[j]-'0';
  }
  for(int i=0;i<n-1;i++){
  	for(int j=0;j<m-1;j++){
  		if(mat[i][j]+mat[i+1][j]+mat[i][j+1]+mat[i+1][j+1]==3){
  			cout<<"NO\n";
  			return;
  		}
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
    while(t--)
    solve();
    return 0;
}