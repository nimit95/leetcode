class Solution {
public:
        vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<long long int> has;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
            has.insert(nums[i]);               //Inserting into hash set
        for(int i=0;i<nums.size();i++)
        {
            unordered_set<long long int>:: const_iterator got=has.find(target-nums[i]);
            if(got!=has.end())
            {

                std::vector<int>::iterator position = std::find(nums.begin(), nums.end(), target-nums[i]); //Checking into hash set
                int x=distance(nums.begin(),position);
                if(x==i)
                    continue;
                else{
                    v.push_back(i);
                    v.push_back(x);
                    break;
                }
            }
        }
        return v;
    }
};
