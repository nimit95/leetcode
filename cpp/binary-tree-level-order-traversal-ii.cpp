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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> v;
        vector< vector<int> > v1;
        q.push(root);
        q.push(NULL);
        if(root==NULL)
            return v1;
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            
            q.pop();
            if(temp==NULL)
            {
                v1.push_back(v);
                //for(int a:v)
                //    cout<<a;
              //  cout<<endl;
                v.clear();
                if(q.empty())
                    break;
                q.push(NULL);
                //cout<<"new level";
                continue;
            }
            v.push_back(temp->val);
            //cout<<temp->val;
            if(temp->left!=NULL )
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
            
        }
        reverse(v1.begin(), v1.end());
        return v1;
    }
};
