class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x=0;
        int ini = nums.size();
        for(int i=0;i< nums.size() ;i++)
        {
            if(nums[i]==val){                           //check for equality
                x++;
                nums.erase(nums.begin() + i);          //erase from vector 
                i--;
            }
        }
        return ini - x;
    }
};
