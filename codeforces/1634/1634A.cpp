// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

bool ispal(string s){
	int n=s.length();
	for(int i=0;i<n;i++)
	if(s[i]!=s[n-i-1])
	return 0;
	return 1;
}

void solve(){
   
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   if(k==0) {
   	cout<<1<<"\n";
   	return;
   }
   if(ispal(s)) cout<<1<<"\n";
   else cout<<2<<"\n";
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
