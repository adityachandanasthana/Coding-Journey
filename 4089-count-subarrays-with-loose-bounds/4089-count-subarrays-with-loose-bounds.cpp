class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        int left=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]<minK || nums[right]>maxK){
                left=right+1;
                
            }else{
                ans+=right-left+1;
            }
        }

       return ans;
        

    }
};