// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
   
 int n,k;
 cin>>n>>k;
 if(k==1){
 	cout<<"YES\n";
 	for(int i=1;i<=n;i++)
 	cout<<i<<"\n";
 	return;
 }
 if(n%2!=0){
 	cout<<"NO\n";
 	return;
 }

 cout<<"YES\n";
 for(int i=1;i<=n;i++){
  int tempo=i;
  for(int j=1;j<=k;j++){
    cout<<tempo<<" ";
    tempo+=n;
   }
   cout<<"\n";
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
    while(t--)
    solve();
    return 0;
}