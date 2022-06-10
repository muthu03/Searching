class Solution {
public:
        int firstoccurence(vector<int>& nums,int x){
            int low=0;
            int high=nums.size()-1;
            int mid;
            while(low<=high){
                mid=(low+high)/2;
                if(nums[mid]>x){
                    high=mid-1;
                }
                else if(nums[mid]<x){
                    low=mid+1;
                }
                else{
                    if(mid==0 || nums[mid]!=nums[mid-1] ){
                        return mid;
                    }
                    else{
                        high=mid-1;
                    }
                }
                
            }
            return -1;
        }
         int lasttoccurence(vector<int>& nums,int x){
            int low=0;
            int high=nums.size()-1;
             int n=nums.size();
            int mid,index=-1;
            while(low<=high){
                mid=(low+high)/2;
                if(nums[mid]>x){
                    high=mid-1;
                }
                else if(nums[mid]<x){
                    low=mid+1;
                }
                else{
                    if(mid==n-1 || nums[mid]!=nums[mid+1] ){
                        index=mid;
                        return index;
                    }
                    else{
                        low=mid+1;
                    }
                }
                
            }
             return index;
        }
        
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        
        int firstOccurenceIndex = firstoccurence(nums,target);
        int lastOccurenceIndex = lasttoccurence(nums,target);
        v.push_back(firstOccurenceIndex);
        v.push_back(lastOccurenceIndex);
        
        return v;
    
        
    }
};