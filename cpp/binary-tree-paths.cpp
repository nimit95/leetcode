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
    vector<string> ans;
    vector<string> binaryTreePaths(TreeNode* root, vector<string> v={}) {
        if(root ==NULL)
            return ans;
        if(root->left ==NULL && root->right==NULL )
        {
            v.push_back(to_string(root->val));
            cout<<root->val;
            string s=v[0];
            for(int i=1;i<v.size();i++){
                s = s+"->"+v[i];
            }
           ans.push_back(s);
        }
        v.push_back(to_string(root->val));
        if(root->left!=NULL)
            binaryTreePaths(root->left,v);
        if(root->right!=NULL)
            binaryTreePaths(root->right, v);
        return ans;

    }    
};
