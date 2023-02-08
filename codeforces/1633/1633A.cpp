// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

void solve(){
    
    string s,tempo="";
    cin>>s;
    int n=s.length();
    for(int i=0;i<n-1;i++)
        tempo+=s[i];
    int num=stoi(tempo);
    num*=10;
    int x=s[n-1]-'0';
    if((num+x)%7==0) {
    cout<<num+x<<"\n";
    return;
    }
    for(int i=0;i<=9;i++){
         if((num+i)%7==0){
            cout<<num+i<<"\n";
            break;
         }
    }

    

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

