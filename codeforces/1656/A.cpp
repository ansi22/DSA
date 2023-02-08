#include<bits/stdc++.h>
using namespace std;
#define int long long int

void solve(){
    
    int n;
    cin>>n;
    int a[n];
    int mini=INT_MAX,maxi=INT_MIN;
    for(int i=0;i<n;i++){
      cin>>a[i];
      mini=min(mini,a[i]);
      maxi=max(maxi,a[i]);
    }
    int t=-1,p=-1;
    for(int i=0;i<n;i++){
       if(a[i]==mini) t=i;
       if(a[i]==maxi) p=i;
    }
    cout<<t+1<<" "<<p+1<<"\n";
   
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