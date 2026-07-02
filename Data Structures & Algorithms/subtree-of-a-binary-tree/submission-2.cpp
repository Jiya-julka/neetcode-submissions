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
    
    bool check(TreeNode* root1, TreeNode* root2){
        
        
        if(root1==nullptr){
            return false;
        }
        if(root1->val==root2->val){
           bool s= same(root1,root2);
           if(s==true){
            return true;
           }
        }
        

        if(check(root1->right,root2)==true){
            return true;
        }
        if(check(root1->left,root2)==true){
            return true;
    }return false;
    }

    bool same(TreeNode* root1, TreeNode* root2){
    if(root1==nullptr&&root2==nullptr){
        return true;
    }else if(root1==nullptr||root2==nullptr){
        return false;
    }
    
    bool r=same(root1->right,root2->right);
    bool l=same(root1->left,root2->left);
    if(l==false||r==false){
        return false;
    }return (root1->val==root2->val);
  
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        return check(root,subRoot);
    }
};
//do again
//dont return too fast
