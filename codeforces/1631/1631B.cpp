// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

bool powtwo (int x){
    return x && (!(x&(x-1)));
}

void solve(){
    
    int n,ans=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    reverse(a.begin(),a.end());
    for(int i=1;i<n;){
          if(a[i]==a[0])
            i++;
          else{
            ans++;
            i*=2;
          }
    }
    cout<<ans<<"\n";
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

