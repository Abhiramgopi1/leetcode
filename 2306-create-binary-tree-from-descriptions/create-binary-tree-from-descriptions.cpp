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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        map<int,TreeNode*>mp1;
        map<int,int>mp;
        
        for(int i=0;i<descriptions.size();i++){
            int a=descriptions[i][0], b=descriptions[i][1], c=descriptions[i][2];
            if(mp1[a]==0){
                mp1[a]=new TreeNode(a);
            }
            if(mp1[b]==0){
                mp1[b]=new TreeNode(b);
            }

            if(c==1){
                mp1[a]->left=mp1[b];
            }
            else{
                mp1[a]->right=mp1[b];
            }
            mp[b]=a;

        }
        for(auto i: descriptions){
            if(mp[i[0]]==0) return(mp1[i[0]]);
        }
        return NULL;
    }
};