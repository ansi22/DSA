// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
    
    string s;
    cin>>s;
    int n=s.length();
    if(n%2!=0){
        cout<<"NO\n";
        return;
    }
    int tempo=n/2;
    for(int i=0;i<n/2;i++)
        if(s[i]!=s[tempo+i]){
            cout<<"NO\n";
            return ;
        }
    cout<<"YES"<<"\n";
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

