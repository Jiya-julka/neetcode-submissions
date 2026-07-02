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
bool back(TreeNode* root1, TreeNode* root2){
    if(root1==nullptr&&root2==nullptr){
        return true;
    }else if(root1==nullptr||root2==nullptr){
        return false;
    }
    
    bool r=back(root1->right,root2->right);
    bool l=back(root1->left,root2->left);
    if(l==false||r==false){
        return false;
    }return (root1->val==root2->val);
  
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool b=back(p,q);
        return b;
    }
};
