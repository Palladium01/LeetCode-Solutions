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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)
            return {};
        
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>>res;
        while(!q.empty())
        {
            int count=q.size();
            vector<int> level;
            for(int i=0;i<count;++i)
            {
             
                TreeNode *temp=q.front();
                q.pop();
                level.push_back(temp->val);
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
                
            }
            res.push_back(level);
            
        }
        return res;
        
    }
};