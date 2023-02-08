/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
    Node* lca(Node* root, int a, int b) {
        if(root==NULL) return NULL;
        if(root->data==a||root->data==b) return root;
        Node* l=lca(root->left, a, b);
        Node* r=lca(root->right, a, b);
        if(l&&r) return root;
        if(l) return l;
        if(r) return r;
    }
    void getDistance(Node* lca, int a, int cnt, int &res){
        if(lca==NULL) return;
        if(lca->data==a) {
            res=cnt;
            return;
        }
        getDistance(lca->left, a, cnt+1, res);
        getDistance(lca->right, a, cnt+1, res);
    }
    int findDist(Node* root, int a, int b) {
        // Your code here
        Node* _lca=lca(root, a, b);
        int d1=0, d2=0;
        getDistance(_lca, a, 0, d1);
        getDistance(_lca, b, 0, d2);
        return d1+d2;
    }
    
    
};
