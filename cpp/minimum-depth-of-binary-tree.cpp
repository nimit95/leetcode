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
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right == NULL )
            return 1;
        if(root->left!=NULL && root->right==NULL){
            int left = minDepth(root->left);
            return left+1;
        }
        else if(root->left==NULL && root->right!=NULL){
            int right = minDepth(root->right);
            return right+1;
        }
        else{
            int left = minDepth(root->left);
            int right = minDepth(root->right);
            if(left<right)
                return left+1;
            else 
                return right+1;
        }
    }
        
};
