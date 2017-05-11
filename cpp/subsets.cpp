class Solution {
public:
    void findsubset(vector<int> v, vector<int> temp,vector<vector<int>>& ans, int len) {
        if(len==v.size()){
            ans.push_back(temp);
          //  cout<<"hr";
            return ;
        }
       // for(int i=len;i<v.size();i++)
        //{
            findsubset(v,temp,ans,len+1);
            temp.push_back(v[len]);
            findsubset(v,temp,ans,len+1);
            temp.pop_back();
        //}
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        findsubset(nums,{},ans,0);
        return ans;
    }
};
