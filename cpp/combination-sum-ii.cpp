class Solution {
public:
    vector< vector<int> > ans;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target, vector<int> num={} ,int limit=0) {
        if(target==0)
        {
            sort(num.begin(),num.end());
            ans.push_back(num);
            return {};
        }
        if(target <0)
            return {};
        for(int i=limit;i<candidates.size();i++){
            num.push_back(candidates[i]);
            combinationSum2(candidates, target - candidates[i], num, i+1);
            num.pop_back();
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};  
