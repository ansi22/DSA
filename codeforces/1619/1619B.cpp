// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
    
    int n;
    cin>>n;
    set<int> tempo;
    for(int i=1;i*i*i<=n;i++)
        tempo.insert(i*i*i);
    for(int i=1;i*i<=n;i++)
        tempo.insert(i*i);
    cout<<(int)tempo.size()<<"\n";
 
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

