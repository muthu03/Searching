class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-2;
        int num=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            num= mid%2==0 ? mid+1:mid-1;
            if(nums[mid]==nums[num]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return nums[low];
    }
};