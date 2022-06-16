class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int r=*max_element(nums.begin(),nums.end());
        while(r>=l){
            int mid=l+(r-l)/2;
            
            int sum=0;
            for(int i=0;i<nums.size();i++){
                sum+=nums[i]/mid;
                if(nums[i]%mid>0)
                    sum++;
            }

            if(threshold>=sum)
                r=mid-1;
            else
                l=mid+1;
        }
        return l;
    }
};