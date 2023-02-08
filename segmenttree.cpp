#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<iomanip>


using namespace std;
#define int long long int

// const int mod=1e9+7;
// const int inf=2e18;
const int max_sz=4*1e5;
int A[max_sz],tree[max_sz];

void build(int node, int start, int end){
    if(start == end){
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else{
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}

void update(int node, int start, int end, int idx, int val) {
    if(start == end) {
        // Leaf node
        A[idx] += val;
        tree[node] += val;
    }
    else {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid) {
            // If idx is in the left child, recurse on the left child
            update(2*node, start, mid, idx, val);
        }
        else {
            // if idx is in the right child, recurse on the right child
            update(2*node+1, mid+1, end, idx, val);
        }
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}


//query
int query(int node, int start, int end, int l, int r){
    if(r < start or end < l) {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start and end <= r) {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}

void solve(){
     int n;
     cin>>n;
     
     for(int i=0;i<n;i++)
          cin>>A[i];
     // start building from root
     // build(root,startind,endind)
     build(0,0,n-1);
     int q;
     cin>>q;
     while(q--){
          int l,r;
          cin>>l>>r;
          cout<<query(0,0,n-1,l,r);
     }
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
     // cin>>t;
     // pre();
     for(int tc=1;tc<=t;tc++)
     solve();
     return 0;
}
