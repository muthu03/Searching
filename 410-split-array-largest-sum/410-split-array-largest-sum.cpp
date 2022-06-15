class Solution {
public:
    int islessthancount(vector<int>& nums, int mid){
        int count=1;
        int n=nums.size();
        int tempsum=0;
        for(int i=0;i<n;i++){
            if(tempsum+nums[i]<=mid){
                tempsum=tempsum+nums[i];
                
            }
            else{
                tempsum=nums[i];
                count++;
            }
        }
        return count;
    }
    
    
    int splitArray(vector<int>& nums, int m) {
        int left=0;
        int right=0;
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            left=max(left,nums[i]);
            right=right+nums[i];
                
        }
        int mid=0;
        while(left<=right){
             mid=left+(right-left)/2;
             int count=islessthancount(nums,mid);
            if(count<=m){
                right=mid-1;
                ans=mid;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
    }
};