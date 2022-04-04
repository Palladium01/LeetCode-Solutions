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
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root,int n=-1) {
        if(!root)
            return 0;
        if(!root->left&&!root->right&&n==0)
            return root->val;
        return sumOfLeftLeaves(root->left,0)+sumOfLeftLeaves(root->right,1);
        
        
    }
};