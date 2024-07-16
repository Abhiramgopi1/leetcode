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
    void find(TreeNode* root, int Target, string &curr, string &ans){
        if(root==NULL) return;
        if(root->val==Target){
            ans=curr;
            return;
        }
        curr+='L';
        find(root->left,Target,curr,ans);
        curr.pop_back();
        curr+='R';
        find(root->right,Target,curr,ans);
        curr.pop_back();
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {
        string startpath,destpath,curr1,curr2;
        find(root,startValue,curr1,startpath);
        find(root,destValue,curr2,destpath);
        reverse(startpath.begin(),startpath.end());
        reverse(destpath.begin(),destpath.end());
        int n=startpath.length(),m=destpath.length();
        int i=n-1,j=m-1;
        while(i>=0 and j>=0){
            if(startpath[i]==destpath[j]){
                startpath.pop_back();
                destpath.pop_back();
                i--;
                j--;
            }
            else{
                break;
            }
        }

        reverse(startpath.begin(),startpath.end());
        reverse(destpath.begin(),destpath.end());

        for(int i=0;i<startpath.length();i++){
            startpath[i]='U';
        }

        return startpath+destpath;


    }
};