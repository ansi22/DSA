#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
   
   int n;
   cin>>n;
   string s;
   cin>>s;
   int r=0,c=n;
   for(int i=0;i<n-1;){
   	  if(s[i]=='('){
   	  	r++;
   	  	c-=2;
   	  	i+=2;
   	  }
   	  else{
   	  	i++;
   	  	int cnt=1;
   	  	while(i<n){
   	  		cnt++;
   	  		if(s[i]=='(') i++;
   	  		else{
   	  			i++;
   	  			r++;
   	  			c-=cnt;
   	  			break;
   	  		}
   	  	}
   	  }
   }
   cout<<r<<" "<<c<<"\n";
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