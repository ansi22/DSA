#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

bool is(int a,int d,int x){
    if(d==0) return x==a;
    return ((x-a)%d==0&&(x-a)/d>=0);
}
void solve(){
   
   int n;
   cin>>n;
   int x=1;
   int y=2;
   int s=0;
   if(is(1,3,n)){
    while(s!=n){
        cout<<x;
        s+=x;
        if(x==1) x=2;
        else if(x==2) x=1;
        
    }
   }
   else{
     s=0;
     while(s!=n){
        cout<<y;
        s+=y;
        if(y==2) y=1;
        else if(y==1) y=2;
        
     }
   }
   cout<<"\n";
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