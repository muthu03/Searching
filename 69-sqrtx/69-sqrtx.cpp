class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int ans=-1;
        int high=x;
        while(low<=high){
            long long mid;
            mid=(low+high)/2;
            long long msq=mid*mid;
            if(msq==x){
                return mid;
            }
            else if(msq>x){
                high=mid-1;
            }
            else{
                low=mid+1;
                ans=mid;
            }
        }
        return ans;
        
    }
};