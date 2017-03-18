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
    TreeNode* temp;
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        invertTree(root->left);
        invertTree(root->right);
        if(root->left!=NULL || root->right!=NULL)
            {
                temp = root->left;
                root->left = root->right;
                root->right = temp;
            }
         return root;   
    }
};
