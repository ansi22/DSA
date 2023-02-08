#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
   
   int n,s1=0,s2=0,tempo,cnt=0;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
   	cin>>a[i];
   }
   sort(a,a+n);
   tempo=n/2;
   if(n%2!=0) tempo+=1;
   for(int i=tempo;i<n;i++)
    s2+=a[i];
   for(int i=0;i<=tempo;i++){
   	 s1+=a[i];
   	 cnt++;
   	 if(s1<s2&&cnt>n-tempo){
   	 	cout<<"YES\n";
   	 	return;
   	 }
   }
   //cout<<s1<<" "<<s2<<" "<<cnt<<" "<<tempo<<"\n";
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
