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
    int m=0;
    int s=0;
    void back(TreeNode* root){
        if(root==nullptr){
            
            return;
        }
        s++;
        if(s>m){
            m=s;
        }back(root->right);
        
        back(root->left);
        s--;

    }
    int maxDepth(TreeNode* root) {
        back(root);
        return m;
    }
};
