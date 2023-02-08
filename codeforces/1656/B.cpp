#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    set<int> st;
    for(int i=0;i<n;i++){
      st.insert(a[i]);
    }
    for(int i=0;i<n;i++){
      if(st.count(a[i]+k)!=0){
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