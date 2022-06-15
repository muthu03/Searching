class Solution {
public:
    bool ischeck(vector<int> & nums,int mid,int maxOperations){
        int total=0;
        for(auto i:nums){
            
            total=total+i/mid;
            if(i%mid==0){
                total--;
            }
            
        }
        return total<=maxOperations;
        
        
    }
    
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low=1;
        int ans=0;
        int high=*max_element(nums.begin(),nums.end());
        
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(ischeck(nums,mid,maxOperations)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
            
        }
        
        return ans;
        
    }
};