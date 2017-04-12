class Solution {
public:
    int searchInsert(vector<int> nums, int target) {
        int p=0,q=nums.size()-1;
        while(p<=q)
        {
            int mid = (p+q)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                p = mid+1;
            else
                q = mid -1;
        }
        return p;
    }
};
