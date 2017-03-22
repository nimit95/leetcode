/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxheight(TreeNode* root){
        if(root==NULL)
            return 0;
        int left = maxheight(root->left);
        int right = maxheight(root->right);
        if(left>right)
            return 1+left;
        else
            return 1+right;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        int lefth = maxheight(root->left), righth = maxheight(root->right);
        if(abs(lefth-righth)==1 || abs(lefth-righth)==0)
            return left && true && right;
        else
            return false;
    }
};
