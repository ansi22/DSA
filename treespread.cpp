#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
};

TreeNode* newNode(int val){
	TreeNode* temp=new TreeNode;
	temp->val=val;
	temp->left=nullptr;
	temp->right=nullptr;
	return temp;
}
class Solution{
	public: 
	vector<int> ans;
	void helper(TreeNode* root){
		if(!root) return;
		helper(root->left);
		ans.push_back(root->val);
		helper(root->right);
	}
	vector<int> inorderTraversal(TreeNode* root){
		helper(root);
		return ans;
	}
};
int main() {
	// your code goes here
	TreeNode* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(2);
	root->left->left=newNode(3);
	root->left->right=newNode(4);
	root->right->left=newNode(4);
	root->right->right=newNode(3);
	
	Solution obj;
	vector<int> getInordertraversal;
	getInordertraversal=obj.inorderTraversal(root);
	
	for(auto x: getInordertraversal){
		cout<<x<<" ";
	}
	cout<<"\n";
	
	return 0;
}
