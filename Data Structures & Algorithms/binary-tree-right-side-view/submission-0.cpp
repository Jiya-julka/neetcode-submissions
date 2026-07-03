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
    vector<int> ans;
    queue<TreeNode*> rest;
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr)
    return {};
        rest.push(root);
        while(!rest.empty()){
            int s=rest.size();
            vector<int> path;
            for(int i=0;i<s;i++){
                TreeNode* a=rest.front();
                rest.pop();
                path.push_back(a->val);
                if(a->left)
                rest.push(a->left);
                if(a->right)
                rest.push(a->right);
                
            }ans.push_back(path.back());
        }
     return ans;
    }
};
