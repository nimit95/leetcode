class Solution {
public:
    vector< vector<int> > ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target, vector<int> num={} ,int limit=0) {
        if(target==0)
        {
            ans.push_back(num);
            return {};
        }
        if(target <0)
            return {};
        for(int i=limit;i<candidates.size();i++){
            num.push_back(candidates[i]);
            combinationSum(candidates, target - candidates[i], num, i);
            num.pop_back();
        }
        return ans;
    }
};        
