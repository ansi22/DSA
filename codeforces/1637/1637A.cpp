// असाध्य ते साध्य । करिता सायास । कारण अभ्यास |
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int


void solve(){
   
   int n;
   cin>>n;
   int a[n],b[n];
   for(int i=0;i<n;i++){
   	cin>>a[i];
   	b[i]=a[i];
   }
   
   sort(b,b+n);
   for(int i=0;i<n;i++){
   	if(a[i]!=b[i]) {
   		cout<<"YES\n";
   		return;
   	}
   }
   cout<<"NO\n";
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