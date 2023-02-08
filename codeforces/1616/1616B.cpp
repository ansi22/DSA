// ॐ
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int

// string lcs(string s)
// {
//     int n=s.length();
//     int tempo[n+1][n+1];
//     memset(tempo,0,sizeof(tempo));
//     string res; 
//     int rl=0; 
//     int i,x=0;
//     for (i=0;i<n;i++)
//     {
//         for (int j=i+1;j<n;j++){
//             if (s[i-1]==s[j-1]&&tempo[i-1][j-1]<(j-i)) {
//                 tempo[i][j]=tempo[i-1][j-1]+1;
//                 if (tempo[i][j]>rl){
//                     rl=tempo[i][j];
//                     x=max(i,x);
//                 }
//             }
//             else tempo[i][j] = 0;
//         }
//     }
//     if(rl>0)
//         for (i=x-rl+1;i<=x;i++)
//             res.pb(s[i-1]);
//     return res;
// }

void solve(){
   
   int n;
   cin>>n;
   string s,a1="",a2="";
   cin>>s;
   a1+=s[0];
   if(s[0]==s[1]){
    cout<<s[0]<<s[0]<<"\n";
    return;
   }
   for(int i=1;i<n;i++){
    if(s[i]>s[i-1]) break;
    a1+=s[i];
   }
   for(int i=a1.length()-1;i>=0;i--)
    a2+=s[i];
   cout<<a1+a2<<"\n";
   
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

