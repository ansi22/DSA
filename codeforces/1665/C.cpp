#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
const int mod=1e9+7;
int ans;

void func(vector<int>& a){
   if(a.empty()) return;
   int n=a.size();
   int last=0;
   for(int i=0;i<n;i++){
      if(a[i]==a[0]) last=i;
      else break;
   }
   a[last]--;
   for(int i=0;i<n;i++) a[i]--;
   ans++;
   while(!a.empty()&&a.back()<=0)
      a.pop_back();
   func(a);
}

void solve(){
   
   int n;
   cin>>n;
   vector<int> a(n);
   ans=0;
   for(int i=1;i<n;i++){
      int x;
      cin>>x;
      x--;
      a[x]++;
   }
   a.emplace_back(1);
   sort(a.begin(),a.end());
   reverse(a.begin(),a.end());
   while(!a.empty()&&a.back()<=0)
      a.pop_back();
   n=a.size();
   for(int i=0;i<n;i++){
      a[i]=a[i]-(n-i);
      ans++;
   }
   sort(a.begin(),a.end());
   reverse(a.begin(),a.end());
   while(!a.empty()&&a.back()<=0)
      a.pop_back();
   func(a);
   cout<<ans<<"\n";
}

void pre(){}
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