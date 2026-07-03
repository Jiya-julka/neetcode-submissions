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
    int s=0;
    int m;
    void back(TreeNode* root,int m){
        if(root==nullptr){
            return ;
        }
        if(root->val>=m){
            s++;
        }
        if(root->val>m){
            m=root->val;
        }
        back(root->right,m); 
        back(root->left,m);
    }
    int goodNodes(TreeNode* root) {
        if(root){
        m=root->val;
        }back(root,m);
        return s;
        
    }
};
