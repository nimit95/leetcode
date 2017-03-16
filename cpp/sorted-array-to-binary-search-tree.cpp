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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int mid = nums.size()/2,j;
        if(nums.size()==0)
            return NULL;
        
        TreeNode* root = new TreeNode(nums[mid]);
        vector<int> c(nums.begin(),nums.begin()+mid);
        root->left = sortedArrayToBST(c);
        vector<int> d(nums.begin()+mid+1,nums.end());
        root->right = sortedArrayToBST(d);
        return root;
    }
};
