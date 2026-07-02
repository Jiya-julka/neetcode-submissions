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
    TreeNode* back(TreeNode* root,TreeNode* p, TreeNode* q){
         if(root==nullptr){
            return nullptr;
        }
        if(root->val==p->val||root->val==q->val){
            return root;
        }
       
        TreeNode* r=back(root->right,p,q );
        TreeNode* l=back(root->left,p,q);
        if(r&&l){
            return root;
        }if(r){
            return r;
        }if(l){
            return l;
        }
        return nullptr;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans=back(root,p,q);
        return ans;
    }
};
