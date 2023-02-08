#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
#define pb push_back

const int max_sz=4e5+7;
const int mod=1e9+7;
const int inf=2e18;

void solve(){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
            cin>>a[i];
      vector<int> ans;
      int i=0,j=n-1,s1=a[0],s2=a[n-1];
      while(i<j){
           if(s1==s2){
                ans.pb(i+1+n-j);
                i++;
                j--;
                s1+=a[i];
                s2+=a[j];
           }
           if(s1>s2){
                j--;
                s2+=a[j];
                // ans++;
           }
           else if(s2>s1){
                i++;
                s1+=a[i];
                // ans++;
           }
      }

      int m=ans.size();
      if(m==0) {
            cout<<0<<'\n';
            return;
      }
      // for(auto x: ans) cout<<x<<" ";
      //       cout<<"\n";
      sort(ans.begin(),ans.end());
      cout<<ans[m-1]<<"\n";
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