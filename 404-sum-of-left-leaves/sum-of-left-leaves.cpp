/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode *root,int &c ,int left,int right){
        if(root==NULL) return ;
        if(root->left==NULL and root->right==NULL and left!=1){
            c+=root->val;
        }
        dfs(root->left,c,0,1);
        dfs(root->right,c,1,0);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==NULL and root->right==NULL) return {0};
        int c=0;
        dfs(root,c,0,0);
        return c;
        
    }
};