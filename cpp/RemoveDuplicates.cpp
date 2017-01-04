class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num=0;
        int x= nums.size()-1;
        for(int i=0;i<x;i++)
        {
            if(nums[i]==nums[i+1]){
                cout<<i;
                x--;
               
                nums.erase(nums.begin()+i);
                i--;
            }
            
        }
        return nums.size();
    }
};
